#ifndef _UPARSE_EXPORT_H_
#define _UPARSE_EXPORT_H_

/*---------------------------------------------------------------------------
   								Includes
 ---------------------------------------------------------------------------*/

/*---------------------------------------------------------------------------
   								Constants
 ---------------------------------------------------------------------------*/
#define UPARSE_JPG_SIGNATURE		("mM33++Mm")		/* ñ�W�A8-bytes�ϵ���'\0'�A��ڦb�ɮ׸̬O9 bytes */
#define UPARSE_VER_SZ				("V0.02")			/* ����6 bytes(�t����'\0') ��ASCII strings */


/*---------------------------------------------------------------------------
   								Types
 ---------------------------------------------------------------------------*/

/**
	@brief		Type template of Parameter Data.
*/
typedef enum {
	PARAM_UINT16,
	PARAM_SINT16,
	PARAM_UINT32,
	PARAM_SINT32,
	PARAM_ARRAY,
	PARAM_UNDEF,
} PARAM_DTYPE_t;

#endif /* _UPARSE_EXPORT_H_ */
