//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: dds_IoTDataDcps.cpp
//  Source: dds_IoTDataDcps.idl
//  Generated: Tue Dec 19 20:00:37 2017
//  OpenSplice 6.8.3
//  
//******************************************************************

#include "dds_IoTDataDcps.h"

#if DDS_USE_EXPLICIT_TEMPLATES
template class DDS_DCPSUVLSeq < DDS::IoT::IoTData, struct IoTDataSeq_uniq_>;
#endif

const char * DDS::IoT::IoTDataTypeSupportInterface::_local_id = "IDL:DDS/IoT/IoTDataTypeSupportInterface:1.0";

DDS::IoT::IoTDataTypeSupportInterface_ptr DDS::IoT::IoTDataTypeSupportInterface::_duplicate (DDS::IoT::IoTDataTypeSupportInterface_ptr p)
{
   if (p) p->m_count++;
   return p;
}

DDS::Boolean DDS::IoT::IoTDataTypeSupportInterface::_local_is_a (const char * _id)
{
   if (strcmp (_id, DDS::IoT::IoTDataTypeSupportInterface::_local_id) == 0)
   {
      return true;
   }

   typedef TypeSupport NestedBase_1;

   if (NestedBase_1::_local_is_a (_id))
   {
      return true;
   }

   return false;
}

DDS::IoT::IoTDataTypeSupportInterface_ptr DDS::IoT::IoTDataTypeSupportInterface::_narrow (DDS::Object_ptr p)
{
   DDS::IoT::IoTDataTypeSupportInterface_ptr result = NULL;
   if (p && p->_is_a (DDS::IoT::IoTDataTypeSupportInterface::_local_id))
   {
      result = dynamic_cast < DDS::IoT::IoTDataTypeSupportInterface_ptr> (p);
      if (result) result->m_count++;
   }
   return result;
}

DDS::IoT::IoTDataTypeSupportInterface_ptr DDS::IoT::IoTDataTypeSupportInterface::_unchecked_narrow (DDS::Object_ptr p)
{
   DDS::IoT::IoTDataTypeSupportInterface_ptr result;
   result = dynamic_cast < DDS::IoT::IoTDataTypeSupportInterface_ptr> (p);
   if (result) result->m_count++;
   return result;
}

const char * DDS::IoT::IoTDataDataWriter::_local_id = "IDL:DDS/IoT/IoTDataDataWriter:1.0";

DDS::IoT::IoTDataDataWriter_ptr DDS::IoT::IoTDataDataWriter::_duplicate (DDS::IoT::IoTDataDataWriter_ptr p)
{
   if (p) p->m_count++;
   return p;
}

DDS::Boolean DDS::IoT::IoTDataDataWriter::_local_is_a (const char * _id)
{
   if (strcmp (_id, DDS::IoT::IoTDataDataWriter::_local_id) == 0)
   {
      return true;
   }

   typedef DataWriter NestedBase_1;

   if (NestedBase_1::_local_is_a (_id))
   {
      return true;
   }

   return false;
}

DDS::IoT::IoTDataDataWriter_ptr DDS::IoT::IoTDataDataWriter::_narrow (DDS::Object_ptr p)
{
   DDS::IoT::IoTDataDataWriter_ptr result = NULL;
   if (p && p->_is_a (DDS::IoT::IoTDataDataWriter::_local_id))
   {
      result = dynamic_cast < DDS::IoT::IoTDataDataWriter_ptr> (p);
      if (result) result->m_count++;
   }
   return result;
}

DDS::IoT::IoTDataDataWriter_ptr DDS::IoT::IoTDataDataWriter::_unchecked_narrow (DDS::Object_ptr p)
{
   DDS::IoT::IoTDataDataWriter_ptr result;
   result = dynamic_cast < DDS::IoT::IoTDataDataWriter_ptr> (p);
   if (result) result->m_count++;
   return result;
}

const char * DDS::IoT::IoTDataDataReader::_local_id = "IDL:DDS/IoT/IoTDataDataReader:1.0";

DDS::IoT::IoTDataDataReader_ptr DDS::IoT::IoTDataDataReader::_duplicate (DDS::IoT::IoTDataDataReader_ptr p)
{
   if (p) p->m_count++;
   return p;
}

DDS::Boolean DDS::IoT::IoTDataDataReader::_local_is_a (const char * _id)
{
   if (strcmp (_id, DDS::IoT::IoTDataDataReader::_local_id) == 0)
   {
      return true;
   }

   typedef DataReader NestedBase_1;

   if (NestedBase_1::_local_is_a (_id))
   {
      return true;
   }

   return false;
}

DDS::IoT::IoTDataDataReader_ptr DDS::IoT::IoTDataDataReader::_narrow (DDS::Object_ptr p)
{
   DDS::IoT::IoTDataDataReader_ptr result = NULL;
   if (p && p->_is_a (DDS::IoT::IoTDataDataReader::_local_id))
   {
      result = dynamic_cast < DDS::IoT::IoTDataDataReader_ptr> (p);
      if (result) result->m_count++;
   }
   return result;
}

DDS::IoT::IoTDataDataReader_ptr DDS::IoT::IoTDataDataReader::_unchecked_narrow (DDS::Object_ptr p)
{
   DDS::IoT::IoTDataDataReader_ptr result;
   result = dynamic_cast < DDS::IoT::IoTDataDataReader_ptr> (p);
   if (result) result->m_count++;
   return result;
}

const char * DDS::IoT::IoTDataDataReaderView::_local_id = "IDL:DDS/IoT/IoTDataDataReaderView:1.0";

DDS::IoT::IoTDataDataReaderView_ptr DDS::IoT::IoTDataDataReaderView::_duplicate (DDS::IoT::IoTDataDataReaderView_ptr p)
{
   if (p) p->m_count++;
   return p;
}

DDS::Boolean DDS::IoT::IoTDataDataReaderView::_local_is_a (const char * _id)
{
   if (strcmp (_id, DDS::IoT::IoTDataDataReaderView::_local_id) == 0)
   {
      return true;
   }

   typedef DataReaderView NestedBase_1;

   if (NestedBase_1::_local_is_a (_id))
   {
      return true;
   }

   return false;
}

DDS::IoT::IoTDataDataReaderView_ptr DDS::IoT::IoTDataDataReaderView::_narrow (DDS::Object_ptr p)
{
   DDS::IoT::IoTDataDataReaderView_ptr result = NULL;
   if (p && p->_is_a (DDS::IoT::IoTDataDataReaderView::_local_id))
   {
      result = dynamic_cast < DDS::IoT::IoTDataDataReaderView_ptr> (p);
      if (result) result->m_count++;
   }
   return result;
}

DDS::IoT::IoTDataDataReaderView_ptr DDS::IoT::IoTDataDataReaderView::_unchecked_narrow (DDS::Object_ptr p)
{
   DDS::IoT::IoTDataDataReaderView_ptr result;
   result = dynamic_cast < DDS::IoT::IoTDataDataReaderView_ptr> (p);
   if (result) result->m_count++;
   return result;
}



