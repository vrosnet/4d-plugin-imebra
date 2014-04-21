/* --------------------------------------------------------------------------------
 #
 #	4DPlugin.h
 #	source generated by 4D Plugin Wizard
 #	Project : imebra
 #	author : miyako
 #	12/06/26
 #
 # --------------------------------------------------------------------------------*/

#if VERSIONMAC
#define ustring std::string
#define ustringstream std::ostringstream
#define jpegExtension ".jpg"
#define dotChar '.'
#define underScore "_"
#if PA_SMALLENDIAN
#define UTF32NATIVE "UTF-32LE"
#else
#define UTF32NATIVE "UTF-32BE"
#endif
#else
#define ustring std::wstring
#define ustringstream std::wostringstream
#define jpegExtension L".jpg"
#define dotChar L'.'
#define underScore L"_"
#endif	

// --- DICOM
void DICOM_GET_DATA(sLONG_PTR *pResult, PackagePtr pParams);
void DICOM_Write_jpeg_file(sLONG_PTR *pResult, PackagePtr pParams);