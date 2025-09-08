
#include "header.h"

void predict_unit3(union Entry* data, double* result) {
  unsigned int tmp;
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1772208526869041567) ) ) {
    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-2.130052910603410954) ) ) {
      result[0] += 0.0241032111763498;
    } else {
      result[0] += -0.036844872409321903;
    }
  } else {
    if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)1.406239143841617301) ) ) {
      if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02370849257168504073) ) ) {
        if ( LIKELY(  (data[36].missing != -1) && (data[36].fvalue <= (double)-0.7102313324244843296) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.152991387174000737) ) ) {
            if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1563059735742685918) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-0.5497225041265615397) ) ) {
                result[0] += 0.006626771657818572;
              } else {
                result[0] += -0.05109326532688691;
              }
            } else {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4134826703502541556) ) ) {
                result[0] += 0.0020933357429142223;
              } else {
                if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.022644120845814131) ) ) {
                  result[0] += -0.0010375549505177468;
                } else {
                  result[0] += 0.032246691066481266;
                }
              }
            }
          } else {
            result[0] += -0.04037570461377879;
          }
        } else {
          if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.005762357070754343) ) ) {
            result[0] += 0.011577199543613113;
          } else {
            result[0] += 0.032843866484949004;
          }
        }
      } else {
        if ( UNLIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.4855911565985475131) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.25526421801615129) ) ) {
            if ( LIKELY(  (data[36].missing != -1) && (data[36].fvalue <= (double)-0.618191645368454501) ) ) {
              if ( LIKELY(  (data[36].missing != -1) && (data[36].fvalue <= (double)-0.679715294562736716) ) ) {
                result[0] += 0.0034144946568543523;
              } else {
                result[0] += 0.04870180295106626;
              }
            } else {
              if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.7061706010333631545) ) ) {
                result[0] += -0.06567172034112603;
              } else {
                result[0] += 0.012392449569614777;
              }
            }
          } else {
            result[0] += -0.038204368713929654;
          }
        } else {
          if ( UNLIKELY(  (data[71].missing != -1) && (data[71].fvalue <= (double)-0.4383681026444165574) ) ) {
            result[0] += 0.014472220988602024;
          } else {
            result[0] += -0.02353212618832305;
          }
        }
      }
    } else {
      result[0] += -0.03452247530194408;
    }
  }
  if ( LIKELY( !(data[38].missing != -1) || (data[38].fvalue <= (double)1.355342907056062307) ) ) {
    if ( UNLIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.4548733630016698615) ) ) {
      if ( UNLIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7496561927136741188) ) ) {
        if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7720634196711901875) ) ) {
          if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.08007185799211762045) ) ) {
            if ( UNLIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5933678318553576858) ) ) {
              result[1] += 0.018016789465241018;
            } else {
              if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (double)1.490178253475586745) ) ) {
                if ( UNLIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5875014015255205502) ) ) {
                  result[1] += -0.0065697016660132114;
                } else {
                  result[1] += -0.05105863353195021;
                }
              } else {
                result[1] += 0.01772858269011503;
              }
            }
          } else {
            result[1] += -0.037614771092932583;
          }
        } else {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4134826703502541556) ) ) {
            result[1] += 0.03483772247708456;
          } else {
            result[1] += -0.031646371902616065;
          }
        }
      } else {
        result[1] += -0.034480653515929875;
      }
    } else {
      if ( LIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.4540401115217268524) ) ) {
        if ( LIKELY(  (data[79].missing != -1) && (data[79].fvalue <= (double)-0.4105093223159403948) ) ) {
          if ( LIKELY(  (data[36].missing != -1) && (data[36].fvalue <= (double)-0.7102313324244843296) ) ) {
            if ( LIKELY( !(data[52].missing != -1) || (data[52].fvalue <= (double)0.01546367856846388687) ) ) {
              if ( UNLIKELY(  (data[69].missing != -1) && (data[69].fvalue <= (double)-0.3969584006361657758) ) ) {
                if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)3.044648659810386793) ) ) {
                  result[1] += 0.014998426141860853;
                } else {
                  result[1] += -0.012882423892434228;
                }
              } else {
                result[1] += 0.029196136156822698;
              }
            } else {
              if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.1305725821159978428) ) ) {
                if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.2232840142319784116) ) ) {
                  result[1] += 0.021273898638332643;
                } else {
                  if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.6054551360476957411) ) ) {
                    result[1] += -0.02142318838362699;
                  } else {
                    if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.5325896194295395292) ) ) {
                      result[1] += 0.011663622535918704;
                    } else {
                      result[1] += -0.009751709668431698;
                    }
                  }
                }
              } else {
                result[1] += -0.027367232305561477;
              }
            }
          } else {
            result[1] += -0.036686659002895576;
          }
        } else {
          if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)3.8714595178205502) ) ) {
            if ( LIKELY(  (data[46].missing != -1) && (data[46].fvalue <= (double)-0.1071685794760764421) ) ) {
              result[1] += 0.032433804030009845;
            } else {
              result[1] += -0.0068832530409137106;
            }
          } else {
            result[1] += -0.030803308716867234;
          }
        }
      } else {
        result[1] += -0.034749856897381595;
      }
    }
  } else {
    if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)0.7277191341578289618) ) ) {
      result[1] += 0.03451892569530991;
    } else {
      if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)0.06020501017940468186) ) ) {
        result[1] += -0.01262297789036232;
      } else {
        result[1] += 0.024550608000239817;
      }
    }
  }
  if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (double)1.525439072483760983) ) ) {
    result[2] += -0.0286759158749941;
  } else {
    if ( UNLIKELY(  (data[3].missing != -1) && (data[3].fvalue <= (double)-0.5267935652193423968) ) ) {
      result[2] += 0.058425025957508266;
    } else {
      result[2] += 0.007161378413059635;
    }
  }
  if ( LIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.534698905014846404) ) ) {
    if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)3.046331626293641737) ) ) {
      if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1845224968741556448) ) ) {
        if ( LIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1847700102364353281) ) ) {
          result[3] += -0.03524409762758206;
        } else {
          result[3] += 0.03368103301611324;
        }
      } else {
        result[3] += -0.034758393688218106;
      }
    } else {
      if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)1.00000001800250948e-35) ) ) {
        result[3] += -0.03851795622547402;
      } else {
        result[3] += 0.0346318193588188;
      }
    }
  } else {
    result[3] += 0.03418251384468451;
  }
  if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (double)1.490178253475586745) ) ) {
    result[4] += -0.033595435297237075;
  } else {
    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.2752335735604075073) ) ) {
      result[4] += -0.02007821725537856;
    } else {
      result[4] += 0.038036905235147876;
    }
  }
  if ( LIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6177908756732227724) ) ) {
    result[5] += -0.01173451590934267;
  } else {
    if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6199004189109846852) ) ) {
      result[5] += 0.07608128405463811;
    } else {
      result[5] += 0.006657231016327774;
    }
  }
  if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[6] += -0.019090146617112887;
  } else {
    result[6] += 0.044393888561472174;
  }
  if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3728354207891853567) ) ) {
    result[7] += 0.015285239517034416;
  } else {
    result[7] += -0.034437258110156604;
  }
  if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6189299289389768033) ) ) {
    result[8] += -0.036189329427989275;
  } else {
    if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (double)1.490178253475586745) ) ) {
      result[8] += -0.03457552727678871;
    } else {
      result[8] += 0.036805433973213196;
    }
  }
  if ( UNLIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.7147321560568579146) ) ) {
    if ( LIKELY(  (data[33].missing != -1) && (data[33].fvalue <= (double)-0.6327617417443375247) ) ) {
      if ( LIKELY( !(data[83].missing != -1) || (data[83].fvalue <= (double)1.00000001800250948e-35) ) ) {
        if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
          result[9] += -0.030898036249613025;
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.713419879289624137) ) ) {
            if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02379802175668314576) ) ) {
              result[9] += 0.018327698016074985;
            } else {
              result[9] += -0.03518659998445032;
            }
          } else {
            result[9] += 0.038932622355798106;
          }
        }
      } else {
        if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.038896224531635992) ) ) {
          result[9] += 0.04151794449402472;
        } else {
          if ( UNLIKELY(  (data[69].missing != -1) && (data[69].fvalue <= (double)-0.3983882530900031971) ) ) {
            result[9] += 0.01460967435691818;
          } else {
            result[9] += -0.016449518718617804;
          }
        }
      }
    } else {
      result[9] += 0.0585749888379813;
    }
  } else {
    result[9] += -0.03444730551539132;
  }
  if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[10] += -0.02998602236216826;
  } else {
    result[10] += 0.034853031416113976;
  }
  if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02366057554279654349) ) ) {
    if ( UNLIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.6197939207825213792) ) ) {
      if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.4432578306330479112) ) ) {
        if ( LIKELY(  (data[58].missing != -1) && (data[58].fvalue <= (double)-0.2684545888943229985) ) ) {
          result[11] += 0.0030732760905893314;
        } else {
          result[11] += 0.04021214836225607;
        }
      } else {
        result[11] += -0.02298856405654746;
      }
    } else {
      result[11] += -0.033176071365396;
    }
  } else {
    if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.9564359567862011913) ) ) {
      if ( UNLIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6306144754393157026) ) ) {
        if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.009229353506927643128) ) ) {
          result[11] += -0.03481911092806708;
        } else {
          if ( UNLIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.8008727114737107522) ) ) {
            result[11] += 0.03902807872800767;
          } else {
            result[11] += -0.002744620503196788;
          }
        }
      } else {
        result[11] += 0.034668257209491356;
      }
    } else {
      if ( LIKELY( !(data[38].missing != -1) || (data[38].fvalue <= (double)1.334235260215556051) ) ) {
        if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.35192791421776487) ) ) {
          if ( UNLIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6300408038006478639) ) ) {
            result[11] += -0.032418127718936485;
          } else {
            if ( LIKELY( !(data[40].missing != -1) || (data[40].fvalue <= (double)0.2692302541018967155) ) ) {
              if ( LIKELY(  (data[36].missing != -1) && (data[36].fvalue <= (double)-0.679715294562736716) ) ) {
                if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.3817666597025218267) ) ) {
                  result[11] += 0.0005715507246575866;
                } else {
                  result[11] += 0.01693110491578021;
                }
              } else {
                result[11] += -0.025758246981855342;
              }
            } else {
              result[11] += -0.023827569454322132;
            }
          }
        } else {
          result[11] += 0.035009723800914376;
        }
      } else {
        result[11] += -0.03447318716443824;
      }
    }
  }
  if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.2449294293334160211) ) ) {
    if ( LIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.32011123242420747) ) ) {
        if ( LIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1731368822092889392) ) ) {
          result[12] += 0.010948769160667397;
        } else {
          result[12] += -0.025753986756939136;
        }
      } else {
        result[12] += 0.033062773925574045;
      }
    } else {
      result[12] += 0.040070563602430505;
    }
  } else {
    result[12] += -0.017281918270275125;
  }
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1772208526869041567) ) ) {
    if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.5210601204174857282) ) ) {
      result[0] += 0.01833664769977869;
    } else {
      result[0] += -0.0360742797748547;
    }
  } else {
    if ( LIKELY(  (data[64].missing != -1) && (data[64].fvalue <= (double)-0.2731584979823262205) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.25526421801615129) ) ) {
        if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.9673607451327957962) ) ) {
          if ( LIKELY( !(data[48].missing != -1) || (data[48].fvalue <= (double)0.9030840312135969272) ) ) {
            if ( UNLIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.03889287964838449019) ) ) {
              result[0] += 0.0050592608220338;
            } else {
              result[0] += -0.01937623468088003;
            }
          } else {
            result[0] += 0.02191903508827912;
          }
        } else {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4134826703502541556) ) ) {
            if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)0.8804929462951799346) ) ) {
              if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8124905999336901052) ) ) {
                result[0] += 0.004898040577542328;
              } else {
                result[0] += -0.037734247269895035;
              }
            } else {
              result[0] += 0.014164277876833758;
            }
          } else {
            if ( LIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1560584602119888531) ) ) {
              if ( UNLIKELY(  (data[36].missing != -1) && (data[36].fvalue <= (double)-0.679715294562736716) ) ) {
                if ( UNLIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6039903039694579645) ) ) {
                  result[0] += -0.03161726464119098;
                } else {
                  result[0] += 0.006112965455760898;
                }
              } else {
                if ( UNLIKELY(  (data[36].missing != -1) && (data[36].fvalue <= (double)-0.618191645368454501) ) ) {
                  result[0] += 0.035809016630520746;
                } else {
                  if ( LIKELY(  (data[36].missing != -1) && (data[36].fvalue <= (double)-0.6154715640199382998) ) ) {
                    result[0] += -0.03962630275652073;
                  } else {
                    result[0] += 0.023325777084955437;
                  }
                }
              }
            } else {
              if ( LIKELY(  (data[42].missing != -1) && (data[42].fvalue <= (double)-0.01068133207526642849) ) ) {
                result[0] += 0.03480915652339219;
              } else {
                if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3603786061735756996) ) ) {
                  result[0] += 0.03926632581476995;
                } else {
                  result[0] += 0.004052854729291535;
                }
              }
            }
          }
        }
      } else {
        result[0] += -0.0497613625941203;
      }
    } else {
      result[0] += -0.03122596116692166;
    }
  }
  if ( LIKELY( !(data[38].missing != -1) || (data[38].fvalue <= (double)1.355342907056062307) ) ) {
    if ( UNLIKELY(  (data[55].missing != -1) && (data[55].fvalue <= (double)-0.1354503556916147877) ) ) {
      if ( UNLIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6272704920455660638) ) ) {
        if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.1794951076842806192) ) ) {
          if ( LIKELY(  (data[79].missing != -1) && (data[79].fvalue <= (double)-0.4168475085733249208) ) ) {
            if ( LIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5757685408658465009) ) ) {
              if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1749932324263867578) ) ) {
                result[1] += -0.0076249569573443275;
              } else {
                result[1] += -0.03841843342801676;
              }
            } else {
              result[1] += -0.0006035620879331196;
            }
          } else {
            result[1] += 0.027840197006170277;
          }
        } else {
          result[1] += 0.010330371675787377;
        }
      } else {
        result[1] += -0.03432043694317551;
      }
    } else {
      if ( LIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.4540401115217268524) ) ) {
        if ( LIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5699021105360092543) ) ) {
          if ( UNLIKELY(  (data[48].missing != -1) && (data[48].fvalue <= (double)-0.3064771725129896152) ) ) {
            if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.2044093625456598062) ) ) {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.3678488213209678004) ) ) {
                if ( UNLIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.375185209957411725) ) ) {
                  result[1] += -0.008031636104415086;
                } else {
                  result[1] += 0.03444022498958678;
                }
              } else {
                if ( LIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6286960502461192979) ) ) {
                  if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.8714145528018332199) ) ) {
                    if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)0.9316972172496786886) ) ) {
                      if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)4.062176223466247293) ) ) {
                        if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)3.368407430064523922) ) ) {
                          result[1] += -0.0041153781554478215;
                        } else {
                          result[1] += 0.03458730046281503;
                        }
                      } else {
                        result[1] += -0.009770888769566938;
                      }
                    } else {
                      result[1] += -0.04026967300766959;
                    }
                  } else {
                    result[1] += 0.03567759080677816;
                  }
                } else {
                  result[1] += -0.013296372334047991;
                }
              }
            } else {
              result[1] += -0.023412168526885376;
            }
          } else {
            result[1] += -0.03723828619697814;
          }
        } else {
          if ( LIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.03680567913374452327) ) ) {
            result[1] += 0.02989173628310452;
          } else {
            if ( UNLIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.3083892198998683942) ) ) {
              result[1] += -0.031705978680065645;
            } else {
              result[1] += 0.019325131140945126;
            }
          }
        }
      } else {
        result[1] += -0.03483286424797598;
      }
    }
  } else {
    if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (double)1.945333284487767989) ) ) {
      result[1] += 0.03431497022776062;
    } else {
      if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6198159762724545496) ) ) {
        result[1] += -0.018693414313736077;
      } else {
        result[1] += 0.02875854456806591;
      }
    }
  }
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1699192084996526686) ) ) {
    if ( LIKELY(  (data[71].missing != -1) && (data[71].fvalue <= (double)-0.1118927917471379263) ) ) {
      if ( LIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.5903304115434165888) ) ) {
        result[2] += 0.015414977086447552;
      } else {
        result[2] += -0.015120875390585695;
      }
    } else {
      result[2] += 0.05872141193103566;
    }
  } else {
    result[2] += -0.034545301050131;
  }
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1845224968741556448) ) ) {
    if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1847700102364353281) ) ) {
      result[3] += -0.03529927148347388;
    } else {
      result[3] += 0.0345989443528479;
    }
  } else {
    result[3] += -0.034845783748869506;
  }
  if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (double)1.490178253475586745) ) ) {
    result[4] += -0.03353953627848533;
  } else {
    if ( UNLIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.920434147535417968) ) ) {
      result[4] += 0.03677565692061732;
    } else {
      result[4] += -0.01607215207580345;
    }
  }
  if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.7544702801259169922) ) ) {
    result[5] += -0.015683095852514036;
  } else {
    if ( LIKELY(  (data[47].missing != -1) && (data[47].fvalue <= (double)-0.01555902248920354274) ) ) {
      result[5] += 0.009817307248609885;
    } else {
      result[5] += 0.06801135221798077;
    }
  }
  if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[6] += -0.018480796945919677;
  } else {
    result[6] += 0.04186145551002753;
  }
  if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8851947168287664924) ) ) {
    result[7] += 0.014656008932062259;
  } else {
    result[7] += -0.03443695871955671;
  }
  if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6189299289389768033) ) ) {
    result[8] += -0.03617338945327198;
  } else {
    if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
      result[8] += -0.03443395556857301;
    } else {
      result[8] += 0.03640456531697721;
    }
  }
  if ( UNLIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.7147321560568579146) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.411986527813700709) ) ) {
      if ( LIKELY( !(data[83].missing != -1) || (data[83].fvalue <= (double)1.00000001800250948e-35) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7021266540248007892) ) ) {
          result[9] += -0.03413625770201718;
        } else {
          result[9] += 0.012472815735906759;
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6359230018345859436) ) ) {
          result[9] += 0.027958278023722142;
        } else {
          result[9] += -0.022918724780479308;
        }
      }
    } else {
      result[9] += 0.03455355650718877;
    }
  } else {
    result[9] += -0.03444673166498976;
  }
  if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[10] += -0.029710053254756376;
  } else {
    result[10] += 0.03482968234080243;
  }
  if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02366057554279654349) ) ) {
    if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6198879885152437375) ) ) {
      if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.4432578306330479112) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9866467885028515905) ) ) {
          result[11] += -0.00014651996496716895;
        } else {
          result[11] += 0.03251225335064469;
        }
      } else {
        result[11] += -0.02292150984999599;
      }
    } else {
      result[11] += -0.032440186014655294;
    }
  } else {
    if ( UNLIKELY(  (data[47].missing != -1) && (data[47].fvalue <= (double)-0.01590525049479685205) ) ) {
      if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
        if ( LIKELY(  (data[22].missing != -1) && (data[22].fvalue <= (double)-0.5740772844739022718) ) ) {
          if ( LIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.5890421704732747843) ) ) {
            result[11] += 0.002522772928831865;
          } else {
            result[11] += 0.04497422554052176;
          }
        } else {
          result[11] += -0.034674239045400373;
        }
      } else {
        result[11] += 0.0353699783028627;
      }
    } else {
      if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.919828219461336527) ) ) {
        if ( LIKELY(  (data[69].missing != -1) && (data[69].fvalue <= (double)-0.1189402741795621693) ) ) {
          result[11] += 0.03417129998028596;
        } else {
          result[11] += -0.011261166758977098;
        }
      } else {
        if ( UNLIKELY(  (data[45].missing != -1) && (data[45].fvalue <= (double)-0.09293577863444217602) ) ) {
          result[11] += -0.037796527828556165;
        } else {
          result[11] += 0.02259164411405359;
        }
      }
    }
  }
  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.32011123242420747) ) ) {
    if ( LIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.2709289357124474162) ) ) {
      if ( LIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.2749445138003689393) ) ) {
        if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.3843127076039604129) ) ) {
          result[12] += -0.02192831634390056;
        } else {
          if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.2849173927346489443) ) ) {
            result[12] += 0.04235196918174472;
          } else {
            result[12] += -0.01651566938897582;
          }
        }
      } else {
        result[12] += 0.061260669407882724;
      }
    } else {
      result[12] += -0.03474770891743673;
    }
  } else {
    result[12] += 0.04172649420440494;
  }
  if ( LIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.2433930824819977579) ) ) {
    if ( LIKELY(  (data[62].missing != -1) && (data[62].fvalue <= (double)-0.002452105269676800852) ) ) {
      if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02376901934613134468) ) ) {
        if ( LIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.4549192254186560924) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.156333259956448201) ) ) {
            if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1563059735742685918) ) ) {
              if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.4184811922442436272) ) ) {
                result[0] += -0.038833646550344846;
              } else {
                result[0] += 0.003082837217834983;
              }
            } else {
              result[0] += 0.016918861585724622;
            }
          } else {
            result[0] += -0.04332953305298943;
          }
        } else {
          if ( LIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.3098210580521135182) ) ) {
            result[0] += 0.032781972985453635;
          } else {
            if ( UNLIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.5362087717372953088) ) ) {
              result[0] += -0.016395064376713963;
            } else {
              result[0] += 0.028250411506255964;
            }
          }
        }
      } else {
        if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.3083892198998683942) ) ) {
          if ( LIKELY(  (data[59].missing != -1) && (data[59].fvalue <= (double)-0.2730514391269661112) ) ) {
            if ( LIKELY(  (data[3].missing != -1) && (data[3].fvalue <= (double)-0.4369627936279878999) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.246390969593790254) ) ) {
                if ( LIKELY(  (data[3].missing != -1) && (data[3].fvalue <= (double)-0.5118217699541166565) ) ) {
                  if ( LIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.4362251690692156569) ) ) {
                    if ( LIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.4406574440734786768) ) ) {
                      result[0] += 0.004561888824621968;
                    } else {
                      result[0] += -0.01942792432597469;
                    }
                  } else {
                    if ( LIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.3589765718219689039) ) ) {
                      if ( LIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.384074664137903643) ) ) {
                        result[0] += 0.014870520384646962;
                      } else {
                        result[0] += 0.059729134627809204;
                      }
                    } else {
                      result[0] += 0.0013793334841292787;
                    }
                  }
                } else {
                  result[0] += -0.017034866317755887;
                }
              } else {
                result[0] += -0.0321822073918887;
              }
            } else {
              result[0] += 0.03280548417712034;
            }
          } else {
            result[0] += -0.03575399669005005;
          }
        } else {
          result[0] += -0.025535771602829035;
        }
      }
    } else {
      result[0] += -0.031648743003365204;
    }
  } else {
    result[0] += -0.034445665033341115;
  }
  if ( LIKELY(  (data[59].missing != -1) && (data[59].fvalue <= (double)-0.3479392415564711016) ) ) {
    if ( UNLIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6280911155401268653) ) ) {
      if ( LIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6040019643854664944) ) ) {
        if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.1794951076842806192) ) ) {
          if ( UNLIKELY(  (data[3].missing != -1) && (data[3].fvalue <= (double)-0.5866807462802454687) ) ) {
            result[1] += 0.00841011200038776;
          } else {
            if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.2854825927736091007) ) ) {
              result[1] += -0.0319608208826514;
            } else {
              if ( UNLIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)9.477337471177632366) ) ) {
                result[1] += 0.007306016633177911;
              } else {
                result[1] += -0.035339554974465004;
              }
            }
          }
        } else {
          result[1] += 0.011921317322239177;
        }
      } else {
        if ( LIKELY(  (data[42].missing != -1) && (data[42].fvalue <= (double)-0.01068413760847902044) ) ) {
          if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3690088772965603447) ) ) {
            if ( UNLIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)0.5978075737164213477) ) ) {
              result[1] += -0.04272156030977912;
            } else {
              if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.2248098908822692976) ) ) {
                if ( LIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.749034681232501498) ) ) {
                  if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3708993176377855527) ) ) {
                    result[1] += -0.010393253847964386;
                  } else {
                    if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)4.802196269761418002) ) ) {
                      if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.7405682477364100569) ) ) {
                        if ( LIKELY(  (data[53].missing != -1) && (data[53].fvalue <= (double)-0.265032629752936788) ) ) {
                          result[1] += 0.028371641073616827;
                        } else {
                          result[1] += 0.005738422750253086;
                        }
                      } else {
                        result[1] += -0.05462335851510155;
                      }
                    } else {
                      result[1] += 0.042580361785458536;
                    }
                  }
                } else {
                  if ( UNLIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.6514641469536260887) ) ) {
                    result[1] += -0.05590918568262363;
                  } else {
                    if ( LIKELY(  (data[61].missing != -1) && (data[61].fvalue <= (double)-0.1668732678918711521) ) ) {
                      result[1] += 0.0476029154261022;
                    } else {
                      result[1] += -0.021887494616114788;
                    }
                  }
                }
              } else {
                result[1] += 0.053370381016407877;
              }
            }
          } else {
            result[1] += -0.040444829140031065;
          }
        } else {
          result[1] += 0.03306426687506424;
        }
      }
    } else {
      if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)3.946304548574234961) ) ) {
        if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.3083892198998683942) ) ) {
          result[1] += -0.03428912020210713;
        } else {
          result[1] += 0.010175667502152963;
        }
      } else {
        result[1] += 0.026549437936792496;
      }
    }
  } else {
    if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
      if ( UNLIKELY( !(data[38].missing != -1) || (data[38].fvalue <= (double)1.302964672303695393) ) ) {
        if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.1956782533722352391) ) ) {
          result[1] += 0.027886174216082017;
        } else {
          result[1] += -0.01406899770016609;
        }
      } else {
        result[1] += 0.03461945381303999;
      }
    } else {
      result[1] += -0.03617236711440751;
    }
  }
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1699192084996526686) ) ) {
    if ( LIKELY(  (data[71].missing != -1) && (data[71].fvalue <= (double)-0.1118927917471379263) ) ) {
      if ( LIKELY(  (data[44].missing != -1) && (data[44].fvalue <= (double)-0.03868207892647129026) ) ) {
        result[2] += -0.01359252499075285;
      } else {
        result[2] += 0.015204920368389236;
      }
    } else {
      result[2] += 0.05783148492264537;
    }
  } else {
    result[2] += -0.03454517775758819;
  }
  if ( LIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.534698905014846404) ) ) {
    if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)0.9946455059545064037) ) ) {
      result[3] += -0.03474791369421689;
    } else {
      if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)1.00000001800250948e-35) ) ) {
        result[3] += -0.038454089114698865;
      } else {
        result[3] += 0.034605626779243774;
      }
    }
  } else {
    result[3] += 0.03411966366238374;
  }
  if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.9735579371226364964) ) ) {
    result[4] += 0.03225812840799566;
  } else {
    result[4] += -0.03241490410495253;
  }
  if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.7544702801259169922) ) ) {
    result[5] += -0.014913187809995168;
  } else {
    if ( LIKELY(  (data[47].missing != -1) && (data[47].fvalue <= (double)-0.01555902248920354274) ) ) {
      result[5] += 0.010605120896172908;
    } else {
      result[5] += 0.06456706023212612;
    }
  }
  if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[6] += -0.017796266565145248;
  } else {
    result[6] += 0.04039878857522964;
  }
  if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-1.031327076639174445) ) ) {
    result[7] += 0.014262669394245631;
  } else {
    result[7] += -0.034436678188816246;
  }
  if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6189299289389768033) ) ) {
    result[8] += -0.03614558522857729;
  } else {
    if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (double)1.490178253475586745) ) ) {
      result[8] += -0.03459393054651526;
    } else {
      result[8] += 0.03668776450921033;
    }
  }
  if ( UNLIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-0.4969520972243098855) ) ) {
    if ( UNLIKELY( !(data[83].missing != -1) || (data[83].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7021266540248007892) ) ) {
        result[9] += -0.03367966419269945;
      } else {
        result[9] += 0.01041903513372614;
      }
    } else {
      if ( UNLIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6316814848651618464) ) ) {
        result[9] += 0.041767039047648384;
      } else {
        if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6197345630794598437) ) ) {
          result[9] += 0.014786652029468534;
        } else {
          result[9] += -0.018428668817375347;
        }
      }
    }
  } else {
    result[9] += -0.03110468019968148;
  }
  if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8851947168287664924) ) ) {
    result[10] += 0.027268968047022668;
  } else {
    result[10] += -0.028914522754032203;
  }
  if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02366057554279654349) ) ) {
    if ( UNLIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.6197939207825213792) ) ) {
      if ( LIKELY(  (data[59].missing != -1) && (data[59].fvalue <= (double)-0.2892555169171065477) ) ) {
        if ( LIKELY(  (data[58].missing != -1) && (data[58].fvalue <= (double)-0.5403549039332858905) ) ) {
          if ( LIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (double)0.2272333720235279464) ) ) {
            result[11] += -0.0031214088826023315;
          } else {
            result[11] += 0.02970651875025378;
          }
        } else {
          result[11] += -0.028629833419880502;
        }
      } else {
        result[11] += 0.027214821759235928;
      }
    } else {
      result[11] += -0.032977982783707956;
    }
  } else {
    if ( UNLIKELY(  (data[50].missing != -1) && (data[50].fvalue <= (double)-0.07449910332263572077) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5865439505491081285) ) ) {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-1.948957976892493393) ) ) {
          result[11] += 0.004610916591733887;
        } else {
          result[11] += -0.01688226591888383;
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8215697967491829568) ) ) {
          result[11] += 0.02204670513918142;
        } else {
          result[11] += 0.0031203613804430953;
        }
      }
    } else {
      if ( LIKELY( !(data[38].missing != -1) || (data[38].fvalue <= (double)1.334235260215556051) ) ) {
        if ( LIKELY(  (data[43].missing != -1) && (data[43].fvalue <= (double)-0.02401336578159246615) ) ) {
          result[11] += 0.03243319936744068;
        } else {
          result[11] += -0.001177745701985649;
        }
      } else {
        result[11] += -0.034488324003677955;
      }
    }
  }
  if ( LIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (double)0.301285017925520815) ) ) {
    if ( LIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.2709289357124474162) ) ) {
      if ( LIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.3317229202528408916) ) ) {
        result[12] += 0.012307930395769327;
      } else {
        result[12] += 0.0649167938820954;
      }
    } else {
      result[12] += -0.007267961297064102;
    }
  } else {
    result[12] += -0.02345108545693674;
  }
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1772208526869041567) ) ) {
    if ( UNLIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-0.4969520972243098855) ) ) {
      result[0] += 0.018232544029626874;
    } else {
      result[0] += -0.036864787998669886;
    }
  } else {
    if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)1.406239143841617301) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.25526421801615129) ) ) {
        if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02376901934613134468) ) ) {
          if ( LIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.4548733630016698615) ) ) {
            if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.076345667441572784) ) ) {
              result[0] += -0.01032126901536679;
            } else {
              if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7720634196711901875) ) ) {
                result[0] += 0.02338658862888325;
              } else {
                if ( LIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6189680459437261195) ) ) {
                  result[0] += -0.007455513613829822;
                } else {
                  result[0] += 0.02388399318239294;
                }
              }
            }
          } else {
            result[0] += 0.030367080554674984;
          }
        } else {
          if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.9673607451327957962) ) ) {
            if ( UNLIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6318848485338518506) ) ) {
              result[0] += -0.0034075413974899212;
            } else {
              result[0] += -0.029086489377003012;
            }
          } else {
            if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3708993176377855527) ) ) {
              result[0] += 0.02697716122743635;
            } else {
              if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3707988594554016415) ) ) {
                result[0] += -0.03032701155789944;
              } else {
                if ( UNLIKELY(  (data[36].missing != -1) && (data[36].fvalue <= (double)-0.618191645368454501) ) ) {
                  result[0] += 0.006883438779762596;
                } else {
                  if ( UNLIKELY(  (data[36].missing != -1) && (data[36].fvalue <= (double)-0.5166444199678643656) ) ) {
                    result[0] += -0.051760821381942754;
                  } else {
                    if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.2505321500177452587) ) ) {
                      result[0] += 0.013771043326240262;
                    } else {
                      result[0] += -0.02436524994460728;
                    }
                  }
                }
              }
            }
          }
        }
      } else {
        result[0] += -0.04964935158142171;
      }
    } else {
      result[0] += -0.034535257429083595;
    }
  }
  if ( LIKELY( !(data[38].missing != -1) || (data[38].fvalue <= (double)1.355342907056062307) ) ) {
    if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.0237904559098773595) ) ) {
      if ( UNLIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5968190743969560286) ) ) {
        if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.1794951076842806192) ) ) {
          if ( UNLIKELY(  (data[3].missing != -1) && (data[3].fvalue <= (double)-0.5866807462802454687) ) ) {
            result[1] += 0.010143694399496944;
          } else {
            if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (double)1.490178253475586745) ) ) {
              result[1] += -0.035259723111438705;
            } else {
              result[1] += -0.0007433009179074874;
            }
          }
        } else {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4134826703502541556) ) ) {
            result[1] += 0.033540372450611415;
          } else {
            result[1] += -0.029610728790012097;
          }
        }
      } else {
        result[1] += -0.03443412571023399;
      }
    } else {
      if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
        if ( LIKELY(  (data[79].missing != -1) && (data[79].fvalue <= (double)-0.4105093223159403948) ) ) {
          if ( LIKELY(  (data[56].missing != -1) && (data[56].fvalue <= (double)-0.163038955614291825) ) ) {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.3678488213209678004) ) ) {
              if ( UNLIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.375185209957411725) ) ) {
                result[1] += -0.010603854905227632;
              } else {
                if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.6640100956641316055) ) ) {
                  result[1] += 0.034860865640581544;
                } else {
                  result[1] += 0.0012582974712497018;
                }
              }
            } else {
              if ( LIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5699021105360092543) ) ) {
                if ( LIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5969756681805393761) ) ) {
                  if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3708993176377855527) ) ) {
                    if ( LIKELY(  (data[61].missing != -1) && (data[61].fvalue <= (double)-0.1686998530023144371) ) ) {
                      result[1] += -0.003012828969386846;
                    } else {
                      result[1] += -0.04219174073893859;
                    }
                  } else {
                    if ( LIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.749034681232501498) ) ) {
                      if ( UNLIKELY(  (data[61].missing != -1) && (data[61].fvalue <= (double)-0.1684076919676497641) ) ) {
                        result[1] += 0.041301702508570265;
                      } else {
                        if ( LIKELY(  (data[55].missing != -1) && (data[55].fvalue <= (double)-0.08450603599490492945) ) ) {
                          result[1] += 0.021060835162438816;
                        } else {
                          result[1] += -0.014073968714869033;
                        }
                      }
                    } else {
                      if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.2936476673436070883) ) ) {
                        result[1] += 0.004327968179294521;
                      } else {
                        result[1] += -0.031748669231047355;
                      }
                    }
                  }
                } else {
                  result[1] += -0.03513195423656719;
                }
              } else {
                result[1] += 0.029089985112869424;
              }
            }
          } else {
            if ( LIKELY( !(data[69].missing != -1) || (data[69].fvalue <= (double)0.07927461561698297132) ) ) {
              result[1] += -0.038581923337122195;
            } else {
              result[1] += -0.0028217692931298893;
            }
          }
        } else {
          if ( LIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-0.4141937032741632718) ) ) {
            result[1] += 0.03314391644159121;
          } else {
            result[1] += -0.012870749860621117;
          }
        }
      } else {
        result[1] += -0.03575050621210042;
      }
    }
  } else {
    if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)0.7277191341578289618) ) ) {
      result[1] += 0.03445985704357547;
    } else {
      result[1] += 0.014586992946549202;
    }
  }
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1699192084996526686) ) ) {
    if ( LIKELY(  (data[71].missing != -1) && (data[71].fvalue <= (double)-0.1118927917471379263) ) ) {
      if ( LIKELY(  (data[44].missing != -1) && (data[44].fvalue <= (double)-0.03868207892647129026) ) ) {
        result[2] += -0.012993618029359513;
      } else {
        result[2] += 0.014816000759197213;
      }
    } else {
      result[2] += 0.05706480072605566;
    }
  } else {
    result[2] += -0.03454667582123716;
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)0.9946455059545064037) ) ) {
    result[3] += -0.034738020779033256;
  } else {
    if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)1.00000001800250948e-35) ) ) {
      result[3] += -0.037946020104320834;
    } else {
      result[3] += 0.0345884895255572;
    }
  }
  if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (double)1.490178253475586745) ) ) {
    result[4] += -0.03342346220832075;
  } else {
    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.2752335735604075073) ) ) {
      result[4] += -0.017930050626419933;
    } else {
      result[4] += 0.038576611687192126;
    }
  }
  if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.7544702801259169922) ) ) {
    result[5] += -0.014141442837539042;
  } else {
    result[5] += 0.03965924448187298;
  }
  if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[6] += -0.017119697191661763;
  } else {
    result[6] += 0.03872357417417643;
  }
  if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-1.031327076639174445) ) ) {
    result[7] += 0.013786125118232332;
  } else {
    result[7] += -0.03443641851820494;
  }
  if ( LIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.619334285637768045) ) ) {
    result[8] += -0.03614329419234078;
  } else {
    if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
      result[8] += -0.03443338886925291;
    } else {
      result[8] += 0.03676457823902075;
    }
  }
  if ( UNLIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-0.4969520972243098855) ) ) {
    if ( UNLIKELY( !(data[83].missing != -1) || (data[83].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7021266540248007892) ) ) {
        result[9] += -0.03343007931769326;
      } else {
        result[9] += 0.010059548542088466;
      }
    } else {
      if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.038896224531635992) ) ) {
        result[9] += 0.04195535696069998;
      } else {
        if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7576587737699298497) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.411986527813700709) ) ) {
            result[9] += -0.0036034765818254684;
          } else {
            result[9] += 0.030930433492755434;
          }
        } else {
          if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.7077341304289562762) ) ) {
            result[9] += 0.08020783898004787;
          } else {
            result[9] += -0.0009001187921476057;
          }
        }
      }
    }
  } else {
    result[9] += -0.030883836876932944;
  }
  if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[10] += -0.030311690435431006;
  } else {
    if ( LIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.4804758948180142819) ) ) {
      result[10] += 0.0004450146367483635;
    } else {
      result[10] += 0.03478814798461707;
    }
  }
  if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6040034004439017723) ) ) {
    if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (double)1.379645372371002709) ) ) {
      if ( LIKELY(  (data[36].missing != -1) && (data[36].fvalue <= (double)-0.6369028947013902764) ) ) {
        if ( LIKELY(  (data[20].missing != -1) && (data[20].fvalue <= (double)-0.5448433239136843964) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6832277872550962527) ) ) {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-1.948957976892493393) ) ) {
              result[11] += 0.00470168719988713;
            } else {
              result[11] += -0.012362857090677545;
            }
          } else {
            result[11] += 0.013149199018721601;
          }
        } else {
          result[11] += -0.03456206907013957;
        }
      } else {
        if ( LIKELY(  (data[56].missing != -1) && (data[56].fvalue <= (double)-0.0971641165574999438) ) ) {
          if ( LIKELY( !(data[84].missing != -1) || (data[84].fvalue <= (double)1.00000001800250948e-35) ) ) {
            result[11] += 0.031171875528993732;
          } else {
            result[11] += -0.0033865643246401922;
          }
        } else {
          if ( UNLIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.4076512707803252034) ) ) {
            result[11] += 0.02699986305400357;
          } else {
            result[11] += -0.020873287041132275;
          }
        }
      }
    } else {
      result[11] += -0.0344801279528365;
    }
  } else {
    result[11] += -0.034023833431785645;
  }
  if ( LIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.2709289357124474162) ) ) {
    if ( LIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.3317229202528408916) ) ) {
      if ( LIKELY(  (data[13].missing != -1) && (data[13].fvalue <= (double)-0.9897634247260547191) ) ) {
        result[12] += 0.016629255132892606;
      } else {
        result[12] += -0.027079278583920407;
      }
    } else {
      result[12] += 0.06464543830350934;
    }
  } else {
    result[12] += -0.012492895885568858;
  }
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1772208526869041567) ) ) {
    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-2.097988217440787562) ) ) {
      result[0] += 0.0231209585008781;
    } else {
      result[0] += -0.036814075538527176;
    }
  } else {
    if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.3083892198998683942) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.25526421801615129) ) ) {
        if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02377658519293713094) ) ) {
          if ( LIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.4548733630016698615) ) ) {
            if ( UNLIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)0.5143351628331070957) ) ) {
              result[0] += -0.03659563746966217;
            } else {
              if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)1.042993765094097691) ) ) {
                result[0] += 0.021816160262696886;
              } else {
                if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)2.795914393643698315) ) ) {
                  result[0] += -0.0060321950679599065;
                } else {
                  result[0] += 0.020558958181036143;
                }
              }
            }
          } else {
            result[0] += 0.031171736700908857;
          }
        } else {
          if ( LIKELY(  (data[58].missing != -1) && (data[58].fvalue <= (double)-0.4576213480695666136) ) ) {
            if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (double)1.490178253475586745) ) ) {
              if ( LIKELY(  (data[12].missing != -1) && (data[12].fvalue <= (double)-1.128486328597585908) ) ) {
                result[0] += 0.004925245082578968;
              } else {
                result[0] += -0.026615016253024388;
              }
            } else {
              if ( LIKELY( !(data[47].missing != -1) || (data[47].fvalue <= (double)0.01042025011524357753) ) ) {
                result[0] += 0.000552474775364273;
              } else {
                result[0] += 0.05278623398745699;
              }
            }
          } else {
            result[0] += -0.02858443596741894;
          }
        }
      } else {
        result[0] += -0.050019941124489695;
      }
    } else {
      if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (double)1.525439072483760983) ) ) {
        result[0] += -0.03595364938861521;
      } else {
        if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
          result[0] += -0.034580650650614275;
        } else {
          if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02381693637501984193) ) ) {
            result[0] += 0.02276760489149916;
          } else {
            result[0] += -0.013930021601612755;
          }
        }
      }
    }
  }
  if ( LIKELY(  (data[59].missing != -1) && (data[59].fvalue <= (double)-0.3479392415564711016) ) ) {
    if ( UNLIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6280911155401268653) ) ) {
      if ( LIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6040019643854664944) ) ) {
        if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.1794951076842806192) ) ) {
          if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.08007185799211762045) ) ) {
            result[1] += -0.004495283414008691;
          } else {
            result[1] += -0.037092144330097915;
          }
        } else {
          result[1] += 0.011426741424370527;
        }
      } else {
        if ( LIKELY(  (data[42].missing != -1) && (data[42].fvalue <= (double)-0.01062435816985207206) ) ) {
          if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.2044093625456598062) ) ) {
            if ( UNLIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)0.5978075737164213477) ) ) {
              result[1] += -0.038220978531995235;
            } else {
              if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.6054551360476957411) ) ) {
                result[1] += -0.009759572849464873;
              } else {
                if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.2248098908822692976) ) ) {
                  if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.3371471741602719008) ) ) {
                    if ( UNLIKELY(  (data[61].missing != -1) && (data[61].fvalue <= (double)-0.1683539907328813756) ) ) {
                      result[1] += 0.030761390431199666;
                    } else {
                      if ( LIKELY(  (data[33].missing != -1) && (data[33].fvalue <= (double)-0.5520861781495131071) ) ) {
                        if ( LIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.749034681232501498) ) ) {
                          if ( LIKELY(  (data[33].missing != -1) && (data[33].fvalue <= (double)-0.5789780326811212463) ) ) {
                            if ( UNLIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.6197404376270408966) ) ) {
                              result[1] += -0.024254538850334885;
                            } else {
                              if ( LIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.6192635509156506624) ) ) {
                                result[1] += 0.025722110150917143;
                              } else {
                                result[1] += -0.005607091889616009;
                              }
                            }
                          } else {
                            result[1] += 0.04262526194592895;
                          }
                        } else {
                          result[1] += -0.05608523686385912;
                        }
                      } else {
                        result[1] += 0.042212643234815064;
                      }
                    }
                  } else {
                    result[1] += -0.04646617385133398;
                  }
                } else {
                  result[1] += 0.056370070071207194;
                }
              }
            }
          } else {
            result[1] += -0.03794759441847414;
          }
        } else {
          result[1] += 0.03301200706247189;
        }
      }
    } else {
      if ( LIKELY( !(data[40].missing != -1) || (data[40].fvalue <= (double)1.291571216689443524) ) ) {
        if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.3083892198998683942) ) ) {
          result[1] += -0.03413740077684859;
        } else {
          result[1] += 0.007193103077327683;
        }
      } else {
        result[1] += 0.013952474373103355;
      }
    }
  } else {
    if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
      if ( UNLIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.603941323245218542) ) ) {
        result[1] += 0.0016670992614038506;
      } else {
        result[1] += 0.03400592146658881;
      }
    } else {
      result[1] += -0.03612325771770222;
    }
  }
  if ( LIKELY( !(data[55].missing != -1) || (data[55].fvalue <= (double)1.9687275667312647) ) ) {
    if ( UNLIKELY(  (data[10].missing != -1) && (data[10].fvalue <= (double)-0.4504562131888413812) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.713419879289624137) ) ) {
        result[2] += 0.015983481086168108;
      } else {
        result[2] += -0.03572858159823887;
      }
    } else {
      result[2] += -0.03457618786870671;
    }
  } else {
    result[2] += 0.03982473777805773;
  }
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1845224968741556448) ) ) {
    if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)1.00000001800250948e-35) ) ) {
      result[3] += -0.0353000365882034;
    } else {
      result[3] += 0.03456176580378506;
    }
  } else {
    result[3] += -0.03481000144164748;
  }
  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.2752335735604075073) ) ) {
    result[4] += -0.031312092992988066;
  } else {
    result[4] += 0.03280418133163587;
  }
  if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.7544702801259169922) ) ) {
    result[5] += -0.013385131164638922;
  } else {
    result[5] += 0.03831296200941465;
  }
  if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[6] += -0.01650549754185945;
  } else {
    result[6] += 0.03711113433880363;
  }
  if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3728354207891853567) ) ) {
    result[7] += 0.013217860253064784;
  } else {
    result[7] += -0.034436171321060575;
  }
  if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6189299289389768033) ) ) {
    result[8] += -0.036122836134892346;
  } else {
    if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (double)1.490178253475586745) ) ) {
      result[8] += -0.0346149501158317;
    } else {
      result[8] += 0.036437393544796096;
    }
  }
  if ( UNLIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.7147321560568579146) ) ) {
    if ( LIKELY( !(data[83].missing != -1) || (data[83].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5215040603148534126) ) ) {
        result[9] += -0.028700695150062495;
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.713419879289624137) ) ) {
          result[9] += -0.006795957698627469;
        } else {
          result[9] += 0.04518033627096826;
        }
      }
    } else {
      if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.038896224531635992) ) ) {
        result[9] += 0.041730161763079164;
      } else {
        if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.7544702801259169922) ) ) {
          if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.8714145528018332199) ) ) {
            result[9] += 0.013586700178225972;
          } else {
            result[9] += -0.012951213070489997;
          }
        } else {
          if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.2423241881182066626) ) ) {
            result[9] += 0.0749143044910678;
          } else {
            result[9] += 0.0010894371077224748;
          }
        }
      }
    }
  } else {
    result[9] += -0.03444673444991825;
  }
  if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[10] += -0.02885278764125548;
  } else {
    result[10] += 0.034774834969116555;
  }
  if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02366561944154855004) ) ) {
    if ( UNLIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.619840163027092772) ) ) {
      if ( LIKELY(  (data[47].missing != -1) && (data[47].fvalue <= (double)-0.01598775013808414677) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9009104660841923407) ) ) {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-1.948957976892493393) ) ) {
            result[11] += 0.003969191778317343;
          } else {
            result[11] += -0.01731727956869607;
          }
        } else {
          result[11] += 0.02396695717850809;
        }
      } else {
        result[11] += -0.03709147552527287;
      }
    } else {
      result[11] += -0.032168743580736264;
    }
  } else {
    if ( UNLIKELY(  (data[47].missing != -1) && (data[47].fvalue <= (double)-0.01590525049479685205) ) ) {
      if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
        if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (double)1.00000001800250948e-35) ) ) {
          if ( LIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.5890421704732747843) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5142327377564889224) ) ) {
              result[11] += -0.007497305114214663;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8215697967491829568) ) ) {
                result[11] += 0.017813603424165797;
              } else {
                result[11] += 0.0018422366083731116;
              }
            }
          } else {
            result[11] += 0.04162461197136523;
          }
        } else {
          result[11] += -0.03468569419709266;
        }
      } else {
        result[11] += 0.03386847157874919;
      }
    } else {
      if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.919828219461336527) ) ) {
        if ( LIKELY( !(data[45].missing != -1) || (data[45].fvalue <= (double)1.00000001800250948e-35) ) ) {
          result[11] += 0.03451897779824105;
        } else {
          result[11] += -0.008841716975231454;
        }
      } else {
        if ( UNLIKELY(  (data[45].missing != -1) && (data[45].fvalue <= (double)-0.09293577863444217602) ) ) {
          result[11] += -0.03775817582314974;
        } else {
          result[11] += 0.022605335621578623;
        }
      }
    }
  }
  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.32011123242420747) ) ) {
    if ( LIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.2709289357124474162) ) ) {
      if ( LIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.2749445138003689393) ) ) {
        result[12] += -0.0009125010360543363;
      } else {
        result[12] += 0.060941706487542116;
      }
    } else {
      result[12] += -0.03475897506543334;
    }
  } else {
    result[12] += 0.04098300210728355;
  }
  if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.2434747188952851582) ) ) {
    if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.3083892198998683942) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.25526421801615129) ) ) {
        if ( LIKELY( !(data[75].missing != -1) || (data[75].fvalue <= (double)1.027923066938016605) ) ) {
          if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02377658519293713094) ) ) {
            if ( LIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.6198243377092070849) ) ) {
              if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1563059735742685918) ) ) {
                if ( UNLIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7816665169386970424) ) ) {
                  result[0] += 0.019149158009861538;
                } else {
                  result[0] += -0.05046803468850372;
                }
              } else {
                if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1558109468497091699) ) ) {
                  result[0] += 0.04041020618388485;
                } else {
                  result[0] += 0.013159676288640476;
                }
              }
            } else {
              if ( LIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.2207227011686356544) ) ) {
                result[0] += 0.03350999781336626;
              } else {
                if ( UNLIKELY(  (data[4].missing != -1) && (data[4].fvalue <= (double)-0.3859061909755484576) ) ) {
                  result[0] += 0.03674595504332799;
                } else {
                  result[0] += -0.018874858225670026;
                }
              }
            }
          } else {
            if ( LIKELY(  (data[58].missing != -1) && (data[58].fvalue <= (double)-0.4576213480695666136) ) ) {
              result[0] += 0.004508507340181969;
            } else {
              result[0] += -0.02887126989159054;
            }
          }
        } else {
          result[0] += 0.042952582097983055;
        }
      } else {
        result[0] += -0.04951345845587196;
      }
    } else {
      if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
        result[0] += -0.03456413010252319;
      } else {
        result[0] += 0.0021086375566503842;
      }
    }
  } else {
    result[0] += -0.03444315448160164;
  }
  if ( LIKELY( !(data[38].missing != -1) || (data[38].fvalue <= (double)1.355342907056062307) ) ) {
    if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.0237904559098773595) ) ) {
      if ( UNLIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5968190743969560286) ) ) {
        if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.8554970799520443814) ) ) {
          if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.08007185799211762045) ) ) {
            result[1] += -0.002010563289496668;
          } else {
            result[1] += -0.037975443695574394;
          }
        } else {
          result[1] += 0.009466784989209815;
        }
      } else {
        result[1] += -0.034384397995037896;
      }
    } else {
      if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
        if ( LIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5699021105360092543) ) ) {
          if ( LIKELY(  (data[4].missing != -1) && (data[4].fvalue <= (double)-0.5384757477610738752) ) ) {
            if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3690088772965603447) ) ) {
              if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.2248098908822692976) ) ) {
                if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.3194135100530759996) ) ) {
                  if ( UNLIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)0.5978075737164213477) ) ) {
                    result[1] += -0.022965696550168304;
                  } else {
                    if ( LIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.1006554473669119959) ) ) {
                      if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)5.819723833417278058) ) ) {
                        if ( LIKELY(  (data[33].missing != -1) && (data[33].fvalue <= (double)-0.573002065007430561) ) ) {
                          if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.6054551360476957411) ) ) {
                            result[1] += -0.010876251376164733;
                          } else {
                            if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7704629034599390636) ) ) {
                              if ( LIKELY(  (data[69].missing != -1) && (data[69].fvalue <= (double)-0.3921782569187367007) ) ) {
                                if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.0127493636678698407) ) ) {
                                  result[1] += 0.00912200153059711;
                                } else {
                                  result[1] += 0.0355101884508799;
                                }
                              } else {
                                result[1] += 0.0044954317738774025;
                              }
                            } else {
                              result[1] += -0.031429347589953416;
                            }
                          }
                        } else {
                          result[1] += -0.04800594773358547;
                        }
                      } else {
                        result[1] += 0.0406027763933678;
                      }
                    } else {
                      result[1] += 0.04008607286183905;
                    }
                  }
                } else {
                  result[1] += -0.04356240911696116;
                }
              } else {
                result[1] += 0.052171324954810076;
              }
            } else {
              result[1] += -0.021122811359950068;
            }
          } else {
            result[1] += -0.03749120147646319;
          }
        } else {
          if ( LIKELY(  (data[44].missing != -1) && (data[44].fvalue <= (double)-0.004674252151630617184) ) ) {
            if ( LIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-0.4141937032741632718) ) ) {
              result[1] += 0.032236849612842414;
            } else {
              result[1] += -0.0073288005801774945;
            }
          } else {
            result[1] += -0.030217990964245673;
          }
        }
      } else {
        result[1] += -0.035717271632799794;
      }
    }
  } else {
    if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)0.7277191341578289618) ) ) {
      result[1] += 0.034423380109838156;
    } else {
      result[1] += 0.013966800172821295;
    }
  }
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1699192084996526686) ) ) {
    if ( LIKELY( !(data[55].missing != -1) || (data[55].fvalue <= (double)1.9687275667312647) ) ) {
      if ( LIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.5903304115434165888) ) ) {
        result[2] += 0.012762242199058678;
      } else {
        result[2] += -0.013756951433975312;
      }
    } else {
      result[2] += 0.051892796816412214;
    }
  } else {
    result[2] += -0.034561678355016015;
  }
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1845224968741556448) ) ) {
    if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1847700102364353281) ) ) {
      result[3] += -0.03529408257709096;
    } else {
      result[3] += 0.03455484819239711;
    }
  } else {
    result[3] += -0.034799820990178455;
  }
  if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.9735579371226364964) ) ) {
    result[4] += 0.032056639904765594;
  } else {
    result[4] += -0.0320203896335333;
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5656860549069343547) ) ) {
    result[5] += 0.03536641367688146;
  } else {
    result[5] += -0.01791326813756558;
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7887848723834456344) ) ) {
    result[6] += -0.002643010571798773;
  } else {
    result[6] += 0.04281161019557039;
  }
  if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8851947168287664924) ) ) {
    result[7] += 0.012703740473605018;
  } else {
    result[7] += -0.03443593804364669;
  }
  if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6189299289389768033) ) ) {
    result[8] += -0.03609312869149868;
  } else {
    if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (double)2.986558014660257054) ) ) {
      result[8] += -0.02010775938184317;
    } else {
      result[8] += 0.03569003784178649;
    }
  }
  if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( UNLIKELY( !(data[83].missing != -1) || (data[83].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7021266540248007892) ) ) {
        result[9] += -0.03300568101282442;
      } else {
        result[9] += 0.009739919700185317;
      }
    } else {
      if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.038896224531635992) ) ) {
        result[9] += 0.04167412898781258;
      } else {
        if ( LIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.8594402036712854853) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6359230018345859436) ) ) {
            if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.7544702801259169922) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6223826552160477421) ) ) {
                result[9] += -0.010953118119112738;
              } else {
                result[9] += 0.03817436847940568;
              }
            } else {
              result[9] += 0.05407017488994378;
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.411986527813700709) ) ) {
              result[9] += -0.020357276780933367;
            } else {
              result[9] += 0.02995576109827306;
            }
          }
        } else {
          result[9] += -0.025804094019569443;
        }
      }
    }
  } else {
    result[9] += -0.030276078324704365;
  }
  if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[10] += -0.028522898339195565;
  } else {
    result[10] += 0.034757326566694155;
  }
  if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.2270910346818499626) ) ) {
    if ( LIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6280911155401268653) ) ) {
      if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7688623872486879396) ) ) {
        if ( LIKELY(  (data[31].missing != -1) && (data[31].fvalue <= (double)-0.5615249540168059106) ) ) {
          result[11] += 0.003266254910104378;
        } else {
          result[11] += -0.030654787904647197;
        }
      } else {
        result[11] += -0.03389042791923187;
      }
    } else {
      if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.9564359567862011913) ) ) {
        if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02367444626238122962) ) ) {
          result[11] += -0.02434483287526595;
        } else {
          result[11] += 0.034545169460240714;
        }
      } else {
        if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6198866917634735518) ) ) {
          if ( UNLIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5945876129808934651) ) ) {
            result[11] += 0.05338470928190035;
          } else {
            if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6198989865121078413) ) ) {
              result[11] += 0.003559416468161858;
            } else {
              result[11] += 0.03199239716343617;
            }
          }
        } else {
          result[11] += -0.007420714546722271;
        }
      }
    }
  } else {
    if ( UNLIKELY(  (data[12].missing != -1) && (data[12].fvalue <= (double)-1.128486328597585908) ) ) {
      result[11] += 0.003622133723661798;
    } else {
      if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
        result[11] += -0.03444821412261779;
      } else {
        result[11] += 0.023696472506754777;
      }
    }
  }
  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.32011123242420747) ) ) {
    if ( LIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)0.2078669411157570701) ) ) {
      if ( LIKELY(  (data[35].missing != -1) && (data[35].fvalue <= (double)-0.2376621971885264084) ) ) {
        result[12] += -0.02327585024943206;
      } else {
        result[12] += 0.011659788603861963;
      }
    } else {
      result[12] += 0.026176041453609817;
    }
  } else {
    result[12] += 0.03959113245788841;
  }
  if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.2434747188952851582) ) ) {
    if ( LIKELY(  (data[62].missing != -1) && (data[62].fvalue <= (double)-0.002452105269676800852) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.25526421801615129) ) ) {
        if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02376901934613134468) ) ) {
          if ( LIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.4549192254186560924) ) ) {
            if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1563059735742685918) ) ) {
              if ( UNLIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.6006947705406436855) ) ) {
                result[0] += 0.002181128544282288;
              } else {
                result[0] += -0.06223217184948584;
              }
            } else {
              if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1558109468497091699) ) ) {
                result[0] += 0.040600458105062597;
              } else {
                result[0] += 0.012607519167407044;
              }
            }
          } else {
            if ( LIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.3098210580521135182) ) ) {
              result[0] += 0.03197099690867635;
            } else {
              result[0] += 0.007124361440191817;
            }
          }
        } else {
          if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.3083892198998683942) ) ) {
            if ( LIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.3589765718219689039) ) ) {
              if ( LIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.3854362796163503524) ) ) {
                if ( LIKELY(  (data[71].missing != -1) && (data[71].fvalue <= (double)-0.4431534528014459684) ) ) {
                  result[0] += 0.0008649820008608321;
                } else {
                  result[0] += 0.01585567915644331;
                }
              } else {
                result[0] += 0.05027920254886321;
              }
            } else {
              result[0] += -0.007266846854629092;
            }
          } else {
            result[0] += -0.02403184818377158;
          }
        }
      } else {
        result[0] += -0.04892689775426773;
      }
    } else {
      result[0] += -0.031202195481382516;
    }
  } else {
    result[0] += -0.034442299485877785;
  }
  if ( LIKELY(  (data[59].missing != -1) && (data[59].fvalue <= (double)-0.3479392415564711016) ) ) {
    if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.4797701247966768001) ) ) {
        if ( LIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-0.5006032028397574551) ) ) {
          if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8124905999336901052) ) ) {
            result[1] += -0.02895404991208197;
          } else {
            if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.2044093625456598062) ) ) {
              if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7592592899811810847) ) ) {
                if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3692645890335377046) ) ) {
                  if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3696572892010386302) ) ) {
                    if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)0.9873454911718881899) ) ) {
                      if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)0.9316972172496786886) ) ) {
                        if ( LIKELY(  (data[61].missing != -1) && (data[61].fvalue <= (double)-0.1676694716615645397) ) ) {
                          if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)3.368407430064523922) ) ) {
                            result[1] += 0.0005491882095775797;
                          } else {
                            result[1] += 0.03306842896326687;
                          }
                        } else {
                          if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.3739466545699799416) ) ) {
                            result[1] += -0.058974742798368625;
                          } else {
                            result[1] += 0.03822159093924927;
                          }
                        }
                      } else {
                        result[1] += -0.06970929919437757;
                      }
                    } else {
                      if ( UNLIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)1.015169628132993163) ) ) {
                        result[1] += 0.03531859094955551;
                      } else {
                        if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.6438362138560046466) ) ) {
                          result[1] += -0.01460648842813041;
                        } else {
                          result[1] += 0.012713863277006387;
                        }
                      }
                    }
                  } else {
                    result[1] += -0.04350194219606879;
                  }
                } else {
                  result[1] += 0.04733821051537327;
                }
              } else {
                result[1] += -0.02859993913023089;
              }
            } else {
              result[1] += -0.01704418910329513;
            }
          }
        } else {
          if ( UNLIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.03889287964838449019) ) ) {
            result[1] += 0.018100897912773518;
          } else {
            result[1] += -0.035009408460597316;
          }
        }
      } else {
        if ( UNLIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.6198243377092070849) ) ) {
          result[1] += 0.0004703709446633127;
        } else {
          result[1] += 0.03383650866583071;
        }
      }
    } else {
      if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02207174774267025089) ) ) {
        if ( LIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)1.845457039550169709) ) ) {
          result[1] += -0.03446574255161352;
        } else {
          result[1] += 0.001521663834675063;
        }
      } else {
        result[1] += -0.004966291421252239;
      }
    }
  } else {
    if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
      if ( UNLIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.2709289357124474162) ) ) {
        result[1] += 0.017201524964155116;
      } else {
        result[1] += 0.03457667389158564;
      }
    } else {
      result[1] += -0.03615035260964488;
    }
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5865439505491081285) ) ) {
    result[2] += -0.02760717838059268;
  } else {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7021266540248007892) ) ) {
      result[2] += 0.04328609194712301;
    } else {
      if ( UNLIKELY(  (data[44].missing != -1) && (data[44].fvalue <= (double)-0.03868207892647129026) ) ) {
        result[2] += -0.026823881090225748;
      } else {
        result[2] += 0.014131311919215983;
      }
    }
  }
  if ( LIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.534698905014846404) ) ) {
    if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)0.9946455059545064037) ) ) {
      result[3] += -0.0347142316692536;
    } else {
      if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)1.043568031522789319) ) ) {
        result[3] += 0.03456603085202948;
      } else {
        result[3] += -0.037893715166758386;
      }
    }
  } else {
    result[3] += 0.0340275002023749;
  }
  if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.9735579371226364964) ) ) {
    result[4] += 0.03176391244277046;
  } else {
    result[4] += -0.03186535189952204;
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5656860549069343547) ) ) {
    result[5] += 0.034239576210674916;
  } else {
    result[5] += -0.017227537224768996;
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7887848723834456344) ) ) {
    result[6] += -0.0022582847415152743;
  } else {
    result[6] += 0.04134522575053388;
  }
  if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8851947168287664924) ) ) {
    result[7] += 0.012347620098667755;
  } else {
    result[7] += -0.0344357220003972;
  }
  if ( LIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.619334285637768045) ) ) {
    result[8] += -0.03606789645936315;
  } else {
    if ( LIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)9.477337471177632366) ) ) {
      result[8] += -0.019488145972701407;
    } else {
      result[8] += 0.03570717299313677;
    }
  }
  if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( UNLIKELY( !(data[83].missing != -1) || (data[83].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( UNLIKELY(  (data[44].missing != -1) && (data[44].fvalue <= (double)-0.03868272262560683988) ) ) {
        result[9] += -0.022742560957183147;
      } else {
        if ( UNLIKELY(  (data[44].missing != -1) && (data[44].fvalue <= (double)-0.03868207892647129026) ) ) {
          result[9] += 0.033401713439994964;
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.713419879289624137) ) ) {
            result[9] += -0.026026655831277678;
          } else {
            result[9] += 0.03576664532450015;
          }
        }
      }
    } else {
      if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.038896224531635992) ) ) {
        result[9] += 0.041673982068519584;
      } else {
        if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.7544702801259169922) ) ) {
          result[9] += 0.0021749091653532407;
        } else {
          if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.2423241881182066626) ) ) {
            result[9] += 0.06820593764117062;
          } else {
            result[9] += -0.000245284856434848;
          }
        }
      }
    }
  } else {
    result[9] += -0.030002229750943934;
  }
  if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[10] += -0.028173796312849532;
  } else {
    result[10] += 0.03474144467198155;
  }
  if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6040034004439017723) ) ) {
    if ( LIKELY( !(data[38].missing != -1) || (data[38].fvalue <= (double)1.334235260215556051) ) ) {
      if ( LIKELY(  (data[36].missing != -1) && (data[36].fvalue <= (double)-0.6369028947013902764) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6832277872550962527) ) ) {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-1.948957976892493393) ) ) {
            result[11] += 0.004612049915725657;
          } else {
            if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.4432578306330479112) ) ) {
              result[11] += -0.009708172083341557;
            } else {
              result[11] += -0.03471064544208059;
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8215697967491829568) ) ) {
            result[11] += 0.024357532509790843;
          } else {
            result[11] += 0.007071479122253888;
          }
        }
      } else {
        if ( LIKELY(  (data[56].missing != -1) && (data[56].fvalue <= (double)-0.0971641165574999438) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-0.5313858905757674611) ) ) {
            result[11] += -0.0057900079650237924;
          } else {
            result[11] += 0.031111238381870937;
          }
        } else {
          if ( UNLIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.4076512707803252034) ) ) {
            result[11] += 0.025868271198417007;
          } else {
            result[11] += -0.020333771994755598;
          }
        }
      }
    } else {
      result[11] += -0.03447505019067414;
    }
  } else {
    result[11] += -0.033928723117982784;
  }
  if ( LIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (double)0.301285017925520815) ) ) {
    if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (double)0.6108199825892823842) ) ) {
      result[12] += 0.025959556313477822;
    } else {
      result[12] += -0.006678394951024123;
    }
  } else {
    result[12] += -0.02289661641799455;
  }
  if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.2434747188952851582) ) ) {
    if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)1.406239143841617301) ) ) {
      if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)3.493068515723959155) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.25526421801615129) ) ) {
          if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02370849257168504073) ) ) {
            if ( LIKELY(  (data[36].missing != -1) && (data[36].fvalue <= (double)-0.7102313324244843296) ) ) {
              if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8124905999336901052) ) ) {
                result[0] += 0.016138280323186715;
              } else {
                if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.1300100187573274835) ) ) {
                  result[0] += -0.0040867678724306146;
                } else {
                  result[0] += 0.030738856734013116;
                }
              }
            } else {
              if ( LIKELY(  (data[71].missing != -1) && (data[71].fvalue <= (double)-0.1617477782743053372) ) ) {
                result[0] += 0.03060835277323431;
              } else {
                result[0] += 0.008200380274087947;
              }
            }
          } else {
            if ( LIKELY(  (data[36].missing != -1) && (data[36].fvalue <= (double)-0.618191645368454501) ) ) {
              if ( UNLIKELY(  (data[44].missing != -1) && (data[44].fvalue <= (double)-0.03863172127045684523) ) ) {
                result[0] += 0.008503162778120646;
              } else {
                if ( UNLIKELY(  (data[44].missing != -1) && (data[44].fvalue <= (double)-0.03657523449843864266) ) ) {
                  result[0] += -0.0310757981761631;
                } else {
                  result[0] += -0.00046300041491830103;
                }
              }
            } else {
              result[0] += -0.019112780203428256;
            }
          }
        } else {
          result[0] += -0.049633109001962473;
        }
      } else {
        result[0] += -0.05551145084624463;
      }
    } else {
      result[0] += -0.03453237291994873;
    }
  } else {
    result[0] += -0.034441564679080945;
  }
  if ( LIKELY( !(data[38].missing != -1) || (data[38].fvalue <= (double)1.355342907056062307) ) ) {
    if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY(  (data[79].missing != -1) && (data[79].fvalue <= (double)-0.4105093223159403948) ) ) {
        if ( UNLIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)0.5978075737164213477) ) ) {
          result[1] += -0.03245545622063375;
        } else {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.3678488213209678004) ) ) {
            if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)1.738597189121717124) ) ) {
              result[1] += 0.026432516002420744;
            } else {
              result[1] += -0.025378433854499935;
            }
          } else {
            if ( UNLIKELY(  (data[4].missing != -1) && (data[4].fvalue <= (double)-0.5384757477610738752) ) ) {
              if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.6054551360476957411) ) ) {
                if ( UNLIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7960711628399573803) ) ) {
                  result[1] += 0.03690525341474231;
                } else {
                  result[1] += -0.02640833271487215;
                }
              } else {
                if ( UNLIKELY(  (data[61].missing != -1) && (data[61].fvalue <= (double)-0.1683539907328813756) ) ) {
                  result[1] += 0.021585052704679426;
                } else {
                  if ( LIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6286960502461192979) ) ) {
                    if ( LIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6288268469591914434) ) ) {
                      if ( LIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6291579260977704369) ) ) {
                        if ( UNLIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6292192370248347322) ) ) {
                          result[1] += -0.006070881679244822;
                        } else {
                          result[1] += 0.022187050767609285;
                        }
                      } else {
                        result[1] += -0.04068322553921113;
                      }
                    } else {
                      result[1] += 0.028801699130776636;
                    }
                  } else {
                    result[1] += -0.032802443361178366;
                  }
                }
              }
            } else {
              result[1] += -0.03461341805818617;
            }
          }
        }
      } else {
        if ( UNLIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.4797701247966768001) ) ) {
          result[1] += 0.00035857925009331263;
        } else {
          result[1] += 0.033665763956451975;
        }
      }
    } else {
      if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (double)3.139560926486061554) ) ) {
        result[1] += -0.03300211213576227;
      } else {
        result[1] += 0.02731124589073909;
      }
    }
  } else {
    if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)0.7277191341578289618) ) ) {
      result[1] += 0.03438725123770024;
    } else {
      result[1] += 0.013149316897476799;
    }
  }
  if ( LIKELY( !(data[55].missing != -1) || (data[55].fvalue <= (double)1.9687275667312647) ) ) {
    if ( UNLIKELY(  (data[33].missing != -1) && (data[33].fvalue <= (double)-0.7268832326049657899) ) ) {
      if ( UNLIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.5903304115434165888) ) ) {
        result[2] += 0.016965000891221153;
      } else {
        result[2] += -0.012886655168245496;
      }
    } else {
      result[2] += -0.034720196758384295;
    }
  } else {
    result[2] += 0.03922170132717944;
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)0.9946455059545064037) ) ) {
    result[3] += -0.034705664891420414;
  } else {
    if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)1.043568031522789319) ) ) {
      result[3] += 0.034551179445599454;
    } else {
      result[3] += -0.037473969943431044;
    }
  }
  if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.209321689314693193) ) ) {
    result[4] += 0.03176283692804605;
  } else {
    result[4] += -0.03275591654154152;
  }
  if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.7544702801259169922) ) ) {
    result[5] += -0.012153921614522004;
  } else {
    result[5] += 0.03623698868343324;
  }
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1842749835118759061) ) ) {
    result[6] += 0.03357805871290212;
  } else {
    result[6] += -0.008809734566108866;
  }
  if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3728354207891853567) ) ) {
    result[7] += 0.011954639478034941;
  } else {
    result[7] += -0.03443552044023765;
  }
  if ( LIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.619334285637768045) ) ) {
    result[8] += -0.03605131035596546;
  } else {
    if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (double)2.986558014660257054) ) ) {
      result[8] += -0.018662670161168484;
    } else {
      result[8] += 0.03570552586770767;
    }
  }
  if ( UNLIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.7147321560568579146) ) ) {
    if ( LIKELY(  (data[33].missing != -1) && (data[33].fvalue <= (double)-0.6327617417443375247) ) ) {
      if ( LIKELY( !(data[83].missing != -1) || (data[83].fvalue <= (double)1.00000001800250948e-35) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7021266540248007892) ) ) {
          result[9] += -0.03283853010581217;
        } else {
          result[9] += 0.007690997998846976;
        }
      } else {
        if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.038896224531635992) ) ) {
          result[9] += 0.04247664227325859;
        } else {
          if ( UNLIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.6198734100881652109) ) ) {
            result[9] += 0.011713183122279574;
          } else {
            result[9] += -0.026035374416897156;
          }
        }
      }
    } else {
      result[9] += 0.05509614728869661;
    }
  } else {
    result[9] += -0.03444663124471838;
  }
  if ( UNLIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6224259836133295698) ) ) {
    if ( LIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.6180235554770452389) ) ) {
      result[10] += -0.013150552467942502;
    } else {
      result[10] += 0.0329370739440057;
    }
  } else {
    result[10] += -0.03443496379843056;
  }
  if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6040034004439017723) ) ) {
    if ( LIKELY( !(data[38].missing != -1) || (data[38].fvalue <= (double)1.334235260215556051) ) ) {
      if ( UNLIKELY(  (data[47].missing != -1) && (data[47].fvalue <= (double)-0.01610676601571592662) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6359230018345859436) ) ) {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-1.948957976892493393) ) ) {
            result[11] += 0.004258946984608907;
          } else {
            if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.7749658944394570703) ) ) {
              if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8124905999336901052) ) ) {
                result[11] += -0.030955554292296066;
              } else {
                result[11] += 0.005345997263412583;
              }
            } else {
              result[11] += -0.02766949123660107;
            }
          }
        } else {
          if ( LIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6016840383719205265) ) ) {
            if ( LIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6040019643854664944) ) ) {
              result[11] += 0.027265291171963614;
            } else {
              if ( UNLIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6039903039694579645) ) ) {
                result[11] += -0.02956020261595457;
              } else {
                result[11] += 0.006668253697132083;
              }
            }
          } else {
            result[11] += 0.038721490513583146;
          }
        }
      } else {
        if ( UNLIKELY(  (data[35].missing != -1) && (data[35].fvalue <= (double)-0.328090508794230018) ) ) {
          result[11] += -0.014728722417058148;
        } else {
          if ( UNLIKELY(  (data[44].missing != -1) && (data[44].fvalue <= (double)-0.03868272262560683988) ) ) {
            result[11] += -0.02192023055940146;
          } else {
            if ( LIKELY(  (data[43].missing != -1) && (data[43].fvalue <= (double)-0.02200525941372946312) ) ) {
              result[11] += 0.031083133475151254;
            } else {
              result[11] += 0.00062590519148705;
            }
          }
        }
      }
    } else {
      result[11] += -0.03447295974872535;
    }
  } else {
    result[11] += -0.03387107187798562;
  }
  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.32011123242420747) ) ) {
    if ( LIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)0.2078669411157570701) ) ) {
      result[12] += -0.0039688436553686635;
    } else {
      result[12] += 0.025436994800117244;
    }
  } else {
    result[12] += 0.038340909829569045;
  }
  if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.2434747188952851582) ) ) {
    if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)1.406239143841617301) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.25526421801615129) ) ) {
        if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02377658519293713094) ) ) {
          if ( LIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.4549192254186560924) ) ) {
            result[0] += 0.007300115839246612;
          } else {
            if ( LIKELY( !(data[68].missing != -1) || (data[68].fvalue <= (double)1.00000001800250948e-35) ) ) {
              result[0] += 0.02961649035906838;
            } else {
              result[0] += 0.001243120885693705;
            }
          }
        } else {
          if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.3083892198998683942) ) ) {
            if ( LIKELY( !(data[75].missing != -1) || (data[75].fvalue <= (double)0.5392652827504645918) ) ) {
              if ( LIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.3589765718219689039) ) ) {
                if ( LIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.3873983974651540874) ) ) {
                  result[0] += 0.0028563407390703923;
                } else {
                  result[0] += 0.045986829357816235;
                }
              } else {
                result[0] += -0.008336786906594252;
              }
            } else {
              result[0] += 0.03279982527199442;
            }
          } else {
            result[0] += -0.023277068138322754;
          }
        }
      } else {
        result[0] += -0.04872251215930287;
      }
    } else {
      result[0] += -0.034518453864258725;
    }
  } else {
    result[0] += -0.03444087484267481;
  }
  if ( LIKELY( !(data[38].missing != -1) || (data[38].fvalue <= (double)1.355342907056062307) ) ) {
    if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.0237904559098773595) ) ) {
      if ( UNLIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5968190743969560286) ) ) {
        if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.6569974455578183603) ) ) {
          if ( LIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)0.981082477173569889) ) ) {
            result[1] += -0.026964366392816366;
          } else {
            result[1] += 0.006817532411931239;
          }
        } else {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4134826703502541556) ) ) {
            result[1] += 0.023746796003606026;
          } else {
            result[1] += -0.020529108415784533;
          }
        }
      } else {
        result[1] += -0.034323596703531634;
      }
    } else {
      if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
        if ( LIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5699021105360092543) ) ) {
          if ( LIKELY(  (data[48].missing != -1) && (data[48].fvalue <= (double)-0.3064681704756380687) ) ) {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.3678488213209678004) ) ) {
              if ( LIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6201452162142294666) ) ) {
                if ( UNLIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7944706466287062563) ) ) {
                  result[1] += -0.006644398196190714;
                } else {
                  result[1] += 0.03475464879504523;
                }
              } else {
                result[1] += -0.012204079710612784;
              }
            } else {
              if ( LIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6284344568935479325) ) ) {
                if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.2121101247298024794) ) ) {
                  if ( LIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6291579260977704369) ) ) {
                    if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)4.062176223466247293) ) ) {
                      if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)3.368407430064523922) ) ) {
                        if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)1.980869843261078733) ) ) {
                          result[1] += 0.014553314332332408;
                        } else {
                          result[1] += -0.03948047727630574;
                        }
                      } else {
                        result[1] += 0.03143982701600879;
                      }
                    } else {
                      result[1] += -0.011865983819290125;
                    }
                  } else {
                    result[1] += -0.04268552792813264;
                  }
                } else {
                  if ( UNLIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.1958026162070415632) ) ) {
                    result[1] += 0.03327742417365421;
                  } else {
                    result[1] += -0.006090669197266328;
                  }
                }
              } else {
                result[1] += -0.03310527639735409;
              }
            }
          } else {
            result[1] += -0.037621405628549015;
          }
        } else {
          if ( LIKELY(  (data[54].missing != -1) && (data[54].fvalue <= (double)-0.004930467508098565835) ) ) {
            if ( LIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)1.00000001800250948e-35) ) ) {
              result[1] += 0.03272338860254361;
            } else {
              if ( UNLIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)0.7534186524697278342) ) ) {
                result[1] += -0.024769041256584908;
              } else {
                result[1] += 0.03509920529851881;
              }
            }
          } else {
            result[1] += -0.029656629426120486;
          }
        }
      } else {
        result[1] += -0.035687744126268;
      }
    }
  } else {
    if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
      result[1] += 0.03456300950804929;
    } else {
      result[1] += -0.03738565041586995;
    }
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5865439505491081285) ) ) {
    result[2] += -0.02700288254574484;
  } else {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7021266540248007892) ) ) {
      result[2] += 0.04266920998997983;
    } else {
      if ( UNLIKELY(  (data[44].missing != -1) && (data[44].fvalue <= (double)-0.03868207892647129026) ) ) {
        result[2] += -0.02545677808629474;
      } else {
        result[2] += 0.013231651782314184;
      }
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)0.9946455059545064037) ) ) {
    result[3] += -0.03469928994773465;
  } else {
    if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)1.00000001800250948e-35) ) ) {
      result[3] += -0.0373682909205258;
    } else {
      result[3] += 0.03454350766320382;
    }
  }
  if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (double)1.490178253475586745) ) ) {
    result[4] += -0.033087541018614004;
  } else {
    result[4] += 0.03266408443967156;
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.4405386810538912123) ) ) {
    if ( LIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-1.00000001800250948e-35) ) ) {
      result[5] += 0.007893359097590848;
    } else {
      result[5] += 0.05319626716514693;
    }
  } else {
    result[5] += -0.009808157757182343;
  }
  result[6] += 0;
  if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8851947168287664924) ) ) {
    result[7] += 0.01142210133134175;
  } else {
    result[7] += -0.03443532546637801;
  }
  if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6189299289389768033) ) ) {
    result[8] += -0.03602657220124343;
  } else {
    if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (double)2.986558014660257054) ) ) {
      result[8] += -0.01770195424100519;
    } else {
      result[8] += 0.03561313384527816;
    }
  }
  if ( UNLIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-0.4969520972243098855) ) ) {
    if ( UNLIKELY( !(data[83].missing != -1) || (data[83].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (double)1.525439072483760983) ) ) {
        result[9] += -0.026719465549081473;
      } else {
        result[9] += 0.00661401110363233;
      }
    } else {
      if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.038896224531635992) ) ) {
        result[9] += 0.041875694211669305;
      } else {
        result[9] += 0.009317521923487648;
      }
    }
  } else {
    result[9] += -0.02959043516256767;
  }
  if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[10] += -0.02744897265436665;
  } else {
    result[10] += 0.03471221664466704;
  }
  if ( LIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.5805449532955547776) ) ) {
    if ( LIKELY( !(data[38].missing != -1) || (data[38].fvalue <= (double)1.334235260215556051) ) ) {
      if ( LIKELY(  (data[36].missing != -1) && (data[36].fvalue <= (double)-0.6369028947013902764) ) ) {
        if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.4432578306330479112) ) ) {
          if ( LIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.5890421704732747843) ) ) {
            result[11] += 0.0032696607644026646;
          } else {
            result[11] += 0.03478225505957084;
          }
        } else {
          if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.2210479647687914329) ) ) {
            result[11] += -0.034562097102654066;
          } else {
            result[11] += 0.00599520550688259;
          }
        }
      } else {
        if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02367696821043500585) ) ) {
          if ( LIKELY(  (data[34].missing != -1) && (data[34].fvalue <= (double)-0.1419943173642288781) ) ) {
            result[11] += -0.026842383262707315;
          } else {
            result[11] += 0.021472465663730237;
          }
        } else {
          result[11] += 0.029045351840978242;
        }
      }
    } else {
      result[11] += -0.0344709552942011;
    }
  } else {
    result[11] += -0.035023151817282536;
  }
  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.32011123242420747) ) ) {
    result[12] += 0.005126375966245057;
  } else {
    result[12] += 0.03722911310224142;
  }
  if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.2434747188952851582) ) ) {
    if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)1.406239143841617301) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.25526421801615129) ) ) {
        if ( LIKELY( !(data[75].missing != -1) || (data[75].fvalue <= (double)1.027923066938016605) ) ) {
          if ( UNLIKELY(  (data[42].missing != -1) && (data[42].fvalue <= (double)-0.01068413760847902044) ) ) {
            if ( LIKELY(  (data[36].missing != -1) && (data[36].fvalue <= (double)-0.7102313324244843296) ) ) {
              if ( LIKELY(  (data[54].missing != -1) && (data[54].fvalue <= (double)-0.03673984168271277745) ) ) {
                if ( LIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.4004479622294817021) ) ) {
                  result[0] += 0.004691609957033432;
                } else {
                  result[0] += 0.05415756728993418;
                }
              } else {
                result[0] += -0.0330610247229977;
              }
            } else {
              result[0] += 0.02930898289916568;
            }
          } else {
            if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02377658519293713094) ) ) {
              result[0] += 0.017746022318716245;
            } else {
              result[0] += -0.00756934310438154;
            }
          }
        } else {
          result[0] += 0.03985172201250877;
        }
      } else {
        result[0] += -0.048585732549861926;
      }
    } else {
      result[0] += -0.03451978551238916;
    }
  } else {
    result[0] += -0.03444021134575056;
  }
  if ( LIKELY( !(data[38].missing != -1) || (data[38].fvalue <= (double)1.355342907056062307) ) ) {
    if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY(  (data[79].missing != -1) && (data[79].fvalue <= (double)-0.4105093223159403948) ) ) {
        if ( UNLIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)0.5978075737164213477) ) ) {
          result[1] += -0.03181818634264724;
        } else {
          if ( LIKELY(  (data[47].missing != -1) && (data[47].fvalue <= (double)-0.005976215679226037393) ) ) {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.3678488213209678004) ) ) {
              if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)1.376883408627355143) ) ) {
                if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8109270705380969835) ) ) {
                  result[1] += -0.005706434825337133;
                } else {
                  result[1] += 0.033146396398165676;
                }
              } else {
                result[1] += -0.021882031438955472;
              }
            } else {
              if ( UNLIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6307850244566913789) ) ) {
                result[1] += 0.04440006765662942;
              } else {
                if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.7906011883953875108) ) ) {
                  if ( LIKELY(  (data[71].missing != -1) && (data[71].fvalue <= (double)-0.4383681026444165574) ) ) {
                    result[1] += -0.03317218437994491;
                  } else {
                    result[1] += 0.018401837728959352;
                  }
                } else {
                  if ( LIKELY(  (data[61].missing != -1) && (data[61].fvalue <= (double)-0.1660626531978874332) ) ) {
                    if ( LIKELY(  (data[54].missing != -1) && (data[54].fvalue <= (double)-0.03828963855561979407) ) ) {
                      if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.2248098908822692976) ) ) {
                        if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.7859106002086083675) ) ) {
                          result[1] += 0.02594056770973336;
                        } else {
                          if ( UNLIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.8531516627117848861) ) ) {
                            result[1] += -0.06511627240156961;
                          } else {
                            if ( LIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.8481349665766537704) ) ) {
                              result[1] += 0.03728249617492171;
                            } else {
                              result[1] += -0.0053757639116926445;
                            }
                          }
                        }
                      } else {
                        result[1] += 0.03315921788802103;
                      }
                    } else {
                      result[1] += -0.027847591128965742;
                    }
                  } else {
                    result[1] += -0.03801634706383224;
                  }
                }
              }
            }
          } else {
            result[1] += -0.03465816906316068;
          }
        }
      } else {
        if ( UNLIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.4797701247966768001) ) ) {
          result[1] += 0.000843851686373277;
        } else {
          result[1] += 0.033484060937314514;
        }
      }
    } else {
      if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.3083892198998683942) ) ) {
        result[1] += -0.03452235667360381;
      } else {
        if ( LIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.03536874585329732174) ) ) {
          if ( UNLIKELY(  (data[43].missing != -1) && (data[43].fvalue <= (double)-0.260730972918452153) ) ) {
            result[1] += -0.004842370133737431;
          } else {
            result[1] += 0.034878259727528775;
          }
        } else {
          result[1] += -0.03398880144115828;
        }
      }
    }
  } else {
    if ( UNLIKELY(  (data[47].missing != -1) && (data[47].fvalue <= (double)-0.0161581592354734481) ) ) {
      result[1] += -0.0028085540542119474;
    } else {
      result[1] += 0.03370265893847421;
    }
  }
  if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
    result[2] += -0.026204574293512792;
  } else {
    if ( LIKELY( !(data[55].missing != -1) || (data[55].fvalue <= (double)1.9687275667312647) ) ) {
      result[2] += 0.004635763853766632;
    } else {
      result[2] += 0.039394227445720714;
    }
  }
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1845224968741556448) ) ) {
    if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1847700102364353281) ) ) {
      result[3] += -0.03528538132759183;
    } else {
      result[3] += 0.03452089320168928;
    }
  } else {
    result[3] += -0.03476927777935509;
  }
  if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (double)1.490178253475586745) ) ) {
    result[4] += -0.033002113135214256;
  } else {
    if ( UNLIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.9237435194776356662) ) ) {
      result[4] += 0.03775449218662237;
    } else {
      result[4] += 0.003360316215822507;
    }
  }
  if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.7544702801259169922) ) ) {
    result[5] += -0.011007046776827751;
  } else {
    result[5] += 0.03529324680717874;
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7887848723834456344) ) ) {
    result[6] += -0.001908890501782337;
  } else {
    result[6] += 0.039929950086374726;
  }
  if ( LIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.08007185799211762045) ) ) {
    result[7] += -0.028089516539399017;
  } else {
    result[7] += 0.015136242915475788;
  }
  if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6189299289389768033) ) ) {
    result[8] += -0.036014103098364704;
  } else {
    if ( LIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)9.477337471177632366) ) ) {
      result[8] += -0.016961121916316064;
    } else {
      result[8] += 0.035692756302943815;
    }
  }
  if ( UNLIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.7147321560568579146) ) ) {
    if ( LIKELY(  (data[33].missing != -1) && (data[33].fvalue <= (double)-0.6327617417443375247) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.411986527813700709) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7369570350073810783) ) ) {
          if ( LIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.07982434462983790946) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.713419879289624137) ) ) {
              result[9] += -0.009119206866510689;
            } else {
              result[9] += 0.035256723713544325;
            }
          } else {
            result[9] += 0.019453452072205907;
          }
        } else {
          result[9] += -0.01976906491329855;
        }
      } else {
        result[9] += 0.03345605479114992;
      }
    } else {
      result[9] += 0.05123458556284599;
    }
  } else {
    result[9] += -0.03444678529126677;
  }
  if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[10] += -0.027054866912921225;
  } else {
    result[10] += 0.03469820015330826;
  }
  if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6040034004439017723) ) ) {
    if ( LIKELY( !(data[38].missing != -1) || (data[38].fvalue <= (double)1.334235260215556051) ) ) {
      if ( UNLIKELY(  (data[50].missing != -1) && (data[50].fvalue <= (double)-0.07449910332263572077) ) ) {
        if ( LIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5405699588868239092) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6832277872550962527) ) ) {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-1.948957976892493393) ) ) {
              result[11] += 0.004866357443466852;
            } else {
              result[11] += -0.011414970456394466;
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8215697967491829568) ) ) {
              result[11] += 0.026936869906057613;
            } else {
              result[11] += 0.005446255067440064;
            }
          }
        } else {
          result[11] += -0.020473050983099667;
        }
      } else {
        if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02367696821043500585) ) ) {
          if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3122956670598038831) ) ) {
            result[11] += -0.037444867096666355;
          } else {
            result[11] += 0.009515794610016358;
          }
        } else {
          result[11] += 0.02727459449774273;
        }
      }
    } else {
      result[11] += -0.0344685489656066;
    }
  } else {
    result[11] += -0.03376072033432147;
  }
  if ( LIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (double)0.2762908174448318044) ) ) {
    result[12] += 0.018299120382552377;
  } else {
    result[12] += -0.01472548299009775;
  }
  if ( LIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.2433930824819977579) ) ) {
    if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)1.406239143841617301) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.25526421801615129) ) ) {
        if ( LIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.3589765718219689039) ) ) {
          if ( LIKELY(  (data[36].missing != -1) && (data[36].fvalue <= (double)-0.679715294562736716) ) ) {
            if ( LIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5968190743969560286) ) ) {
              if ( LIKELY(  (data[71].missing != -1) && (data[71].fvalue <= (double)-0.4180315107192469348) ) ) {
                result[0] += 0.006687234184706195;
              } else {
                result[0] += 0.05234766603447319;
              }
            } else {
              if ( UNLIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5919646671058724774) ) ) {
                result[0] += -0.01986924387116946;
              } else {
                if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.6999164834509911115) ) ) {
                  result[0] += 0.01954397615915841;
                } else {
                  if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.6420658958140484929) ) ) {
                    result[0] += -0.04494883014773604;
                  } else {
                    result[0] += 0.007325411898158433;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02370849257168504073) ) ) {
              result[0] += 0.03107868724043325;
            } else {
              if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02368705600793902591) ) ) {
                result[0] += -0.020839838239776132;
              } else {
                result[0] += 0.015444820283081188;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[36].missing != -1) || (data[36].fvalue <= (double)1.68463407618855876) ) ) {
            if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.4475989211545067237) ) ) {
              result[0] += -0.01643039930818333;
            } else {
              result[0] += 0.0027619103257160637;
            }
          } else {
            result[0] += 0.01916412349914581;
          }
        }
      } else {
        result[0] += -0.04849256307695849;
      }
    } else {
      result[0] += -0.034511138139268246;
    }
  } else {
    result[0] += -0.03443959135976882;
  }
  if ( LIKELY( !(data[62].missing != -1) || (data[62].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)0.1955775883392207593) ) ) {
      if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
        if ( LIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5699021105360092543) ) ) {
          if ( LIKELY( !(data[52].missing != -1) || (data[52].fvalue <= (double)1.00000001800250948e-35) ) ) {
            if ( UNLIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5875014015255205502) ) ) {
              if ( LIKELY(  (data[33].missing != -1) && (data[33].fvalue <= (double)-0.573002065007430561) ) ) {
                if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)3.9696737176793504) ) ) {
                  if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)1.042993765094097691) ) ) {
                    if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.07982434462983790946) ) ) {
                      result[1] += -0.010553358443792984;
                    } else {
                      result[1] += -0.03735841329867315;
                    }
                  } else {
                    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4134826703502541556) ) ) {
                      result[1] += 0.030299079846596185;
                    } else {
                      result[1] += -0.010717988361372872;
                    }
                  }
                } else {
                  result[1] += 0.031065006078840628;
                }
              } else {
                result[1] += -0.04697015818200207;
              }
            } else {
              result[1] += -0.034947558686679495;
            }
          } else {
            if ( LIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.03882911111201532706) ) ) {
              result[1] += 0.029215821894934515;
            } else {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.714712168740543663) ) ) {
                result[1] += 0.02285114346736759;
              } else {
                result[1] += -0.005807870725076963;
              }
            }
          }
        } else {
          if ( LIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.005581979393026918236) ) ) {
            result[1] += 0.02970443693594943;
          } else {
            result[1] += -0.025316376188700074;
          }
        }
      } else {
        result[1] += -0.03566739441526418;
      }
    } else {
      if ( LIKELY( !(data[40].missing != -1) || (data[40].fvalue <= (double)1.330426993420031234) ) ) {
        result[1] += -0.034833707328911494;
      } else {
        result[1] += 0.011031064977637584;
      }
    }
  } else {
    result[1] += 0.0344092572984529;
  }
  if ( LIKELY( !(data[55].missing != -1) || (data[55].fvalue <= (double)1.9687275667312647) ) ) {
    if ( LIKELY(  (data[70].missing != -1) && (data[70].fvalue <= (double)-0.1429235541307338764) ) ) {
      if ( UNLIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.5903304115434165888) ) ) {
        result[2] += 0.016699913813487337;
      } else {
        result[2] += -0.012040219078216709;
      }
    } else {
      result[2] += -0.032410386068017445;
    }
  } else {
    result[2] += 0.037620392906986364;
  }
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1845224968741556448) ) ) {
    if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1847700102364353281) ) ) {
      result[3] += -0.035292553816979884;
    } else {
      result[3] += 0.034512677047332074;
    }
  } else {
    result[3] += -0.03476307635442743;
  }
  if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (double)1.490178253475586745) ) ) {
    result[4] += -0.03291130415537726;
  } else {
    result[4] += 0.03239768198312943;
  }
  if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.7544702801259169922) ) ) {
    result[5] += -0.010246950286022245;
  } else {
    result[5] += 0.03436743190228967;
  }
  result[6] += 0;
  if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8851947168287664924) ) ) {
    result[7] += 0.0107675076821073;
  } else {
    result[7] += -0.03443502805644935;
  }
  if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6189299289389768033) ) ) {
    result[8] += -0.035984506609578075;
  } else {
    if ( LIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1696716951373729854) ) ) {
      result[8] += -0.010399615791824806;
    } else {
      result[8] += 0.031037342256693988;
    }
  }
  if ( UNLIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-0.4969520972243098855) ) ) {
    if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.147956477092209271) ) ) {
      result[9] += 0.026927775573338704;
    } else {
      result[9] += 0.005956189533029873;
    }
  } else {
    result[9] += -0.028974597477883692;
  }
  if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[10] += -0.026643983571447375;
  } else {
    result[10] += 0.03468475291682852;
  }
  if ( LIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.5805449532955547776) ) ) {
    if ( LIKELY( !(data[38].missing != -1) || (data[38].fvalue <= (double)1.334235260215556051) ) ) {
      if ( LIKELY(  (data[48].missing != -1) && (data[48].fvalue <= (double)-0.3060270100256516357) ) ) {
        if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.4432578306330479112) ) ) {
          if ( LIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.5890421704732747843) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5142327377564889224) ) ) {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-1.948957976892493393) ) ) {
                result[11] += 0.0028348060932344953;
              } else {
                result[11] += -0.016135795184130625;
              }
            } else {
              result[11] += 0.007602703584483662;
            }
          } else {
            result[11] += 0.04215374069101761;
          }
        } else {
          result[11] += -0.024346517114966132;
        }
      } else {
        if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02367696821043500585) ) ) {
          if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3122956670598038831) ) ) {
            result[11] += -0.0373352750286163;
          } else {
            result[11] += 0.009096792113353338;
          }
        } else {
          if ( UNLIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6272704920455660638) ) ) {
            result[11] += -0.005534962805719119;
          } else {
            result[11] += 0.0288884953887177;
          }
        }
      }
    } else {
      result[11] += -0.03446730851194761;
    }
  } else {
    result[11] += -0.03506258992374551;
  }
  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.32011123242420747) ) ) {
    if ( LIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.2709289357124474162) ) ) {
      if ( LIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.2749445138003689393) ) ) {
        result[12] += -0.001427687552213889;
      } else {
        result[12] += 0.06014099064975757;
      }
    } else {
      result[12] += -0.034830755886531624;
    }
  } else {
    result[12] += 0.035837582449286885;
  }
  if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.2434747188952851582) ) ) {
    if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)1.406239143841617301) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.25526421801615129) ) ) {
        if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02377658519293713094) ) ) {
          if ( LIKELY(  (data[36].missing != -1) && (data[36].fvalue <= (double)-0.7102313324244843296) ) ) {
            if ( LIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5970539650723311054) ) ) {
              result[0] += 0.013899218800064608;
            } else {
              if ( LIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (double)0.1418558953856384197) ) ) {
                result[0] += -0.00715340385333804;
              } else {
                result[0] += 0.037222996155464746;
              }
            }
          } else {
            if ( LIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.3228285899577809093) ) ) {
              result[0] += 0.03180576295186477;
            } else {
              result[0] += 0.00857700001218991;
            }
          }
        } else {
          if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.9673607451327957962) ) ) {
            result[0] += -0.015078478700172588;
          } else {
            if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.6632283173061124248) ) ) {
              result[0] += 0.006156383657374257;
            } else {
              if ( UNLIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.1782719052970157814) ) ) {
                result[0] += -0.026822064754895496;
              } else {
                result[0] += 0.0034348855794229197;
              }
            }
          }
        }
      } else {
        result[0] += -0.04838368506569393;
      }
    } else {
      result[0] += -0.034495652066747845;
    }
  } else {
    result[0] += -0.03443908481442496;
  }
  if ( LIKELY( !(data[38].missing != -1) || (data[38].fvalue <= (double)1.355342907056062307) ) ) {
    if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.4797701247966768001) ) ) {
        if ( LIKELY(  (data[36].missing != -1) && (data[36].fvalue <= (double)-0.7102313324244843296) ) ) {
          if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8124905999336901052) ) ) {
            result[1] += -0.0237413133671587;
          } else {
            if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.5406810279414914211) ) ) {
              if ( UNLIKELY(  (data[34].missing != -1) && (data[34].fvalue <= (double)-0.2541340377360981617) ) ) {
                if ( UNLIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5972105588559143419) ) ) {
                  result[1] += -0.021345060547893018;
                } else {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4134826703502541556) ) ) {
                    result[1] += 0.02974503836727137;
                  } else {
                    if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1602661873707439677) ) ) {
                      result[1] += 0.02334326283448139;
                    } else {
                      if ( LIKELY(  (data[55].missing != -1) && (data[55].fvalue <= (double)-0.0882920899926450814) ) ) {
                        result[1] += -0.04111812006580207;
                      } else {
                        result[1] += 0.006950547861601892;
                      }
                    }
                  }
                }
              } else {
                result[1] += 0.03468639966293941;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.6776903006272175789) ) ) {
                if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)3.693538166471440842) ) ) {
                  if ( LIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6286960502461192979) ) ) {
                    if ( LIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5972105588559143419) ) ) {
                      result[1] += -0.006432527594352445;
                    } else {
                      result[1] += 0.0313711957291873;
                    }
                  } else {
                    result[1] += -0.028083832202933635;
                  }
                } else {
                  result[1] += 0.028175061190831716;
                }
              } else {
                result[1] += -0.04130065647044879;
              }
            }
          }
        } else {
          result[1] += -0.035171884991126466;
        }
      } else {
        if ( UNLIKELY(  (data[4].missing != -1) && (data[4].fvalue <= (double)-0.5523457074688490342) ) ) {
          result[1] += 0.00022917908889878578;
        } else {
          result[1] += 0.033347203669341415;
        }
      }
    } else {
      if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.3083892198998683942) ) ) {
        result[1] += -0.03449356666305955;
      } else {
        if ( LIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.03536874585329732174) ) ) {
          if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-1.00000001800250948e-35) ) ) {
            result[1] += 0.03491531263379775;
          } else {
            result[1] += -0.006888913671141981;
          }
        } else {
          result[1] += -0.03355686620017901;
        }
      }
    }
  } else {
    if ( UNLIKELY(  (data[47].missing != -1) && (data[47].fvalue <= (double)-0.01614666338323774916) ) ) {
      result[1] += -0.0011006980593283302;
    } else {
      result[1] += 0.033667031093538934;
    }
  }
  if ( LIKELY( !(data[55].missing != -1) || (data[55].fvalue <= (double)1.9687275667312647) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.713419879289624137) ) ) {
      result[2] += 0.008231431694963109;
    } else {
      result[2] += -0.03536664710342353;
    }
  } else {
    result[2] += 0.03670714733211989;
  }
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1845224968741556448) ) ) {
    if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)1.00000001800250948e-35) ) ) {
      result[3] += -0.03528990314174868;
    } else {
      result[3] += 0.034504766196236505;
    }
  } else {
    result[3] += -0.0347553828154854;
  }
  if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.209321689314693193) ) ) {
    result[4] += 0.03166717267998163;
  } else {
    result[4] += -0.03238326096999304;
  }
  if ( LIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6177908756732227724) ) ) {
    result[5] += -0.006047861654679138;
  } else {
    result[5] += 0.034778102561049365;
  }
  result[6] += 0;
  if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.2902353283338193757) ) ) {
    result[7] += -0.03547931796189427;
  } else {
    if ( UNLIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.4797701247966768001) ) ) {
      result[7] += 0.024406094689392015;
    } else {
      result[7] += -0.034898968338625644;
    }
  }
  if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6189299289389768033) ) ) {
    result[8] += -0.03595848277103556;
  } else {
    result[8] += 0.014149282058156036;
  }
  if ( UNLIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.7147321560568579146) ) ) {
    if ( LIKELY( !(data[83].missing != -1) || (data[83].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7021266540248007892) ) ) {
        result[9] += -0.03244181600032161;
      } else {
        result[9] += 0.010386811652328194;
      }
    } else {
      if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.8166922260006254097) ) ) {
        result[9] += 0.04286470331653438;
      } else {
        result[9] += 0.009828804227651314;
      }
    }
  } else {
    result[9] += -0.03444711413777928;
  }
  if ( UNLIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7080427712211444513) ) ) {
    if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (double)1.00000001800250948e-35) ) ) {
      result[10] += -0.009184692506551606;
    } else {
      result[10] += 0.03467170584115246;
    }
  } else {
    result[10] += -0.03443410241294199;
  }
  if ( LIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.5805449532955547776) ) ) {
    if ( LIKELY( !(data[38].missing != -1) || (data[38].fvalue <= (double)1.334235260215556051) ) ) {
      if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-0.5313858905757674611) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5142327377564889224) ) ) {
          if ( UNLIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5831015787781427262) ) ) {
            if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.650710626636601841) ) ) {
              if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.6838843917094391545) ) ) {
                result[11] += -0.019793504017340594;
              } else {
                result[11] += 0.014331932441471101;
              }
            } else {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-1.948957976892493393) ) ) {
                result[11] += -0.004688492028753489;
              } else {
                result[11] += -0.03585170144990614;
              }
            }
          } else {
            result[11] += -0.0347896325073597;
          }
        } else {
          if ( LIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5464363892166609338) ) ) {
            result[11] += 0.008659730446826224;
          } else {
            result[11] += -0.01884612936945897;
          }
        }
      } else {
        if ( LIKELY(  (data[43].missing != -1) && (data[43].fvalue <= (double)-0.1610227532128209738) ) ) {
          if ( UNLIKELY(  (data[44].missing != -1) && (data[44].fvalue <= (double)-0.03868272262560683988) ) ) {
            result[11] += -0.023354487414939465;
          } else {
            result[11] += 0.02987284018094451;
          }
        } else {
          result[11] += 0.0010770084600903623;
        }
      }
    } else {
      result[11] += -0.0344653270984192;
    }
  } else {
    result[11] += -0.035085174022544616;
  }
  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.32011123242420747) ) ) {
    result[12] += 0.004841258721771631;
  } else {
    result[12] += 0.03482459444120389;
  }
  if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.2434747188952851582) ) ) {
    if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)1.406239143841617301) ) ) {
      if ( LIKELY( !(data[48].missing != -1) || (data[48].fvalue <= (double)0.724410502721068883) ) ) {
        if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.9673607451327957962) ) ) {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-2.207866689787819414) ) ) {
            result[0] += 0.04753032767947086;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.077338301598933734) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7369570350073810783) ) ) {
                result[0] += -0.02284130400120047;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8215697967491829568) ) ) {
                  result[0] += 0.026618226323696807;
                } else {
                  result[0] += -0.027552632203180567;
                }
              }
            } else {
              result[0] += -0.06759224587960358;
            }
          }
        } else {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4134826703502541556) ) ) {
            if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.5966104081910480472) ) ) {
              if ( UNLIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7736639358824413115) ) ) {
                result[0] += -0.007683451975641634;
              } else {
                result[0] += -0.036615058577786;
              }
            } else {
              if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.1913249152360226579) ) ) {
                result[0] += 0.015198547967637381;
              } else {
                result[0] += -0.010802454697535966;
              }
            }
          } else {
            if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.0164200224566713425) ) ) {
              if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.7906011883953875108) ) ) {
                if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.1794951076842806192) ) ) {
                  result[0] += 0.03286812538888396;
                } else {
                  if ( UNLIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.146880090638758759) ) ) {
                    result[0] += -0.014428629972333807;
                  } else {
                    result[0] += 0.035056510659676444;
                  }
                }
              } else {
                if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.1631875991615196753) ) ) {
                  result[0] += 0.0032482410176340386;
                } else {
                  result[0] += 0.025645539872042752;
                }
              }
            } else {
              if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.7343283214685151217) ) ) {
                result[0] += -0.04346851350624974;
              } else {
                result[0] += -0.0022706305801854614;
              }
            }
          }
        }
      } else {
        result[0] += 0.02119592727921108;
      }
    } else {
      result[0] += -0.03447927753843722;
    }
  } else {
    result[0] += -0.03443853265009212;
  }
  if ( LIKELY( !(data[62].missing != -1) || (data[62].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)0.1955775883392207593) ) ) {
      if ( LIKELY(  (data[48].missing != -1) && (data[48].fvalue <= (double)-0.2529345698455072733) ) ) {
        if ( LIKELY(  (data[44].missing != -1) && (data[44].fvalue <= (double)-0.03858111149894900144) ) ) {
          if ( LIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5968190743969560286) ) ) {
            if ( LIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.5905732247963905168) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.135342507482403285) ) ) {
                if ( LIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (double)0.3528810425547320162) ) ) {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.3678488213209678004) ) ) {
                    if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8124905999336901052) ) ) {
                      result[1] += -0.02858095532773059;
                    } else {
                      result[1] += 0.030407857373421887;
                    }
                  } else {
                    if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3692645890335377046) ) ) {
                      if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.7163142958512370706) ) ) {
                        if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3722965996291259239) ) ) {
                          result[1] += -0.00026594285679419985;
                        } else {
                          result[1] += 0.03165329821175512;
                        }
                      } else {
                        if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.6054551360476957411) ) ) {
                          result[1] += -0.026152728949367043;
                        } else {
                          if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3707988594554016415) ) ) {
                            result[1] += 0.028848701526914065;
                          } else {
                            result[1] += -0.006551195752824921;
                          }
                        }
                      }
                    } else {
                      result[1] += 0.047364553208920454;
                    }
                  }
                } else {
                  result[1] += -0.03764196487393995;
                }
              } else {
                result[1] += -0.046810032324383175;
              }
            } else {
              result[1] += -0.036319269785298286;
            }
          } else {
            result[1] += -0.02918628081992753;
          }
        } else {
          if ( UNLIKELY(  (data[21].missing != -1) && (data[21].fvalue <= (double)-0.4682841811706705548) ) ) {
            if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.8367973224042829505) ) ) {
              if ( UNLIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.6198252184603161297) ) ) {
                result[1] += -0.0384698550489715;
              } else {
                result[1] += 0.00500440795235065;
              }
            } else {
              if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.3055648554145966034) ) ) {
                result[1] += 0.03565232299638613;
              } else {
                result[1] += -0.01486713670103186;
              }
            }
          } else {
            result[1] += 0.029283403746193093;
          }
        }
      } else {
        result[1] += -0.030014424106981578;
      }
    } else {
      if ( LIKELY( !(data[40].missing != -1) || (data[40].fvalue <= (double)1.330426993420031234) ) ) {
        result[1] += -0.03482711188944578;
      } else {
        result[1] += 0.01002588422813153;
      }
    }
  } else {
    result[1] += 0.03437190482022468;
  }
  if ( UNLIKELY(  (data[33].missing != -1) && (data[33].fvalue <= (double)-0.7268832326049657899) ) ) {
    if ( UNLIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.5903304115434165888) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.713419879289624137) ) ) {
        result[2] += 0.03735059865734196;
      } else {
        result[2] += -0.007483397810726688;
      }
    } else {
      result[2] += -0.011444703257375451;
    }
  } else {
    result[2] += -0.017523574898719238;
  }
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1845224968741556448) ) ) {
    if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1847700102364353281) ) ) {
      result[3] += -0.03528817867539849;
    } else {
      result[3] += 0.034498660809816846;
    }
  } else {
    result[3] += -0.03474842134098383;
  }
  if ( UNLIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.6198546535548441483) ) ) {
    if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.211501521258686154) ) ) {
      result[4] += 0.03797236577926059;
    } else {
      result[4] += -0.010042030492951248;
    }
  } else {
    result[4] += -0.03444101122563322;
  }
  if ( LIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6177908756732227724) ) ) {
    result[5] += -0.005304571951914754;
  } else {
    result[5] += 0.03414010678304483;
  }
  result[6] += 0;
  if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.2902353283338193757) ) ) {
    result[7] += -0.035515751729676116;
  } else {
    if ( UNLIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.2854825927736091007) ) ) {
      result[7] += 0.02406406991938332;
    } else {
      result[7] += -0.03488523074414416;
    }
  }
  if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6189299289389768033) ) ) {
    result[8] += -0.03593761879157495;
  } else {
    result[8] += 0.01355012415399498;
  }
  if ( UNLIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-0.4969520972243098855) ) ) {
    if ( UNLIKELY( !(data[83].missing != -1) || (data[83].fvalue <= (double)1.00000001800250948e-35) ) ) {
      result[9] += -0.0012389563654022922;
    } else {
      if ( UNLIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.8024732276849618762) ) ) {
        result[9] += 0.04155690528545109;
      } else {
        result[9] += 0.008257754675930139;
      }
    }
  } else {
    result[9] += -0.028276523049850365;
  }
  if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[10] += -0.025772359898114213;
  } else {
    result[10] += 0.034661247305346865;
  }
  if ( LIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.5805449532955547776) ) ) {
    if ( LIKELY( !(data[38].missing != -1) || (data[38].fvalue <= (double)1.334235260215556051) ) ) {
      if ( LIKELY(  (data[50].missing != -1) && (data[50].fvalue <= (double)-0.07449910332263572077) ) ) {
        if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.4432578306330479112) ) ) {
          result[11] += 0.003310059991383692;
        } else {
          result[11] += -0.024596304105030758;
        }
      } else {
        if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02367696821043500585) ) ) {
          if ( LIKELY( !(data[40].missing != -1) || (data[40].fvalue <= (double)0.2692302541018967155) ) ) {
            result[11] += -0.03438551956300363;
          } else {
            result[11] += 0.009929704190275033;
          }
        } else {
          result[11] += 0.02598056363115704;
        }
      }
    } else {
      result[11] += -0.03446390689174792;
    }
  } else {
    result[11] += -0.03509975465027418;
  }
  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.32011123242420747) ) ) {
    result[12] += 0.0046679506858085945;
  } else {
    result[12] += 0.033876972250905746;
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)0.978337997431745543) ) ) {
    if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.3083892198998683942) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.246390969593790254) ) ) {
        if ( LIKELY( !(data[48].missing != -1) || (data[48].fvalue <= (double)0.3950585695011116782) ) ) {
          if ( LIKELY(  (data[51].missing != -1) && (data[51].fvalue <= (double)-0.005883070036681177853) ) ) {
            if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02376901934613134468) ) ) {
              if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02385917901946511474) ) ) {
                result[0] += 0.008246273649648726;
              } else {
                result[0] += 0.026487652490406417;
              }
            } else {
              result[0] += 0.0031440387212177253;
            }
          } else {
            result[0] += -0.025369069661504005;
          }
        } else {
          result[0] += 0.024416145780302025;
        }
      } else {
        result[0] += -0.03633711670137423;
      }
    } else {
      if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
        result[0] += -0.034553485162294714;
      } else {
        result[0] += -0.0013951990330108028;
      }
    }
  } else {
    if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)3.644550570957393543) ) ) {
      result[0] += -0.04044244982191891;
    } else {
      result[0] += 0.0139444214900796;
    }
  }
  if ( LIKELY( !(data[38].missing != -1) || (data[38].fvalue <= (double)1.355342907056062307) ) ) {
    if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.0237904559098773595) ) ) {
      if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3707623292072619869) ) ) {
        if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.6569974455578183603) ) ) {
          if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.08007185799211762045) ) ) {
            result[1] += 0.0020594293179007415;
          } else {
            result[1] += -0.0384189905103715;
          }
        } else {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4134826703502541556) ) ) {
            result[1] += 0.022162561816901016;
          } else {
            result[1] += -0.019087270043948442;
          }
        }
      } else {
        result[1] += -0.03420803573067164;
      }
    } else {
      if ( LIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.4540401115217268524) ) ) {
        if ( LIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5699021105360092543) ) ) {
          if ( LIKELY(  (data[4].missing != -1) && (data[4].fvalue <= (double)-0.5384757477610738752) ) ) {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.3678488213209678004) ) ) {
              if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.732050514389911533) ) ) {
                if ( UNLIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.3914927184801726967) ) ) {
                  result[1] += -0.007541780068329958;
                } else {
                  result[1] += 0.034383513986947084;
                }
              } else {
                result[1] += -0.011880169622108076;
              }
            } else {
              if ( LIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6284344568935479325) ) ) {
                if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.6054551360476957411) ) ) {
                  if ( LIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5982284184492060453) ) ) {
                    result[1] += 0.013544814479871636;
                  } else {
                    result[1] += -0.02583349506686945;
                  }
                } else {
                  if ( LIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5972105588559143419) ) ) {
                    if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7784654845161947945) ) ) {
                      if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.4818687682310768827) ) ) {
                        result[1] += 0.023919033883151614;
                      } else {
                        result[1] += -0.012156266344780604;
                      }
                    } else {
                      result[1] += -0.03874225408150737;
                    }
                  } else {
                    if ( UNLIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.1958026162070415632) ) ) {
                      result[1] += 0.03566311126498796;
                    } else {
                      result[1] += 0.00035762632247040394;
                    }
                  }
                }
              } else {
                result[1] += -0.03186098256305007;
              }
            }
          } else {
            result[1] += -0.03720187454365794;
          }
        } else {
          if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
            if ( LIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.008249425906171014428) ) ) {
              result[1] += 0.030808846202117785;
            } else {
              result[1] += -0.023223272029679685;
            }
          } else {
            result[1] += -0.038650406146110546;
          }
        }
      } else {
        result[1] += -0.03422529276436464;
      }
    }
  } else {
    if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)1.447052307228521295) ) ) {
      result[1] += 0.017864695997691835;
    } else {
      result[1] += 0.03451961825043771;
    }
  }
  if ( LIKELY( !(data[55].missing != -1) || (data[55].fvalue <= (double)1.9687275667312647) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.713419879289624137) ) ) {
      result[2] += 0.0077485064553433226;
    } else {
      result[2] += -0.03534132343271077;
    }
  } else {
    result[2] += 0.036166976688570565;
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)0.9946455059545064037) ) ) {
    result[3] += -0.034674784447205405;
  } else {
    if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)1.00000001800250948e-35) ) ) {
      result[3] += -0.03690867537437466;
    } else {
      result[3] += 0.034511569201963944;
    }
  }
  if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (double)1.490178253475586745) ) ) {
    result[4] += -0.032631707311511125;
  } else {
    result[4] += 0.03236960283189097;
  }
  if ( LIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6177908756732227724) ) ) {
    result[5] += -0.0047759285045880905;
  } else {
    result[5] += 0.03332836731054629;
  }
  result[6] += 0;
  if ( LIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.08007185799211762045) ) ) {
    result[7] += -0.0277618101876855;
  } else {
    result[7] += 0.01390835829709172;
  }
  if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6189299289389768033) ) ) {
    result[8] += -0.035917198741528614;
  } else {
    result[8] += 0.013614982353355058;
  }
  if ( UNLIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-0.4969520972243098855) ) ) {
    if ( UNLIKELY( !(data[83].missing != -1) || (data[83].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7021266540248007892) ) ) {
        result[9] += -0.031540840704835996;
      } else {
        result[9] += 0.008087175640004721;
      }
    } else {
      if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.038896224531635992) ) ) {
        result[9] += 0.04139944949116883;
      } else {
        result[9] += 0.007999371136576342;
      }
    }
  } else {
    result[9] += -0.02788450830928145;
  }
  if ( UNLIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6224259836133295698) ) ) {
    result[10] += 0.023035318711179392;
  } else {
    result[10] += -0.0344339918595835;
  }
  if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6040034004439017723) ) ) {
    if ( LIKELY( !(data[38].missing != -1) || (data[38].fvalue <= (double)1.334235260215556051) ) ) {
      if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)3.533379939164722039) ) ) {
        if ( UNLIKELY(  (data[50].missing != -1) && (data[50].fvalue <= (double)-0.07449910332263572077) ) ) {
          if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8851947168287664924) ) ) {
            result[11] += -0.02651229940592818;
          } else {
            result[11] += 0.0020499324972208786;
          }
        } else {
          if ( LIKELY(  (data[43].missing != -1) && (data[43].fvalue <= (double)-0.02401336578159246615) ) ) {
            if ( UNLIKELY(  (data[43].missing != -1) && (data[43].fvalue <= (double)-0.2706916556865458512) ) ) {
              result[11] += -0.012839689871705131;
            } else {
              result[11] += 0.02708160787328696;
            }
          } else {
            result[11] += -0.016101254372489153;
          }
        }
      } else {
        result[11] += 0.060017810665785196;
      }
    } else {
      result[11] += -0.03446246200253063;
    }
  } else {
    result[11] += -0.03352332423075602;
  }
  if ( LIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.2709289357124474162) ) ) {
    if ( LIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.3317229202528408916) ) ) {
      result[12] += 0.005567381199977504;
    } else {
      result[12] += 0.062280918262951575;
    }
  } else {
    result[12] += -0.01429838877721524;
  }
  if ( LIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.2433930824819977579) ) ) {
    if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.3083892198998683942) ) ) {
      if ( LIKELY( !(data[75].missing != -1) || (data[75].fvalue <= (double)1.027923066938016605) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.246390969593790254) ) ) {
          if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02377658519293713094) ) ) {
            if ( LIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.4549192254186560924) ) ) {
              result[0] += 0.006030976896956501;
            } else {
              if ( LIKELY( !(data[68].missing != -1) || (data[68].fvalue <= (double)1.00000001800250948e-35) ) ) {
                result[0] += 0.0289800927274908;
              } else {
                result[0] += -0.004688687326723031;
              }
            }
          } else {
            result[0] += 0.0007269888645918168;
          }
        } else {
          result[0] += -0.03598483463543721;
        }
      } else {
        result[0] += 0.04212898927025327;
      }
    } else {
      if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
        result[0] += -0.03455329735357116;
      } else {
        result[0] += -0.0006803043985192366;
      }
    }
  } else {
    result[0] += -0.03443766331575775;
  }
  if ( LIKELY( !(data[62].missing != -1) || (data[62].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.3055648554145966034) ) ) {
      if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
        if ( LIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5699021105360092543) ) ) {
          if ( LIKELY(  (data[47].missing != -1) && (data[47].fvalue <= (double)-0.01606145883454309503) ) ) {
            if ( UNLIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)0.5978075737164213477) ) ) {
              result[1] += -0.028106069398977234;
            } else {
              if ( LIKELY(  (data[34].missing != -1) && (data[34].fvalue <= (double)-0.2522573483044228682) ) ) {
                if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.3678488213209678004) ) ) {
                  if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.650710626636601841) ) ) {
                    result[1] += -0.0052166201070801225;
                  } else {
                    result[1] += 0.030996192270542084;
                  }
                } else {
                  if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3692645890335377046) ) ) {
                    if ( UNLIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6300408038006478639) ) ) {
                      result[1] += 0.023555325853677492;
                    } else {
                      if ( LIKELY(  (data[33].missing != -1) && (data[33].fvalue <= (double)-0.6506896447654095805) ) ) {
                        result[1] += -0.027016974600518717;
                      } else {
                        if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.7077341304289562762) ) ) {
                          if ( UNLIKELY(  (data[34].missing != -1) && (data[34].fvalue <= (double)-0.254425075134593226) ) ) {
                            result[1] += 0.025433673960333664;
                          } else {
                            if ( LIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5973671526394978004) ) ) {
                              result[1] += 0.019827514038796862;
                            } else {
                              result[1] += -0.02141446885192007;
                            }
                          }
                        } else {
                          result[1] += -0.03738199573889006;
                        }
                      }
                    }
                  } else {
                    result[1] += 0.044850368271202375;
                  }
                }
              } else {
                result[1] += -0.039425400607372284;
              }
            }
          } else {
            result[1] += -0.03655893546159864;
          }
        } else {
          if ( LIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.005581979393026918236) ) ) {
            result[1] += 0.03068930297260718;
          } else {
            result[1] += -0.02362129759039747;
          }
        }
      } else {
        result[1] += -0.03539122907190085;
      }
    } else {
      if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.4333347215023775068) ) ) {
        result[1] += -0.03481106858151869;
      } else {
        if ( UNLIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.562133551333246051) ) ) {
          result[1] += 0.02608624922410856;
        } else {
          result[1] += -0.019746821527924164;
        }
      }
    }
  } else {
    result[1] += 0.03433211336347692;
  }
  if ( LIKELY( !(data[55].missing != -1) || (data[55].fvalue <= (double)1.9687275667312647) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.713419879289624137) ) ) {
      result[2] += 0.007705276449089622;
    } else {
      result[2] += -0.03530751994585781;
    }
  } else {
    result[2] += 0.03540654204409096;
  }
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1845224968741556448) ) ) {
    if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1847700102364353281) ) ) {
      result[3] += -0.03528558761910438;
    } else {
      result[3] += 0.03448581684702223;
    }
  } else {
    result[3] += -0.03473734091048892;
  }
  if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.209321689314693193) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.05207477934246570322) ) ) {
      result[4] += 0.055489203478185346;
    } else {
      result[4] += 0.023328616557910183;
    }
  } else {
    result[4] += -0.03202036307156166;
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.4405386810538912123) ) ) {
    result[5] += 0.031253140492107256;
  } else {
    result[5] += -0.008355320358767104;
  }
  result[6] += 0;
  if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.2902353283338193757) ) ) {
    result[7] += -0.03556350308815314;
  } else {
    if ( UNLIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.2854825927736091007) ) ) {
      result[7] += 0.023399900668025195;
    } else {
      result[7] += -0.03486323240213359;
    }
  }
  if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6189299289389768033) ) ) {
    result[8] += -0.03588029919845441;
  } else {
    result[8] += 0.013401538968910191;
  }
  if ( LIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.7147321560568579146) ) ) {
    if ( LIKELY(  (data[33].missing != -1) && (data[33].fvalue <= (double)-0.6327617417443375247) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.411986527813700709) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7369570350073810783) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6223826552160477421) ) ) {
            result[9] += -0.005985758278925392;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6359230018345859436) ) ) {
              result[9] += 0.04149785702852113;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.713419879289624137) ) ) {
                result[9] += -0.010637760632516412;
              } else {
                result[9] += 0.032616786166167096;
              }
            }
          }
        } else {
          result[9] += -0.01947345710084182;
        }
      } else {
        result[9] += 0.031738181937670806;
      }
    } else {
      result[9] += 0.046966679933550935;
    }
  } else {
    result[9] += -0.034448339868885;
  }
  if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[10] += -0.02491374665470249;
  } else {
    result[10] += 0.03464166254365987;
  }
  if ( LIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.5805449532955547776) ) ) {
    if ( LIKELY( !(data[38].missing != -1) || (data[38].fvalue <= (double)1.334235260215556051) ) ) {
      if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)3.533379939164722039) ) ) {
        if ( LIKELY(  (data[50].missing != -1) && (data[50].fvalue <= (double)-0.07449910332263572077) ) ) {
          if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8851947168287664924) ) ) {
            result[11] += -0.028581706741803315;
          } else {
            result[11] += 0.0022423227615841917;
          }
        } else {
          if ( LIKELY(  (data[44].missing != -1) && (data[44].fvalue <= (double)-0.02258441023760578495) ) ) {
            if ( UNLIKELY(  (data[43].missing != -1) && (data[43].fvalue <= (double)-0.2706916556865458512) ) ) {
              result[11] += -0.012586584641563201;
            } else {
              result[11] += 0.027032138695672607;
            }
          } else {
            result[11] += -0.014391544048887844;
          }
        }
      } else {
        result[11] += 0.05831041614858976;
      }
    } else {
      result[11] += -0.03446121179281712;
    }
  } else {
    result[11] += -0.03514794610640715;
  }
  result[12] += 0;
  if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.2434747188952851582) ) ) {
    if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)1.406239143841617301) ) ) {
      if ( LIKELY( !(data[75].missing != -1) || (data[75].fvalue <= (double)1.027923066938016605) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.246390969593790254) ) ) {
          if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02377658519293713094) ) ) {
            if ( LIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.6198243377092070849) ) ) {
              result[0] += 0.004908705430041638;
            } else {
              result[0] += 0.02225867016758005;
            }
          } else {
            if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.9673607451327957962) ) ) {
              result[0] += -0.01895280802485783;
            } else {
              if ( LIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.4362251690692156569) ) ) {
                if ( LIKELY(  (data[71].missing != -1) && (data[71].fvalue <= (double)-0.4540088362338492445) ) ) {
                  if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.7544702801259169922) ) ) {
                    result[0] += 0.005689754504129244;
                  } else {
                    result[0] += -0.03107108603725275;
                  }
                } else {
                  result[0] += -0.026000950390134125;
                }
              } else {
                if ( UNLIKELY(  (data[71].missing != -1) && (data[71].fvalue <= (double)-0.3820792327257520604) ) ) {
                  if ( LIKELY(  (data[71].missing != -1) && (data[71].fvalue <= (double)-0.4079725535548350823) ) ) {
                    result[0] += 0.013429149523362043;
                  } else {
                    result[0] += 0.048976588574812276;
                  }
                } else {
                  result[0] += -0.002874996254506159;
                }
              }
            }
          }
        } else {
          result[0] += -0.03554736217442459;
        }
      } else {
        result[0] += 0.0384145158931535;
      }
    } else {
      result[0] += -0.03447298021713656;
    }
  } else {
    result[0] += -0.034437266910957144;
  }
  if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)1.425445338376630788) ) ) {
    if ( LIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.5905732247963905168) ) ) {
      if ( UNLIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.6198429758531422973) ) ) {
        if ( LIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6207507797498656998) ) ) {
          if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)1.098642039016307193) ) ) {
            if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.07982434462983790946) ) ) {
              if ( UNLIKELY(  (data[53].missing != -1) && (data[53].fvalue <= (double)-0.2527185796061401368) ) ) {
                result[1] += 0.00493553161048772;
              } else {
                if ( UNLIKELY(  (data[54].missing != -1) && (data[54].fvalue <= (double)-0.03632663637533790901) ) ) {
                  result[1] += -0.04102280633137145;
                } else {
                  result[1] += -0.0072330520868021265;
                }
              }
            } else {
              result[1] += -0.03862759622460904;
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.102546986980341481) ) ) {
              result[1] += -0.02589230408712962;
            } else {
              result[1] += 0.02264751872857561;
            }
          }
        } else {
          result[1] += -0.03184559658951222;
        }
      } else {
        if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.7984188353733526755) ) ) {
          if ( UNLIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.6197748285054841544) ) ) {
            if ( LIKELY(  (data[55].missing != -1) && (data[55].fvalue <= (double)-0.05987428500334582987) ) ) {
              result[1] += 0.03390819399119917;
            } else {
              result[1] += 0.07109976916196944;
            }
          } else {
            if ( LIKELY(  (data[55].missing != -1) && (data[55].fvalue <= (double)-0.1214839279321119764) ) ) {
              result[1] += 0.031733065661051156;
            } else {
              result[1] += -0.010643488711541188;
            }
          }
        } else {
          if ( UNLIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7896690979949527733) ) ) {
            result[1] += -0.034314461552076375;
          } else {
            if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
              if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)0.1199206648452488672) ) ) {
                if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.7906011883953875108) ) ) {
                  result[1] += -0.04167489771285313;
                } else {
                  if ( LIKELY(  (data[61].missing != -1) && (data[61].fvalue <= (double)-0.1631660566913856469) ) ) {
                    if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.7859106002086083675) ) ) {
                      result[1] += 0.02701792259137212;
                    } else {
                      if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.7655847180658988949) ) ) {
                        result[1] += -0.07363933099094191;
                      } else {
                        if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.7608941298791197516) ) ) {
                          result[1] += 0.03494821093781542;
                        } else {
                          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.3678488213209678004) ) ) {
                            result[1] += 0.034679464656649964;
                          } else {
                            if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.6889717776818397033) ) ) {
                              if ( LIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.749034681232501498) ) ) {
                                if ( LIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.8027583770133431829) ) ) {
                                  result[1] += -0.03486920220132877;
                                } else {
                                  result[1] += 0.0139136383856943;
                                }
                              } else {
                                result[1] += -0.05446116835631909;
                              }
                            } else {
                              if ( UNLIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5976020433148727662) ) ) {
                                result[1] += 0.04514591051851186;
                              } else {
                                if ( LIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6189680459437261195) ) ) {
                                  result[1] += -0.01884475658441942;
                                } else {
                                  result[1] += 0.018148567745518436;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  } else {
                    result[1] += -0.03955516598522179;
                  }
                }
              } else {
                result[1] += 0.034623311538861584;
              }
            } else {
              result[1] += -0.03678390503895383;
            }
          }
        }
      }
    } else {
      result[1] += -0.034608850185894456;
    }
  } else {
    result[1] += 0.034508986917624024;
  }
  if ( LIKELY( !(data[55].missing != -1) || (data[55].fvalue <= (double)1.9687275667312647) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.713419879289624137) ) ) {
      result[2] += 0.00738659932789085;
    } else {
      result[2] += -0.03525617498220744;
    }
  } else {
    result[2] += 0.03457671710487024;
  }
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1845224968741556448) ) ) {
    if ( LIKELY(  (data[53].missing != -1) && (data[53].fvalue <= (double)-0.269885761277829872) ) ) {
      result[3] += 0.034252318932655276;
    } else {
      result[3] += -0.024153761818488686;
    }
  } else {
    result[3] += -0.03473235804204366;
  }
  if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (double)1.490178253475586745) ) ) {
    result[4] += -0.032421397893978104;
  } else {
    result[4] += 0.032145337544187795;
  }
  if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.7544702801259169922) ) ) {
    result[5] += -0.008131495954425154;
  } else {
    result[5] += 0.03168109327255285;
  }
  result[6] += 0;
  if ( LIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.08007185799211762045) ) ) {
    result[7] += -0.027315151347967543;
  } else {
    result[7] += 0.013092822174434754;
  }
  if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6189299289389768033) ) ) {
    result[8] += -0.03584300949653593;
  } else {
    result[8] += 0.01384258768431921;
  }
  if ( UNLIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-0.4969520972243098855) ) ) {
    if ( UNLIKELY( !(data[83].missing != -1) || (data[83].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7021266540248007892) ) ) {
        result[9] += -0.03099058566504499;
      } else {
        result[9] += 0.007722067410736491;
      }
    } else {
      if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.038896224531635992) ) ) {
        result[9] += 0.04103085009278346;
      } else {
        result[9] += 0.00755724879295448;
      }
    }
  } else {
    result[9] += -0.027108989429818254;
  }
  if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[10] += -0.024413389910775758;
  } else {
    result[10] += 0.034632456558153106;
  }
  if ( LIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.5805449532955547776) ) ) {
    if ( LIKELY( !(data[38].missing != -1) || (data[38].fvalue <= (double)1.334235260215556051) ) ) {
      if ( LIKELY(  (data[50].missing != -1) && (data[50].fvalue <= (double)-0.07449910332263572077) ) ) {
        result[11] += 0.0015479319308865011;
      } else {
        if ( LIKELY(  (data[44].missing != -1) && (data[44].fvalue <= (double)-0.02258441023760578495) ) ) {
          if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02366057554279654349) ) ) {
            result[11] += -0.003805323518864934;
          } else {
            if ( UNLIKELY(  (data[44].missing != -1) && (data[44].fvalue <= (double)-0.03868243832515844832) ) ) {
              result[11] += 0.0006775885693430585;
            } else {
              result[11] += 0.03233590983334581;
            }
          }
        } else {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-0.4763760499233852252) ) ) {
            result[11] += -0.03490982891898443;
          } else {
            result[11] += 0.012224570956881472;
          }
        }
      }
    } else {
      result[11] += -0.03446044917967296;
    }
  } else {
    result[11] += -0.035172412604933735;
  }
  if ( LIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.2709289357124474162) ) ) {
    if ( LIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.3317229202528408916) ) ) {
      result[12] += 0.005753614405537742;
    } else {
      result[12] += 0.061665493504053676;
    }
  } else {
    result[12] += -0.013085074797812556;
  }
  if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.2434747188952851582) ) ) {
    if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.3083892198998683942) ) ) {
      if ( LIKELY( !(data[75].missing != -1) || (data[75].fvalue <= (double)1.027923066938016605) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.246390969593790254) ) ) {
          if ( LIKELY( !(data[36].missing != -1) || (data[36].fvalue <= (double)1.68463407618855876) ) ) {
            if ( LIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.3589765718219689039) ) ) {
              if ( LIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.4259476505907174859) ) ) {
                result[0] += 0.0036915001835551627;
              } else {
                result[0] += 0.02464618718030406;
              }
            } else {
              result[0] += -0.01015312491456371;
            }
          } else {
            result[0] += 0.027261352825112044;
          }
        } else {
          result[0] += -0.034835832474972246;
        }
      } else {
        result[0] += 0.041359086720745966;
      }
    } else {
      if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
        result[0] += -0.034555676370678905;
      } else {
        result[0] += -0.0014777909952664217;
      }
    }
  } else {
    result[0] += -0.03443686070303472;
  }
  if ( LIKELY( !(data[38].missing != -1) || (data[38].fvalue <= (double)1.355342907056062307) ) ) {
    if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.4797701247966768001) ) ) {
        if ( LIKELY(  (data[36].missing != -1) && (data[36].fvalue <= (double)-0.7102313324244843296) ) ) {
          if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8124905999336901052) ) ) {
            if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.08007185799211762045) ) ) {
              result[1] += -0.0003880077648473726;
            } else {
              result[1] += -0.03719351820198606;
            }
          } else {
            if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.2044093625456598062) ) ) {
              if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4134826703502541556) ) ) {
                result[1] += 0.024727589679986433;
              } else {
                if ( LIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6284344568935479325) ) ) {
                  if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.3817666597025218267) ) ) {
                    if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.490948661511711737) ) ) {
                      if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.7655847180658988949) ) ) {
                        result[1] += -0.00534312517035552;
                      } else {
                        result[1] += 0.023005957826970225;
                      }
                    } else {
                      result[1] += -0.0173300500592359;
                    }
                  } else {
                    result[1] += 0.018946489837964677;
                  }
                } else {
                  result[1] += -0.03184412976620353;
                }
              }
            } else {
              if ( LIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.6198429758531422973) ) ) {
                result[1] += -0.03283863117564588;
              } else {
                result[1] += -0.0009255690128165032;
              }
            }
          }
        } else {
          result[1] += -0.034940896928976055;
        }
      } else {
        if ( UNLIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.6198243377092070849) ) ) {
          result[1] += -0.0010623082160594953;
        } else {
          result[1] += 0.03317983548629315;
        }
      }
    } else {
      if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.3083892198998683942) ) ) {
        result[1] += -0.03443111660135377;
      } else {
        if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.2585244533665149169) ) ) {
          result[1] += 0.03436855510953314;
        } else {
          result[1] += -0.019598528573528094;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)0.7277191341578289618) ) ) {
      result[1] += 0.03425240020163763;
    } else {
      result[1] += 0.009364638663417729;
    }
  }
  if ( LIKELY( !(data[55].missing != -1) || (data[55].fvalue <= (double)1.9687275667312647) ) ) {
    if ( UNLIKELY(  (data[55].missing != -1) && (data[55].fvalue <= (double)-0.1338641925353428463) ) ) {
      result[2] += 0.005911305102841699;
    } else {
      result[2] += -0.028282395898639238;
    }
  } else {
    result[2] += 0.03366330923783497;
  }
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1845224968741556448) ) ) {
    if ( LIKELY(  (data[69].missing != -1) && (data[69].fvalue <= (double)-0.3983937022475129153) ) ) {
      result[3] += 0.03418372629941277;
    } else {
      result[3] += -0.019803798202763533;
    }
  } else {
    result[3] += -0.03472967361397841;
  }
  if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (double)1.490178253475586745) ) ) {
    result[4] += -0.03229920637982411;
  } else {
    result[4] += 0.031897087973248875;
  }
  if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.7544702801259169922) ) ) {
    result[5] += -0.007415930466515275;
  } else {
    result[5] += 0.03111983518476111;
  }
  result[6] += 0;
  if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-1.031327076639174445) ) ) {
    result[7] += 0.008584908593190303;
  } else {
    result[7] += -0.0344342719702973;
  }
  if ( LIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.619334285637768045) ) ) {
    result[8] += -0.03583118142893882;
  } else {
    result[8] += 0.013219434090556965;
  }
  if ( LIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.7147321560568579146) ) ) {
    if ( LIKELY(  (data[33].missing != -1) && (data[33].fvalue <= (double)-0.6327617417443375247) ) ) {
      if ( LIKELY( !(data[83].missing != -1) || (data[83].fvalue <= (double)1.00000001800250948e-35) ) ) {
        result[9] += -0.0035090526448171553;
      } else {
        if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6199223907873337991) ) ) {
          result[9] += 0.01806700741478522;
        } else {
          result[9] += -0.013360368313104946;
        }
      }
    } else {
      result[9] += 0.04328091787593518;
    }
  } else {
    result[9] += -0.034448887375871505;
  }
  if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[10] += -0.023890668227050348;
  } else {
    result[10] += 0.03462263765502722;
  }
  if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6040034004439017723) ) ) {
    if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (double)1.379645372371002709) ) ) {
      if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)3.533379939164722039) ) ) {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-0.5313858905757674611) ) ) {
          if ( LIKELY(  (data[44].missing != -1) && (data[44].fvalue <= (double)-0.03785811399678058048) ) ) {
            result[11] += 0.001676659145175708;
          } else {
            result[11] += -0.03163112246807172;
          }
        } else {
          if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.9564359567862011913) ) ) {
            if ( LIKELY(  (data[48].missing != -1) && (data[48].fvalue <= (double)-0.2311345148244155212) ) ) {
              result[11] += 0.035658595035266874;
            } else {
              result[11] += -0.005597678151621031;
            }
          } else {
            if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02376901934613134468) ) ) {
              result[11] += -0.03509891588911806;
            } else {
              if ( UNLIKELY(  (data[44].missing != -1) && (data[44].fvalue <= (double)-0.03867965754489898628) ) ) {
                result[11] += -0.029911644053233093;
              } else {
                if ( LIKELY(  (data[44].missing != -1) && (data[44].fvalue <= (double)-0.01486757981356116171) ) ) {
                  result[11] += 0.021376014640139065;
                } else {
                  result[11] += 0.0017427566985872825;
                }
              }
            }
          }
        }
      } else {
        result[11] += 0.056420944179339044;
      }
    } else {
      result[11] += -0.03446067867426256;
    }
  } else {
    result[11] += -0.033319189028869975;
  }
  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.32011123242420747) ) ) {
    result[12] += 0.00424222643757559;
  } else {
    result[12] += 0.033232851321096483;
  }
  if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.2434747188952851582) ) ) {
    if ( LIKELY(  (data[64].missing != -1) && (data[64].fvalue <= (double)-0.284429837325490209) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.246390969593790254) ) ) {
        if ( LIKELY( !(data[75].missing != -1) || (data[75].fvalue <= (double)1.027923066938016605) ) ) {
          if ( LIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1563059735742685918) ) ) {
            if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.7544702801259169922) ) ) {
              if ( LIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1731368822092889392) ) ) {
                if ( LIKELY(  (data[36].missing != -1) && (data[36].fvalue <= (double)-0.679715294562736716) ) ) {
                  result[0] += 0.002257220882597201;
                } else {
                  result[0] += 0.026500748745997373;
                }
              } else {
                if ( UNLIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.4545285182290580983) ) ) {
                  result[0] += -0.05008336790462842;
                } else {
                  result[0] += -0.010549824585744725;
                }
              }
            } else {
              result[0] += -0.026111391867597623;
            }
          } else {
            if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1558109468497091699) ) ) {
              result[0] += 0.03888223571402288;
            } else {
              if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.136326896897185579) ) ) {
                if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.219246319583834781) ) ) {
                  result[0] += 0.003908181500206758;
                } else {
                  result[0] += -0.04388711277037224;
                }
              } else {
                result[0] += 0.0119077410633415;
              }
            }
          }
        } else {
          result[0] += 0.03863425473835191;
        }
      } else {
        result[0] += -0.034606948940192665;
      }
    } else {
      result[0] += -0.029501292469807292;
    }
  } else {
    result[0] += -0.034436539717626106;
  }
  if ( LIKELY( !(data[62].missing != -1) || (data[62].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.3055648554145966034) ) ) {
      if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
        if ( LIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5699021105360092543) ) ) {
          if ( LIKELY( !(data[52].missing != -1) || (data[52].fvalue <= (double)1.00000001800250948e-35) ) ) {
            if ( UNLIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5875014015255205502) ) ) {
              if ( LIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.7147321560568579146) ) ) {
                if ( LIKELY(  (data[35].missing != -1) && (data[35].fvalue <= (double)-0.0772269881418178733) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.3993990747320345647) ) ) {
                    result[1] += 0.00338108465878175;
                  } else {
                    result[1] += -0.023711191611152947;
                  }
                } else {
                  result[1] += 0.020283366758726953;
                }
              } else {
                result[1] += -0.04864623086244432;
              }
            } else {
              result[1] += -0.0346319127931299;
            }
          } else {
            if ( LIKELY( !(data[52].missing != -1) || (data[52].fvalue <= (double)0.01546367856846388687) ) ) {
              result[1] += 0.028323998289175353;
            } else {
              if ( LIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.4357632690132274278) ) ) {
                result[1] += -0.007095400762241067;
              } else {
                result[1] += 0.009375829070050704;
              }
            }
          }
        } else {
          if ( LIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.005581979393026918236) ) ) {
            result[1] += 0.030200907219610728;
          } else {
            result[1] += -0.02277590208293067;
          }
        }
      } else {
        result[1] += -0.03535589872079014;
      }
    } else {
      if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.3831379803371622317) ) ) {
        result[1] += -0.03481757758209963;
      } else {
        if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3335197412289217511) ) ) {
          result[1] += 0.013289452210733783;
        } else {
          result[1] += -0.03252929995453655;
        }
      }
    }
  } else {
    result[1] += 0.03428664039712718;
  }
  if ( LIKELY( !(data[55].missing != -1) || (data[55].fvalue <= (double)1.9687275667312647) ) ) {
    result[2] += 0.00011687745588748065;
  } else {
    result[2] += 0.03281142560347782;
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)0.9946455059545064037) ) ) {
    result[3] += -0.03466041410440016;
  } else {
    if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)1.00000001800250948e-35) ) ) {
      result[3] += -0.03661825180830842;
    } else {
      result[3] += 0.03449319726040616;
    }
  }
  if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (double)1.490178253475586745) ) ) {
    result[4] += -0.03217035494675588;
  } else {
    result[4] += 0.03146892654389183;
  }
  result[5] += 0;
  result[6] += 0;
  if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.2902353283338193757) ) ) {
    result[7] += -0.03570838159787737;
  } else {
    if ( UNLIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5801683636132243249) ) ) {
      result[7] += 0.02216697773821069;
    } else {
      result[7] += -0.0348610942516522;
    }
  }
  if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6189299289389768033) ) ) {
    result[8] += -0.03578864775786688;
  } else {
    result[8] += 0.013381839516926303;
  }
  if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.4815484825403061886) ) ) {
    if ( LIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.5931070865636064449) ) ) {
      if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3688810214280717203) ) ) {
        result[9] += 0.007684120892019679;
      } else {
        result[9] += 0.04390865085578647;
      }
    } else {
      result[9] += -0.03487782665825614;
    }
  } else {
    result[9] += -0.042036130709146594;
  }
  if ( UNLIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6224259836133295698) ) ) {
    result[10] += 0.023397975768561962;
  } else {
    result[10] += -0.03443351184258907;
  }
  if ( LIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.6041784411470666472) ) ) {
    if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (double)1.379645372371002709) ) ) {
      if ( LIKELY(  (data[58].missing != -1) && (data[58].fvalue <= (double)-0.43713241359301519) ) ) {
        if ( LIKELY(  (data[47].missing != -1) && (data[47].fvalue <= (double)-0.005976215679226037393) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5142327377564889224) ) ) {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-1.948957976892493393) ) ) {
              result[11] += 0.002904828134199284;
            } else {
              result[11] += -0.020811148708480644;
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6129332218311954739) ) ) {
              result[11] += 0.029919749728121694;
            } else {
              result[11] += 0.004204670312720729;
            }
          }
        } else {
          result[11] += 0.020147616959264536;
        }
      } else {
        if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02367444626238122962) ) ) {
          result[11] += 0.0023633803022021526;
        } else {
          result[11] += 0.03174504378014681;
        }
      }
    } else {
      result[11] += -0.034458968512909596;
    }
  } else {
    result[11] += -0.03314103362049765;
  }
  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.32011123242420747) ) ) {
    result[12] += 0.004276278573713645;
  } else {
    result[12] += 0.032259923572446704;
  }
  if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.2434747188952851582) ) ) {
    if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.3083892198998683942) ) ) {
      if ( LIKELY( !(data[75].missing != -1) || (data[75].fvalue <= (double)1.027923066938016605) ) ) {
        if ( LIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.3589765718219689039) ) ) {
          if ( LIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.4362251690692156569) ) ) {
            if ( LIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.4406574440734786768) ) ) {
              result[0] += 0.003381771287451238;
            } else {
              result[0] += -0.017213123007657833;
            }
          } else {
            result[0] += 0.020385927076788313;
          }
        } else {
          result[0] += -0.0057556978648664785;
        }
      } else {
        result[0] += 0.04075420094328326;
      }
    } else {
      if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (double)1.525439072483760983) ) ) {
        result[0] += -0.038043920608937944;
      } else {
        result[0] += -0.005304998423082634;
      }
    }
  } else {
    result[0] += -0.03443617575220641;
  }
  if ( LIKELY( !(data[38].missing != -1) || (data[38].fvalue <= (double)1.355342907056062307) ) ) {
    if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.0237904559098773595) ) ) {
      if ( UNLIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5968190743969560286) ) ) {
        if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)1.042993765094097691) ) ) {
          result[1] += -0.019491640656030523;
        } else {
          result[1] += 0.008600880508502702;
        }
      } else {
        result[1] += -0.03413318264927983;
      }
    } else {
      if ( LIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.4540401115217268524) ) ) {
        if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.2854825927736091007) ) ) {
          if ( LIKELY(  (data[47].missing != -1) && (data[47].fvalue <= (double)-0.005976215679226037393) ) ) {
            if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.06442982007321247651) ) ) {
              if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.7405682477364100569) ) ) {
                result[1] += 0.022968686349974936;
              } else {
                if ( LIKELY(  (data[46].missing != -1) && (data[46].fvalue <= (double)-0.1298235919123840731) ) ) {
                  result[1] += 0.007311161131275746;
                } else {
                  result[1] += -0.03723604997131431;
                }
              }
            } else {
              if ( LIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5699021105360092543) ) ) {
                result[1] += -0.006474670686189301;
              } else {
                result[1] += 0.017708169582368476;
              }
            }
          } else {
            result[1] += -0.038095877591610976;
          }
        } else {
          if ( LIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)1.00000001800250948e-35) ) ) {
            result[1] += 0.03468853456731077;
          } else {
            result[1] += 0.003367167910248138;
          }
        }
      } else {
        result[1] += -0.03393639973684535;
      }
    }
  } else {
    if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)1.447052307228521295) ) ) {
      result[1] += 0.015287216372568878;
    } else {
      result[1] += 0.03449511662577439;
    }
  }
  if ( LIKELY( !(data[55].missing != -1) || (data[55].fvalue <= (double)1.9687275667312647) ) ) {
    result[2] += 0.000228157104964214;
  } else {
    result[2] += 0.031871081716034554;
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)0.9946455059545064037) ) ) {
    result[3] += -0.034658041769454286;
  } else {
    if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)1.00000001800250948e-35) ) ) {
      result[3] += -0.03653286336276871;
    } else {
      result[3] += 0.03448911136909346;
    }
  }
  if ( UNLIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.6198546535548441483) ) ) {
    if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.212591434922628997) ) ) {
      result[4] += 0.03900892027958385;
    } else {
      result[4] += 0.006891229631635653;
    }
  } else {
    result[4] += -0.03444034495364135;
  }
  result[5] += 0;
  result[6] += 0;
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.4178946120279953269) ) ) {
    result[7] += -0.0357804014757313;
  } else {
    if ( LIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.4804758948180142819) ) ) {
      result[7] += -0.017125632554324467;
    } else {
      result[7] += 0.018827158765815477;
    }
  }
  if ( LIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.619334285637768045) ) ) {
    result[8] += -0.035755143293432205;
  } else {
    result[8] += 0.01279011672031731;
  }
  if ( LIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.7147321560568579146) ) ) {
    if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6196424566529530331) ) ) {
      if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6199213037677842042) ) ) {
        result[9] += 0.009270686022853832;
      } else {
        result[9] += 0.03533122051655461;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7021266540248007892) ) ) {
        result[9] += -0.033423317470841186;
      } else {
        result[9] += 0.0072149877209978725;
      }
    }
  } else {
    result[9] += -0.034449836591541945;
  }
  if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[10] += -0.02293318116719201;
  } else {
    result[10] += 0.03460676835927072;
  }
  if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6040034004439017723) ) ) {
    if ( LIKELY( !(data[38].missing != -1) || (data[38].fvalue <= (double)1.334235260215556051) ) ) {
      if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)3.533379939164722039) ) ) {
        if ( LIKELY(  (data[47].missing != -1) && (data[47].fvalue <= (double)-0.005976215679226037393) ) ) {
          if ( LIKELY(  (data[58].missing != -1) && (data[58].fvalue <= (double)-0.43713241359301519) ) ) {
            if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.038896224531635992) ) ) {
              result[11] += -0.015189390718296133;
            } else {
              result[11] += 0.0016404589409930396;
            }
          } else {
            if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02366561944154855004) ) ) {
              result[11] += -0.0035236323037719213;
            } else {
              result[11] += 0.03199938884957104;
            }
          }
        } else {
          if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.9013888795957304412) ) ) {
            result[11] += 0.02901210786882235;
          } else {
            result[11] += -0.006559053837730058;
          }
        }
      } else {
        result[11] += 0.05541702091633834;
      }
    } else {
      result[11] += -0.03445758464361451;
    }
  } else {
    result[11] += -0.03308212178580174;
  }
  result[12] += 0;
  if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.2434747188952851582) ) ) {
    if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.3083892198998683942) ) ) {
      if ( LIKELY( !(data[75].missing != -1) || (data[75].fvalue <= (double)1.027923066938016605) ) ) {
        if ( LIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (double)1.182573130573190356) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.246390969593790254) ) ) {
            if ( LIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.3589765718219689039) ) ) {
              if ( LIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.4259476505907174859) ) ) {
                if ( LIKELY(  (data[36].missing != -1) && (data[36].fvalue <= (double)-0.5441044163918988819) ) ) {
                  if ( LIKELY(  (data[36].missing != -1) && (data[36].fvalue <= (double)-0.6413262145935735292) ) ) {
                    if ( LIKELY(  (data[36].missing != -1) && (data[36].fvalue <= (double)-0.7102313324244843296) ) ) {
                      result[0] += 0.00029510922629228536;
                    } else {
                      result[0] += 0.03573403049341092;
                    }
                  } else {
                    result[0] += -0.047094979580918676;
                  }
                } else {
                  result[0] += 0.02526171337258601;
                }
              } else {
                result[0] += 0.022527397397467536;
              }
            } else {
              if ( LIKELY( !(data[36].missing != -1) || (data[36].fvalue <= (double)0.2067176624512315486) ) ) {
                result[0] += -0.0030022184574272108;
              } else {
                result[0] += -0.03317923351123774;
              }
            }
          } else {
            result[0] += -0.0350174081359595;
          }
        } else {
          result[0] += 0.020292166754410042;
        }
      } else {
        result[0] += 0.040370141156600876;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8668003163047256487) ) ) {
        if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
          result[0] += -0.0345499247845896;
        } else {
          result[0] += 0.013098059867343017;
        }
      } else {
        result[0] += -0.03888840780706283;
      }
    }
  } else {
    result[0] += -0.0344358539899038;
  }
  if ( LIKELY( !(data[60].missing != -1) || (data[60].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)0.1955775883392207593) ) ) {
      if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
        if ( LIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5699021105360092543) ) ) {
          if ( UNLIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)0.5978075737164213477) ) ) {
            if ( UNLIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5933678318553576858) ) ) {
              result[1] += 0.010185323444713562;
            } else {
              result[1] += -0.03654135108996293;
            }
          } else {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.3678488213209678004) ) ) {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-2.130052910603410954) ) ) {
                result[1] += -0.027969942629004076;
              } else {
                result[1] += 0.027499151166752736;
              }
            } else {
              if ( LIKELY( !(data[52].missing != -1) || (data[52].fvalue <= (double)1.00000001800250948e-35) ) ) {
                if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3699951939963300185) ) ) {
                  if ( LIKELY(  (data[33].missing != -1) && (data[33].fvalue <= (double)-0.6058698872127293855) ) ) {
                    result[1] += -0.017618530324677386;
                  } else {
                    result[1] += 0.02692190700301408;
                  }
                } else {
                  result[1] += -0.03877073305801324;
                }
              } else {
                if ( LIKELY( !(data[52].missing != -1) || (data[52].fvalue <= (double)0.01546367856846388687) ) ) {
                  result[1] += 0.03020578573943462;
                } else {
                  if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.1958026162070415632) ) ) {
                    result[1] += 0.0019770947658760626;
                  } else {
                    result[1] += -0.02058608250146863;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.005581979393026918236) ) ) {
            result[1] += 0.028610411915797124;
          } else {
            result[1] += -0.021286637877032825;
          }
        }
      } else {
        result[1] += -0.035598398146374395;
      }
    } else {
      if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.3831379803371622317) ) ) {
        result[1] += -0.034882618380435666;
      } else {
        result[1] += 0.00790946708706244;
      }
    }
  } else {
    result[1] += 0.03402468337989835;
  }
  if ( LIKELY( !(data[55].missing != -1) || (data[55].fvalue <= (double)1.9687275667312647) ) ) {
    result[2] += 0.0003195252980532609;
  } else {
    result[2] += 0.0310052967048716;
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)0.9946455059545064037) ) ) {
    result[3] += -0.034653066846934436;
  } else {
    if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)1.00000001800250948e-35) ) ) {
      result[3] += -0.036470759638466535;
    } else {
      result[3] += 0.03448549562638569;
    }
  }
  if ( UNLIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.6198546535548441483) ) ) {
    if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (double)1.945333284487767989) ) ) {
      result[4] += 0.0010674875220844122;
    } else {
      result[4] += 0.03774100712850051;
    }
  } else {
    result[4] += -0.034440022810056765;
  }
  result[5] += 0;
  result[6] += 0;
  if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.2902353283338193757) ) ) {
    result[7] += -0.03574683987488737;
  } else {
    result[7] += 0.008836294200909874;
  }
  if ( LIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.619334285637768045) ) ) {
    result[8] += -0.035717608859958526;
  } else {
    result[8] += 0.012960767757918882;
  }
  if ( LIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.7147321560568579146) ) ) {
    if ( LIKELY(  (data[33].missing != -1) && (data[33].fvalue <= (double)-0.6327617417443375247) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.130001607170610045) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7369570350073810783) ) ) {
          result[9] += 0.005916863231814546;
        } else {
          result[9] += -0.03624841399142035;
        }
      } else {
        result[9] += 0.026150459589063608;
      }
    } else {
      result[9] += 0.03833283556277481;
    }
  } else {
    result[9] += -0.0344496172101395;
  }
  if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[10] += -0.02239828466623358;
  } else {
    result[10] += 0.03459781781874707;
  }
  if ( LIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.5805449532955547776) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)0.5688109224718773671) ) ) {
      if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)3.493068515723959155) ) ) {
        if ( UNLIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6286960502461192979) ) ) {
          if ( LIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6288268469591914434) ) ) {
            if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.8758359294256646832) ) ) {
              result[11] += -0.0034931446197793347;
            } else {
              result[11] += 0.019720320740284084;
            }
          } else {
            result[11] += -0.03452194301197265;
          }
        } else {
          if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.9564359567862011913) ) ) {
            if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.02451254558860394) ) ) {
              result[11] += 0.0005668870887273413;
            } else {
              result[11] += 0.03294277565120805;
            }
          } else {
            result[11] += 0.003591511111697764;
          }
        }
      } else {
        result[11] += 0.04805588872201129;
      }
    } else {
      result[11] += -0.03505664971491371;
    }
  } else {
    result[11] += -0.035257974398403336;
  }
  result[12] += 0;
  if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)0.978337997431745543) ) ) {
    if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)1.406239143841617301) ) ) {
      if ( LIKELY( !(data[75].missing != -1) || (data[75].fvalue <= (double)1.027923066938016605) ) ) {
        if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.9673607451327957962) ) ) {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-2.207866689787819414) ) ) {
            result[0] += 0.03994864013753924;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.08989913378123715) ) ) {
              result[0] += -0.010038023770642024;
            } else {
              result[0] += -0.051107583477206585;
            }
          }
        } else {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4134826703502541556) ) ) {
            result[0] += -0.006993274189016965;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.01928985497672836349) ) ) {
              result[0] += 0.021144753769975926;
            } else {
              result[0] += 0.006186816564558989;
            }
          }
        }
      } else {
        result[0] += 0.03763063354078989;
      }
    } else {
      result[0] += -0.03444732996191951;
    }
  } else {
    if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)3.644550570957393543) ) ) {
      result[0] += -0.04356538364496656;
    } else {
      result[0] += 0.012631297926066942;
    }
  }
  if ( LIKELY( !(data[62].missing != -1) || (data[62].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.5854739734574730958) ) ) {
      if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
        if ( LIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.4797701247966768001) ) ) {
          if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7576587737699298497) ) ) {
            if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.2121101247298024794) ) ) {
              if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7768649683049436705) ) ) {
                if ( LIKELY(  (data[35].missing != -1) && (data[35].fvalue <= (double)-0.1453997052674855239) ) ) {
                  if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.7984188353733526755) ) ) {
                    if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6198421527101086737) ) ) {
                      if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.4076512707803252034) ) ) {
                        result[1] += -0.008991131696792741;
                      } else {
                        result[1] += -0.04921162947950224;
                      }
                    } else {
                      result[1] += 0.030641492078620148;
                    }
                  } else {
                    result[1] += -0.048199875016653265;
                  }
                } else {
                  if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.7405682477364100569) ) ) {
                    result[1] += 0.031976525978428344;
                  } else {
                    if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.3817666597025218267) ) ) {
                      result[1] += -0.05085350733095003;
                    } else {
                      if ( LIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (double)0.3528810425547320162) ) ) {
                        if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.2248098908822692976) ) ) {
                          if ( LIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (double)0.1740655760761531667) ) ) {
                            result[1] += 0.032533828474201304;
                          } else {
                            result[1] += -0.034277678876232696;
                          }
                        } else {
                          result[1] += 0.05691370038328498;
                        }
                      } else {
                        result[1] += -0.03592467216620163;
                      }
                    }
                  }
                }
              } else {
                result[1] += -0.05337247387272024;
              }
            } else {
              if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8109270705380969835) ) ) {
                if ( LIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.4406574440734786768) ) ) {
                  result[1] += -0.036270787966348826;
                } else {
                  result[1] += 0.013862077512480354;
                }
              } else {
                if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4134826703502541556) ) ) {
                  result[1] += 0.03446056638170169;
                } else {
                  if ( UNLIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5969756681805393761) ) ) {
                    if ( UNLIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.1958026162070415632) ) ) {
                      result[1] += 0.03151689343927417;
                    } else {
                      result[1] += 0.00032712285792710057;
                    }
                  } else {
                    result[1] += -0.03473721386142802;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (double)0.01232802648723504806) ) ) {
              result[1] += -0.03511645385224249;
            } else {
              result[1] += 0.0008892864469061838;
            }
          }
        } else {
          if ( UNLIKELY(  (data[59].missing != -1) && (data[59].fvalue <= (double)-0.4724720329713996692) ) ) {
            result[1] += 0.0012631846194468457;
          } else {
            result[1] += 0.030156632534260746;
          }
        }
      } else {
        result[1] += -0.035644823479240514;
      }
    } else {
      result[1] += -0.03421006597159415;
    }
  } else {
    result[1] += 0.03421315474425081;
  }
  if ( UNLIKELY(  (data[33].missing != -1) && (data[33].fvalue <= (double)-0.7268832326049657899) ) ) {
    result[2] += 0.01158606116059223;
  } else {
    result[2] += -0.01899356513601925;
  }
  if ( LIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.534698905014846404) ) ) {
    if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)0.9946455059545064037) ) ) {
      result[3] += -0.034650268978648945;
    } else {
      if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)1.00000001800250948e-35) ) ) {
        result[3] += -0.03660634899677536;
      } else {
        result[3] += 0.03448868948820963;
      }
    }
  } else {
    result[3] += 0.03380886029371313;
  }
  if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (double)1.490178253475586745) ) ) {
    result[4] += -0.031778463240990124;
  } else {
    result[4] += 0.031086819941145264;
  }
  result[5] += 0;
  result[6] += 0;
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.4178946120279953269) ) ) {
    result[7] += -0.035835292285305895;
  } else {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.4276321378940930451) ) ) {
      result[7] += 0.03419275189427189;
    } else {
      result[7] += -0.0038710065511461315;
    }
  }
  if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6189299289389768033) ) ) {
    result[8] += -0.03568731410933689;
  } else {
    result[8] += 0.01256510376648065;
  }
  if ( LIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.7147321560568579146) ) ) {
    if ( LIKELY(  (data[33].missing != -1) && (data[33].fvalue <= (double)-0.6327617417443375247) ) ) {
      result[9] += 0.004946508882355867;
    } else {
      result[9] += 0.03618880817839548;
    }
  } else {
    result[9] += -0.034449406649196934;
  }
  if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[10] += -0.021824077158587227;
  } else {
    result[10] += 0.03458954013377084;
  }
  if ( LIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.5805449532955547776) ) ) {
    if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (double)1.379645372371002709) ) ) {
      if ( LIKELY(  (data[58].missing != -1) && (data[58].fvalue <= (double)-0.43713241359301519) ) ) {
        if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (double)1.525439072483760983) ) ) {
          if ( LIKELY( !(data[76].missing != -1) || (data[76].fvalue <= (double)1.106604851273200074) ) ) {
            if ( LIKELY(  (data[47].missing != -1) && (data[47].fvalue <= (double)-0.009140956055261207497) ) ) {
              result[11] += 0.0008782826261911538;
            } else {
              result[11] += 0.021353109086751892;
            }
          } else {
            result[11] += 0.03497706466302812;
          }
        } else {
          if ( UNLIKELY(  (data[47].missing != -1) && (data[47].fvalue <= (double)-0.01600533202890454948) ) ) {
            result[11] += 6.493895219973134e-05;
          } else {
            result[11] += -0.036797968570856154;
          }
        }
      } else {
        result[11] += 0.02139282251344089;
      }
    } else {
      result[11] += -0.03445882246630553;
    }
  } else {
    result[11] += -0.035282181126231056;
  }
  result[12] += 0;
  if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.2434747188952851582) ) ) {
    if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.3083892198998683942) ) ) {
      if ( LIKELY( !(data[75].missing != -1) || (data[75].fvalue <= (double)1.027923066938016605) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.246390969593790254) ) ) {
          if ( LIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1563059735742685918) ) ) {
            if ( UNLIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.4549192254186560924) ) ) {
              result[0] += -0.034894522288638645;
            } else {
              if ( LIKELY( !(data[36].missing != -1) || (data[36].fvalue <= (double)0.2067176624512315486) ) ) {
                if ( LIKELY(  (data[36].missing != -1) && (data[36].fvalue <= (double)-0.679715294562736716) ) ) {
                  result[0] += 0.000168470128997218;
                } else {
                  if ( UNLIKELY(  (data[36].missing != -1) && (data[36].fvalue <= (double)-0.618191645368454501) ) ) {
                    result[0] += 0.03599011316303243;
                  } else {
                    if ( LIKELY(  (data[36].missing != -1) && (data[36].fvalue <= (double)-0.5441044163918988819) ) ) {
                      result[0] += -0.034901684575844236;
                    } else {
                      result[0] += 0.016951723310071568;
                    }
                  }
                }
              } else {
                result[0] += -0.025253912686573277;
              }
            }
          } else {
            result[0] += 0.009440219193281672;
          }
        } else {
          result[0] += -0.033244470954244855;
        }
      } else {
        result[0] += 0.03949339321235273;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8668003163047256487) ) ) {
        if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
          result[0] += -0.03454972140999848;
        } else {
          result[0] += 0.012252557157183805;
        }
      } else {
        result[0] += -0.03873012142121655;
      }
    }
  } else {
    result[0] += -0.0344352860379324;
  }
  if ( LIKELY( !(data[38].missing != -1) || (data[38].fvalue <= (double)1.355342907056062307) ) ) {
    if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY(  (data[79].missing != -1) && (data[79].fvalue <= (double)-0.4105093223159403948) ) ) {
        if ( UNLIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.4404152440484555009) ) ) {
          result[1] += -0.026510795415637053;
        } else {
          if ( UNLIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6307850244566913789) ) ) {
            result[1] += 0.0336550850073956;
          } else {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.3678488213209678004) ) ) {
              if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7496561927136741188) ) ) {
                result[1] += 0.025636256152644272;
              } else {
                result[1] += -0.019103608557997337;
              }
            } else {
              if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.6054551360476957411) ) ) {
                if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6198896086497162061) ) ) {
                  result[1] += -0.014031340529261761;
                } else {
                  result[1] += -0.039791379030206554;
                }
              } else {
                if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.5875742630700072633) ) ) {
                  result[1] += 0.022589345711791855;
                } else {
                  if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.7655847180658988949) ) ) {
                    result[1] += -0.07046310808362914;
                  } else {
                    if ( UNLIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6286960502461192979) ) ) {
                      if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.7499494241099683434) ) ) {
                        result[1] += 0.037730243348486535;
                      } else {
                        result[1] += 0.00011780421265811638;
                      }
                    } else {
                      if ( UNLIKELY(  (data[4].missing != -1) && (data[4].fvalue <= (double)-0.5523457074688490342) ) ) {
                        result[1] += 0.004405048101666633;
                      } else {
                        result[1] += -0.0292298076665302;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      } else {
        result[1] += 0.02752716376869542;
      }
    } else {
      if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.3083892198998683942) ) ) {
        result[1] += -0.03435020320235784;
      } else {
        if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.2585244533665149169) ) ) {
          result[1] += 0.03423127330256054;
        } else {
          result[1] += -0.019237000740407587;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)0.7277191341578289618) ) ) {
      result[1] += 0.034172518409922595;
    } else {
      result[1] += 0.007404939856089924;
    }
  }
  if ( LIKELY( !(data[55].missing != -1) || (data[55].fvalue <= (double)1.9687275667312647) ) ) {
    result[2] += 0.000390302600929609;
  } else {
    result[2] += 0.030469081371179287;
  }
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1845224968741556448) ) ) {
    if ( LIKELY(  (data[54].missing != -1) && (data[54].fvalue <= (double)-0.03891070079245161767) ) ) {
      result[3] += 0.03416070371765004;
    } else {
      result[3] += -0.009098446800158956;
    }
  } else {
    result[3] += -0.034706039275171;
  }
  if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6198989865121078413) ) ) {
    if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.212591434922628997) ) ) {
      result[4] += 0.0386828734810625;
    } else {
      result[4] += 0.004870882772860743;
    }
  } else {
    result[4] += -0.03443961137530291;
  }
  result[5] += 0;
  result[6] += 0;
  if ( LIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.5905732247963905168) ) ) {
    result[7] += -0.03464057608485719;
  } else {
    result[7] += 0.007933269959490695;
  }
  if ( LIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.6192635509156506624) ) ) {
    result[8] += -0.03565752094117104;
  } else {
    result[8] += 0.012305924215680322;
  }
  if ( LIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.7147321560568579146) ) ) {
    if ( LIKELY(  (data[33].missing != -1) && (data[33].fvalue <= (double)-0.6327617417443375247) ) ) {
      result[9] += 0.004781657718560855;
    } else {
      result[9] += 0.034436882050982505;
    }
  } else {
    result[9] += -0.03444927592856108;
  }
  if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[10] += -0.021235949415411647;
  } else {
    result[10] += 0.03458062856521489;
  }
  if ( LIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.5805449532955547776) ) ) {
    if ( LIKELY( !(data[38].missing != -1) || (data[38].fvalue <= (double)1.334235260215556051) ) ) {
      if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)3.493068515723959155) ) ) {
        if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.056440621248962985) ) ) {
          result[11] += -0.013935636635784645;
        } else {
          if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.9564359567862011913) ) ) {
            if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8109270705380969835) ) ) {
              result[11] += -0.0026421000381626147;
            } else {
              result[11] += 0.030574915867819737;
            }
          } else {
            if ( LIKELY(  (data[58].missing != -1) && (data[58].fvalue <= (double)-0.2684545888943229985) ) ) {
              result[11] += 0.0005963435085566954;
            } else {
              result[11] += 0.029581229828654302;
            }
          }
        }
      } else {
        result[11] += 0.0465833331391624;
      }
    } else {
      result[11] += -0.03445660530221497;
    }
  } else {
    result[11] += -0.035308494120253324;
  }
  result[12] += 0;
  if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.2434747188952851582) ) ) {
    if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)1.406239143841617301) ) ) {
      if ( LIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1563059735742685918) ) ) {
        if ( LIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.3589765718219689039) ) ) {
          if ( UNLIKELY(  (data[35].missing != -1) && (data[35].fvalue <= (double)-0.5392591459871025616) ) ) {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.2414338405504446172) ) ) {
              result[0] += 0.03297174550119772;
            } else {
              result[0] += -0.048898954215022904;
            }
          } else {
            if ( LIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.4362251690692156569) ) ) {
              if ( LIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.4406574440734786768) ) ) {
                result[0] += 0.003317597725144226;
              } else {
                result[0] += -0.01915492005950103;
              }
            } else {
              result[0] += 0.014942803787341398;
            }
          }
        } else {
          result[0] += -0.027473353026217073;
        }
      } else {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-1.563490236986021076) ) ) {
          result[0] += -0.0024273855895623176;
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5865439505491081285) ) ) {
            result[0] += 0.027104074154744633;
          } else {
            result[0] += 0.0052222780442623155;
          }
        }
      }
    } else {
      result[0] += -0.03440904163130666;
    }
  } else {
    result[0] += -0.03443501490178872;
  }
  if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)1.425445338376630788) ) ) {
    if ( LIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.5905732247963905168) ) ) {
      if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
        if ( LIKELY(  (data[79].missing != -1) && (data[79].fvalue <= (double)-0.4105093223159403948) ) ) {
          if ( LIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.6195321345175198724) ) ) {
            if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7672618710374367046) ) ) {
              if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.8714145528018332199) ) ) {
                if ( UNLIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5973671526394978004) ) ) {
                  if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)0.5978075737164213477) ) ) {
                    result[1] += -0.025306250327190607;
                  } else {
                    result[1] += 0.004431715224745242;
                  }
                } else {
                  result[1] += -0.03462489276465354;
                }
              } else {
                if ( UNLIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5971322619641227236) ) ) {
                  result[1] += 0.028477261191439545;
                } else {
                  if ( UNLIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7688623872486879396) ) ) {
                    result[1] += -0.013289583261859346;
                  } else {
                    result[1] += 0.015086432793280534;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)2.030172297149825944) ) ) {
                result[1] += -0.03472377427074333;
              } else {
                result[1] += 0.0038271092639859173;
              }
            }
          } else {
            if ( UNLIKELY(  (data[71].missing != -1) && (data[71].fvalue <= (double)-0.4661712332868198083) ) ) {
              if ( LIKELY(  (data[55].missing != -1) && (data[55].fvalue <= (double)-0.1349236657889104907) ) ) {
                result[1] += 0.01507369274028833;
              } else {
                result[1] += -0.02806013542706211;
              }
            } else {
              result[1] += 0.024137509519826496;
            }
          }
        } else {
          if ( LIKELY(  (data[51].missing != -1) && (data[51].fvalue <= (double)-0.08024094977407417173) ) ) {
            result[1] += 0.031193939417768202;
          } else {
            result[1] += -0.0027759282777167302;
          }
        }
      } else {
        result[1] += -0.03555462351119927;
      }
    } else {
      result[1] += -0.03462575374054426;
    }
  } else {
    result[1] += 0.03448050611473799;
  }
  if ( LIKELY(  (data[48].missing != -1) && (data[48].fvalue <= (double)-0.3016588699077107916) ) ) {
    result[2] += 0.012217192264865397;
  } else {
    result[2] += -0.0157681348602573;
  }
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1845224968741556448) ) ) {
    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-2.159438343690451845) ) ) {
      result[3] += -0.006118776622138826;
    } else {
      result[3] += 0.0342701952926665;
    }
  } else {
    result[3] += -0.03470217427034513;
  }
  if ( UNLIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.6198546535548441483) ) ) {
    result[4] += 0.028350956581334043;
  } else {
    result[4] += -0.03443953237996386;
  }
  result[5] += 0;
  result[6] += 0;
  if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.2902353283338193757) ) ) {
    result[7] += -0.03585611457334245;
  } else {
    result[7] += 0.008414212371494863;
  }
  if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6189299289389768033) ) ) {
    result[8] += -0.03563919496355294;
  } else {
    result[8] += 0.012649979503255217;
  }
  if ( LIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.5931070865636064449) ) ) {
    if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1842749835118759061) ) ) {
      result[9] += -0.02388801054767963;
    } else {
      result[9] += 0.009110746729928978;
    }
  } else {
    result[9] += -0.0349864406552685;
  }
  if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[10] += -0.020639563229857428;
  } else {
    result[10] += 0.03457368467219088;
  }
  if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6040034004439017723) ) ) {
    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7607808275900734829) ) ) {
      if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (double)2.211403389904619932) ) ) {
        if ( LIKELY(  (data[47].missing != -1) && (data[47].fvalue <= (double)-0.005976215679226037393) ) ) {
          result[11] += 0.001998448978727317;
        } else {
          if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.9013888795957304412) ) ) {
            result[11] += 0.02811811886673782;
          } else {
            result[11] += -0.006594676541015777;
          }
        }
      } else {
        result[11] += 0.04239991452119464;
      }
    } else {
      result[11] += -0.03749286845206537;
    }
  } else {
    result[11] += -0.03269891973710081;
  }
  result[12] += 0;
}

