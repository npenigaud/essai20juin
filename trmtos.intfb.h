INTERFACE
SUBROUTINE TRMTOS(YDGEOMETRY,LDNHDYN,LDNHX,LDTRANSPOSE,PSPVOR,PSPDIV,PSPT,PSPSPD,PSPSVD,PSPSNHX, &
& PSPGFL,PSPSP,PSPAUX,PSPSEL3D,PSPSEL2D,&
& PSPVORG,PSPDIVG,PSPTG,PSPSPDG,PSPSVDG,PSPSNHXG,&
& PSPGFLG,PSPSPG,PSPAUXG,PSPSEL3DG,PSPSEL2DG,&
& LDSELECT3D,LDSELECT2D,LDFULLM)
USE GEOMETRY_MOD , ONLY : GEOMETRY
USE PARKIND1     , ONLY : JPIM, JPRB
USE YOMHOOK      , ONLY : LHOOK, DR_HOOK, JPHOOK
USE EXCHANGE_MS_MOD, ONLY : FIELDLIST, ADD3DF, ADD3DFL, ADD2DF, ADD2DFL, NEXCHANGE_MTOS, EXCHANGE_MS
IMPLICIT NONE
TYPE(GEOMETRY)    ,          INTENT(IN)    :: YDGEOMETRY
LOGICAL           ,          INTENT(IN)    :: LDNHDYN
LOGICAL           ,          INTENT(IN)    :: LDNHX
LOGICAL           ,          INTENT(IN)    :: LDTRANSPOSE
REAL(KIND=JPRB)   ,OPTIONAL, INTENT(IN)    :: PSPVOR(:,:)
REAL(KIND=JPRB)   ,OPTIONAL, INTENT(IN)    :: PSPDIV(:,:)
REAL(KIND=JPRB)   ,OPTIONAL, INTENT(IN)    :: PSPT(:,:)
REAL(KIND=JPRB)   ,OPTIONAL, INTENT(IN)    :: PSPSPD(:,:)
REAL(KIND=JPRB)   ,OPTIONAL, INTENT(IN)    :: PSPSVD(:,:)
REAL(KIND=JPRB)   ,OPTIONAL, INTENT(IN)    :: PSPSNHX(:,:)
REAL(KIND=JPRB)   ,OPTIONAL, INTENT(IN)    :: PSPGFL(:,:,:)
REAL(KIND=JPRB)   ,OPTIONAL, INTENT(IN)    :: PSPSP(:)
REAL(KIND=JPRB)   ,OPTIONAL, INTENT(IN)    :: PSPAUX(:,:)
REAL(KIND=JPRB)   ,OPTIONAL, INTENT(IN)    :: PSPSEL3D(:,:,:)
REAL(KIND=JPRB)   ,OPTIONAL, INTENT(IN)    :: PSPSEL2D(:,:)
REAL(KIND=JPRB)   ,OPTIONAL, INTENT(OUT)   :: PSPVORG(:,:)
REAL(KIND=JPRB)   ,OPTIONAL, INTENT(OUT)   :: PSPDIVG(:,:)
REAL(KIND=JPRB)   ,OPTIONAL, INTENT(OUT)   :: PSPTG(:,:)
REAL(KIND=JPRB)   ,OPTIONAL, INTENT(OUT)   :: PSPSPDG(:,:)
REAL(KIND=JPRB)   ,OPTIONAL, INTENT(OUT)   :: PSPSVDG(:,:)
REAL(KIND=JPRB)   ,OPTIONAL, INTENT(OUT)   :: PSPSNHXG(:,:)
REAL(KIND=JPRB)   ,OPTIONAL, INTENT(INOUT) :: PSPGFLG(:,:,:)
REAL(KIND=JPRB)   ,OPTIONAL, INTENT(OUT)   :: PSPSPG(:)
REAL(KIND=JPRB)   ,OPTIONAL, INTENT(OUT)   :: PSPAUXG(:,:)
REAL(KIND=JPRB)   ,OPTIONAL, INTENT(INOUT) :: PSPSEL3DG(:,:,:)
REAL(KIND=JPRB)   ,OPTIONAL, INTENT(INOUT) :: PSPSEL2DG(:,:)
LOGICAL           ,OPTIONAL, INTENT(IN)    :: LDSELECT3D(:)
LOGICAL           ,OPTIONAL, INTENT(IN)    :: LDSELECT2D(:)
LOGICAL           ,OPTIONAL, INTENT(IN)    :: LDFULLM
END SUBROUTINE TRMTOS

END INTERFACE
