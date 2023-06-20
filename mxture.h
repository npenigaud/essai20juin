INTERFACE
#if defined(_OPENACC)
SUBROUTINE MXTURE(KLX,KVX,KVXS,KIX,KIXS,KTNSMAX,KT,LDMT,PA,PB,PC,PY,PX,KTBLOC,PAS,PBS,PCS,PYS,PXS)
!$ACC ROUTINE VECTOR
USE PARKIND1 ,ONLY : JPIM ,JPRB
INTEGER(KIND=JPIM),INTENT(IN),VALUE :: KLX
INTEGER(KIND=JPIM),INTENT(IN),VALUE :: KVX
INTEGER(KIND=JPIM),INTENT(IN),VALUE :: KVXS
INTEGER(KIND=JPIM),INTENT(IN),VALUE :: KIX
INTEGER(KIND=JPIM),INTENT(IN),VALUE :: KIXS
INTEGER(KIND=JPIM),INTENT(IN),VALUE :: KTNSMAX
INTEGER(KIND=JPIM),INTENT(IN),VALUE :: KT
LOGICAL ,INTENT(IN),VALUE :: LDMT
REAL(KIND=JPRB) ,INTENT(IN) :: PA(KLX,KVX)
REAL(KIND=JPRB) ,INTENT(IN) :: PB(KLX,KVX)
REAL(KIND=JPRB) ,INTENT(IN) :: PC(KLX,KVX)
REAL(KIND=JPRB) ,INTENT(INOUT) :: PY(KTNSMAX+1,KIXS,KVX)
REAL(KIND=JPRB) ,INTENT(INOUT) :: PX(KTNSMAX+1,KIXS,KVX)
INTEGER(KIND=JPIM), INTENT(IN),VALUE :: KTBLOC
REAL(KIND=JPRB) ,INTENT(INOUT) :: PAS(KTBLOC+3,KVXS)
REAL(KIND=JPRB) ,INTENT(INOUT) :: PBS(KTBLOC+3,KVXS)
REAL(KIND=JPRB) ,INTENT(INOUT) :: PCS(KTBLOC+3,KVXS)
REAL(KIND=JPRB) ,INTENT(INOUT) :: PYS(KTBLOC+3,KVXS,KIXS)
REAL(KIND=JPRB) ,INTENT(INOUT) :: PXS(KTBLOC+3,KVXS,KIXS)
#else
SUBROUTINE MXTURE(KLX,KVX,KVXS,KIX,KTNSMAX,KT,LDMT,PA,PB,PC,PY,PX)
USE PARKIND1 ,ONLY : JPIM ,JPRB
INTEGER(KIND=JPIM),INTENT(IN) :: KLX
INTEGER(KIND=JPIM),INTENT(IN) :: KVX
INTEGER(KIND=JPIM),INTENT(IN) :: KVXS
INTEGER(KIND=JPIM),INTENT(IN) :: KIX
INTEGER(KIND=JPIM),INTENT(IN) :: KTNSMAX
INTEGER(KIND=JPIM),INTENT(IN) :: KT
LOGICAL ,INTENT(IN) :: LDMT
REAL(KIND=JPRB) ,INTENT(IN) :: PA(KVX,KLX)
REAL(KIND=JPRB) ,INTENT(IN) :: PB(KVX,KLX)
REAL(KIND=JPRB) ,INTENT(IN) :: PC(KVX,KLX)
REAL(KIND=JPRB) ,INTENT(INOUT) :: PY(KVXS,KTNSMAX+1,KIX)
REAL(KIND=JPRB) ,INTENT(INOUT) :: PX(KVXS,KTNSMAX+1,KIX)
#endif
END SUBROUTINE MXTURE
END INTERFACE