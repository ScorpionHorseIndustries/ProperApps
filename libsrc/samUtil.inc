  MODULE('samutil.clw')
    samQuote(STRING),STRING
  END

COMPILE('Link', _ABCLinkMode_)
 PRAGMA('compile(samUtil.CLW)')
!Link

