/**********************************************************************
 *
 *    FILE:            DOFTransform.cpp
 *
 *    DESCRIPTION:    Read/Write osg::DOFTransform in binary format to disk.
 *
 *    CREATED BY:        Copied from file auto generated by iveGenerate
 *                    and modified by Sondra Iverson.
 *
 *    HISTORY:        Created 21.11.2003
 *
 **********************************************************************/

#include "Exception.h"
#include "DOFTransform.h"
#include "Transform.h"

using namespace ive;

void DOFTransform::write(DataOutputStream* out){
    // Write DOFTransform's identification.
    out->writeInt(IVEDOFTRANSFORM);
    // If the osg class is inherited by any other class we should also write this to file.
    osg::Transform*  trans = dynamic_cast<osg::Transform*>(this);
    if(trans){
        ((ive::Transform*)(trans))->write(out);
    }
    else
        throw Exception("DOFTransform::write(): Could not cast this osg::DOFTransform to an osg::Transform.");

    // Write DOFTransform's properties.
    out->writeMatrixd(getPutMatrix());

    out->writeVec3(getMinHPR());
    out->writeVec3(getMaxHPR());
    out->writeVec3(getIncrementHPR());
    out->writeVec3(getCurrentHPR());

    out->writeVec3(getMinTranslate());
    out->writeVec3(getMaxTranslate());
    out->writeVec3(getIncrementTranslate());
    out->writeVec3(getCurrentTranslate());

    out->writeVec3(getMinScale());
    out->writeVec3(getMaxScale());
    out->writeVec3(getIncrementScale());
    out->writeVec3(getCurrentScale());

    if ( out->getVersion() >= VERSION_0011 )
    {
        out->writeChar((char)(getHPRMultOrder()));
    }
    
    out->writeULong(getLimitationFlags());
    out->writeBool(getAnimationOn());
}

void DOFTransform::read(DataInputStream* in){
    // Peek on DOFTransform's identification.
    int id = in->peekInt();
    if(id == IVEDOFTRANSFORM){
        // Read DOFTransform's identification.
        id = in->readInt();
        // If the osg class is inherited by any other class we should also read this from file.
        osg::Transform*  trans = dynamic_cast<osg::Transform*>(this);
        if(trans){
            ((ive::Transform*)(trans))->read(in);
        }
        else
            throw Exception("DOFTransform::read(): Could not cast this osg::DOFTransform to an osg::Transform.");

        // Read DOFTransform's properties
        setPutMatrix(in->readMatrixd());
        setInversePutMatrix( osg::Matrixd::inverse( getPutMatrix() ) );

        setMinHPR(in->readVec3());
        setMaxHPR(in->readVec3());
        setIncrementHPR(in->readVec3());
        setCurrentHPR(in->readVec3());

        setMinTranslate(in->readVec3());
        setMaxTranslate(in->readVec3());
        setIncrementTranslate(in->readVec3());
        setCurrentTranslate(in->readVec3());

        setMinScale(in->readVec3());
        setMaxScale(in->readVec3());
        setIncrementScale(in->readVec3());
        setCurrentScale(in->readVec3());

        if ( in->getVersion() >= VERSION_0011 )
        {
            setHPRMultOrder((MultOrder)(in->readChar()));
        }

        setLimitationFlags(in->readULong());
        setAnimationOn(in->readBool());
    }
    else{
        throw Exception("DOFTransform::read(): Expected DOFTransform identification.");
    }
}
