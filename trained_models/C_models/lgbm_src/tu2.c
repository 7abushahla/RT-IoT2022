
#include "header.h"

void predict_unit2(union Entry* data, double* result) {
  unsigned int tmp;
  if ( UNLIKELY( !(data[84].missing != -1) || (data[84].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02376901934613134468) ) ) {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4134826703502541556) ) ) {
        result[0] += 0.003417389581062747;
      } else {
        if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.8166922260006254097) ) ) {
          result[0] += -0.004891831726418024;
        } else {
          if ( LIKELY(  (data[58].missing != -1) && (data[58].fvalue <= (double)-0.01474274395022307817) ) ) {
            result[0] += 0.03361246854455734;
          } else {
            result[0] += 0.0039046327504744264;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)0.7925765324441547133) ) ) {
        if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)6.015862565909510629) ) ) {
          if ( UNLIKELY(  (data[33].missing != -1) && (data[33].fvalue <= (double)-0.7268832326049657899) ) ) {
            result[0] += 0.0014525361691002739;
          } else {
            result[0] += -0.03200628824206146;
          }
        } else {
          if ( UNLIKELY(  (data[61].missing != -1) && (data[61].fvalue <= (double)-0.1593100249445873751) ) ) {
            result[0] += 0.026183857908035398;
          } else {
            result[0] += -0.03365212354899612;
          }
        }
      } else {
        if ( LIKELY(  (data[36].missing != -1) && (data[36].fvalue <= (double)-0.679715294562736716) ) ) {
          if ( LIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.3748908814441545556) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.237056773201435922) ) ) {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.256068938597715734) ) ) {
                if ( LIKELY(  (data[55].missing != -1) && (data[55].fvalue <= (double)-0.01730959326324889649) ) ) {
                  result[0] += -0.03608153441787246;
                } else {
                  result[0] += 0.011156406853252337;
                }
              } else {
                if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6198816725514879611) ) ) {
                  result[0] += 0.032581819351675;
                } else {
                  if ( UNLIKELY(  (data[33].missing != -1) && (data[33].fvalue <= (double)-0.6521836366838321686) ) ) {
                    result[0] += 0.034159778031478606;
                  } else {
                    if ( LIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.6892214870717320307) ) ) {
                      if ( LIKELY(  (data[33].missing != -1) && (data[33].fvalue <= (double)-0.5789780326811212463) ) ) {
                        if ( UNLIKELY(  (data[33].missing != -1) && (data[33].fvalue <= (double)-0.6462076690101414833) ) ) {
                          result[0] += -0.0361913556950744;
                        } else {
                          if ( UNLIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.9009845571232156791) ) ) {
                            result[0] += 0.05388876388725442;
                          } else {
                            if ( LIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.8481349665766537704) ) ) {
                              result[0] += -0.02614762716982287;
                            } else {
                              result[0] += 0.03131412192383748;
                            }
                          }
                        }
                      } else {
                        result[0] += -0.03886250828075158;
                      }
                    } else {
                      result[0] += 0.017919503917107837;
                    }
                  }
                }
              }
            } else {
              result[0] += -0.03923846414489987;
            }
          } else {
            result[0] += 0.03892997884093116;
          }
        } else {
          result[0] += 0.032227104330361675;
        }
      }
    }
  } else {
    if ( UNLIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.4432578306330479112) ) ) {
      if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (double)1.278053921918260949) ) ) {
        if ( UNLIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6318848485338518506) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6223826552160477421) ) ) {
            result[0] += 0.05049990349688087;
          } else {
            result[0] += -0.02272402685591048;
          }
        } else {
          result[0] += -0.026166257313599704;
        }
      } else {
        result[0] += 0.03483762310186831;
      }
    } else {
      if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (double)1.490178253475586745) ) ) {
        result[0] += -0.034333889228534975;
      } else {
        if ( UNLIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.2854825927736091007) ) ) {
          result[0] += 0.05672745008305041;
        } else {
          if ( UNLIKELY(  (data[22].missing != -1) && (data[22].fvalue <= (double)-0.5740772844739022718) ) ) {
            result[0] += 0.013948283537609388;
          } else {
            result[0] += -0.031198397138692328;
          }
        }
      }
    }
  }
  if ( UNLIKELY(  (data[33].missing != -1) && (data[33].fvalue <= (double)-0.6992443821141464122) ) ) {
    if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.2854825927736091007) ) ) {
      if ( UNLIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.4432578306330479112) ) ) {
        if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.1794951076842806192) ) ) {
          if ( UNLIKELY(  (data[3].missing != -1) && (data[3].fvalue <= (double)-0.5866807462802454687) ) ) {
            result[1] += 0.04390007226164255;
          } else {
            result[1] += -0.03425950234063292;
          }
        } else {
          if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7496561927136741188) ) ) {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4134826703502541556) ) ) {
              result[1] += 0.04164686058500303;
            } else {
              result[1] += -0.034647896902855725;
            }
          } else {
            result[1] += -0.022539325573351903;
          }
        }
      } else {
        if ( LIKELY(  (data[31].missing != -1) && (data[31].fvalue <= (double)-0.3016933224626943688) ) ) {
          result[1] += -0.03517381896018682;
        } else {
          result[1] += -0.004578789819200081;
        }
      }
    } else {
      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-0.5497225041265615397) ) ) {
        if ( UNLIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)9.477337471177632366) ) ) {
          result[1] += 0.010230739900727577;
        } else {
          result[1] += -0.03527959172170089;
        }
      } else {
        result[1] += 0.03286402318963664;
      }
    }
  } else {
    if ( LIKELY( !(data[38].missing != -1) || (data[38].fvalue <= (double)1.355342907056062307) ) ) {
      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-0.5313858905757674611) ) ) {
        if ( LIKELY(  (data[42].missing != -1) && (data[42].fvalue <= (double)-0.01069125934659924219) ) ) {
          if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6197590622800944749) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.01928985497672836349) ) ) {
              result[1] += 0.009469629691062997;
            } else {
              if ( LIKELY(  (data[33].missing != -1) && (data[33].fvalue <= (double)-0.6118458548864200708) ) ) {
                result[1] += -0.005882338856030441;
              } else {
                result[1] += -0.022270542460714315;
              }
            }
          } else {
            if ( UNLIKELY( !(data[52].missing != -1) || (data[52].fvalue <= (double)1.00000001800250948e-35) ) ) {
              result[1] += -0.004732427505400882;
            } else {
              if ( LIKELY(  (data[55].missing != -1) && (data[55].fvalue <= (double)-0.1242185797380795653) ) ) {
                result[1] += 0.03420005773976307;
              } else {
                result[1] += 0.013987238295921772;
              }
            }
          }
        } else {
          if ( LIKELY(  (data[51].missing != -1) && (data[51].fvalue <= (double)-0.08505119142210437744) ) ) {
            result[1] += 0.03522466023743961;
          } else {
            result[1] += 0.019680810759897725;
          }
        }
      } else {
        if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1845224968741556448) ) ) {
          result[1] += 0.03555869116099653;
        } else {
          if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.7883854521676313398) ) ) {
            result[1] += -0.007492119701570511;
          } else {
            result[1] += -0.03453504156371735;
          }
        }
      }
    } else {
      result[1] += 0.035025194661643576;
    }
  }
  if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
    result[2] += -0.03313196608927098;
  } else {
    if ( LIKELY( !(data[55].missing != -1) || (data[55].fvalue <= (double)1.9687275667312647) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.713419879289624137) ) ) {
        if ( UNLIKELY(  (data[56].missing != -1) && (data[56].fvalue <= (double)-0.1679140925017010011) ) ) {
          result[2] += -0.005599552531033192;
        } else {
          if ( UNLIKELY(  (data[56].missing != -1) && (data[56].fvalue <= (double)-0.166984127283420658) ) ) {
            result[2] += 0.043726507841280696;
          } else {
            result[2] += -0.007625717648285842;
          }
        }
      } else {
        result[2] += -0.03732495378611597;
      }
    } else {
      if ( LIKELY(  (data[42].missing != -1) && (data[42].fvalue <= (double)-0.01037865820108373541) ) ) {
        result[2] += 0.028450924516040418;
      } else {
        result[2] += 0.08067875783264694;
      }
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)0.9946455059545064037) ) ) {
    result[3] += -0.03538285236415658;
  } else {
    if ( LIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.03889283466493614894) ) ) {
      result[3] += 0.034962185161706745;
    } else {
      if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02382198027377184849) ) ) {
        result[3] += 0.03542682926972564;
      } else {
        result[3] += -0.00021762811268401025;
      }
    }
  }
  if ( LIKELY( !(data[89].missing != -1) || (data[89].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8851947168287664924) ) ) {
      result[4] += -0.010693440371174968;
    } else {
      result[4] += -0.034102078030447174;
    }
  } else {
    result[4] += 0.03659512712486179;
  }
  if ( LIKELY(  (data[20].missing != -1) && (data[20].fvalue <= (double)-0.4455763584367840591) ) ) {
    if ( UNLIKELY(  (data[12].missing != -1) && (data[12].fvalue <= (double)-1.128486328597585908) ) ) {
      result[5] += 0.023353625964331562;
    } else {
      result[5] += -0.034448849204527156;
    }
  } else {
    result[5] += 0.09230495318084439;
  }
  if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.4076512707803252034) ) ) {
    result[6] += -0.02487121463773195;
  } else {
    result[6] += 0.07868393822695947;
  }
  if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8851947168287664924) ) ) {
    if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (double)1.00000001800250948e-35) ) ) {
        if ( UNLIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.4804758948180142819) ) ) {
          result[7] += 0.01334169793718681;
        } else {
          result[7] += 0.036319618107574926;
        }
      } else {
        result[7] += -0.034542387033105144;
      }
    } else {
      result[7] += -0.035852286092138516;
    }
  } else {
    result[7] += -0.03445370726122972;
  }
  if ( LIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.08007185799211762045) ) ) {
    if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6189299289389768033) ) ) {
      result[8] += -0.03671531924699909;
    } else {
      result[8] += -0.02021349079569318;
    }
  } else {
    if ( LIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)9.477337471177632366) ) ) {
      result[8] += -0.02780780328441572;
    } else {
      result[8] += 0.03452826648684382;
    }
  }
  if ( UNLIKELY(  (data[4].missing != -1) && (data[4].fvalue <= (double)-0.5523457074688490342) ) ) {
    if ( UNLIKELY( !(data[83].missing != -1) || (data[83].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5699021105360092543) ) ) {
        result[9] += -0.037195505027393015;
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.713419879289624137) ) ) {
          result[9] += -0.011925633672571719;
        } else {
          result[9] += 0.04311835257297738;
        }
      }
    } else {
      if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3707988594554016415) ) ) {
        if ( UNLIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.8024732276849618762) ) ) {
          result[9] += 0.0393803355101838;
        } else {
          if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.5406810279414914211) ) ) {
            if ( UNLIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7816665169386970424) ) ) {
              result[9] += 0.028366382639195893;
            } else {
              result[9] += -0.008119217117064322;
            }
          } else {
            result[9] += 0.05995900816343005;
          }
        }
      } else {
        result[9] += -0.006406125440721961;
      }
    }
  } else {
    if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)0.9595213542107834392) ) ) {
      result[9] += -0.033855047823719675;
    } else {
      if ( LIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.9160101568943966877) ) ) {
        result[9] += -0.0235203554988063;
      } else {
        result[9] += 0.04707710685759405;
      }
    }
  }
  if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[10] += -0.03336293450630021;
  } else {
    result[10] += 0.036078392565844185;
  }
  if ( UNLIKELY( !(data[84].missing != -1) || (data[84].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( LIKELY(  (data[42].missing != -1) && (data[42].fvalue <= (double)-0.01064205461029017231) ) ) {
      if ( UNLIKELY(  (data[6].missing != -1) && (data[6].fvalue <= (double)-0.343438049588791483) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5142327377564889224) ) ) {
          if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)2.02712109615452718) ) ) {
            if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.8367973224042829505) ) ) {
              if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)0.9595213542107834392) ) ) {
                if ( UNLIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.4893377696167382496) ) ) {
                  result[11] += 0.03686339880355094;
                } else {
                  result[11] += -0.03983849303267546;
                }
              } else {
                result[11] += 0.026108231452810254;
              }
            } else {
              result[11] += -0.011049669729395358;
            }
          } else {
            if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)13.42805493438950215) ) ) {
              result[11] += -0.03590620561043663;
            } else {
              result[11] += -0.0048791290249984125;
            }
          }
        } else {
          if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.9013888795957304412) ) ) {
            result[11] += 0.025113964292066655;
          } else {
            if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)4.940950028441762676) ) ) {
              if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.8554970799520443814) ) ) {
                result[11] += -0.009836821566395985;
              } else {
                if ( UNLIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.6197605092308248187) ) ) {
                  result[11] += 0.0015846760368926167;
                } else {
                  result[11] += 0.0354453689440202;
                }
              }
            } else {
              result[11] += 0.025801893860260883;
            }
          }
        }
      } else {
        if ( UNLIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.6197994531079804581) ) ) {
          result[11] += -0.00489035634304254;
        } else {
          result[11] += -0.0345503146872122;
        }
      }
    } else {
      if ( UNLIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6272704920455660638) ) ) {
        if ( UNLIKELY( !(data[69].missing != -1) || (data[69].fvalue <= (double)0.07927461561698297132) ) ) {
          result[11] += 0.015559033290779935;
        } else {
          result[11] += -0.03306990660314116;
        }
      } else {
        if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)2.258965045567843166) ) ) {
          if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.2936476673436070883) ) ) {
            if ( LIKELY(  (data[4].missing != -1) && (data[4].fvalue <= (double)-0.3859061909755484576) ) ) {
              result[11] += 0.03643121819117439;
            } else {
              if ( UNLIKELY(  (data[4].missing != -1) && (data[4].fvalue <= (double)-0.3720362312677734096) ) ) {
                result[11] += 0.03682240387692706;
              } else {
                result[11] += -0.007448265665313866;
              }
            }
          } else {
            result[11] += 0.008549110620449033;
          }
        } else {
          if ( UNLIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.4076512707803252034) ) ) {
            result[11] += 0.04956045069521146;
          } else {
            if ( LIKELY( !(data[41].missing != -1) || (data[41].fvalue <= (double)1.062247508010214947) ) ) {
              result[11] += -0.04109169623053167;
            } else {
              result[11] += 0.01679898684025676;
            }
          }
        }
      }
    }
  } else {
    if ( UNLIKELY(  (data[12].missing != -1) && (data[12].fvalue <= (double)-1.128486328597585908) ) ) {
      if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6194724696117658302) ) ) {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-0.5497225041265615397) ) ) {
          result[11] += -0.02686339745514403;
        } else {
          if ( LIKELY( !(data[53].missing != -1) || (data[53].fvalue <= (double)0.3954915858721397837) ) ) {
            if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02366057554279654349) ) ) {
              if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)1.18218185396625719) ) ) {
                if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.151850733053233794) ) ) {
                  result[11] += 0.04184185757250183;
                } else {
                  result[11] += -0.03532982288127761;
                }
              } else {
                result[11] += 0.045961928743767436;
              }
            } else {
              result[11] += 0.07197197733459261;
            }
          } else {
            result[11] += -0.004956008679697082;
          }
        }
      } else {
        result[11] += -0.02852965131948893;
      }
    } else {
      if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
        result[11] += -0.034413775637212256;
      } else {
        result[11] += 0.04207405197693044;
      }
    }
  }
  if ( LIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( UNLIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.5428053622233520725) ) ) {
      if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.32011123242420747) ) ) {
        if ( UNLIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5982284184492060453) ) ) {
          if ( LIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.6197397004830272893) ) ) {
            result[12] += -0.010053357579104402;
          } else {
            result[12] += 0.05574138733467855;
          }
        } else {
          result[12] += -0.029701179184038983;
        }
      } else {
        result[12] += 0.06457720301826686;
      }
    } else {
      result[12] += -0.030901848921331496;
    }
  } else {
    if ( UNLIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.2709289357124474162) ) ) {
      result[12] += 0.06817486596391185;
    } else {
      if ( LIKELY( !(data[45].missing != -1) || (data[45].fvalue <= (double)0.4906470321765903364) ) ) {
        result[12] += -0.034527554106320274;
      } else {
        result[12] += 0.036439460912242996;
      }
    }
  }
  if ( UNLIKELY( !(data[84].missing != -1) || (data[84].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02376901934613134468) ) ) {
      if ( LIKELY(  (data[58].missing != -1) && (data[58].fvalue <= (double)-0.01474274395022307817) ) ) {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4134826703502541556) ) ) {
          result[0] += 0.0036192210409705687;
        } else {
          if ( LIKELY(  (data[71].missing != -1) && (data[71].fvalue <= (double)-0.02530624603265731187) ) ) {
            if ( UNLIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6307850244566913789) ) ) {
              result[0] += 0.01366156209418691;
            } else {
              if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.7209214291892587223) ) ) {
                if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.726491872188582688) ) ) {
                  result[0] += 0.0005096155198000604;
                } else {
                  result[0] += 0.03707464341143368;
                }
              } else {
                result[0] += 0.035844704666492797;
              }
            }
          } else {
            result[0] += 0.01365574172115238;
          }
        }
      } else {
        result[0] += 0.0038077417951198926;
      }
    } else {
      if ( UNLIKELY(  (data[58].missing != -1) && (data[58].fvalue <= (double)-0.5222555457795786671) ) ) {
        if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02321671253988670178) ) ) {
          result[0] += 0.030906202808066868;
        } else {
          if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)0.7925765324441547133) ) ) {
            result[0] += -0.03174334947425197;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.218215524927980686) ) ) {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.351830879363718263) ) ) {
                if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3688810214280717203) ) ) {
                  result[0] += -0.03624935069675335;
                } else {
                  result[0] += 0.015713278036499807;
                }
              } else {
                if ( LIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.4259476505907174859) ) ) {
                  if ( LIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (double)0.4675620753804040075) ) ) {
                    if ( LIKELY(  (data[34].missing != -1) && (data[34].fvalue <= (double)-0.2525383499305560719) ) ) {
                      if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)5.403462557376244035) ) ) {
                        if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)4.802196269761418002) ) ) {
                          result[0] += 0.012438667658582299;
                        } else {
                          result[0] += -0.03418734397567717;
                        }
                      } else {
                        result[0] += 0.04262834984519482;
                      }
                    } else {
                      result[0] += -0.02314614052794412;
                    }
                  } else {
                    result[0] += 0.04065791639212677;
                  }
                } else {
                  result[0] += 0.033697310667986084;
                }
              }
            } else {
              result[0] += -0.031135320371559003;
            }
          }
        }
      } else {
        result[0] += -0.0310078638159901;
      }
    }
  } else {
    if ( UNLIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.4432578306330479112) ) ) {
      if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (double)1.278053921918260949) ) ) {
        if ( UNLIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6318848485338518506) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6223826552160477421) ) ) {
            result[0] += 0.04947357255510361;
          } else {
            result[0] += -0.022288731164850403;
          }
        } else {
          result[0] += -0.02562837870437239;
        }
      } else {
        result[0] += 0.03440538869735461;
      }
    } else {
      if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
        if ( LIKELY( !(data[50].missing != -1) || (data[50].fvalue <= (double)0.113078527307702334) ) ) {
          result[0] += -0.034508160387355095;
        } else {
          result[0] += 0.026595946212006814;
        }
      } else {
        result[0] += 0.010723300627787298;
      }
    }
  }
  if ( UNLIKELY(  (data[33].missing != -1) && (data[33].fvalue <= (double)-0.6992443821141464122) ) ) {
    if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.2854825927736091007) ) ) {
      if ( UNLIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.4432578306330479112) ) ) {
        if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)1.042993765094097691) ) ) {
          if ( UNLIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5933678318553576858) ) ) {
            result[1] += 0.04202985944671111;
          } else {
            result[1] += -0.034007395087352156;
          }
        } else {
          if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7496561927136741188) ) ) {
            if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3710728363164487731) ) ) {
              result[1] += 0.007659645498345525;
            } else {
              result[1] += 0.04143104884635644;
            }
          } else {
            result[1] += -0.021894255924086233;
          }
        }
      } else {
        if ( LIKELY(  (data[31].missing != -1) && (data[31].fvalue <= (double)-0.2788113354402757538) ) ) {
          result[1] += -0.03513221884338681;
        } else {
          result[1] += -0.003119788234064957;
        }
      }
    } else {
      if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
        if ( UNLIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)0.2372404051518106349) ) ) {
          result[1] += -0.004967817128481074;
        } else {
          result[1] += 0.03600026077946674;
        }
      } else {
        result[1] += -0.03524496720650649;
      }
    }
  } else {
    if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
      if ( LIKELY( !(data[83].missing != -1) || (data[83].fvalue <= (double)1.00000001800250948e-35) ) ) {
        if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6199004189109846852) ) ) {
          result[1] += 0.01111045088400909;
        } else {
          if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)6.100055638478075082) ) ) {
            result[1] += 0.03536184088032565;
          } else {
            result[1] += 0.023660652865198376;
          }
        }
      } else {
        if ( UNLIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6284344568935479325) ) ) {
          if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.6054551360476957411) ) ) {
            result[1] += -0.01739236814204572;
          } else {
            if ( UNLIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.3588777014346508087) ) ) {
              result[1] += -0.04170255432201041;
            } else {
              if ( LIKELY(  (data[61].missing != -1) && (data[61].fvalue <= (double)-0.1680043385803572653) ) ) {
                result[1] += 0.03362099482474722;
              } else {
                if ( UNLIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.603884284416168593) ) ) {
                  result[1] += -0.016400639443010002;
                } else {
                  if ( LIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6030701101055554458) ) ) {
                    if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6197880032523753746) ) ) {
                      result[1] += 0.008361945936097933;
                    } else {
                      result[1] += 0.03573699846548562;
                    }
                  } else {
                    result[1] += -0.00570010983259317;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)1.516004093432879118) ) ) {
            result[1] += -0.035950883853556305;
          } else {
            result[1] += 0.03582388678757905;
          }
        }
      }
    } else {
      result[1] += -0.03588021210983648;
    }
  }
  if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
    result[2] += -0.033042749947868634;
  } else {
    if ( UNLIKELY(  (data[3].missing != -1) && (data[3].fvalue <= (double)-0.4818781794236651761) ) ) {
      if ( LIKELY( !(data[69].missing != -1) || (data[69].fvalue <= (double)0.3953092113754633208) ) ) {
        result[2] += 0.026794197955224596;
      } else {
        result[2] += 0.06177592956007888;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.713419879289624137) ) ) {
        result[2] += 0.024274030890373142;
      } else {
        result[2] += -0.02026292029837805;
      }
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)0.9946455059545064037) ) ) {
    result[3] += -0.03533439705287981;
  } else {
    if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02383269855696708642) ) ) {
      result[3] += 0.03487059276855959;
    } else {
      if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02380306565543515579) ) ) {
        result[3] += 0.035373203035855214;
      } else {
        result[3] += -0.017352605537591496;
      }
    }
  }
  if ( LIKELY( !(data[89].missing != -1) || (data[89].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.262377816431567767) ) ) {
      result[4] += -0.00816609766497169;
    } else {
      result[4] += -0.03427392039043471;
    }
  } else {
    result[4] += 0.03644709942353643;
  }
  if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (double)1.945333284487767989) ) ) {
    if ( UNLIKELY(  (data[12].missing != -1) && (data[12].fvalue <= (double)-1.128486328597585908) ) ) {
      result[5] += 0.02346596778986285;
    } else {
      result[5] += -0.03443586152447465;
    }
  } else {
    result[5] += 0.09281630681441136;
  }
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1699192084996526686) ) ) {
    result[6] += 0.06789317332530267;
  } else {
    result[6] += -0.034462158396620104;
  }
  if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8851947168287664924) ) ) {
    if ( LIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5801683636132243249) ) ) {
      if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (double)1.00000001800250948e-35) ) ) {
        if ( UNLIKELY(  (data[54].missing != -1) && (data[54].fvalue <= (double)-0.03891074583698413136) ) ) {
          result[7] += 0.009540893934171766;
        } else {
          result[7] += 0.03575026916971055;
        }
      } else {
        result[7] += -0.03453708454091911;
      }
    } else {
      result[7] += -0.03579280172599416;
    }
  } else {
    result[7] += -0.034452372751765596;
  }
  if ( LIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.08007185799211762045) ) ) {
    if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6189299289389768033) ) ) {
      result[8] += -0.03669999548903174;
    } else {
      result[8] += -0.01974794932198952;
    }
  } else {
    if ( LIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)9.477337471177632366) ) ) {
      result[8] += -0.027323280667553882;
    } else {
      result[8] += 0.034393518760230654;
    }
  }
  if ( UNLIKELY(  (data[4].missing != -1) && (data[4].fvalue <= (double)-0.5523457074688490342) ) ) {
    if ( UNLIKELY( !(data[83].missing != -1) || (data[83].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.713419879289624137) ) ) {
        if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02376649739807756498) ) ) {
          if ( LIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.03889109830383016136) ) ) {
            result[9] += -0.0347182234212558;
          } else {
            result[9] += 0.048807078547485776;
          }
        } else {
          result[9] += -0.0398666328404075;
        }
      } else {
        if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02375640960057354492) ) ) {
          result[9] += 0.014988774914969851;
        } else {
          result[9] += 0.043240894133829894;
        }
      }
    } else {
      if ( LIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5919646671058724774) ) ) {
        if ( UNLIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.4893377696167382496) ) ) {
          result[9] += 0.03934171543645899;
        } else {
          if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)0.04881001163437238138) ) ) {
            if ( UNLIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6295625783782560214) ) ) {
              result[9] += 0.027834295519308428;
            } else {
              result[9] += -0.007620034950791485;
            }
          } else {
            result[9] += 0.06081834455169243;
          }
        }
      } else {
        result[9] += -0.005628540474205873;
      }
    }
  } else {
    if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)0.9595213542107834392) ) ) {
      result[9] += -0.033808910073625374;
    } else {
      if ( LIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.9160101568943966877) ) ) {
        result[9] += -0.022982592946564406;
      } else {
        result[9] += 0.04480615930557846;
      }
    }
  }
  if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[10] += -0.033288527282929574;
  } else {
    result[10] += 0.035967897560476185;
  }
  if ( UNLIKELY( !(data[84].missing != -1) || (data[84].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( LIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6036631336413064153) ) ) {
      if ( UNLIKELY(  (data[61].missing != -1) && (data[61].fvalue <= (double)-0.1680043385803572653) ) ) {
        if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (double)0.4511556643006282563) ) ) {
          if ( LIKELY(  (data[33].missing != -1) && (data[33].fvalue <= (double)-0.6267857740706467284) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.031877308058394282) ) ) {
              if ( LIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.6197605092308248187) ) ) {
                if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.8714145528018332199) ) ) {
                  result[11] += 0.017162288408184814;
                } else {
                  if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.8000101339158310898) ) ) {
                    if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.6438362138560046466) ) ) {
                      result[11] += -0.0018349230324228587;
                    } else {
                      result[11] += -0.03484402998628062;
                    }
                  } else {
                    result[11] += 0.01484573736196237;
                  }
                }
              } else {
                result[11] += 0.02131550159516744;
              }
            } else {
              result[11] += 0.037229064331610204;
            }
          } else {
            result[11] += -0.02804748091818188;
          }
        } else {
          result[11] += -0.0354819395256174;
        }
      } else {
        if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02376901934613134468) ) ) {
          result[11] += -0.026656445495329056;
        } else {
          if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.3588777014346508087) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-0.5313858905757674611) ) ) {
              if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.0225925301876648589) ) ) {
                result[11] += -0.0248009262350394;
              } else {
                result[11] += 0.03654962845707722;
              }
            } else {
              result[11] += 0.03572176160618882;
            }
          } else {
            result[11] += 0.00787288437007509;
          }
        }
      }
    } else {
      if ( UNLIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.4540106973991014372) ) ) {
        if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02293362377697203899) ) ) {
          result[11] += -0.03514870807397513;
        } else {
          result[11] += 0.027877797661687725;
        }
      } else {
        if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
          result[11] += -0.03263183780833806;
        } else {
          result[11] += 0.011510320193075413;
        }
      }
    }
  } else {
    if ( UNLIKELY(  (data[12].missing != -1) && (data[12].fvalue <= (double)-1.128486328597585908) ) ) {
      if ( LIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.6196488487353301045) ) ) {
        if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.261418469357002747) ) ) {
          result[11] += -0.02645755544350046;
        } else {
          if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.2483129374432635206) ) ) {
            if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02366877187793800172) ) ) {
              result[11] += 0.02213198155915005;
            } else {
              result[11] += 0.05662735246314145;
            }
          } else {
            result[11] += -0.006931216632296614;
          }
        }
      } else {
        result[11] += -0.02855268054708598;
      }
    } else {
      if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
        result[11] += -0.034400370887045575;
      } else {
        result[11] += 0.038429417473128155;
      }
    }
  }
  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.32011123242420747) ) ) {
    if ( LIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)0.2078669411157570701) ) ) {
      if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)2.674638636662801439) ) ) {
        result[12] += -0.02852719538168753;
      } else {
        if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.369392444902026329) ) ) {
          result[12] += 0.04797438999509159;
        } else {
          result[12] += -0.02375096592205363;
        }
      }
    } else {
      if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.007272961203273742119) ) ) {
        result[12] += 0.05191511951985348;
      } else {
        result[12] += -0.022260484472220794;
      }
    }
  } else {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.460698822199083313) ) ) {
      result[12] += 0.08404935848994922;
    } else {
      result[12] += 0.018152390443073593;
    }
  }
  if ( UNLIKELY( !(data[82].missing != -1) || (data[82].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02367444626238122962) ) ) {
      if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3707623292072619869) ) ) {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4134826703502541556) ) ) {
          result[0] += -0.01762739321958237;
        } else {
          if ( LIKELY( !(data[86].missing != -1) || (data[86].fvalue <= (double)1.00000001800250948e-35) ) ) {
            result[0] += -0.03787079754393754;
          } else {
            result[0] += 0.03234764119292565;
          }
        }
      } else {
        if ( LIKELY(  (data[45].missing != -1) && (data[45].fvalue <= (double)-0.1022876182583647153) ) ) {
          result[0] += 0.03739690558831859;
        } else {
          result[0] += 0.025109484766935617;
        }
      }
    } else {
      if ( UNLIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7880685817837016494) ) ) {
        result[0] += -0.027381313430541197;
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.25526421801615129) ) ) {
          if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.6456226389823498391) ) ) {
            if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.351830879363718263) ) ) {
              if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.5966104081910480472) ) ) {
                result[0] += -0.031441990547392544;
              } else {
                result[0] += 0.029007839592593544;
              }
            } else {
              if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3708993176377855527) ) ) {
                result[0] += 0.0375556375382725;
              } else {
                if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3705796779665639362) ) ) {
                  if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3707988594554016415) ) ) {
                    result[0] += -0.031775033464967;
                  } else {
                    result[0] += 0.006649015415098745;
                  }
                } else {
                  if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.3817666597025218267) ) ) {
                    result[0] += 0.029385797077544844;
                  } else {
                    result[0] += 0.012100632193276091;
                  }
                }
              }
            }
          } else {
            result[0] += -0.016033971207756192;
          }
        } else {
          result[0] += -0.04229360637289774;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (double)1.503056489870696177) ) ) {
      if ( UNLIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.6198546535548441483) ) ) {
        if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.4076512707803252034) ) ) {
          result[0] += -0.03425470848712986;
        } else {
          if ( UNLIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.3083892198998683942) ) ) {
            result[0] += 0.05297806627889198;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7369570350073810783) ) ) {
              result[0] += -0.040882081514538045;
            } else {
              result[0] += 0.015395845441952726;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)3.816561841575487168) ) ) {
          result[0] += -0.03398093770150001;
        } else {
          result[0] += 0.009564900025220128;
        }
      }
    } else {
      if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1772208526869041567) ) ) {
        result[0] += -0.09504067863444834;
      } else {
        if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02354960979140796953) ) ) {
          if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6189299289389768033) ) ) {
            if ( UNLIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.4545285182290580983) ) ) {
              result[0] += -0.004917184425823122;
            } else {
              if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02377973762932657567) ) ) {
                result[0] += 0.03783657283100742;
              } else {
                if ( UNLIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.3434416239548997996) ) ) {
                  result[0] += 0.04349316730754786;
                } else {
                  result[0] += -0.014322624923204325;
                }
              }
            }
          } else {
            result[0] += -0.02450485951677978;
          }
        } else {
          result[0] += -0.036245867885300334;
        }
      }
    }
  }
  if ( UNLIKELY(  (data[35].missing != -1) && (data[35].fvalue <= (double)-0.5574519420018757554) ) ) {
    if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.4548733630016698615) ) ) {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-1.759220268744210225) ) ) {
          result[1] += -0.0007629960844315654;
        } else {
          if ( LIKELY(  (data[79].missing != -1) && (data[79].fvalue <= (double)-0.4168475085733249208) ) ) {
            if ( LIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.4569840537861452612) ) ) {
              result[1] += -0.03541541673892667;
            } else {
              result[1] += 0.017549079134293835;
            }
          } else {
            result[1] += 0.04553101934205546;
          }
        }
      } else {
        if ( LIKELY(  (data[44].missing != -1) && (data[44].fvalue <= (double)-0.03645628426279558937) ) ) {
          result[1] += 0.033006323232928285;
        } else {
          result[1] += -0.007432174889409559;
        }
      }
    } else {
      if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02238573037849928005) ) ) {
        if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3708993176377855527) ) ) {
          result[1] += -0.016215873327435217;
        } else {
          result[1] += -0.03498300190749634;
        }
      } else {
        if ( LIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6300408038006478639) ) ) {
          result[1] += -0.03259707823031747;
        } else {
          result[1] += 0.03230233470809747;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[38].missing != -1) || (data[38].fvalue <= (double)1.355342907056062307) ) ) {
      if ( UNLIKELY(  (data[34].missing != -1) && (data[34].fvalue <= (double)-0.2541039304190124137) ) ) {
        if ( LIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5973671526394978004) ) ) {
          if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8335982467741961388) ) ) {
            result[1] += 0.03547637725188898;
          } else {
            if ( UNLIKELY(  (data[33].missing != -1) && (data[33].fvalue <= (double)-0.6267857740706467284) ) ) {
              result[1] += -0.006417896038581847;
            } else {
              result[1] += 0.03709440614286314;
            }
          }
        } else {
          if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)2.582136130875904989) ) ) {
            result[1] += -0.02708322095185411;
          } else {
            if ( UNLIKELY(  (data[33].missing != -1) && (data[33].fvalue <= (double)-0.6491956528469868815) ) ) {
              result[1] += 0.040162156399446765;
            } else {
              if ( UNLIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6036329836175778896) ) ) {
                result[1] += -0.01688048167509003;
              } else {
                result[1] += 0.029908290427933304;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4134826703502541556) ) ) {
          if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.9285972811752244427) ) ) {
            result[1] += -0.005680633267212828;
          } else {
            result[1] += 0.036944402707469834;
          }
        } else {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-0.5313858905757674611) ) ) {
            if ( UNLIKELY(  (data[21].missing != -1) && (data[21].fvalue <= (double)-0.4227681319350181099) ) ) {
              if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7736639358824413115) ) ) {
                if ( UNLIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.749034681232501498) ) ) {
                  result[1] += 0.016833568345296677;
                } else {
                  if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7848675493611992904) ) ) {
                    result[1] += -0.0012462462609637744;
                  } else {
                    result[1] += -0.021910788133292156;
                  }
                }
              } else {
                result[1] += -0.03464479074211959;
              }
            } else {
              result[1] += 0.034116291740167;
            }
          } else {
            if ( UNLIKELY(  (data[35].missing != -1) && (data[35].fvalue <= (double)-0.3881343051148680723) ) ) {
              result[1] += 0.009715193222036114;
            } else {
              result[1] += -0.0355448412249767;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (double)1.945333284487767989) ) ) {
        result[1] += 0.03520967308321039;
      } else {
        result[1] += 0.025625658874725493;
      }
    }
  }
  if ( LIKELY( !(data[87].missing != -1) || (data[87].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( UNLIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6040024473109337766) ) ) {
      result[2] += 0.018668230718106936;
    } else {
      result[2] += -0.03444571593185594;
    }
  } else {
    if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)6.077547591217599354) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.713419879289624137) ) ) {
        result[2] += 0.02438651457679132;
      } else {
        result[2] += -0.037356403749443615;
      }
    } else {
      result[2] += 0.03454296981416463;
    }
  }
  if ( UNLIKELY(  (data[55].missing != -1) && (data[55].fvalue <= (double)-0.135563196560457816) ) ) {
    if ( LIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1845224968741556448) ) ) {
      result[3] += 0.03513568880157619;
    } else {
      result[3] += -0.036360818070449906;
    }
  } else {
    result[3] += -0.03511855519742561;
  }
  if ( LIKELY( !(data[89].missing != -1) || (data[89].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.262377816431567767) ) ) {
      result[4] += -0.007205913199887124;
    } else {
      result[4] += -0.03425770099066204;
    }
  } else {
    result[4] += 0.03631190191617444;
  }
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1749932324263867578) ) ) {
    result[5] += 0.07670207360363072;
  } else {
    if ( LIKELY(  (data[35].missing != -1) && (data[35].fvalue <= (double)-0.328090508794230018) ) ) {
      result[5] += 0.010973509702419167;
    } else {
      result[5] += -0.03444834452307519;
    }
  }
  if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.4076512707803252034) ) ) {
    result[6] += -0.024455553641120127;
  } else {
    result[6] += 0.07328509391147872;
  }
  if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8851947168287664924) ) ) {
    if ( LIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.4797701247966768001) ) ) {
      if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.4815484825403061886) ) ) {
        result[7] += 0.00913941052883031;
      } else {
        result[7] += 0.03267732385289126;
      }
    } else {
      result[7] += -0.03578667888084913;
    }
  } else {
    result[7] += -0.034451120596695355;
  }
  if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6189299289389768033) ) ) {
    result[8] += -0.036620687010650764;
  } else {
    if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (double)1.490178253475586745) ) ) {
      result[8] += -0.034493302414713795;
    } else {
      result[8] += 0.037439147806995365;
    }
  }
  if ( UNLIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-0.5006032028397574551) ) ) {
    if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3721048158263929317) ) ) {
      if ( UNLIKELY( !(data[83].missing != -1) || (data[83].fvalue <= (double)1.00000001800250948e-35) ) ) {
        result[9] += -0.023770713601132105;
      } else {
        result[9] += 0.035204792624019605;
      }
    } else {
      if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7672618710374367046) ) ) {
        result[9] += -0.01214303966054627;
      } else {
        if ( UNLIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5919646671058724774) ) ) {
          result[9] += 0.056151410190301475;
        } else {
          if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.651224445721728773) ) ) {
            result[9] += -0.03488124984110237;
          } else {
            result[9] += 0.013318953082450045;
          }
        }
      }
    }
  } else {
    result[9] += -0.032344523177010205;
  }
  if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8851947168287664924) ) ) {
    result[10] += 0.032064758150863036;
  } else {
    result[10] += -0.03315859324363013;
  }
  if ( UNLIKELY( !(data[84].missing != -1) || (data[84].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( LIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6036631336413064153) ) ) {
      if ( UNLIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6272704920455660638) ) ) {
        if ( UNLIKELY(  (data[70].missing != -1) && (data[70].fvalue <= (double)-0.09922297901205631709) ) ) {
          if ( LIKELY(  (data[53].missing != -1) && (data[53].fvalue <= (double)-0.2367758624511293875) ) ) {
            if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.1631875991615196753) ) ) {
              if ( LIKELY(  (data[53].missing != -1) && (data[53].fvalue <= (double)-0.2575730758353072525) ) ) {
                if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.1794951076842806192) ) ) {
                  if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.2121101247298024794) ) ) {
                    if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.6920308589270126598) ) ) {
                      result[11] += -0.010956942989819547;
                    } else {
                      result[11] += 0.014318839684138187;
                    }
                  } else {
                    result[11] += -0.02505622685324003;
                  }
                } else {
                  result[11] += 0.04886139260049568;
                }
              } else {
                result[11] += -0.020438669686736622;
              }
            } else {
              if ( LIKELY(  (data[53].missing != -1) && (data[53].fvalue <= (double)-0.2609382412217621239) ) ) {
                result[11] += -0.03588767690511157;
              } else {
                result[11] += 0.009849783702566669;
              }
            }
          } else {
            result[11] += 0.040695441319018505;
          }
        } else {
          result[11] += -0.034149807713573906;
        }
      } else {
        if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02376901934613134468) ) ) {
          if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3703239662295865764) ) ) {
            result[11] += 0.027712542705884118;
          } else {
            result[11] += -0.030584860224759643;
          }
        } else {
          if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)2.480052959900232334) ) ) {
            if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.3099551758663680601) ) ) {
              result[11] += 0.03540765692529143;
            } else {
              result[11] += 0.01473926351505666;
            }
          } else {
            if ( LIKELY(  (data[34].missing != -1) && (data[34].fvalue <= (double)-0.2190790848759818499) ) ) {
              if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.0236422914127955193) ) ) {
                result[11] += -0.04220450560728119;
              } else {
                result[11] += 0.004787050078219535;
              }
            } else {
              result[11] += 0.04511566780238872;
            }
          }
        }
      }
    } else {
      if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.0235685244071002116) ) ) {
        result[11] += -0.03105389481327985;
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5142327377564889224) ) ) {
          result[11] += -0.025207732441118867;
        } else {
          if ( UNLIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.4540106973991014372) ) ) {
            result[11] += 0.04079252227058685;
          } else {
            result[11] += -0.019109561572047996;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[82].missing != -1) || (data[82].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.6196488487353301045) ) ) {
        if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)1.319811268434055274) ) ) {
          if ( LIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5970539650723311054) ) ) {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-1.964803063360995639) ) ) {
              result[11] += 0.03676757343447911;
            } else {
              result[11] += -0.035021249959792236;
            }
          } else {
            result[11] += 0.040393915025612195;
          }
        } else {
          result[11] += -0.02803111685394293;
        }
      } else {
        result[11] += -0.028288844241243415;
      }
    } else {
      if ( LIKELY( !(data[55].missing != -1) || (data[55].fvalue <= (double)1.00000001800250948e-35) ) ) {
        result[11] += -0.034235563185452025;
      } else {
        result[11] += 0.026592410537137512;
      }
    }
  }
  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.32011123242420747) ) ) {
    if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.2781834005959584744) ) ) {
      if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (double)0.6108199825892823842) ) ) {
        if ( LIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)0.2078669411157570701) ) ) {
          if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.3843127076039604129) ) ) {
            result[12] += -0.01825312535680143;
          } else {
            if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.2962972548006537754) ) ) {
              result[12] += 0.049686232176793806;
            } else {
              result[12] += 0.0018552744578950496;
            }
          }
        } else {
          result[12] += 0.06778068813070853;
        }
      } else {
        result[12] += -0.03469200699764835;
      }
    } else {
      result[12] += -0.03463897281972979;
    }
  } else {
    if ( LIKELY(  (data[79].missing != -1) && (data[79].fvalue <= (double)-1.00000001800250948e-35) ) ) {
      result[12] += 0.038804591699280994;
    } else {
      result[12] += 0.08440902146162156;
    }
  }
  if ( UNLIKELY(  (data[12].missing != -1) && (data[12].fvalue <= (double)-1.128486328597585908) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.25526421801615129) ) ) {
      if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02367444626238122962) ) ) {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4134826703502541556) ) ) {
          if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)2.795914393643698315) ) ) {
            if ( UNLIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7752644520936924355) ) ) {
              result[0] += 0.024058019247454175;
            } else {
              result[0] += -0.03833677335396012;
            }
          } else {
            result[0] += 0.04357690549000431;
          }
        } else {
          if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)1.321235134705145642) ) ) {
            if ( UNLIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7960711628399573803) ) ) {
              result[0] += 0.01312314234367865;
            } else {
              result[0] += 0.03494322363292071;
            }
          } else {
            result[0] += 0.00355506772170397;
          }
        }
      } else {
        if ( UNLIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)0.7925765324441547133) ) ) {
          if ( LIKELY(  (data[43].missing != -1) && (data[43].fvalue <= (double)-0.260730972918452153) ) ) {
            result[0] += -0.03728119057863961;
          } else {
            result[0] += 0.013119724985465379;
          }
        } else {
          if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.351830879363718263) ) ) {
            if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3688810214280717203) ) ) {
              result[0] += -0.0361628030780619;
            } else {
              if ( LIKELY(  (data[43].missing != -1) && (data[43].fvalue <= (double)-0.1336048309519827504) ) ) {
                result[0] += -0.014624898368428625;
              } else {
                result[0] += 0.02373182978195643;
              }
            }
          } else {
            if ( LIKELY(  (data[33].missing != -1) && (data[33].fvalue <= (double)-0.5580621458232039034) ) ) {
              if ( LIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.7914519369226754586) ) ) {
                result[0] += 0.016302180514358392;
              } else {
                result[0] += -0.014025321300322092;
              }
            } else {
              result[0] += 0.025706682642612323;
            }
          }
        }
      }
    } else {
      result[0] += -0.04704346237224243;
    }
  } else {
    if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (double)1.525439072483760983) ) ) {
      if ( LIKELY( !(data[44].missing != -1) || (data[44].fvalue <= (double)0.2499256124077881835) ) ) {
        result[0] += -0.03410280591888001;
      } else {
        result[0] += 0.020306999161539684;
      }
    } else {
      if ( LIKELY( !(data[50].missing != -1) || (data[50].fvalue <= (double)0.4907783890339046384) ) ) {
        if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02381189247626782843) ) ) {
          if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6193157580620726188) ) ) {
            if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)0.2202566313045191404) ) ) {
              result[0] += 0.033582061625537736;
            } else {
              result[0] += 0.005937034572474522;
            }
          } else {
            result[0] += -0.023047846206680066;
          }
        } else {
          if ( UNLIKELY(  (data[3].missing != -1) && (data[3].fvalue <= (double)-0.5118217699541166565) ) ) {
            result[0] += 0.006357599656128028;
          } else {
            result[0] += -0.03414841110973586;
          }
        }
      } else {
        if ( UNLIKELY( !(data[74].missing != -1) || (data[74].fvalue <= (double)1.187534922952968586) ) ) {
          result[0] += 0.03816164136129883;
        } else {
          if ( LIKELY(  (data[3].missing != -1) && (data[3].fvalue <= (double)-0.4369627936279878999) ) ) {
            result[0] += -0.03620269542032091;
          } else {
            result[0] += 0.034317219626371416;
          }
        }
      }
    }
  }
  if ( UNLIKELY(  (data[35].missing != -1) && (data[35].fvalue <= (double)-0.5574519420018757554) ) ) {
    if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY(  (data[79].missing != -1) && (data[79].fvalue <= (double)-0.4168475085733249208) ) ) {
        if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.1794951076842806192) ) ) {
          if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (double)1.490178253475586745) ) ) {
            result[1] += -0.03546758047723387;
          } else {
            result[1] += 0.014046749457358808;
          }
        } else {
          if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7496561927136741188) ) ) {
            if ( LIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5930608235909559101) ) ) {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4134826703502541556) ) ) {
                result[1] += 0.03883081547632747;
              } else {
                result[1] += -0.03341508743184331;
              }
            } else {
              result[1] += 0.04056991795369431;
            }
          } else {
            result[1] += -0.019018294842771382;
          }
        }
      } else {
        result[1] += 0.03532864179404839;
      }
    } else {
      if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02238573037849928005) ) ) {
        if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.986627716064475635) ) ) {
          result[1] += -0.015475705090323425;
        } else {
          result[1] += -0.03493559157332679;
        }
      } else {
        if ( LIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6300408038006478639) ) ) {
          result[1] += -0.03218193447788069;
        } else {
          result[1] += 0.031865327251228;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
      if ( UNLIKELY(  (data[79].missing != -1) && (data[79].fvalue <= (double)-0.4105093223159403948) ) ) {
        if ( UNLIKELY(  (data[36].missing != -1) && (data[36].fvalue <= (double)-0.7102313324244843296) ) ) {
          if ( UNLIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6037740769996097212) ) ) {
            if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)1.015169628132993163) ) ) {
              if ( UNLIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7800660007274459185) ) ) {
                result[1] += -0.011171091034124682;
              } else {
                result[1] += 0.016620534237258934;
              }
            } else {
              result[1] += -0.023941983159661003;
            }
          } else {
            if ( UNLIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.03884564702762572513) ) ) {
              result[1] += -0.0047778242954162825;
            } else {
              if ( LIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.6351198894432105169) ) ) {
                result[1] += 0.034376014398988936;
              } else {
                result[1] += 0.0029695874769457946;
              }
            }
          }
        } else {
          result[1] += -0.03577909779620988;
        }
      } else {
        if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)6.100055638478075082) ) ) {
          result[1] += 0.035002559079082646;
        } else {
          if ( UNLIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.1393978545551880777) ) ) {
            result[1] += -0.04722045075060916;
          } else {
            result[1] += 0.03553682665988485;
          }
        }
      }
    } else {
      result[1] += -0.0357937026944867;
    }
  }
  if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
    result[2] += -0.032862991525721946;
  } else {
    if ( LIKELY( !(data[71].missing != -1) || (data[71].fvalue <= (double)0.3707849171841914315) ) ) {
      if ( UNLIKELY(  (data[69].missing != -1) && (data[69].fvalue <= (double)-0.3983159868815877025) ) ) {
        result[2] += -0.00969982734286944;
      } else {
        if ( UNLIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.4491636766531212355) ) ) {
          result[2] += 0.026276288353516298;
        } else {
          result[2] += -0.029872918536814067;
        }
      }
    } else {
      result[2] += 0.06729088118457797;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)0.9946455059545064037) ) ) {
    result[3] += -0.03524545834549265;
  } else {
    if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02382954612057763821) ) ) {
      result[3] += 0.034715946027191295;
    } else {
      if ( LIKELY(  (data[55].missing != -1) && (data[55].fvalue <= (double)-0.135563196560457816) ) ) {
        result[3] += 0.03529579691287578;
      } else {
        result[3] += -0.02461450166456391;
      }
    }
  }
  if ( LIKELY( !(data[89].missing != -1) || (data[89].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8851947168287664924) ) ) {
      result[4] += -0.008501509430940506;
    } else {
      result[4] += -0.03401161089853208;
    }
  } else {
    result[4] += 0.03618494087261986;
  }
  if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.7544702801259169922) ) ) {
    result[5] += -0.02248068210006746;
  } else {
    if ( LIKELY( !(data[38].missing != -1) || (data[38].fvalue <= (double)0.9988582048608486419) ) ) {
      result[5] += 0.18302374955941764;
    } else {
      result[5] += -0.03443882089847364;
    }
  }
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1699192084996526686) ) ) {
    result[6] += 0.06388399083656615;
  } else {
    result[6] += -0.03446261303353121;
  }
  if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8851947168287664924) ) ) {
    if ( LIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.4797701247966768001) ) ) {
      if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.4815484825403061886) ) ) {
        result[7] += 0.008668297563648113;
      } else {
        result[7] += 0.03236186990253655;
      }
    } else {
      result[7] += -0.03564799975114297;
    }
  } else {
    result[7] += -0.03444995385752946;
  }
  if ( LIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.08007185799211762045) ) ) {
    if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6189299289389768033) ) ) {
      result[8] += -0.03665884855635878;
    } else {
      result[8] += -0.01896502914042752;
    }
  } else {
    if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.4815484825403061886) ) ) {
      result[8] += -0.00917992895519427;
    } else {
      result[8] += 0.032144947732530786;
    }
  }
  if ( UNLIKELY(  (data[15].missing != -1) && (data[15].fvalue <= (double)-2.053703856899027347) ) ) {
    if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.4432578306330479112) ) ) {
      if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02376649739807756498) ) ) {
        if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.2773401588208461721) ) ) {
          result[9] += 0.033137569013182155;
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6359230018345859436) ) ) {
            if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)1.126466175977412165) ) ) {
              result[9] += -0.000703241453726366;
            } else {
              result[9] += 0.05890931719328094;
            }
          } else {
            result[9] += -0.013878198005501982;
          }
        }
      } else {
        result[9] += 0.002056070331780445;
      }
    } else {
      result[9] += -0.024703872752568874;
    }
  } else {
    if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)0.9595213542107834392) ) ) {
      result[9] += -0.03371010862863372;
    } else {
      if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.7671482474614917946) ) ) {
        result[9] += -0.027583697094504193;
      } else {
        result[9] += 0.044582276197170964;
      }
    }
  }
  if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[10] += -0.03312891318294858;
  } else {
    result[10] += 0.03578032283042699;
  }
  if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.2270910346818499626) ) ) {
    if ( LIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6280911155401268653) ) ) {
      if ( LIKELY(  (data[20].missing != -1) && (data[20].fvalue <= (double)-0.5448433239136843964) ) ) {
        if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7688623872486879396) ) ) {
          if ( LIKELY(  (data[54].missing != -1) && (data[54].fvalue <= (double)-0.03673984168271277745) ) ) {
            if ( UNLIKELY(  (data[37].missing != -1) && (data[37].fvalue <= (double)-0.06997171335009318149) ) ) {
              result[11] += -0.027323321812043694;
            } else {
              if ( LIKELY(  (data[54].missing != -1) && (data[54].fvalue <= (double)-0.03777147733914566069) ) ) {
                if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.6054551360476957411) ) ) {
                  if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3713742108636006178) ) ) {
                    if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)1.934618590367630508) ) ) {
                      if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.06212713922683858053) ) ) {
                        result[11] += 0.04682194608474289;
                      } else {
                        result[11] += 0.005576692776891465;
                      }
                    } else {
                      result[11] += -0.03449186026354808;
                    }
                  } else {
                    result[11] += 0.038259023533089284;
                  }
                } else {
                  if ( LIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.749034681232501498) ) ) {
                    result[11] += -0.016782903034635907;
                  } else {
                    result[11] += 0.014460455627964216;
                  }
                }
              } else {
                result[11] += -0.04278634971492486;
              }
            }
          } else {
            result[11] += 0.048418193096746255;
          }
        } else {
          result[11] += -0.03398935201690705;
        }
      } else {
        result[11] += -0.03408211570732183;
      }
    } else {
      if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02366561944154855004) ) ) {
        if ( UNLIKELY(  (data[47].missing != -1) && (data[47].fvalue <= (double)-0.01598775013808414677) ) ) {
          if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6198816725514879611) ) ) {
            if ( UNLIKELY(  (data[56].missing != -1) && (data[56].fvalue <= (double)-0.1053576760799958129) ) ) {
              result[11] += 0.035109772926523536;
            } else {
              result[11] += -0.013090816504690928;
            }
          } else {
            result[11] += -0.027388420148604965;
          }
        } else {
          result[11] += -0.036787634254471714;
        }
      } else {
        if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)0.8204006694052594639) ) ) {
          if ( LIKELY(  (data[59].missing != -1) && (data[59].fvalue <= (double)-0.3479392415564711016) ) ) {
            result[11] += 0.0362199875479399;
          } else {
            if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.2483129374432635206) ) ) {
              result[11] += -0.03483911428102223;
            } else {
              result[11] += 0.03178840882684782;
            }
          }
        } else {
          if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.01558214275937902862) ) ) {
            result[11] += -0.028295858738686185;
          } else {
            result[11] += 0.026798391914439494;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY(  (data[13].missing != -1) && (data[13].fvalue <= (double)-0.9897634247260547191) ) ) {
      result[11] += 0.011459776395192472;
    } else {
      if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
        result[11] += -0.03449929934943694;
      } else {
        result[11] += 0.024680945870353493;
      }
    }
  }
  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.32011123242420747) ) ) {
    if ( LIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.2709289357124474162) ) ) {
      if ( LIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.2749445138003689393) ) ) {
        if ( UNLIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5982284184492060453) ) ) {
          if ( LIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6039153855771924873) ) ) {
            result[12] += -0.022743068301583503;
          } else {
            result[12] += 0.04857712624032571;
          }
        } else {
          result[12] += -0.03148484650402242;
        }
      } else {
        result[12] += 0.0688126695960715;
      }
    } else {
      result[12] += -0.03463297970441701;
    }
  } else {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.460698822199083313) ) ) {
      result[12] += 0.08295215134197825;
    } else {
      result[12] += 0.016673735988539443;
    }
  }
  if ( UNLIKELY( !(data[84].missing != -1) || (data[84].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02376901934613134468) ) ) {
      if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.8166922260006254097) ) ) {
        result[0] += -0.006402682958949789;
      } else {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4134826703502541556) ) ) {
          result[0] += 0.0031814944504701907;
        } else {
          if ( LIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.3228285899577809093) ) ) {
            result[0] += 0.033772327280615265;
          } else {
            if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3122956670598038831) ) ) {
              result[0] += -0.0373806309968024;
            } else {
              if ( UNLIKELY(  (data[59].missing != -1) && (data[59].fvalue <= (double)-0.03054273913331992732) ) ) {
                result[0] += 0.036160413455202225;
              } else {
                result[0] += -0.004841577570371646;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY(  (data[58].missing != -1) && (data[58].fvalue <= (double)-0.5222555457795786671) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.25526421801615129) ) ) {
          if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.9475499506149932527) ) ) {
            if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3675841976191152605) ) ) {
              result[0] += -0.030115202581390048;
            } else {
              result[0] += 0.02605087977764232;
            }
          } else {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.3678488213209678004) ) ) {
              if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3688810214280717203) ) ) {
                result[0] += -0.03603035656636871;
              } else {
                result[0] += 0.011221066750535812;
              }
            } else {
              if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.0164200224566713425) ) ) {
                if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)1.070817902055202664) ) ) {
                  if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02321671253988670178) ) ) {
                    result[0] += 0.0319813892254635;
                  } else {
                    if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.8714145528018332199) ) ) {
                      if ( LIKELY( !(data[52].missing != -1) || (data[52].fvalue <= (double)0.01546367856846388687) ) ) {
                        result[0] += 0.009821568266698517;
                      } else {
                        result[0] += 0.032003634195696844;
                      }
                    } else {
                      if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6198788179441762081) ) ) {
                        result[0] += 0.020240247887864046;
                      } else {
                        result[0] += -0.01610663982672053;
                      }
                    }
                  }
                } else {
                  result[0] += 0.03865274008161729;
                }
              } else {
                result[0] += -0.008868716763188856;
              }
            }
          }
        } else {
          result[0] += -0.04037647622540971;
        }
      } else {
        result[0] += -0.030481116604900396;
      }
    }
  } else {
    if ( LIKELY( !(data[50].missing != -1) || (data[50].fvalue <= (double)0.113078527307702334) ) ) {
      if ( UNLIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.4432578306330479112) ) ) {
        if ( LIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.07982434462983790946) ) ) {
          if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02376901934613134468) ) ) {
            result[0] += 0.04053678930402862;
          } else {
            if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (double)1.278053921918260949) ) ) {
              if ( UNLIKELY(  (data[33].missing != -1) && (data[33].fvalue <= (double)-0.6955094023180897755) ) ) {
                result[0] += 0.009909005589203273;
              } else {
                result[0] += -0.037227380718296996;
              }
            } else {
              result[0] += 0.024890455621708364;
            }
          }
        } else {
          result[0] += -0.03506102800961254;
        }
      } else {
        if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
          result[0] += -0.034496402298517866;
        } else {
          result[0] += 0.004332054876042607;
        }
      }
    } else {
      result[0] += 0.029857616433470718;
    }
  }
  if ( UNLIKELY(  (data[33].missing != -1) && (data[33].fvalue <= (double)-0.6992443821141464122) ) ) {
    if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY(  (data[79].missing != -1) && (data[79].fvalue <= (double)-0.4168475085733249208) ) ) {
        if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.1794951076842806192) ) ) {
          if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.2357736536356723478) ) ) {
            result[1] += -0.034955337412317114;
          } else {
            result[1] += -0.00431578630543365;
          }
        } else {
          if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7496561927136741188) ) ) {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4134826703502541556) ) ) {
              result[1] += 0.039773128665747386;
            } else {
              result[1] += -0.03405475159379694;
            }
          } else {
            result[1] += -0.018184888472136097;
          }
        }
      } else {
        result[1] += 0.035588959596718386;
      }
    } else {
      if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.5824022486379295538) ) ) {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-0.5497225041265615397) ) ) {
          result[1] += -0.01512539332579771;
        } else {
          result[1] += -0.03495334420452777;
        }
      } else {
        result[1] += -0.004427087099985118;
      }
    }
  } else {
    if ( LIKELY( !(data[38].missing != -1) || (data[38].fvalue <= (double)1.355342907056062307) ) ) {
      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-0.5313858905757674611) ) ) {
        if ( LIKELY(  (data[58].missing != -1) && (data[58].fvalue <= (double)-0.5521983535815221389) ) ) {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.3678488213209678004) ) ) {
            if ( UNLIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.3914927184801726967) ) ) {
              result[1] += -0.011696172750616593;
            } else {
              result[1] += 0.03789526797097268;
            }
          } else {
            if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7704629034599390636) ) ) {
              if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.6054551360476957411) ) ) {
                result[1] += -0.018472656105392827;
              } else {
                if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3705796779665639362) ) ) {
                  if ( LIKELY(  (data[53].missing != -1) && (data[53].fvalue <= (double)-0.265032629752936788) ) ) {
                    result[1] += 0.03575083439790769;
                  } else {
                    result[1] += 0.010713272339897622;
                  }
                } else {
                  if ( UNLIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.6197389874448662184) ) ) {
                    result[1] += -0.021155622990791247;
                  } else {
                    if ( UNLIKELY( !(data[52].missing != -1) || (data[52].fvalue <= (double)1.00000001800250948e-35) ) ) {
                      result[1] += -0.0179024919652332;
                    } else {
                      result[1] += 0.01854456371192135;
                    }
                  }
                }
              }
            } else {
              result[1] += -0.03532383999022295;
            }
          }
        } else {
          result[1] += 0.03374725584461008;
        }
      } else {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-2.256928839343927518) ) ) {
          result[1] += 0.035293878354717284;
        } else {
          if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.7883854521676313398) ) ) {
            result[1] += -0.007941072225499262;
          } else {
            result[1] += -0.03409261633698534;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)1.255335709851286952) ) ) {
        result[1] += 0.03514089357851146;
      } else {
        if ( LIKELY(  (data[45].missing != -1) && (data[45].fvalue <= (double)-0.07605130760388041644) ) ) {
          result[1] += 0.031067023528427055;
        } else {
          result[1] += -0.02228593542007353;
        }
      }
    }
  }
  if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (double)1.525439072483760983) ) ) {
    result[2] += -0.03253639783856308;
  } else {
    if ( UNLIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.5127797934485048836) ) ) {
      if ( LIKELY(  (data[42].missing != -1) && (data[42].fvalue <= (double)-0.01037865820108373541) ) ) {
        if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)6.077547591217599354) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.713419879289624137) ) ) {
            result[2] += 0.02284310854665842;
          } else {
            result[2] += -0.03725024309308067;
          }
        } else {
          result[2] += 0.03578856370898613;
        }
      } else {
        result[2] += 0.07804001031936009;
      }
    } else {
      result[2] += -0.03465628173176119;
    }
  }
  if ( UNLIKELY(  (data[53].missing != -1) && (data[53].fvalue <= (double)-0.2698841853695199133) ) ) {
    if ( LIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1845224968741556448) ) ) {
      result[3] += 0.035021162820089755;
    } else {
      result[3] += -0.03627425601717545;
    }
  } else {
    result[3] += -0.03511921083112999;
  }
  if ( LIKELY( !(data[89].missing != -1) || (data[89].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.262377816431567767) ) ) {
      result[4] += -0.005535514474938153;
    } else {
      result[4] += -0.03422246343807055;
    }
  } else {
    result[4] += 0.036066025558135775;
  }
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1842749835118759061) ) ) {
    result[5] += 0.10807506112950266;
  } else {
    if ( UNLIKELY(  (data[4].missing != -1) && (data[4].fvalue <= (double)-0.5246057880532989381) ) ) {
      result[5] += 0.032553234693369335;
    } else {
      result[5] += -0.03445153514342348;
    }
  }
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1699192084996526686) ) ) {
    result[6] += 0.05883058498661428;
  } else {
    result[6] += -0.034462205032056666;
  }
  if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3728354207891853567) ) ) {
    if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.4815484825403061886) ) ) {
      result[7] += 0.003562736990152163;
    } else {
      result[7] += 0.02896062980539296;
    }
  } else {
    result[7] += -0.034448845154796;
  }
  if ( LIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.08007185799211762045) ) ) {
    if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6189299289389768033) ) ) {
      result[8] += -0.036600202799615546;
    } else {
      result[8] += -0.018114618318022184;
    }
  } else {
    if ( LIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.4804758948180142819) ) ) {
      result[8] += -0.00856381824222608;
    } else {
      result[8] += 0.03115281917698859;
    }
  }
  if ( UNLIKELY(  (data[4].missing != -1) && (data[4].fvalue <= (double)-0.5523457074688490342) ) ) {
    if ( LIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5875014015255205502) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6223826552160477421) ) ) {
        if ( UNLIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.2121101247298024794) ) ) {
          result[9] += -0.026777879019751365;
        } else {
          result[9] += 0.02731217438573067;
        }
      } else {
        if ( LIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5976020433148727662) ) ) {
          result[9] += 0.035719752863664814;
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6359230018345859436) ) ) {
            result[9] += 0.05269833276363015;
          } else {
            result[9] += -0.013433533083637763;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.713419879289624137) ) ) {
        if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.0237904559098773595) ) ) {
          if ( LIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.03889109830383016136) ) ) {
            result[9] += -0.03223705819680296;
          } else {
            result[9] += 0.04515758853369569;
          }
        } else {
          result[9] += -0.030822883307997383;
        }
      } else {
        result[9] += 0.02710658913891152;
      }
    }
  } else {
    if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.7671482474614917946) ) ) {
        result[9] += -0.02968468162794824;
      } else {
        result[9] += 0.012004823995225325;
      }
    } else {
      result[9] += -0.03359685508549955;
    }
  }
  if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[10] += -0.03304110576003832;
  } else {
    result[10] += 0.03569518978920392;
  }
  if ( UNLIKELY( !(data[84].missing != -1) || (data[84].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( LIKELY(  (data[42].missing != -1) && (data[42].fvalue <= (double)-0.01064205461029017231) ) ) {
      if ( UNLIKELY(  (data[6].missing != -1) && (data[6].fvalue <= (double)-0.343438049588791483) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5142327377564889224) ) ) {
          if ( UNLIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.9807782994563922774) ) ) {
            if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6198661978514050652) ) ) {
              if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.676211289072984667) ) ) {
                result[11] += 0.017089612834721653;
              } else {
                result[11] += -0.009546407510166886;
              }
            } else {
              result[11] += 0.05214860742268897;
            }
          } else {
            if ( LIKELY(  (data[34].missing != -1) && (data[34].fvalue <= (double)-0.2496079044008812919) ) ) {
              result[11] += -0.03724603516119371;
            } else {
              result[11] += 0.04487194857168363;
            }
          }
        } else {
          if ( LIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.6189618381496487798) ) ) {
            if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)7.53102019047485971) ) ) {
              if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)5.403462557376244035) ) ) {
                result[11] += 0.013871085558434271;
              } else {
                result[11] += -0.009143041166612817;
              }
            } else {
              result[11] += 0.03433220700949997;
            }
          } else {
            result[11] += 0.03759130915161597;
          }
        }
      } else {
        if ( UNLIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.6197994531079804581) ) ) {
          result[11] += -0.00335981005211419;
        } else {
          result[11] += -0.03453275979496243;
        }
      }
    } else {
      if ( UNLIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6039903039694579645) ) ) {
        if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.3194135100530759996) ) ) {
          if ( UNLIKELY(  (data[69].missing != -1) && (data[69].fvalue <= (double)-0.2271578509599546103) ) ) {
            result[11] += 0.017363887350091322;
          } else {
            result[11] += -0.03249867419146176;
          }
        } else {
          result[11] += 0.022719827403493396;
        }
      } else {
        if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.633414985554953236) ) ) {
          if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.2936476673436070883) ) ) {
            result[11] += 0.03520162489163465;
          } else {
            result[11] += -0.0029813837534104913;
          }
        } else {
          if ( LIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (double)0.9724126908814180181) ) ) {
            result[11] += -0.026441838005286235;
          } else {
            result[11] += 0.02048016200427321;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY(  (data[12].missing != -1) && (data[12].fvalue <= (double)-1.128486328597585908) ) ) {
      if ( LIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.6196488487353301045) ) ) {
        if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.261418469357002747) ) ) {
          result[11] += -0.02538607418721937;
        } else {
          if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.5768004418985506199) ) ) {
            if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)1.919454079368898114) ) ) {
              if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.021666323191162684) ) ) {
                result[11] += 0.0437167487872517;
              } else {
                result[11] += -0.009087031719303423;
              }
            } else {
              result[11] += 0.05228148821628943;
            }
          } else {
            result[11] += 0.004131138250083925;
          }
        }
      } else {
        result[11] += -0.02779480969244985;
      }
    } else {
      if ( LIKELY( !(data[55].missing != -1) || (data[55].fvalue <= (double)1.00000001800250948e-35) ) ) {
        result[11] += -0.03417809535245751;
      } else {
        result[11] += 0.024928232327035376;
      }
    }
  }
  if ( LIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (double)0.301285017925520815) ) ) {
    if ( UNLIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.4241077355256945292) ) ) {
      if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (double)1.490178253475586745) ) ) {
        if ( UNLIKELY(  (data[10].missing != -1) && (data[10].fvalue <= (double)-2.75564553069109186) ) ) {
          result[12] += 0.08280642892297285;
        } else {
          result[12] += 0.03797309000671768;
        }
      } else {
        result[12] += -0.027197466862361165;
      }
    } else {
      if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.1625943879968777261) ) ) {
        result[12] += -0.03446463608904497;
      } else {
        result[12] += 0.02404746878682562;
      }
    }
  } else {
    result[12] += -0.02885893971773695;
  }
  if ( UNLIKELY( !(data[84].missing != -1) || (data[84].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02376901934613134468) ) ) {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4134826703502541556) ) ) {
        result[0] += 0.0032358430958959196;
      } else {
        if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.136326896897185579) ) ) {
          result[0] += -0.006900209177001727;
        } else {
          if ( LIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.2207227011686356544) ) ) {
            if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.959205621047357071) ) ) {
              result[0] += 0.01681919728411267;
            } else {
              result[0] += 0.03443566565745926;
            }
          } else {
            if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)6.015862565909510629) ) ) {
              result[0] += 0.029337382387613135;
            } else {
              result[0] += -0.010361257240172603;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)0.7925765324441547133) ) ) {
        if ( LIKELY(  (data[58].missing != -1) && (data[58].fvalue <= (double)-0.4663266532852128887) ) ) {
          if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7896690979949527733) ) ) {
            result[0] += -0.030799150573927583;
          } else {
            if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (double)1.490178253475586745) ) ) {
              if ( LIKELY(  (data[12].missing != -1) && (data[12].fvalue <= (double)-1.128486328597585908) ) ) {
                result[0] += 0.011143764894807865;
              } else {
                result[0] += -0.03357957054540506;
              }
            } else {
              result[0] += 0.042805432036716745;
            }
          }
        } else {
          result[0] += -0.034462348660348384;
        }
      } else {
        if ( LIKELY(  (data[36].missing != -1) && (data[36].fvalue <= (double)-0.679715294562736716) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.156333259956448201) ) ) {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.351830879363718263) ) ) {
              if ( UNLIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.6198482893353244316) ) ) {
                result[0] += 0.009735633860001239;
              } else {
                result[0] += -0.03763018567407931;
              }
            } else {
              if ( LIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.6892214870717320307) ) ) {
                if ( LIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.7914519369226754586) ) ) {
                  result[0] += 0.01513284507717921;
                } else {
                  result[0] += -0.01944598689713829;
                }
              } else {
                result[0] += 0.025740312121560877;
              }
            }
          } else {
            result[0] += -0.02368884648269753;
          }
        } else {
          result[0] += 0.029950809174040027;
        }
      }
    }
  } else {
    if ( UNLIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.4432578306330479112) ) ) {
      if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (double)1.278053921918260949) ) ) {
        if ( UNLIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6318848485338518506) ) ) {
          result[0] += 0.016987591008351607;
        } else {
          result[0] += -0.02478994915516874;
        }
      } else {
        result[0] += 0.03321314030299916;
      }
    } else {
      if ( LIKELY(  (data[47].missing != -1) && (data[47].fvalue <= (double)-0.01257821574043074299) ) ) {
        if ( LIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)9.477337471177632366) ) ) {
          result[0] += -0.0339933303328754;
        } else {
          result[0] += 0.004648706112013117;
        }
      } else {
        result[0] += 0.03786970263245904;
      }
    }
  }
  if ( UNLIKELY(  (data[35].missing != -1) && (data[35].fvalue <= (double)-0.5574519420018757554) ) ) {
    if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1772208526869041567) ) ) {
      result[1] += -0.034926508093079435;
    } else {
      if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.6569974455578183603) ) ) {
        if ( LIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)0.2372404051518106349) ) ) {
          if ( UNLIKELY(  (data[3].missing != -1) && (data[3].fvalue <= (double)-0.5866807462802454687) ) ) {
            result[1] += 0.03581106392109538;
          } else {
            if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.08007185799211762045) ) ) {
              if ( LIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.08328953170175386334) ) ) {
                result[1] += -0.031785554712769004;
              } else {
                result[1] += 0.0009112621317328691;
              }
            } else {
              result[1] += -0.03598822347809528;
            }
          }
        } else {
          if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
            result[1] += 0.0356518055182177;
          } else {
            result[1] += -0.03522646983331299;
          }
        }
      } else {
        if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)1.126466175977412165) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.102546986980341481) ) ) {
            if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02360509266710225651) ) ) {
              result[1] += -0.03462469562931537;
            } else {
              result[1] += 0.0255792879577387;
            }
          } else {
            result[1] += 0.029879134619566997;
          }
        } else {
          result[1] += -0.018987226956102905;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[38].missing != -1) || (data[38].fvalue <= (double)1.355342907056062307) ) ) {
      if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3699951939963300185) ) ) {
        if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8335982467741961388) ) ) {
          result[1] += 0.03532355623782039;
        } else {
          if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.6054551360476957411) ) ) {
            if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.676211289072984667) ) ) {
              result[1] += 0.011929916951759347;
            } else {
              result[1] += -0.04077290678699163;
            }
          } else {
            if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.5325896194295395292) ) ) {
              if ( LIKELY(  (data[55].missing != -1) && (data[55].fvalue <= (double)-0.08450603599490492945) ) ) {
                result[1] += 0.0338138292589765;
              } else {
                result[1] += 0.015338810964405671;
              }
            } else {
              if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.4143637838009673335) ) ) {
                result[1] += -0.02058877244203368;
              } else {
                result[1] += 0.04106377956129472;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1845224968741556448) ) ) {
          result[1] += 0.03523809511915326;
        } else {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-0.5313858905757674611) ) ) {
            if ( UNLIKELY(  (data[55].missing != -1) && (data[55].fvalue <= (double)-0.1292032387258958137) ) ) {
              result[1] += -0.047573928522450584;
            } else {
              if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6198548801993158941) ) ) {
                result[1] += -0.030683311001357075;
              } else {
                if ( UNLIKELY(  (data[34].missing != -1) && (data[34].fvalue <= (double)-0.2525383499305560719) ) ) {
                  if ( LIKELY( !(data[52].missing != -1) || (data[52].fvalue <= (double)0.01546367856846388687) ) ) {
                    result[1] += 0.024869220163464784;
                  } else {
                    result[1] += -0.012054736290188458;
                  }
                } else {
                  if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.1983329019036020324) ) ) {
                    result[1] += 0.03709108338152216;
                  } else {
                    result[1] += 0.013876041804306585;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY(  (data[35].missing != -1) && (data[35].fvalue <= (double)-0.4306204689105233574) ) ) {
              result[1] += 0.00942237682171334;
            } else {
              result[1] += -0.03512463734732025;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)1.255335709851286952) ) ) {
        result[1] += 0.03508543664628885;
      } else {
        result[1] += 0.023339105798037114;
      }
    }
  }
  if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
    result[2] += -0.032648832441497404;
  } else {
    if ( LIKELY( !(data[55].missing != -1) || (data[55].fvalue <= (double)1.9687275667312647) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.713419879289624137) ) ) {
        if ( UNLIKELY(  (data[43].missing != -1) && (data[43].fvalue <= (double)-0.2706863921661374905) ) ) {
          result[2] += -0.0049556551389986795;
        } else {
          if ( UNLIKELY(  (data[43].missing != -1) && (data[43].fvalue <= (double)-0.270194635957233531) ) ) {
            result[2] += 0.042045376645039205;
          } else {
            result[2] += -0.0040167303423553225;
          }
        }
      } else {
        result[2] += -0.0368367542815635;
      }
    } else {
      if ( UNLIKELY(  (data[3].missing != -1) && (data[3].fvalue <= (double)-0.4818781794236651761) ) ) {
        result[2] += 0.05320974430419411;
      } else {
        result[2] += 0.008288789003355793;
      }
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)0.9946455059545064037) ) ) {
    result[3] += -0.0351654414421988;
  } else {
    if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02383269855696708642) ) ) {
      result[3] += 0.034554455231916525;
    } else {
      if ( LIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.0388927806847981436) ) ) {
        result[3] += 0.03514460408498366;
      } else {
        result[3] += -0.018422949230944778;
      }
    }
  }
  if ( LIKELY( !(data[45].missing != -1) || (data[45].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[4] += -0.033437668303080925;
  } else {
    if ( LIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6316814848651618464) ) ) {
      result[4] += 0.03589164813428544;
    } else {
      result[4] += 0.004598472752939649;
    }
  }
  if ( LIKELY(  (data[20].missing != -1) && (data[20].fvalue <= (double)-0.4455763584367840591) ) ) {
    if ( UNLIKELY(  (data[12].missing != -1) && (data[12].fvalue <= (double)-1.128486328597585908) ) ) {
      result[5] += 0.022369123278715212;
    } else {
      result[5] += -0.03444620613749412;
    }
  } else {
    result[5] += 0.09148563665971324;
  }
  if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8851947168287664924) ) ) {
    result[6] += 0.07120960837030323;
  } else {
    result[6] += -0.020020113782041;
  }
  if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8851947168287664924) ) ) {
    if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.4815484825403061886) ) ) {
      result[7] += 0.0031138294700166083;
    } else {
      result[7] += 0.02849841997398917;
    }
  } else {
    result[7] += -0.034447814419165695;
  }
  if ( LIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.08007185799211762045) ) ) {
    if ( LIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.619334285637768045) ) ) {
      result[8] += -0.036601280015955216;
    } else {
      result[8] += -0.017769416690608286;
    }
  } else {
    if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.4815484825403061886) ) ) {
      result[8] += -0.007974865326883228;
    } else {
      result[8] += 0.030834376021267776;
    }
  }
  if ( UNLIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-0.5006032028397574551) ) ) {
    if ( UNLIKELY( !(data[83].missing != -1) || (data[83].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY(  (data[3].missing != -1) && (data[3].fvalue <= (double)-0.5567371557497939882) ) ) {
        result[9] += -0.031427179515522805;
      } else {
        result[9] += 0.01333568270752923;
      }
    } else {
      if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6198477403999548274) ) ) {
        if ( LIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6123740531003599719) ) ) {
          if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.5549832342097297255) ) ) {
            if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3721048158263929317) ) ) {
              result[9] += 0.03455792968637564;
            } else {
              result[9] += -0.008310085755487187;
            }
          } else {
            result[9] += 0.06740476032952328;
          }
        } else {
          result[9] += -0.012092630216197412;
        }
      } else {
        result[9] += -0.02356778334404913;
      }
    }
  } else {
    if ( LIKELY(  (data[47].missing != -1) && (data[47].fvalue <= (double)-0.003309178062649400284) ) ) {
      result[9] += -0.0335727033251122;
    } else {
      result[9] += 0.0014321203580041333;
    }
  }
  if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[10] += -0.03294653721784513;
  } else {
    result[10] += 0.035617075070741654;
  }
  if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.2270910346818499626) ) ) {
    if ( LIKELY(  (data[36].missing != -1) && (data[36].fvalue <= (double)-0.618191645368454501) ) ) {
      if ( LIKELY(  (data[20].missing != -1) && (data[20].fvalue <= (double)-0.5448433239136843964) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6832277872550962527) ) ) {
          if ( UNLIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.6196604965832473999) ) ) {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-1.948957976892493393) ) ) {
              if ( UNLIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)1.098642039016307193) ) ) {
                result[11] += 0.031609428508551494;
              } else {
                result[11] += 0.003430046661745224;
              }
            } else {
              if ( LIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5971322619641227236) ) ) {
                if ( LIKELY(  (data[61].missing != -1) && (data[61].fvalue <= (double)-0.1669273088714700592) ) ) {
                  result[11] += -0.03160456346800989;
                } else {
                  result[11] += 0.010951143612932908;
                }
              } else {
                if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.650710626636601841) ) ) {
                  result[11] += 0.024657282690683294;
                } else {
                  result[11] += -0.01611919920958919;
                }
              }
            }
          } else {
            result[11] += -0.029463660940755337;
          }
        } else {
          if ( LIKELY(  (data[43].missing != -1) && (data[43].fvalue <= (double)-0.2705280954562509499) ) ) {
            if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02268710327141496702) ) ) {
              result[11] += -0.019042841068319466;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8215697967491829568) ) ) {
                result[11] += 0.03515505277697413;
              } else {
                result[11] += 0.01288415064310362;
              }
            }
          } else {
            result[11] += 0.0571921561072992;
          }
        }
      } else {
        result[11] += -0.033054341147646785;
      }
    } else {
      if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02376397544737933118) ) ) {
        result[11] += -0.031636512212178544;
      } else {
        if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.3700968684848933155) ) ) {
          if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02364796579988320477) ) ) {
            result[11] += 0.016123465508865766;
          } else {
            result[11] += 0.03472491934753066;
          }
        } else {
          result[11] += -0.019968101836365798;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[83].missing != -1) || (data[83].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)3.8714595178205502) ) ) {
        result[11] += -0.034221984692690444;
      } else {
        result[11] += 0.039281995530528434;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6555132905592796488) ) ) {
        result[11] += -0.01727024170692825;
      } else {
        result[11] += 0.037199479220708064;
      }
    }
  }
  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.32011123242420747) ) ) {
    if ( LIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.2709289357124474162) ) ) {
      if ( LIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.2749445138003689393) ) ) {
        if ( UNLIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5982284184492060453) ) ) {
          if ( LIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6039153855771924873) ) ) {
            result[12] += -0.022367059075010153;
          } else {
            result[12] += 0.046936087959797326;
          }
        } else {
          result[12] += -0.031168478908285998;
        }
      } else {
        result[12] += 0.06737625497451687;
      }
    } else {
      result[12] += -0.034628793618497494;
    }
  } else {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.460698822199083313) ) ) {
      result[12] += 0.08145751194186684;
    } else {
      result[12] += 0.01617067318430624;
    }
  }
  if ( LIKELY( !(data[86].missing != -1) || (data[86].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
      if ( UNLIKELY( !(data[82].missing != -1) || (data[82].fvalue <= (double)1.00000001800250948e-35) ) ) {
        if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (double)0.06941445991431857698) ) ) {
          if ( LIKELY( !(data[55].missing != -1) || (data[55].fvalue <= (double)1.00000001800250948e-35) ) ) {
            if ( UNLIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)0.9873454911718881899) ) ) {
              result[0] += 0.006889929149644726;
            } else {
              result[0] += -0.03554157981267754;
            }
          } else {
            result[0] += 0.02484566397379001;
          }
        } else {
          result[0] += 0.03055591444434887;
        }
      } else {
        if ( LIKELY( !(data[50].missing != -1) || (data[50].fvalue <= (double)0.113078527307702334) ) ) {
          result[0] += -0.03450046810353905;
        } else {
          result[0] += 0.022312218821099173;
        }
      }
    } else {
      if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1701667218619324073) ) ) {
        result[0] += -0.08415532865695712;
      } else {
        if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02377658519293713094) ) ) {
          if ( UNLIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.4631637908997194297) ) ) {
            if ( LIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.08328953170175386334) ) ) {
              if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6199213037677842042) ) ) {
                result[0] += -0.04018001808056577;
              } else {
                result[0] += 0.003381277708188495;
              }
            } else {
              result[0] += 0.02521680025445408;
            }
          } else {
            result[0] += 0.03709805226695567;
          }
        } else {
          if ( LIKELY( !(data[47].missing != -1) || (data[47].fvalue <= (double)0.01042025011524357753) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-0.5313858905757674611) ) ) {
              result[0] += -0.0025124995830876754;
            } else {
              result[0] += -0.03008511925263819;
            }
          } else {
            result[0] += 0.04163255621180323;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02321671253988670178) ) ) {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4134826703502541556) ) ) {
        result[0] += 0.0004851491641812004;
      } else {
        if ( UNLIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.598150121557414427) ) ) {
          result[0] += 0.0029732593114342684;
        } else {
          result[0] += 0.03439189535249092;
        }
      }
    } else {
      if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7880685817837016494) ) ) {
        result[0] += -0.03491873421523629;
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.218215524927980686) ) ) {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.351830879363718263) ) ) {
            if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.1185534018316622001) ) ) {
              result[0] += -0.02902255288499183;
            } else {
              result[0] += 0.014262630190535341;
            }
          } else {
            if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)2.674638636662801439) ) ) {
              result[0] += 0.03547469170550152;
            } else {
              if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)5.403462557376244035) ) ) {
                if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)4.802196269761418002) ) ) {
                  result[0] += 0.010720925736951922;
                } else {
                  result[0] += -0.025913499917480372;
                }
              } else {
                result[0] += 0.02150068333169414;
              }
            }
          }
        } else {
          result[0] += -0.02901864026018038;
        }
      }
    }
  }
  if ( UNLIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.4545285182290580983) ) ) {
    if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.7405682477364100569) ) ) {
      if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.6438362138560046466) ) ) {
        if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.08007185799211762045) ) ) {
          if ( LIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.08328953170175386334) ) ) {
            if ( UNLIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5875014015255205502) ) ) {
              result[1] += 0.004588506147037505;
            } else {
              result[1] += -0.03703144797675864;
            }
          } else {
            result[1] += 0.025576891338407362;
          }
        } else {
          result[1] += -0.036892476844062064;
        }
      } else {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.3678488213209678004) ) ) {
          result[1] += 0.03433371636256391;
        } else {
          if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1565534869365482751) ) ) {
            result[1] += -0.007359368490210684;
          } else {
            result[1] += -0.035444920045345954;
          }
        }
      }
    } else {
      if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3679403675384765315) ) ) {
        result[1] += -0.03497170934712759;
      } else {
        if ( LIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5778712265833717554) ) ) {
          result[1] += -0.03648202951720283;
        } else {
          result[1] += 0.012127962193131748;
        }
      }
    }
  } else {
    if ( UNLIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.6198429758531422973) ) ) {
      if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.3083892198998683942) ) ) {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4134826703502541556) ) ) {
          result[1] += -0.0016802065143734493;
        } else {
          result[1] += -0.035555953160408764;
        }
      } else {
        if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)1.487065212509800061) ) ) {
          result[1] += 0.0026586014302201143;
        } else {
          result[1] += 0.03514175981583939;
        }
      }
    } else {
      if ( LIKELY( !(data[83].missing != -1) || (data[83].fvalue <= (double)1.00000001800250948e-35) ) ) {
        if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)3.816561841575487168) ) ) {
          result[1] += 0.0348030620961172;
        } else {
          if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)0.01779133058124936217) ) ) {
            result[1] += -0.03741824698450977;
          } else {
            result[1] += 0.029839856050011715;
          }
        }
      } else {
        if ( UNLIKELY(  (data[4].missing != -1) && (data[4].fvalue <= (double)-0.5384757477610738752) ) ) {
          if ( UNLIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6037699829839762167) ) ) {
            result[1] += -0.001396679859836945;
          } else {
            if ( LIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.6192635509156506624) ) ) {
              if ( LIKELY(  (data[55].missing != -1) && (data[55].fvalue <= (double)-0.1242185797380795653) ) ) {
                result[1] += 0.0333836208604945;
              } else {
                result[1] += 0.013432025540960246;
              }
            } else {
              result[1] += 0.0020613200121256587;
            }
          }
        } else {
          result[1] += -0.03522032992759573;
        }
      }
    }
  }
  if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (double)1.525439072483760983) ) ) {
    result[2] += -0.03228120243466713;
  } else {
    if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY(  (data[42].missing != -1) && (data[42].fvalue <= (double)-0.01039754159772434371) ) ) {
        if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.5824022486379295538) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.713419879289624137) ) ) {
            result[2] += 0.023452931833059236;
          } else {
            result[2] += -0.036907256268958;
          }
        } else {
          result[2] += 0.0343171035838937;
        }
      } else {
        result[2] += 0.07346625089964201;
      }
    } else {
      result[2] += -0.03463824441813097;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)0.9946455059545064037) ) ) {
    result[3] += -0.035128627344950314;
  } else {
    if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02383269855696708642) ) ) {
      result[3] += 0.034458197818202134;
    } else {
      if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.0237904559098773595) ) ) {
        result[3] += 0.03510693293697467;
      } else {
        result[3] += -0.02127754191910745;
      }
    }
  }
  if ( LIKELY( !(data[89].missing != -1) || (data[89].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.262377816431567767) ) ) {
      result[4] += -0.0033030260037539864;
    } else {
      result[4] += -0.034184218862531535;
    }
  } else {
    result[4] += 0.035852751323443385;
  }
  if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (double)1.490178253475586745) ) ) {
    if ( UNLIKELY(  (data[12].missing != -1) && (data[12].fvalue <= (double)-1.128486328597585908) ) ) {
      result[5] += 0.022644458887283638;
    } else {
      result[5] += -0.03443599186153442;
    }
  } else {
    result[5] += 0.08608793327757978;
  }
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1699192084996526686) ) ) {
    result[6] += 0.05578669357829747;
  } else {
    result[6] += -0.03446584741526456;
  }
  if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3728354207891853567) ) ) {
    if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.4815484825403061886) ) ) {
      result[7] += 0.0026813815227600853;
    } else {
      result[7] += 0.02797161882126045;
    }
  } else {
    result[7] += -0.03444684886262158;
  }
  if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (double)2.986558014660257054) ) ) {
    result[8] += -0.032985070335839445;
  } else {
    if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.2434747188952851582) ) ) {
      result[8] += -0.016696916996789015;
    } else {
      result[8] += 0.03543327816365125;
    }
  }
  if ( UNLIKELY(  (data[4].missing != -1) && (data[4].fvalue <= (double)-0.5523457074688490342) ) ) {
    if ( UNLIKELY( !(data[83].missing != -1) || (data[83].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5699021105360092543) ) ) {
        result[9] += -0.03756215063776193;
      } else {
        result[9] += 0.012114869795525725;
      }
    } else {
      if ( LIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6123740531003599719) ) ) {
        if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.7260679178284027424) ) ) {
          if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8226535410050448416) ) ) {
            result[9] += 0.03413633736597757;
          } else {
            result[9] += -0.009079523184023183;
          }
        } else {
          result[9] += 0.0628290689881692;
        }
      } else {
        result[9] += -0.01560721094899337;
      }
    }
  } else {
    if ( UNLIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-0.4969520972243098855) ) ) {
      if ( LIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.8594402036712854853) ) ) {
        result[9] += 0.018655223298854724;
      } else {
        result[9] += -0.028271607398552345;
      }
    } else {
      result[9] += -0.03349454709021931;
    }
  }
  if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[10] += -0.03284588354321172;
  } else {
    result[10] += 0.03554318398317472;
  }
  if ( UNLIKELY( !(data[84].missing != -1) || (data[84].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.9564359567862011913) ) ) {
      if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.056440621248962985) ) ) {
        if ( UNLIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.4076512707803252034) ) ) {
          result[11] += 0.01607257134253621;
        } else {
          result[11] += -0.03141048885432273;
        }
      } else {
        if ( UNLIKELY(  (data[61].missing != -1) && (data[61].fvalue <= (double)-0.1686998530023144371) ) ) {
          result[11] += -0.006243694097220044;
        } else {
          if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3590909149266541811) ) ) {
            result[11] += 0.036060043668897014;
          } else {
            result[11] += 0.01454781291600713;
          }
        }
      }
    } else {
      if ( LIKELY(  (data[34].missing != -1) && (data[34].fvalue <= (double)-0.1419943173642288781) ) ) {
        if ( LIKELY(  (data[36].missing != -1) && (data[36].fvalue <= (double)-0.679715294562736716) ) ) {
          if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3679403675384765315) ) ) {
            if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.6438362138560046466) ) ) {
              result[11] += 0.016706173910485907;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5865439505491081285) ) ) {
                if ( LIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.624853897296242633) ) ) {
                  result[11] += -0.034851476109970185;
                } else {
                  result[11] += 0.0013496574296759274;
                }
              } else {
                if ( LIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6280911155401268653) ) ) {
                  result[11] += 0.006088713132890395;
                } else {
                  result[11] += 0.030476769632534706;
                }
              }
            }
          } else {
            result[11] += 0.025996133405788366;
          }
        } else {
          if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
            result[11] += -0.034345900975463514;
          } else {
            result[11] += -0.00309538604624917;
          }
        }
      } else {
        if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.4076512707803252034) ) ) {
          result[11] += 0.036602889307709885;
        } else {
          result[11] += -0.011738430974567579;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[82].missing != -1) || (data[82].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-2.256928839343927518) ) ) {
        result[11] += -0.033333173072184;
      } else {
        if ( LIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.1235926604080993113) ) ) {
          if ( LIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5970539650723311054) ) ) {
            if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1558109468497091699) ) ) {
              result[11] += 0.03746889219640486;
            } else {
              result[11] += -0.03508774911493254;
            }
          } else {
            result[11] += 0.03689104902034458;
          }
        } else {
          result[11] += -0.025128303483118605;
        }
      }
    } else {
      if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
        result[11] += -0.03433803454301056;
      } else {
        result[11] += 0.03891436404075686;
      }
    }
  }
  if ( LIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (double)0.301285017925520815) ) ) {
    if ( LIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( UNLIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.4432578306330479112) ) ) {
        if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.7452588359231892001) ) ) {
          result[12] += -0.003945587746394582;
        } else {
          if ( UNLIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5983067153409977745) ) ) {
            result[12] += 0.05988555508472283;
          } else {
            result[12] += 0.017306253515828623;
          }
        }
      } else {
        result[12] += -0.034510302584819186;
      }
    } else {
      if ( UNLIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.2709289357124474162) ) ) {
        result[12] += 0.06459255262493963;
      } else {
        result[12] += 0.007394450439545371;
      }
    }
  } else {
    result[12] += -0.028341562373313024;
  }
  if ( UNLIKELY( !(data[82].missing != -1) || (data[82].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.25526421801615129) ) ) {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.3678488213209678004) ) ) {
        if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)2.795914393643698315) ) ) {
          if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3720043576440090205) ) ) {
            result[0] += 0.022247171050206477;
          } else {
            if ( LIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5778712265833717554) ) ) {
              result[0] += -0.03587477935325079;
            } else {
              result[0] += -0.00610880135356369;
            }
          }
        } else {
          result[0] += 0.02492916884130363;
        }
      } else {
        if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02370849257168504073) ) ) {
          if ( UNLIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.597836933990247732) ) ) {
            result[0] += 0.009623496675414556;
          } else {
            result[0] += 0.03374271380321048;
          }
        } else {
          if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.9475499506149932527) ) ) {
            result[0] += -0.03115177272471875;
          } else {
            if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)1.321235134705145642) ) ) {
              if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.1631875991615196753) ) ) {
                if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.8714145528018332199) ) ) {
                  result[0] += 0.01964053722877811;
                } else {
                  if ( LIKELY(  (data[69].missing != -1) && (data[69].fvalue <= (double)-0.3558719797646143213) ) ) {
                    result[0] += -0.010249110721232432;
                  } else {
                    result[0] += 0.023461446215178854;
                  }
                }
              } else {
                result[0] += 0.037294926929677015;
              }
            } else {
              result[0] += -0.02046059803152443;
            }
          }
        }
      }
    } else {
      result[0] += -0.04794603808570744;
    }
  } else {
    if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
      if ( LIKELY( !(data[50].missing != -1) || (data[50].fvalue <= (double)0.113078527307702334) ) ) {
        result[0] += -0.03449711576120293;
      } else {
        result[0] += 0.02135916483056302;
      }
    } else {
      if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1772208526869041567) ) ) {
        result[0] += -0.08078721984007001;
      } else {
        if ( LIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5732125615217674719) ) ) {
          if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.076345667441572784) ) ) {
            if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.08007185799211762045) ) ) {
              result[0] += 0.02089648419235938;
            } else {
              result[0] += -0.03592186471551637;
            }
          } else {
            result[0] += -0.03139560452935493;
          }
        } else {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-0.5313858905757674611) ) ) {
            result[0] += 0.051993839535489396;
          } else {
            result[0] += 0.027996245520771075;
          }
        }
      }
    }
  }
  if ( UNLIKELY(  (data[33].missing != -1) && (data[33].fvalue <= (double)-0.6992443821141464122) ) ) {
    if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY(  (data[79].missing != -1) && (data[79].fvalue <= (double)-0.4168475085733249208) ) ) {
        if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.1794951076842806192) ) ) {
          if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (double)1.490178253475586745) ) ) {
            result[1] += -0.034985828248513366;
          } else {
            result[1] += 0.010873358987569033;
          }
        } else {
          if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.7260679178284027424) ) ) {
            if ( LIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5930608235909559101) ) ) {
              result[1] += 0.009174438464781083;
            } else {
              result[1] += 0.03885127925643854;
            }
          } else {
            result[1] += -0.017356076187549654;
          }
        }
      } else {
        result[1] += 0.034690524346215924;
      }
    } else {
      if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.3083892198998683942) ) ) {
        result[1] += -0.03493845112579419;
      } else {
        if ( UNLIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)9.477337471177632366) ) ) {
          result[1] += 0.02542748801401089;
        } else {
          result[1] += -0.03523085438806549;
        }
      }
    }
  } else {
    if ( LIKELY(  (data[58].missing != -1) && (data[58].fvalue <= (double)-0.07150931649549026325) ) ) {
      if ( LIKELY(  (data[50].missing != -1) && (data[50].fvalue <= (double)-0.0172849402933750694) ) ) {
        if ( LIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5596358574587944057) ) ) {
          if ( UNLIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5969756681805393761) ) ) {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.3678488213209678004) ) ) {
              if ( UNLIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.3914927184801726967) ) ) {
                result[1] += -0.009742538045541304;
              } else {
                result[1] += 0.03677819840258893;
              }
            } else {
              if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.6054551360476957411) ) ) {
                if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)0.8482248063663643256) ) ) {
                  result[1] += 0.009530981558133134;
                } else {
                  result[1] += -0.03627519002471521;
                }
              } else {
                if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3705796779665639362) ) ) {
                  if ( LIKELY(  (data[53].missing != -1) && (data[53].fvalue <= (double)-0.265032629752936788) ) ) {
                    result[1] += 0.035362578405905766;
                  } else {
                    result[1] += 0.009819734917170558;
                  }
                } else {
                  if ( UNLIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6038756428521431241) ) ) {
                    result[1] += -0.022920575170743897;
                  } else {
                    if ( LIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6030701101055554458) ) ) {
                      result[1] += 0.018741033124956393;
                    } else {
                      result[1] += -0.0180436036596996;
                    }
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4134826703502541556) ) ) {
              result[1] += 0.04330715284115849;
            } else {
              result[1] += -0.03426279426961494;
            }
          }
        } else {
          if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (double)0.06194450032220521346) ) ) {
            result[1] += 0.03462347730912561;
          } else {
            if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.0237904559098773595) ) ) {
              result[1] += -0.026941643924565488;
            } else {
              result[1] += 0.026768380789971458;
            }
          }
        }
      } else {
        if ( UNLIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.598150121557414427) ) ) {
          result[1] += 0.028656626318896462;
        } else {
          result[1] += -0.03472190898013328;
        }
      }
    } else {
      if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)2.241896858953469351) ) ) {
        result[1] += 0.03497164337047825;
      } else {
        result[1] += 0.021390193828295555;
      }
    }
  }
  if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
    result[2] += -0.032411106206068976;
  } else {
    if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( UNLIKELY(  (data[58].missing != -1) && (data[58].fvalue <= (double)-0.5403549039332858905) ) ) {
        result[2] += 0.06696302315983046;
      } else {
        result[2] += 0.02716206546820418;
      }
    } else {
      if ( UNLIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.4545285182290580983) ) ) {
        result[2] += 0.01625736768953027;
      } else {
        result[2] += -0.03560281718805715;
      }
    }
  }
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1845224968741556448) ) ) {
    if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1847700102364353281) ) ) {
      result[3] += -0.035448698356743975;
    } else {
      result[3] += 0.035006481569100974;
    }
  } else {
    result[3] += -0.035181974966171634;
  }
  if ( LIKELY( !(data[89].missing != -1) || (data[89].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3728354207891853567) ) ) {
      result[4] += -0.0044616536987275735;
    } else {
      result[4] += -0.03386765761261948;
    }
  } else {
    result[4] += 0.03575884521879891;
  }
  if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.2187438308450221636) ) ) {
    if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.8758359294256646832) ) ) {
      result[5] += -0.03445111231248011;
    } else {
      result[5] += 0.009793912427914726;
    }
  } else {
    result[5] += 0.07247441415477841;
  }
  if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.4076512707803252034) ) ) {
    result[6] += -0.023727146583899725;
  } else {
    result[6] += 0.06470258886190164;
  }
  if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8851947168287664924) ) ) {
    if ( UNLIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.4805219744909849933) ) ) {
      result[7] += 0.002225770938575767;
    } else {
      result[7] += 0.02756935503413722;
    }
  } else {
    result[7] += -0.03444595124941393;
  }
  if ( LIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)9.477337471177632366) ) ) {
    result[8] += -0.032503598990093606;
  } else {
    if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.06756346529129970968) ) ) {
      result[8] += -0.014512400195878414;
    } else {
      result[8] += 0.03539806334195643;
    }
  }
  if ( UNLIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-0.4969520972243098855) ) ) {
    if ( LIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1749932324263867578) ) ) {
      if ( LIKELY(  (data[71].missing != -1) && (data[71].fvalue <= (double)-0.4609037820258288787) ) ) {
        result[9] += -0.024664561100853407;
      } else {
        result[9] += 0.02376308870612639;
      }
    } else {
      if ( LIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.4548143047586095666) ) ) {
        if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.076345667441572784) ) ) {
          result[9] += 0.03642804105860902;
        } else {
          if ( UNLIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7848675493611992904) ) ) {
            result[9] += -0.01931200504563537;
          } else {
            result[9] += 0.025245103552685385;
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.713419879289624137) ) ) {
          result[9] += -0.030927685269815434;
        } else {
          result[9] += 0.04119930092750141;
        }
      }
    }
  } else {
    result[9] += -0.03342772206706012;
  }
  if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8851947168287664924) ) ) {
    result[10] += 0.03129049352977149;
  } else {
    result[10] += -0.032659515111540534;
  }
  if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02366057554279654349) ) ) {
    if ( UNLIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.6198429758531422973) ) ) {
      if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.4432578306330479112) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9191755293951566763) ) ) {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.338232914248930927) ) ) {
            result[11] += 0.01074737656763138;
          } else {
            result[11] += -0.02041928404654436;
          }
        } else {
          if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.7813316289251669433) ) ) {
            result[11] += -0.0019368442694724887;
          } else {
            result[11] += 0.03985147385194467;
          }
        }
      } else {
        if ( LIKELY(  (data[21].missing != -1) && (data[21].fvalue <= (double)-0.1496718365211030799) ) ) {
          result[11] += -0.03321141667005112;
        } else {
          result[11] += -0.0015736032027025204;
        }
      }
    } else {
      result[11] += -0.033654670149447834;
    }
  } else {
    if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.3700968684848933155) ) ) {
      if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.3588777014346508087) ) ) {
        if ( LIKELY( !(data[38].missing != -1) || (data[38].fvalue <= (double)1.334235260215556051) ) ) {
          if ( UNLIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5982284184492060453) ) ) {
            result[11] += 0.0030296588297983743;
          } else {
            result[11] += 0.036227246502372884;
          }
        } else {
          result[11] += -0.0346257642529955;
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5865439505491081285) ) ) {
          if ( LIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1749932324263867578) ) ) {
            result[11] += -0.03089306973742926;
          } else {
            result[11] += 0.0133398703718584;
          }
        } else {
          if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.3488614882332986) ) ) {
            if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)2.582136130875904989) ) ) {
              result[11] += 0.029855352733107295;
            } else {
              result[11] += -0.0017612956690466833;
            }
          } else {
            result[11] += 0.024919980857283884;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
        result[11] += -0.033407902966276735;
      } else {
        if ( UNLIKELY( !(data[43].missing != -1) || (data[43].fvalue <= (double)1.387320337618241917) ) ) {
          result[11] += 0.02919980954360262;
        } else {
          result[11] += -0.030054866416169466;
        }
      }
    }
  }
  if ( LIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( UNLIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.5428053622233520725) ) ) {
      if ( UNLIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)0.6256317106775260983) ) ) {
        result[12] += 0.035607146988048774;
      } else {
        if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)4.409714337387774741) ) ) {
          result[12] += -0.02750565314444406;
        } else {
          result[12] += 0.027720712919764537;
        }
      }
    } else {
      result[12] += -0.03034594982436265;
    }
  } else {
    if ( UNLIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.2709289357124474162) ) ) {
      result[12] += 0.06381453927935453;
    } else {
      result[12] += -0.0036255012983393135;
    }
  }
  if ( UNLIKELY( !(data[84].missing != -1) || (data[84].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( UNLIKELY(  (data[42].missing != -1) && (data[42].fvalue <= (double)-0.01068370598812403392) ) ) {
      if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02376901934613134468) ) ) {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4134826703502541556) ) ) {
          result[0] += 0.0034370632764271275;
        } else {
          if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.044917890085027556) ) ) {
            if ( UNLIKELY( !(data[38].missing != -1) || (data[38].fvalue <= (double)1.258404084529293643) ) ) {
              result[0] += -0.04798331958904517;
            } else {
              result[0] += 0.012760697617342576;
            }
          } else {
            result[0] += 0.03165620559770942;
          }
        }
      } else {
        if ( LIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5860141033297054936) ) ) {
          if ( LIKELY(  (data[34].missing != -1) && (data[34].fvalue <= (double)-0.2519261678164801954) ) ) {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.351830879363718263) ) ) {
              result[0] += -0.034876533781872214;
            } else {
              if ( LIKELY(  (data[33].missing != -1) && (data[33].fvalue <= (double)-0.505772428678410324) ) ) {
                if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.7544702801259169922) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.164630323416318669) ) ) {
                    result[0] += 0.020967524823155833;
                  } else {
                    result[0] += -0.015642209783703478;
                  }
                } else {
                  result[0] += -0.02296272521261673;
                }
              } else {
                result[0] += -0.020045412854636385;
              }
            }
          } else {
            result[0] += 0.030735225573731546;
          }
        } else {
          result[0] += -0.028815191518151404;
        }
      }
    } else {
      if ( LIKELY(  (data[58].missing != -1) && (data[58].fvalue <= (double)-0.4524246343841663576) ) ) {
        if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.0235685244071002116) ) ) {
          if ( UNLIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (double)0.3574488871106138999) ) ) {
            result[0] += 0.036622717670912734;
          } else {
            result[0] += 0.01574331765372616;
          }
        } else {
          if ( LIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.624853897296242633) ) ) {
            result[0] += -0.03181603933815092;
          } else {
            result[0] += 0.009983825187509178;
          }
        }
      } else {
        if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02380621809182460399) ) ) {
          result[0] += 0.004817700305395071;
        } else {
          result[0] += -0.03736004115884192;
        }
      }
    }
  } else {
    if ( UNLIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.4432578306330479112) ) ) {
      if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (double)1.278053921918260949) ) ) {
        if ( UNLIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6318848485338518506) ) ) {
          result[0] += 0.01699477253399462;
        } else {
          result[0] += -0.023918109021799666;
        }
      } else {
        result[0] += 0.03249956974810476;
      }
    } else {
      if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (double)1.490178253475586745) ) ) {
        result[0] += -0.034222841061011984;
      } else {
        if ( UNLIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.2854825927736091007) ) ) {
          result[0] += 0.050688464262397516;
        } else {
          if ( UNLIKELY(  (data[79].missing != -1) && (data[79].fvalue <= (double)-0.4168475085733249208) ) ) {
            result[0] += 0.003363974176745639;
          } else {
            result[0] += -0.03710624208862491;
          }
        }
      }
    }
  }
  if ( UNLIKELY(  (data[35].missing != -1) && (data[35].fvalue <= (double)-0.5574519420018757554) ) ) {
    if ( LIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)0.2372404051518106349) ) ) {
      if ( UNLIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.5428053622233520725) ) ) {
        if ( LIKELY( !(data[62].missing != -1) || (data[62].fvalue <= (double)1.00000001800250948e-35) ) ) {
          if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.7906011883953875108) ) ) {
            if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.146880090638758759) ) ) {
              if ( LIKELY( !(data[82].missing != -1) || (data[82].fvalue <= (double)1.00000001800250948e-35) ) ) {
                result[1] += -0.03423125718402269;
              } else {
                result[1] += 0.03646884097149874;
              }
            } else {
              if ( LIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.6198746011764663111) ) ) {
                result[1] += 0.009460091146229392;
              } else {
                result[1] += 0.0407518414020635;
              }
            }
          } else {
            result[1] += -0.04240002365266465;
          }
        } else {
          result[1] += 0.04282249187727102;
        }
      } else {
        if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.5717070730123615663) ) ) {
          result[1] += -0.034772952263050126;
        } else {
          result[1] += 0.008031441811110896;
        }
      }
    } else {
      if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
        result[1] += 0.03575187414093062;
      } else {
        result[1] += -0.035200137501922954;
      }
    }
  } else {
    if ( LIKELY( !(data[38].missing != -1) || (data[38].fvalue <= (double)1.355342907056062307) ) ) {
      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-0.5313858905757674611) ) ) {
        if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.3083892198998683942) ) ) {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.3678488213209678004) ) ) {
            if ( UNLIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.3914927184801726967) ) ) {
              result[1] += -0.011284236973481925;
            } else {
              result[1] += 0.037180930063001306;
            }
          } else {
            if ( LIKELY(  (data[55].missing != -1) && (data[55].fvalue <= (double)-0.1040915918584105065) ) ) {
              if ( LIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.6192635509156506624) ) ) {
                if ( LIKELY( !(data[52].missing != -1) || (data[52].fvalue <= (double)0.01546367856846388687) ) ) {
                  if ( LIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.6351198894432105169) ) ) {
                    result[1] += 0.035465146359093126;
                  } else {
                    result[1] += 0.007530289013104499;
                  }
                } else {
                  result[1] += -0.002684979371301241;
                }
              } else {
                result[1] += -0.014837760195188354;
              }
            } else {
              if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.2121101247298024794) ) ) {
                result[1] += -0.022041902199233226;
              } else {
                result[1] += -0.0019005014642834853;
              }
            }
          }
        } else {
          result[1] += 0.03483783581562568;
        }
      } else {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-2.256928839343927518) ) ) {
          result[1] += 0.03509148545095348;
        } else {
          if ( LIKELY( !(data[84].missing != -1) || (data[84].fvalue <= (double)1.00000001800250948e-35) ) ) {
            result[1] += -0.035126529629764855;
          } else {
            if ( UNLIKELY(  (data[35].missing != -1) && (data[35].fvalue <= (double)-0.1284490258400653451) ) ) {
              result[1] += 0.014963057340351698;
            } else {
              result[1] += -0.035402465230781874;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)0.7277191341578289618) ) ) {
        result[1] += 0.03495625705870324;
      } else {
        if ( UNLIKELY(  (data[59].missing != -1) && (data[59].fvalue <= (double)-0.202002809051820803) ) ) {
          result[1] += 0.004368535456065544;
        } else {
          result[1] += 0.028383311303031546;
        }
      }
    }
  }
  if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
    result[2] += -0.0322795133063748;
  } else {
    if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( UNLIKELY(  (data[58].missing != -1) && (data[58].fvalue <= (double)-0.5403549039332858905) ) ) {
        result[2] += 0.0678040160988131;
      } else {
        result[2] += 0.02657461050214862;
      }
    } else {
      if ( UNLIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.4548443414119415773) ) ) {
        result[2] += 0.03428251876929739;
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.713419879289624137) ) ) {
          if ( UNLIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.4548143047586095666) ) ) {
            result[2] += -0.025912104109928183;
          } else {
            result[2] += 0.028682529590378484;
          }
        } else {
          result[2] += -0.03666193826881262;
        }
      }
    }
  }
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1845224968741556448) ) ) {
    if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1847700102364353281) ) ) {
      result[3] += -0.035429076706298565;
    } else {
      result[3] += 0.034967124288352094;
    }
  } else {
    result[3] += -0.035151709374111904;
  }
  if ( LIKELY( !(data[89].missing != -1) || (data[89].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.262377816431567767) ) ) {
      result[4] += -0.001525649634630888;
    } else {
      result[4] += -0.03414127171712602;
    }
  } else {
    result[4] += 0.03566974646978102;
  }
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1842749835118759061) ) ) {
    result[5] += 0.0898563029998372;
  } else {
    if ( UNLIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-0.4701773227110271347) ) ) {
      result[5] += 0.03445292712451276;
    } else {
      result[5] += -0.03445200193223463;
    }
  }
  if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[6] += -0.026515709135013464;
  } else {
    result[6] += 0.12338590607509399;
  }
  if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8851947168287664924) ) ) {
    if ( UNLIKELY(  (data[55].missing != -1) && (data[55].fvalue <= (double)-0.1355888811285156925) ) ) {
      result[7] += -0.0008069519463677419;
    } else {
      result[7] += 0.025905097768840663;
    }
  } else {
    result[7] += -0.03444510159009493;
  }
  if ( LIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.08007185799211762045) ) ) {
    if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6189299289389768033) ) ) {
      result[8] += -0.036511997917069876;
    } else {
      result[8] += -0.01580158392621831;
    }
  } else {
    result[8] += 0.0220386604279227;
  }
  if ( UNLIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-0.4969520972243098855) ) ) {
    if ( LIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5875014015255205502) ) ) {
      if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3699951939963300185) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.1403463155960853748) ) ) {
          if ( UNLIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.2284176332525633957) ) ) {
            result[9] += -0.02568439542019496;
          } else {
            result[9] += 0.02130810287732335;
          }
        } else {
          if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.8166922260006254097) ) ) {
            result[9] += 0.039569422760092496;
          } else {
            result[9] += 0.02375334334540868;
          }
        }
      } else {
        result[9] += -0.017144119586322195;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.713419879289624137) ) ) {
        if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3683878630781868835) ) ) {
          if ( LIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.5903304115434165888) ) ) {
            result[9] += -0.03666464547625149;
          } else {
            result[9] += 0.019992747646292434;
          }
        } else {
          result[9] += 0.02498434298014428;
        }
      } else {
        if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
          result[9] += -0.023736146635465912;
        } else {
          result[9] += 0.04378857172603814;
        }
      }
    }
  } else {
    result[9] += -0.033354206428289596;
  }
  if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[10] += -0.032631558645001904;
  } else {
    result[10] += 0.03541296926837885;
  }
  if ( UNLIKELY( !(data[84].missing != -1) || (data[84].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.9564359567862011913) ) ) {
      if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.056440621248962985) ) ) {
        if ( UNLIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.4076512707803252034) ) ) {
          result[11] += 0.015926590484244208;
        } else {
          result[11] += -0.031164029204880667;
        }
      } else {
        if ( UNLIKELY(  (data[34].missing != -1) && (data[34].fvalue <= (double)-0.2547462198501740382) ) ) {
          result[11] += -0.008720222501299666;
        } else {
          result[11] += 0.034787157144203294;
        }
      }
    } else {
      if ( LIKELY(  (data[34].missing != -1) && (data[34].fvalue <= (double)-0.1419943173642288781) ) ) {
        if ( LIKELY(  (data[36].missing != -1) && (data[36].fvalue <= (double)-0.679715294562736716) ) ) {
          if ( LIKELY(  (data[58].missing != -1) && (data[58].fvalue <= (double)-0.5521983535815221389) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5142327377564889224) ) ) {
              if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8109270705380969835) ) ) {
                result[11] += 0.018434600124277712;
              } else {
                if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-1.948957976892493393) ) ) {
                  if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)0.644034072715146455) ) ) {
                    result[11] += -0.02788909947775413;
                  } else {
                    result[11] += 0.00685176667842128;
                  }
                } else {
                  result[11] += -0.03608936227674624;
                }
              }
            } else {
              result[11] += 0.011059513836092586;
            }
          } else {
            result[11] += 0.03166525324174269;
          }
        } else {
          if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
            result[11] += -0.034209262288531106;
          } else {
            result[11] += -0.0028913734232778976;
          }
        }
      } else {
        if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.4076512707803252034) ) ) {
          result[11] += 0.03638732211036042;
        } else {
          result[11] += -0.010809998142697811;
        }
      }
    }
  } else {
    if ( UNLIKELY(  (data[13].missing != -1) && (data[13].fvalue <= (double)-0.9897634247260547191) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6359230018345859436) ) ) {
        if ( UNLIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5860141033297054936) ) ) {
          if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1563059735742685918) ) ) {
            result[11] += 0.03891200967869825;
          } else {
            result[11] += -0.022511158347869077;
          }
        } else {
          result[11] += -0.03376435623502718;
        }
      } else {
        if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6198989865121078413) ) ) {
          if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)3.36630920134634648) ) ) {
            result[11] += -0.012621704331921267;
          } else {
            result[11] += 0.030838549905708373;
          }
        } else {
          result[11] += 0.059919398056125395;
        }
      }
    } else {
      if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
        result[11] += -0.034300386709537424;
      } else {
        result[11] += 0.038570029394424624;
      }
    }
  }
  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.32011123242420747) ) ) {
    if ( LIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.2709289357124474162) ) ) {
      if ( LIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.2749445138003689393) ) ) {
        if ( UNLIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6307850244566913789) ) ) {
          if ( UNLIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.6197653372036843189) ) ) {
            result[12] += -0.021046371347881128;
          } else {
            result[12] += 0.03977541959311229;
          }
        } else {
          result[12] += -0.030629508312938467;
        }
      } else {
        result[12] += 0.0659552270423748;
      }
    } else {
      result[12] += -0.034629055151180387;
    }
  } else {
    if ( LIKELY(  (data[79].missing != -1) && (data[79].fvalue <= (double)-0.01389856493456434645) ) ) {
      result[12] += 0.03215586704178666;
    } else {
      result[12] += 0.07484738866858924;
    }
  }
  if ( UNLIKELY( !(data[82].missing != -1) || (data[82].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.25526421801615129) ) ) {
      if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02370849257168504073) ) ) {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4134826703502541556) ) ) {
          if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.7077341304289562762) ) ) {
            if ( UNLIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)0.9873454911718881899) ) ) {
              result[0] += 0.017771241129885183;
            } else {
              result[0] += -0.03805631742405641;
            }
          } else {
            result[0] += 0.037711365249912365;
          }
        } else {
          if ( UNLIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.597836933990247732) ) ) {
            result[0] += 0.00809084762194614;
          } else {
            result[0] += 0.033322404762907626;
          }
        }
      } else {
        if ( UNLIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7880685817837016494) ) ) {
          result[0] += -0.01912440905352465;
        } else {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.351830879363718263) ) ) {
            if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.5966104081910480472) ) ) {
              result[0] += -0.029388686609465167;
            } else {
              result[0] += 0.01244567861846531;
            }
          } else {
            if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.7544702801259169922) ) ) {
              if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.8463879634762788706) ) ) {
                if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7720634196711901875) ) ) {
                  result[0] += 0.016206283226746054;
                } else {
                  result[0] += -0.009107563681308032;
                }
              } else {
                result[0] += 0.03588146496447733;
              }
            } else {
              result[0] += -0.013111517559906551;
            }
          }
        }
      }
    } else {
      result[0] += -0.04820761105042099;
    }
  } else {
    if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
      if ( LIKELY( !(data[50].missing != -1) || (data[50].fvalue <= (double)0.113078527307702334) ) ) {
        result[0] += -0.03449192810289184;
      } else {
        result[0] += 0.021540758677420377;
      }
    } else {
      if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1772208526869041567) ) ) {
        result[0] += -0.07765844562158099;
      } else {
        if ( LIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5732125615217674719) ) ) {
          if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02360509266710225651) ) ) {
            if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.076345667441572784) ) ) {
              if ( LIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.03877928294628725514) ) ) {
                result[0] += 0.005152284894001574;
              } else {
                result[0] += 0.035972980458649065;
              }
            } else {
              result[0] += -0.028780618905397102;
            }
          } else {
            if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.08328953170175386334) ) ) {
              result[0] += -0.054498084113852575;
            } else {
              if ( UNLIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)0.3881520530929135071) ) ) {
                result[0] += 0.03685657406084639;
              } else {
                result[0] += -0.03892371763222297;
              }
            }
          }
        } else {
          if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02377973762932657567) ) ) {
            result[0] += 0.036226569252912455;
          } else {
            if ( UNLIKELY(  (data[71].missing != -1) && (data[71].fvalue <= (double)-0.3201360334769484117) ) ) {
              result[0] += 0.04224404449398453;
            } else {
              result[0] += -0.019493740253689957;
            }
          }
        }
      }
    }
  }
  if ( UNLIKELY(  (data[61].missing != -1) && (data[61].fvalue <= (double)-0.1694510226187393442) ) ) {
    if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY(  (data[58].missing != -1) && (data[58].fvalue <= (double)-0.5253109314936506014) ) ) {
        if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)1.042993765094097691) ) ) {
          if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.08007185799211762045) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6223826552160477421) ) ) {
              result[1] += 0.010902664251405044;
            } else {
              result[1] += -0.025487655800610815;
            }
          } else {
            result[1] += -0.03678124789641612;
          }
        } else {
          if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)0.04881001163437238138) ) ) {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-1.948957976892493393) ) ) {
              result[1] += 0.037896328538536965;
            } else {
              result[1] += -0.03220758617348112;
            }
          } else {
            result[1] += -0.03656058681173576;
          }
        }
      } else {
        result[1] += 0.028579956307511884;
      }
    } else {
      if ( LIKELY(  (data[31].missing != -1) && (data[31].fvalue <= (double)-0.19637660586347086) ) ) {
        if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (double)2.986558014660257054) ) ) {
          result[1] += -0.03490381029315301;
        } else {
          if ( UNLIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)9.477337471177632366) ) ) {
            result[1] += 0.03619581629701523;
          } else {
            result[1] += -0.035016179102556895;
          }
        }
      } else {
        result[1] += -0.000607868736300203;
      }
    }
  } else {
    if ( LIKELY( !(data[38].missing != -1) || (data[38].fvalue <= (double)1.355342907056062307) ) ) {
      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-0.5313858905757674611) ) ) {
        if ( LIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.4855911565985475131) ) ) {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.3678488213209678004) ) ) {
            if ( UNLIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7944706466287062563) ) ) {
              result[1] += -0.010914864667374817;
            } else {
              result[1] += 0.03701814555507959;
            }
          } else {
            if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.6054551360476957411) ) ) {
              result[1] += -0.02286282025720693;
            } else {
              if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3705796779665639362) ) ) {
                if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.546295346980644636) ) ) {
                  if ( LIKELY(  (data[53].missing != -1) && (data[53].fvalue <= (double)-0.2671488796709814983) ) ) {
                    result[1] += 0.027950474989099132;
                  } else {
                    result[1] += -0.002024130052118707;
                  }
                } else {
                  result[1] += 0.039090757326628846;
                }
              } else {
                if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)4.802196269761418002) ) ) {
                  result[1] += -0.027693030732153068;
                } else {
                  if ( UNLIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.7009631207219503279) ) ) {
                    result[1] += 0.018492734991592916;
                  } else {
                    result[1] += -0.009872318340683512;
                  }
                }
              }
            }
          }
        } else {
          result[1] += 0.03292784337711236;
        }
      } else {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-2.256928839343927518) ) ) {
          result[1] += 0.035049466788496894;
        } else {
          if ( UNLIKELY(  (data[35].missing != -1) && (data[35].fvalue <= (double)-0.3881343051148680723) ) ) {
            result[1] += 0.0016509793148077837;
          } else {
            result[1] += -0.034928649800604235;
          }
        }
      }
    } else {
      if ( UNLIKELY(  (data[59].missing != -1) && (data[59].fvalue <= (double)-0.202002809051820803) ) ) {
        if ( LIKELY(  (data[45].missing != -1) && (data[45].fvalue <= (double)-0.07685529918531429361) ) ) {
          result[1] += 0.03168146877448566;
        } else {
          result[1] += -0.014973907031013868;
        }
      } else {
        result[1] += 0.03470645133145737;
      }
    }
  }
  if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
    result[2] += -0.03213661681230135;
  } else {
    if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (double)1.00000001800250948e-35) ) ) {
      result[2] += 0.041759853050592155;
    } else {
      if ( UNLIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.4548443414119415773) ) ) {
        result[2] += 0.03385223711872685;
      } else {
        if ( UNLIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.4548143047586095666) ) ) {
          result[2] += -0.025407032466353074;
        } else {
          result[2] += 0.007717927336169918;
        }
      }
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)0.9946455059545064037) ) ) {
    result[3] += -0.03503659228646032;
  } else {
    if ( LIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.03889282566824648485) ) ) {
      result[3] += 0.03426206648115355;
    } else {
      if ( LIKELY(  (data[55].missing != -1) && (data[55].fvalue <= (double)-0.1355430892130730647) ) ) {
        result[3] += 0.035153893632740865;
      } else {
        result[3] += -0.03545312139061038;
      }
    }
  }
  if ( LIKELY( !(data[89].missing != -1) || (data[89].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.262377816431567767) ) ) {
      result[4] += -0.0009209214172870416;
    } else {
      result[4] += -0.0341176117910351;
    }
  } else {
    result[4] += 0.03558696173132493;
  }
  if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.6456226389823498391) ) ) {
    if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3706436059008083039) ) ) {
      result[5] += -0.03444022731242982;
    } else {
      result[5] += 0.008617992257016979;
    }
  } else {
    result[5] += 0.06959570029133874;
  }
  if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[6] += -0.02608736050671369;
  } else {
    result[6] += 0.10797034507352442;
  }
  if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3728354207891853567) ) ) {
    if ( UNLIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.4805219744909849933) ) ) {
      result[7] += 0.00099947712830912;
    } else {
      result[7] += 0.02655642353160688;
    }
  } else {
    result[7] += -0.034444309914313215;
  }
  if ( LIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.08007185799211762045) ) ) {
    if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6189299289389768033) ) ) {
      result[8] += -0.03649432255009786;
    } else {
      result[8] += -0.015084556931733549;
    }
  } else {
    result[8] += 0.022641234993792194;
  }
  if ( UNLIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-0.4969520972243098855) ) ) {
    if ( LIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5875014015255205502) ) ) {
      if ( LIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.6197504240945225229) ) ) {
        if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3699951939963300185) ) ) {
          if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.7749658944394570703) ) ) {
            if ( UNLIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.5953365750146842883) ) ) {
              result[9] += 0.03679315232061564;
            } else {
              if ( UNLIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6297669482332345359) ) ) {
                result[9] += -0.018077561219590102;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6223826552160477421) ) ) {
                  result[9] += -0.010896554997076447;
                } else {
                  result[9] += 0.030142168175933924;
                }
              }
            }
          } else {
            result[9] += 0.06629407815041646;
          }
        } else {
          result[9] += -0.01195482815284557;
        }
      } else {
        result[9] += -0.019492174219789358;
      }
    } else {
      if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3690088772965603447) ) ) {
        result[9] += -0.027057104641632832;
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.713419879289624137) ) ) {
          if ( UNLIKELY(  (data[55].missing != -1) && (data[55].fvalue <= (double)-0.1354912797703266281) ) ) {
            result[9] += 0.014544412614222627;
          } else {
            result[9] += -0.017154793883073526;
          }
        } else {
          result[9] += 0.039496449363223204;
        }
      }
    }
  } else {
    result[9] += -0.033275490653664086;
  }
  if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[10] += -0.03251063903998995;
  } else {
    result[10] += 0.03535534570102471;
  }
  if ( UNLIKELY( !(data[84].missing != -1) || (data[84].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( LIKELY(  (data[42].missing != -1) && (data[42].fvalue <= (double)-0.01064205461029017231) ) ) {
      if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (double)1.317644707756461697) ) ) {
        if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.7163142958512370706) ) ) {
          result[11] += -0.0260560878286877;
        } else {
          if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3708993176377855527) ) ) {
            if ( LIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6039688144386826663) ) ) {
              result[11] += 0.0030465887973994917;
            } else {
              result[11] += 0.04527088523328147;
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5865439505491081285) ) ) {
              if ( UNLIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6039752342938385921) ) ) {
                result[11] += 0.0020054768295749625;
              } else {
                result[11] += -0.030665929400443392;
              }
            } else {
              if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.3560940123812407765) ) ) {
                result[11] += -0.001730123078526077;
              } else {
                result[11] += 0.02396976631123233;
              }
            }
          }
        }
      } else {
        result[11] += -0.03450272408469797;
      }
    } else {
      if ( UNLIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6039903039694579645) ) ) {
        if ( UNLIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.4076512707803252034) ) ) {
          result[11] += 0.01628436585903788;
        } else {
          result[11] += -0.0316213518054077;
        }
      } else {
        if ( LIKELY(  (data[20].missing != -1) && (data[20].fvalue <= (double)-0.4852831446275442384) ) ) {
          if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)2.952146154023490343) ) ) {
            if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)2.258965045567843166) ) ) {
              result[11] += 0.03491281032189149;
            } else {
              result[11] += 0.006774811666168432;
            }
          } else {
            result[11] += 0.0032635784412326486;
          }
        } else {
          result[11] += -0.003849264799687874;
        }
      }
    }
  } else {
    if ( UNLIKELY(  (data[12].missing != -1) && (data[12].fvalue <= (double)-1.128486328597585908) ) ) {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-2.256928839343927518) ) ) {
        result[11] += -0.03330441522222545;
      } else {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-1.964803063360995639) ) ) {
          result[11] += 0.05427274695297612;
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6280292678484594715) ) ) {
            result[11] += -0.0380863217489548;
          } else {
            if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.01989746112084988736) ) ) {
              result[11] += -0.016716749833306673;
            } else {
              result[11] += 0.03343641932234722;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)0.3881520530929135071) ) ) {
        result[11] += -0.034067530611398965;
      } else {
        result[11] += 0.009658743707130983;
      }
    }
  }
  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.32011123242420747) ) ) {
    if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.2849173927346489443) ) ) {
      if ( LIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)0.2078669411157570701) ) ) {
        if ( LIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (double)0.120178709912530865) ) ) {
          result[12] += -0.024582363482367912;
        } else {
          result[12] += 0.04724100291151324;
        }
      } else {
        result[12] += 0.046882509133454216;
      }
    } else {
      result[12] += -0.02626623862733337;
    }
  } else {
    if ( LIKELY(  (data[79].missing != -1) && (data[79].fvalue <= (double)-0.01389856493456434645) ) ) {
      result[12] += 0.03155530988009482;
    } else {
      result[12] += 0.0749331304092157;
    }
  }
  if ( UNLIKELY(  (data[12].missing != -1) && (data[12].fvalue <= (double)-1.128486328597585908) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.25526421801615129) ) ) {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4134826703502541556) ) ) {
        if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.7077341304289562762) ) ) {
          if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8124905999336901052) ) ) {
            result[0] += 0.02602513823726055;
          } else {
            result[0] += -0.03241779655762488;
          }
        } else {
          if ( UNLIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.6198742064964483101) ) ) {
            result[0] += 0.036591532793542776;
          } else {
            result[0] += 0.0018194407781254656;
          }
        }
      } else {
        if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.9564359567862011913) ) ) {
          if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3716664528487175212) ) ) {
            result[0] += 0.008819461953417316;
          } else {
            result[0] += -0.03405634795103768;
          }
        } else {
          if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02370849257168504073) ) ) {
            result[0] += 0.03304982268013054;
          } else {
            if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.7544702801259169922) ) ) {
              if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.8463879634762788706) ) ) {
                if ( LIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.4259476505907174859) ) ) {
                  if ( UNLIKELY(  (data[71].missing != -1) && (data[71].fvalue <= (double)-0.4661712332868198083) ) ) {
                    result[0] += 0.014430118229082415;
                  } else {
                    if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3692645890335377046) ) ) {
                      if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.8758359294256646832) ) ) {
                        result[0] += 0.03023943759565951;
                      } else {
                        result[0] += -0.022829592158517056;
                      }
                    } else {
                      result[0] += -0.02594485575565544;
                    }
                  }
                } else {
                  result[0] += 0.028809614769996265;
                }
              } else {
                result[0] += 0.035116012487520123;
              }
            } else {
              result[0] += -0.012157670325817618;
            }
          }
        }
      }
    } else {
      result[0] += -0.048325668313355545;
    }
  } else {
    if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
      if ( LIKELY( !(data[55].missing != -1) || (data[55].fvalue <= (double)1.00000001800250948e-35) ) ) {
        result[0] += -0.03448355332211467;
      } else {
        result[0] += 0.01989247764318366;
      }
    } else {
      if ( LIKELY( !(data[93].missing != -1) || (data[93].fvalue <= (double)1.00000001800250948e-35) ) ) {
        if ( UNLIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.3672551071968496728) ) ) {
          if ( UNLIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.6193344233546468347) ) ) {
            if ( LIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.4545285182290580983) ) ) {
              result[0] += 0.010097677579535207;
            } else {
              result[0] += 0.03371960499983388;
            }
          } else {
            result[0] += -0.026885772023415144;
          }
        } else {
          if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.7343283214685151217) ) ) {
            if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02354960979140796953) ) ) {
              result[0] += 0.01022443270876421;
            } else {
              result[0] += -0.030053129024767023;
            }
          } else {
            result[0] += -0.07239743728181322;
          }
        }
      } else {
        if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02376901934613134468) ) ) {
          result[0] += 0.03640724005189374;
        } else {
          result[0] += -0.008244566085420743;
        }
      }
    }
  }
  if ( UNLIKELY(  (data[35].missing != -1) && (data[35].fvalue <= (double)-0.5574519420018757554) ) ) {
    if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1772208526869041567) ) ) {
      result[1] += -0.0347846332804637;
    } else {
      if ( LIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6039903039694579645) ) ) {
        if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.1794951076842806192) ) ) {
          if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.08007185799211762045) ) ) {
            if ( LIKELY(  (data[44].missing != -1) && (data[44].fvalue <= (double)-0.03863172127045684523) ) ) {
              result[1] += 0.016265799810093677;
            } else {
              result[1] += -0.03768772579300689;
            }
          } else {
            result[1] += -0.03615866995511395;
          }
        } else {
          if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.1305725821159978428) ) ) {
            result[1] += 0.019040064925053772;
          } else {
            result[1] += -0.03691925143778247;
          }
        }
      } else {
        if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
          result[1] += 0.02988867861017035;
        } else {
          result[1] += -0.04193208444429351;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
      if ( UNLIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.4855911565985475131) ) ) {
        if ( UNLIKELY(  (data[36].missing != -1) && (data[36].fvalue <= (double)-0.7102313324244843296) ) ) {
          if ( UNLIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6037740769996097212) ) ) {
            if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)1.015169628132993163) ) ) {
              if ( UNLIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.2610326502980852559) ) ) {
                result[1] += -0.007939597309756978;
              } else {
                result[1] += 0.013833235862442728;
              }
            } else {
              result[1] += -0.02202592142734075;
            }
          } else {
            if ( UNLIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.03884564702762572513) ) ) {
              result[1] += -0.005289032306712377;
            } else {
              if ( LIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.6351198894432105169) ) ) {
                result[1] += 0.033191405557236875;
              } else {
                result[1] += 0.0004011622708459067;
              }
            }
          }
        } else {
          if ( UNLIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.4893377696167382496) ) ) {
            result[1] += 0.009378191859145076;
          } else {
            result[1] += -0.036454890814771865;
          }
        }
      } else {
        if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)6.100055638478075082) ) ) {
          result[1] += 0.034771828587615926;
        } else {
          result[1] += 0.021833784817816986;
        }
      }
    } else {
      result[1] += -0.03565734016582954;
    }
  }
  if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (double)1.525439072483760983) ) ) {
    result[2] += -0.031684631067313236;
  } else {
    if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1699192084996526686) ) ) {
      if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (double)1.00000001800250948e-35) ) ) {
        result[2] += 0.05588597896477419;
      } else {
        if ( LIKELY( !(data[43].missing != -1) || (data[43].fvalue <= (double)1.743477847713401419) ) ) {
          result[2] += 0.0049808371944786885;
        } else {
          result[2] += 0.03598081347969818;
        }
      }
    } else {
      result[2] += -0.03447648936617996;
    }
  }
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1845224968741556448) ) ) {
    if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1847700102364353281) ) ) {
      result[3] += -0.03538497424648928;
    } else {
      result[3] += 0.034897086265053015;
    }
  } else {
    result[3] += -0.03509688083888714;
  }
  if ( LIKELY( !(data[89].missing != -1) || (data[89].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.262377816431567767) ) ) {
      result[4] += 2.8544680189509504e-05;
    } else {
      result[4] += -0.034093188180363485;
    }
  } else {
    result[4] += 0.03550991395763168;
  }
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1842749835118759061) ) ) {
    result[5] += 0.08053459708520161;
  } else {
    if ( UNLIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-0.4701773227110271347) ) ) {
      result[5] += 0.03504621443830381;
    } else {
      result[5] += -0.034451400648581244;
    }
  }
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1699192084996526686) ) ) {
    if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.147956477092209271) ) ) {
      result[6] += 0.12008923586101812;
    } else {
      result[6] += -0.017078926189460344;
    }
  } else {
    result[6] += -0.034474548538001006;
  }
  if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-1.031327076639174445) ) ) {
    if ( LIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5801683636132243249) ) ) {
      result[7] += 0.026773026623753648;
    } else {
      result[7] += -0.03589095118335121;
    }
  } else {
    result[7] += -0.0344435648867106;
  }
  if ( LIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.08007185799211762045) ) ) {
    if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6189299289389768033) ) ) {
      result[8] += -0.03646246130838253;
    } else {
      result[8] += -0.014283823730617947;
    }
  } else {
    result[8] += 0.02117261341205944;
  }
  if ( UNLIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-0.4969520972243098855) ) ) {
    if ( LIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5875014015255205502) ) ) {
      if ( LIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.6197504240945225229) ) ) {
        if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3699951939963300185) ) ) {
          if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.7749658944394570703) ) ) {
            if ( UNLIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.5953365750146842883) ) ) {
              result[9] += 0.03670095727243156;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6223826552160477421) ) ) {
                result[9] += -0.00998839944312884;
              } else {
                result[9] += 0.024114589911251417;
              }
            }
          } else {
            result[9] += 0.06525826553673876;
          }
        } else {
          result[9] += -0.011068966158688036;
        }
      } else {
        result[9] += -0.019081465813230607;
      }
    } else {
      if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3690088772965603447) ) ) {
        result[9] += -0.026678715695731003;
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.713419879289624137) ) ) {
          if ( UNLIKELY(  (data[53].missing != -1) && (data[53].fvalue <= (double)-0.2698623338572173624) ) ) {
            result[9] += 0.01765506932958616;
          } else {
            result[9] += -0.016731553258092512;
          }
        } else {
          result[9] += 0.03902046773033686;
        }
      }
    }
  } else {
    result[9] += -0.03319442797733131;
  }
  if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8851947168287664924) ) ) {
    result[10] += 0.030810124497984037;
  } else {
    result[10] += -0.03227768307513709;
  }
  if ( UNLIKELY( !(data[84].missing != -1) || (data[84].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( LIKELY(  (data[42].missing != -1) && (data[42].fvalue <= (double)-0.01064205461029017231) ) ) {
      if ( UNLIKELY(  (data[6].missing != -1) && (data[6].fvalue <= (double)-0.343438049588791483) ) ) {
        if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.7163142958512370706) ) ) {
          result[11] += -0.025475191567260837;
        } else {
          if ( LIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.3589765718219689039) ) ) {
            if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.6438362138560046466) ) ) {
              if ( LIKELY(  (data[71].missing != -1) && (data[71].fvalue <= (double)-0.450042709834652277) ) ) {
                if ( LIKELY(  (data[54].missing != -1) && (data[54].fvalue <= (double)-0.03890222276766201054) ) ) {
                  result[11] += 0.012925754169856741;
                } else {
                  result[11] += 0.04947094782231133;
                }
              } else {
                result[11] += -0.036473603571593176;
              }
            } else {
              if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3697486148213876) ) ) {
                if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3708993176377855527) ) ) {
                  if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3716664528487175212) ) ) {
                    result[11] += -0.017518913382882317;
                  } else {
                    result[11] += 0.040815513703307583;
                  }
                } else {
                  result[11] += -0.00986389023853;
                }
              } else {
                result[11] += 0.01186226586098188;
              }
            }
          } else {
            result[11] += 0.03622588839274972;
          }
        }
      } else {
        if ( UNLIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.6197994531079804581) ) ) {
          result[11] += -0.001061053798125956;
        } else {
          result[11] += -0.03451915037810863;
        }
      }
    } else {
      if ( LIKELY(  (data[43].missing != -1) && (data[43].fvalue <= (double)-0.1419916722303602996) ) ) {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-0.5313858905757674611) ) ) {
          result[11] += -0.014905148947234057;
        } else {
          if ( UNLIKELY(  (data[43].missing != -1) && (data[43].fvalue <= (double)-0.2706916556865458512) ) ) {
            result[11] += -0.0005434600731845446;
          } else {
            if ( LIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6036631336413064153) ) ) {
              result[11] += 0.034956673579330716;
            } else {
              result[11] += 0.004439397557979433;
            }
          }
        }
      } else {
        if ( UNLIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.4076512707803252034) ) ) {
          result[11] += 0.01664463669283098;
        } else {
          result[11] += -0.03076344285291964;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[82].missing != -1) || (data[82].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6194724696117658302) ) ) {
        if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)1.319811268434055274) ) ) {
          if ( LIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5970539650723311054) ) ) {
            result[11] += -0.0031642885538928534;
          } else {
            result[11] += 0.03422671064566936;
          }
        } else {
          result[11] += -0.026609222781168656;
        }
      } else {
        result[11] += -0.02567547079393108;
      }
    } else {
      if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
        result[11] += -0.034269975025240894;
      } else {
        result[11] += 0.038168257964286946;
      }
    }
  }
  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.32011123242420747) ) ) {
    if ( LIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.2709289357124474162) ) ) {
      if ( LIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)0.2078669411157570701) ) ) {
        if ( LIKELY(  (data[33].missing != -1) && (data[33].fvalue <= (double)-0.6491956528469868815) ) ) {
          result[12] += -0.026695591089923674;
        } else {
          if ( LIKELY(  (data[34].missing != -1) && (data[34].fvalue <= (double)-0.2525383499305560719) ) ) {
            result[12] += 0.04152492041639326;
          } else {
            result[12] += -0.015938948645153307;
          }
        }
      } else {
        result[12] += 0.06589462367008396;
      }
    } else {
      result[12] += -0.03463595515300785;
    }
  } else {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.460698822199083313) ) ) {
      result[12] += 0.07821444199009873;
    } else {
      result[12] += 0.01422577057941067;
    }
  }
  if ( UNLIKELY( !(data[84].missing != -1) || (data[84].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02376901934613134468) ) ) {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4134826703502541556) ) ) {
        result[0] += 0.002620810000295583;
      } else {
        if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.136326896897185579) ) ) {
          result[0] += -0.01050344716752769;
        } else {
          if ( LIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.2207227011686356544) ) ) {
            if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.726491872188582688) ) ) {
              result[0] += 0.008534718515195498;
            } else {
              result[0] += 0.0332262770361308;
            }
          } else {
            if ( UNLIKELY( !(data[40].missing != -1) || (data[40].fvalue <= (double)0.2047928635608160797) ) ) {
              result[0] += -0.0263541160739274;
            } else {
              result[0] += 0.030123357242799763;
            }
          }
        }
      }
    } else {
      if ( LIKELY(  (data[58].missing != -1) && (data[58].fvalue <= (double)-0.4663266532852128887) ) ) {
        if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02321671253988670178) ) ) {
          if ( UNLIKELY(  (data[6].missing != -1) && (data[6].fvalue <= (double)-0.2936604105568001999) ) ) {
            result[0] += 0.02786592349340135;
          } else {
            result[0] += -0.02786114933664246;
          }
        } else {
          if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.9475499506149932527) ) ) {
            result[0] += -0.0272279355248442;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.218215524927980686) ) ) {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.351830879363718263) ) ) {
                if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6198957495828624209) ) ) {
                  result[0] += 0.005671877983245594;
                } else {
                  result[0] += -0.03450031004063494;
                }
              } else {
                if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6198577776350410184) ) ) {
                  result[0] += 0.021631083207082107;
                } else {
                  result[0] += 0.005629636824464498;
                }
              }
            } else {
              result[0] += -0.026998468559257853;
            }
          }
        }
      } else {
        result[0] += -0.034565364866994186;
      }
    }
  } else {
    if ( LIKELY( !(data[50].missing != -1) || (data[50].fvalue <= (double)0.113078527307702334) ) ) {
      if ( UNLIKELY(  (data[22].missing != -1) && (data[22].fvalue <= (double)-0.5740772844739022718) ) ) {
        if ( LIKELY(  (data[31].missing != -1) && (data[31].fvalue <= (double)-0.5334328643028487527) ) ) {
          if ( UNLIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5984633091245811221) ) ) {
            result[0] += 0.010573190816839682;
          } else {
            result[0] += -0.029996393408976408;
          }
        } else {
          result[0] += 0.027070779632101336;
        }
      } else {
        if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)2.258965045567843166) ) ) {
          result[0] += -0.0338720660009942;
        } else {
          result[0] += 0.009984778931317592;
        }
      }
    } else {
      result[0] += 0.02630879916263656;
    }
  }
  if ( UNLIKELY(  (data[61].missing != -1) && (data[61].fvalue <= (double)-0.1694510226187393442) ) ) {
    if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY(  (data[79].missing != -1) && (data[79].fvalue <= (double)-0.4168475085733249208) ) ) {
        if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.1794951076842806192) ) ) {
          if ( LIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5757685408658465009) ) ) {
            result[1] += -0.0359254249497561;
          } else {
            result[1] += -0.0026325040544028662;
          }
        } else {
          if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7496561927136741188) ) ) {
            if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6199221877480390885) ) ) {
              result[1] += 0.008485617556033088;
            } else {
              result[1] += 0.037293220713755744;
            }
          } else {
            result[1] += -0.016898362450859288;
          }
        }
      } else {
        result[1] += 0.03272662466763125;
      }
    } else {
      if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.3083892198998683942) ) ) {
        result[1] += -0.03483896012715995;
      } else {
        if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.5567939892579113481) ) ) {
          if ( UNLIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
            result[1] += 0.009554063949097236;
          } else {
            result[1] += -0.0352166378793092;
          }
        } else {
          result[1] += 0.037171473586342006;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[38].missing != -1) || (data[38].fvalue <= (double)1.355342907056062307) ) ) {
      if ( UNLIKELY(  (data[36].missing != -1) && (data[36].fvalue <= (double)-0.7102313324244843296) ) ) {
        if ( UNLIKELY( !(data[83].missing != -1) || (data[83].fvalue <= (double)1.00000001800250948e-35) ) ) {
          result[1] += 0.034951196987166464;
        } else {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.3678488213209678004) ) ) {
            if ( UNLIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.3914927184801726967) ) ) {
              result[1] += -0.010910985937439157;
            } else {
              result[1] += 0.03567802289574574;
            }
          } else {
            if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.8463879634762788706) ) ) {
              if ( UNLIKELY(  (data[33].missing != -1) && (data[33].fvalue <= (double)-0.6506896447654095805) ) ) {
                result[1] += -0.02000681652352704;
              } else {
                if ( LIKELY(  (data[61].missing != -1) && (data[61].fvalue <= (double)-0.1680043385803572653) ) ) {
                  if ( UNLIKELY(  (data[33].missing != -1) && (data[33].fvalue <= (double)-0.6267857740706467284) ) ) {
                    result[1] += 0.014589193487444363;
                  } else {
                    result[1] += 0.04086208270999647;
                  }
                } else {
                  if ( LIKELY(  (data[54].missing != -1) && (data[54].fvalue <= (double)-0.038690538125306706) ) ) {
                    if ( LIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6030701101055554458) ) ) {
                      result[1] += 0.02686960634255679;
                    } else {
                      result[1] += -0.016437537104623045;
                    }
                  } else {
                    result[1] += -0.016568591490443;
                  }
                }
              }
            } else {
              result[1] += -0.03430944416120008;
            }
          }
        }
      } else {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-0.5313858905757674611) ) ) {
          if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6198896086497162061) ) ) {
            result[1] += -0.008720744102861416;
          } else {
            result[1] += 0.03289789793236458;
          }
        } else {
          if ( LIKELY( !(data[84].missing != -1) || (data[84].fvalue <= (double)1.00000001800250948e-35) ) ) {
            result[1] += -0.03537313091413038;
          } else {
            result[1] += -0.009232074712532875;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)1.255335709851286952) ) ) {
        result[1] += 0.03482856734840134;
      } else {
        result[1] += 0.02135912519305912;
      }
    }
  }
  if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
    result[2] += -0.031837070184458936;
  } else {
    if ( LIKELY( !(data[55].missing != -1) || (data[55].fvalue <= (double)1.9687275667312647) ) ) {
      if ( LIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6035520750690563929) ) ) {
        result[2] += -0.02678206071313955;
      } else {
        result[2] += 0.014114226566988549;
      }
    } else {
      if ( LIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.6198739046249822637) ) ) {
        result[2] += 0.017198004253242038;
      } else {
        result[2] += 0.06181987412479056;
      }
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)0.9946455059545064037) ) ) {
    result[3] += -0.03498217714442639;
  } else {
    if ( LIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.03889282566824648485) ) ) {
      if ( UNLIKELY(  (data[4].missing != -1) && (data[4].fvalue <= (double)-0.5523457074688490342) ) ) {
        result[3] += 0.028227217482434015;
      } else {
        result[3] += 0.03486747858109838;
      }
    } else {
      if ( LIKELY(  (data[55].missing != -1) && (data[55].fvalue <= (double)-0.1355430892130730647) ) ) {
        result[3] += 0.035068433104002;
      } else {
        result[3] += -0.03493655749845286;
      }
    }
  }
  if ( LIKELY( !(data[50].missing != -1) || (data[50].fvalue <= (double)0.113078527307702334) ) ) {
    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-0.5497225041265615397) ) ) {
      result[4] += -0.002104402174138572;
    } else {
      result[4] += -0.03445528645909126;
    }
  } else {
    result[4] += 0.03402729535279668;
  }
  if ( UNLIKELY( !(data[84].missing != -1) || (data[84].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)2.258965045567843166) ) ) {
      result[5] += 0.006050231823703748;
    } else {
      result[5] += 0.1282689743917394;
    }
  } else {
    result[5] += -0.03443837000961636;
  }
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1699192084996526686) ) ) {
    if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.4076512707803252034) ) ) {
      result[6] += -0.01680561347038688;
    } else {
      result[6] += 0.11052864147541527;
    }
  } else {
    result[6] += -0.034475176712204854;
  }
  if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8851947168287664924) ) ) {
    if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.4815484825403061886) ) ) {
      result[7] += -0.00022332546365140448;
    } else {
      result[7] += 0.0259379874660522;
    }
  } else {
    result[7] += -0.03444287157688109;
  }
  if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (double)2.986558014660257054) ) ) {
    result[8] += -0.03225557084490952;
  } else {
    if ( LIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.08007185799211762045) ) ) {
      result[8] += -0.011218434335052601;
    } else {
      result[8] += 0.03340332167031644;
    }
  }
  if ( UNLIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-0.4969520972243098855) ) ) {
    if ( UNLIKELY( !(data[83].missing != -1) || (data[83].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7021266540248007892) ) ) {
        result[9] += -0.03569707448735886;
      } else {
        result[9] += 0.013175033869810934;
      }
    } else {
      if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6196424566529530331) ) ) {
        if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.038896224531635992) ) ) {
          result[9] += 0.04021940297286042;
        } else {
          if ( UNLIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.3099551758663680601) ) ) {
            result[9] += -0.02446835781347326;
          } else {
            if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.7544702801259169922) ) ) {
              if ( UNLIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7752644520936924355) ) ) {
                result[9] += 0.029959925188875317;
              } else {
                result[9] += -0.009634316046198431;
              }
            } else {
              result[9] += 0.046853450665207484;
            }
          }
        }
      } else {
        result[9] += -0.02815068527115521;
      }
    }
  } else {
    result[9] += -0.03310913710142373;
  }
  if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8851947168287664924) ) ) {
    result[10] += 0.030498014686980327;
  } else {
    result[10] += -0.03213426614811273;
  }
  if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.2270910346818499626) ) ) {
    if ( LIKELY(  (data[36].missing != -1) && (data[36].fvalue <= (double)-0.618191645368454501) ) ) {
      if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.4076512707803252034) ) ) {
        if ( LIKELY(  (data[36].missing != -1) && (data[36].fvalue <= (double)-0.679715294562736716) ) ) {
          if ( LIKELY(  (data[61].missing != -1) && (data[61].fvalue <= (double)-0.1603126929685629587) ) ) {
            if ( LIKELY(  (data[34].missing != -1) && (data[34].fvalue <= (double)-0.2512838783853185709) ) ) {
              if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.8186044272646345599) ) ) {
                if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.8367973224042829505) ) ) {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-2.207866689787819414) ) ) {
                    result[11] += 0.03665683665105516;
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.4600137327860867043) ) ) {
                      if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.2284176332525633957) ) ) {
                        result[11] += -0.032748970875051915;
                      } else {
                        result[11] += 0.006876577238008001;
                      }
                    } else {
                      result[11] += 0.010380094060583702;
                    }
                  }
                } else {
                  result[11] += -0.03262760020168012;
                }
              } else {
                result[11] += 0.020989958821550282;
              }
            } else {
              result[11] += 0.051177647199965134;
            }
          } else {
            result[11] += -0.03799310666331684;
          }
        } else {
          result[11] += -0.03649052892524511;
        }
      } else {
        if ( LIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)1.00000001800250948e-35) ) ) {
          result[11] += -0.03461273036841718;
        } else {
          result[11] += 0.012546835500846698;
        }
      }
    } else {
      if ( LIKELY(  (data[22].missing != -1) && (data[22].fvalue <= (double)-0.3903487164927391118) ) ) {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-0.5313858905757674611) ) ) {
          result[11] += -0.019239649930516738;
        } else {
          if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)2.258965045567843166) ) ) {
            if ( UNLIKELY(  (data[43].missing != -1) && (data[43].fvalue <= (double)-0.2706916556865458512) ) ) {
              result[11] += 0.0025060798433087037;
            } else {
              result[11] += 0.03446476047401752;
            }
          } else {
            result[11] += -0.005693305926639423;
          }
        }
      } else {
        if ( UNLIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.4076512707803252034) ) ) {
          result[11] += 0.01581521166348231;
        } else {
          result[11] += -0.03045311029282188;
        }
      }
    }
  } else {
    if ( UNLIKELY(  (data[13].missing != -1) && (data[13].fvalue <= (double)-0.9897634247260547191) ) ) {
      result[11] += 0.008882547466065732;
    } else {
      if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)2.847218600022892954) ) ) {
        result[11] += -0.034044472974547824;
      } else {
        result[11] += 0.03185259302811664;
      }
    }
  }
  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.32011123242420747) ) ) {
    if ( LIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.2709289357124474162) ) ) {
      if ( LIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.2749445138003689393) ) ) {
        if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.9927185586073418166) ) ) {
          if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.005762357070754343) ) ) {
            result[12] += -0.015326275967815266;
          } else {
            result[12] += 0.03774459805410104;
          }
        } else {
          result[12] += -0.029847133802426495;
        }
      } else {
        result[12] += 0.06420794646009291;
      }
    } else {
      result[12] += -0.034636989336468624;
    }
  } else {
    if ( LIKELY(  (data[79].missing != -1) && (data[79].fvalue <= (double)-0.01389856493456434645) ) ) {
      result[12] += 0.030685520082113518;
    } else {
      result[12] += 0.07434969815309872;
    }
  }
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1772208526869041567) ) ) {
    if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-2.207866689787819414) ) ) {
      result[0] += 0.022953489970098145;
    } else {
      if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (double)0.4511556643006282563) ) ) {
        result[0] += -0.03447710795693255;
      } else {
        result[0] += -0.07211863132343022;
      }
    }
  } else {
    if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)1.406239143841617301) ) ) {
      if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02369714380279859187) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.135342507482403285) ) ) {
          if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.8166922260006254097) ) ) {
            if ( LIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.03877928294628725514) ) ) {
              if ( LIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)9.477337471177632366) ) ) {
                result[0] += -0.04225748899316533;
              } else {
                result[0] += 0.013883370197771926;
              }
            } else {
              result[0] += 0.026469237281875058;
            }
          } else {
            if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3707623292072619869) ) ) {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4134826703502541556) ) ) {
                result[0] += -0.02431286428525971;
              } else {
                result[0] += 0.030134784589781676;
              }
            } else {
              if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.005762357070754343) ) ) {
                result[0] += 0.009647472904799167;
              } else {
                result[0] += 0.03290955922837617;
              }
            }
          }
        } else {
          result[0] += -0.04717692171039333;
        }
      } else {
        if ( UNLIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.4855911565985475131) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.25526421801615129) ) ) {
            if ( LIKELY(  (data[53].missing != -1) && (data[53].fvalue <= (double)-0.2636269357762601184) ) ) {
              if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.0164200224566713425) ) ) {
                if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.1631875991615196753) ) ) {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.2232840142319784116) ) ) {
                    result[0] += -0.034054455768028125;
                  } else {
                    if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.3262626843891289208) ) ) {
                      result[0] += -0.03425534683769765;
                    } else {
                      if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.2121101247298024794) ) ) {
                        if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.7671482474614917946) ) ) {
                          result[0] += 0.0461233255890942;
                        } else {
                          if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.6983529540553979897) ) ) {
                            result[0] += -0.015802782059670242;
                          } else {
                            result[0] += 0.01613749915063235;
                          }
                        }
                      } else {
                        if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.7546400122967474866) ) ) {
                          result[0] += -0.038824235781253234;
                        } else {
                          result[0] += 0.014689695892580791;
                        }
                      }
                    }
                  }
                } else {
                  result[0] += 0.038943269779010525;
                }
              } else {
                result[0] += -0.04377255941913493;
              }
            } else {
              if ( LIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.3636387587306315061) ) ) {
                if ( LIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.4004479622294817021) ) ) {
                  result[0] += 0.017132614159663998;
                } else {
                  result[0] += 0.06540689003938924;
                }
              } else {
                result[0] += -0.0004582979982714367;
              }
            }
          } else {
            result[0] += -0.039928150387720324;
          }
        } else {
          if ( LIKELY( !(data[47].missing != -1) || (data[47].fvalue <= (double)0.01042025011524357753) ) ) {
            result[0] += -0.02814787174522696;
          } else {
            result[0] += 0.010454022683543332;
          }
        }
      }
    } else {
      result[0] += -0.03449407418248621;
    }
  }
  if ( UNLIKELY(  (data[35].missing != -1) && (data[35].fvalue <= (double)-0.5574519420018757554) ) ) {
    if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY(  (data[79].missing != -1) && (data[79].fvalue <= (double)-0.4168475085733249208) ) ) {
        if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.8554970799520443814) ) ) {
          if ( LIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5757685408658465009) ) ) {
            result[1] += -0.03579416814995266;
          } else {
            result[1] += 0.0002720687573283481;
          }
        } else {
          if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7496561927136741188) ) ) {
            if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6199221877480390885) ) ) {
              result[1] += 0.008497864121559449;
            } else {
              result[1] += 0.03687933859489607;
            }
          } else {
            result[1] += -0.016896669751146065;
          }
        }
      } else {
        result[1] += 0.03222543659651446;
      }
    } else {
      if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.3083892198998683942) ) ) {
        result[1] += -0.03481537537303275;
      } else {
        if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.5567939892579113481) ) ) {
          if ( UNLIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)9.477337471177632366) ) ) {
            result[1] += 0.009293265039412192;
          } else {
            result[1] += -0.03518068978772919;
          }
        } else {
          result[1] += 0.03703755705469139;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[38].missing != -1) || (data[38].fvalue <= (double)1.355342907056062307) ) ) {
      if ( UNLIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5969756681805393761) ) ) {
        if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.7163142958512370706) ) ) {
          result[1] += 0.033285988889173355;
        } else {
          if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.6054551360476957411) ) ) {
            result[1] += -0.035892940191857035;
          } else {
            if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.7405682477364100569) ) ) {
              if ( LIKELY(  (data[55].missing != -1) && (data[55].fvalue <= (double)-0.08450603599490492945) ) ) {
                result[1] += 0.033294574301911024;
              } else {
                result[1] += 0.010952162964787295;
              }
            } else {
              if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7752644520936924355) ) ) {
                if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7832670331499481664) ) ) {
                  if ( UNLIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7896690979949527733) ) ) {
                    result[1] += -0.03594848565653299;
                  } else {
                    if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.9475499506149932527) ) ) {
                      result[1] += 0.03958496494688393;
                    } else {
                      result[1] += 0.003667783655379413;
                    }
                  }
                } else {
                  result[1] += -0.029962117638113475;
                }
              } else {
                result[1] += 0.02448916291790856;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[81].missing != -1) || (data[81].fvalue <= (double)1.00000001800250948e-35) ) ) {
          if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (double)3.139560926486061554) ) ) {
            if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)1.516004093432879118) ) ) {
              if ( UNLIKELY(  (data[35].missing != -1) && (data[35].fvalue <= (double)-0.4483715980104056587) ) ) {
                result[1] += 0.004642474201374512;
              } else {
                result[1] += -0.03470488035230191;
              }
            } else {
              result[1] += 0.030091052172333942;
            }
          } else {
            if ( UNLIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.6197363940419985395) ) ) {
              result[1] += 0.0012263462785014057;
            } else {
              result[1] += 0.03484061027889229;
            }
          }
        } else {
          result[1] += 0.034960993197677155;
        }
      }
    } else {
      if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)0.7277191341578289618) ) ) {
        result[1] += 0.034804838483390964;
      } else {
        result[1] += 0.021035419972408886;
      }
    }
  }
  if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
    result[2] += -0.03166409287125226;
  } else {
    if ( LIKELY( !(data[69].missing != -1) || (data[69].fvalue <= (double)0.3953092113754633208) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.713419879289624137) ) ) {
        if ( UNLIKELY(  (data[69].missing != -1) && (data[69].fvalue <= (double)-0.3983159868815877025) ) ) {
          result[2] += -0.00616324264100339;
        } else {
          if ( UNLIKELY(  (data[70].missing != -1) && (data[70].fvalue <= (double)-0.1437039248675967829) ) ) {
            result[2] += 0.03765620107819044;
          } else {
            result[2] += -0.0098440242616136;
          }
        }
      } else {
        result[2] += -0.017156653611139893;
      }
    } else {
      result[2] += 0.04950445834830941;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)0.9946455059545064037) ) ) {
    result[3] += -0.0349581324030448;
  } else {
    if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)1.043568031522789319) ) ) {
      result[3] += 0.03484258152963343;
    } else {
      result[3] += -0.040105836708865805;
    }
  }
  if ( LIKELY( !(data[89].missing != -1) || (data[89].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.262377816431567767) ) ) {
      result[4] += 0.0015014214206632804;
    } else {
      result[4] += -0.03403999830285613;
    }
  } else {
    result[4] += 0.03537180231914041;
  }
  if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)6.015862565909510629) ) ) {
    if ( UNLIKELY(  (data[13].missing != -1) && (data[13].fvalue <= (double)-0.9897634247260547191) ) ) {
      result[5] += 0.025617618826520357;
    } else {
      result[5] += -0.03444113912837192;
    }
  } else {
    result[5] += 0.11953912467837803;
  }
  if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[6] += -0.02481641891727086;
  } else {
    result[6] += 0.08290274941200271;
  }
  if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8851947168287664924) ) ) {
    result[7] += 0.021109406110913297;
  } else {
    result[7] += -0.03444222637601662;
  }
  if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6189299289389768033) ) ) {
    result[8] += -0.036485166285024156;
  } else {
    if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (double)1.490178253475586745) ) ) {
      result[8] += -0.03449522155084063;
    } else {
      result[8] += 0.03822578607906192;
    }
  }
  if ( UNLIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-0.4969520972243098855) ) ) {
    if ( UNLIKELY( !(data[83].missing != -1) || (data[83].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7021266540248007892) ) ) {
        result[9] += -0.03532613365764785;
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.713419879289624137) ) ) {
          result[9] += -0.0018501473585932134;
        } else {
          result[9] += 0.025333969811402242;
        }
      }
    } else {
      if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6196424566529530331) ) ) {
        if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.038896224531635992) ) ) {
          result[9] += 0.04032820132797822;
        } else {
          if ( UNLIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.3099551758663680601) ) ) {
            result[9] += -0.024122537012439268;
          } else {
            if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.6686458955391302306) ) ) {
              if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.7671482474614917946) ) ) {
                if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.919828219461336527) ) ) {
                  result[9] += 0.030874567588931423;
                } else {
                  result[9] += 0.004515842697788063;
                }
              } else {
                result[9] += 0.09348368669776998;
              }
            } else {
              result[9] += -0.01239743260477079;
            }
          }
        }
      } else {
        result[9] += -0.027898900526906037;
      }
    }
  } else {
    result[9] += -0.03301578354768172;
  }
  if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[10] += -0.03212019230861511;
  } else {
    result[10] += 0.035207882606357044;
  }
  if ( UNLIKELY( !(data[84].missing != -1) || (data[84].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( LIKELY(  (data[42].missing != -1) && (data[42].fvalue <= (double)-0.01064205461029017231) ) ) {
      if ( LIKELY(  (data[34].missing != -1) && (data[34].fvalue <= (double)-0.2448910913907883791) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.045648128661929244) ) ) {
          if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.7163142958512370706) ) ) {
            result[11] += -0.04050948113708064;
          } else {
            if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.9564359567862011913) ) ) {
              result[11] += 0.03760467655191318;
            } else {
              if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.650710626636601841) ) ) {
                if ( LIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.4347074183606821074) ) ) {
                  if ( LIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.03875365587576699855) ) ) {
                    result[11] += 0.013432640105573398;
                  } else {
                    result[11] += 0.047734272329790335;
                  }
                } else {
                  result[11] += -0.027826056240023028;
                }
              } else {
                result[11] += -0.008887718597049472;
              }
            }
          }
        } else {
          if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3708993176377855527) ) ) {
            result[11] += 0.04561739353305988;
          } else {
            if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)6.004728844991070069) ) ) {
              result[11] += -0.0012886083481718567;
            } else {
              result[11] += 0.0320912662479339;
            }
          }
        }
      } else {
        if ( LIKELY(  (data[53].missing != -1) && (data[53].fvalue <= (double)-0.1313667015921429204) ) ) {
          result[11] += -0.03527021132119895;
        } else {
          result[11] += 0.0012843190550393387;
        }
      }
    } else {
      if ( LIKELY( !(data[69].missing != -1) || (data[69].fvalue <= (double)0.07927461561698297132) ) ) {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-0.5313858905757674611) ) ) {
          result[11] += -0.015624454433531375;
        } else {
          if ( UNLIKELY(  (data[56].missing != -1) && (data[56].fvalue <= (double)-0.1672844535794410226) ) ) {
            result[11] += -0.006561281366317824;
          } else {
            if ( LIKELY(  (data[20].missing != -1) && (data[20].fvalue <= (double)-0.4852831446275442384) ) ) {
              result[11] += 0.03438486090678438;
            } else {
              result[11] += 0.0034510161810435455;
            }
          }
        }
      } else {
        if ( LIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6207507797498656998) ) ) {
          result[11] += -0.03292451427244316;
        } else {
          result[11] += 0.013706584851843614;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[82].missing != -1) || (data[82].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-2.256928839343927518) ) ) {
        result[11] += -0.03420896112694866;
      } else {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-1.964803063360995639) ) ) {
          result[11] += 0.05137037556048045;
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6280292678484594715) ) ) {
            result[11] += -0.03846773477724697;
          } else {
            result[11] += 0.023761624277285422;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[55].missing != -1) || (data[55].fvalue <= (double)1.00000001800250948e-35) ) ) {
        result[11] += -0.033935771487978085;
      } else {
        result[11] += 0.026234451490592843;
      }
    }
  }
  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.32011123242420747) ) ) {
    if ( LIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.2709289357124474162) ) ) {
      if ( LIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.2749445138003689393) ) ) {
        if ( UNLIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.4241077355256945292) ) ) {
          if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.4567227525712163616) ) ) {
            result[12] += -0.015295581251759751;
          } else {
            result[12] += 0.03626344710901439;
          }
        } else {
          result[12] += -0.029518655673386594;
        }
      } else {
        result[12] += 0.06394035026937235;
      }
    } else {
      result[12] += -0.03463125477157283;
    }
  } else {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.460698822199083313) ) ) {
      result[12] += 0.07655612911796074;
    } else {
      result[12] += 0.013522907925688929;
    }
  }
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1772208526869041567) ) ) {
    if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)1.00000001800250948e-35) ) ) {
      result[0] += 0.025880666796084008;
    } else {
      if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (double)0.4511556643006282563) ) ) {
        result[0] += -0.03446806691122601;
      } else {
        result[0] += -0.06865286532110607;
      }
    }
  } else {
    if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)1.406239143841617301) ) ) {
      if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02369714380279859187) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.135342507482403285) ) ) {
          if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.8166922260006254097) ) ) {
            if ( LIKELY(  (data[44].missing != -1) && (data[44].fvalue <= (double)-0.03858111149894900144) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7369570350073810783) ) ) {
                result[0] += -0.03739748264414768;
              } else {
                result[0] += 0.00288155158650509;
              }
            } else {
              result[0] += 0.025820511220976502;
            }
          } else {
            if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3707623292072619869) ) ) {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4134826703502541556) ) ) {
                result[0] += -0.02386089267524896;
              } else {
                result[0] += 0.029760595215310652;
              }
            } else {
              if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.2854825927736091007) ) ) {
                result[0] += 0.031841508912664004;
              } else {
                result[0] += -4.133457021714866e-05;
              }
            }
          }
        } else {
          result[0] += -0.047987540881014756;
        }
      } else {
        if ( UNLIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.4855911565985475131) ) ) {
          if ( LIKELY(  (data[53].missing != -1) && (data[53].fvalue <= (double)-0.2636269357762601184) ) ) {
            if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.7544702801259169922) ) ) {
              if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.1631875991615196753) ) ) {
                if ( LIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6030701101055554458) ) ) {
                  if ( UNLIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6038933927668245216) ) ) {
                    result[0] += 0.009224929491385385;
                  } else {
                    result[0] += -0.02549270970574468;
                  }
                } else {
                  result[0] += 0.008584367980221223;
                }
              } else {
                result[0] += 0.036193502729222074;
              }
            } else {
              result[0] += -0.04222411536894551;
            }
          } else {
            if ( LIKELY(  (data[54].missing != -1) && (data[54].fvalue <= (double)-0.03673984168271277745) ) ) {
              if ( LIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.03760723470140001773) ) ) {
                result[0] += 0.01593352323179508;
              } else {
                result[0] += 0.05855503788786318;
              }
            } else {
              result[0] += -5.5805618178587975e-05;
            }
          }
        } else {
          if ( LIKELY( !(data[47].missing != -1) || (data[47].fvalue <= (double)0.01042025011524357753) ) ) {
            result[0] += -0.027787203153980634;
          } else {
            result[0] += 0.010231597336643356;
          }
        }
      }
    } else {
      result[0] += -0.034488798606978475;
    }
  }
  if ( UNLIKELY(  (data[35].missing != -1) && (data[35].fvalue <= (double)-0.5574519420018757554) ) ) {
    if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1772208526869041567) ) ) {
      result[1] += -0.03469947280457212;
    } else {
      if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)1.00000001800250948e-35) ) ) {
        if ( LIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.6198533550827970418) ) ) {
          if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.1305725821159978428) ) ) {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-1.563490236986021076) ) ) {
              result[1] += 0.021107884582693155;
            } else {
              if ( UNLIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7944706466287062563) ) ) {
                if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.07982434462983790946) ) ) {
                  result[1] += 0.007127404410431122;
                } else {
                  result[1] += -0.037635285140387484;
                }
              } else {
                result[1] += -0.03275848858075755;
              }
            }
          } else {
            result[1] += -0.035850984695007734;
          }
        } else {
          result[1] += 0.026724678324456356;
        }
      } else {
        if ( UNLIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.5272099775563079405) ) ) {
          result[1] += 0.031942509720383386;
        } else {
          result[1] += -0.03607631962472548;
        }
      }
    }
  } else {
    if ( LIKELY(  (data[59].missing != -1) && (data[59].fvalue <= (double)-0.1124837993818746523) ) ) {
      if ( LIKELY(  (data[50].missing != -1) && (data[50].fvalue <= (double)-0.01525931156546266217) ) ) {
        if ( UNLIKELY( !(data[83].missing != -1) || (data[83].fvalue <= (double)1.00000001800250948e-35) ) ) {
          result[1] += 0.032416415566090095;
        } else {
          if ( UNLIKELY(  (data[6].missing != -1) && (data[6].fvalue <= (double)-0.343438049588791483) ) ) {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.3678488213209678004) ) ) {
              if ( UNLIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.3914927184801726967) ) ) {
                result[1] += -0.007097083810588826;
              } else {
                result[1] += 0.036200790683332706;
              }
            } else {
              if ( LIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6284344568935479325) ) ) {
                if ( UNLIKELY(  (data[33].missing != -1) && (data[33].fvalue <= (double)-0.6506896447654095805) ) ) {
                  result[1] += -0.018907530954264958;
                } else {
                  if ( LIKELY(  (data[61].missing != -1) && (data[61].fvalue <= (double)-0.1680043385803572653) ) ) {
                    if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)3.368407430064523922) ) ) {
                      if ( LIKELY(  (data[55].missing != -1) && (data[55].fvalue <= (double)-0.1038203545631762176) ) ) {
                        result[1] += 0.03215332003559632;
                      } else {
                        result[1] += -0.004601158399376366;
                      }
                    } else {
                      result[1] += 0.04102657754192593;
                    }
                  } else {
                    if ( LIKELY(  (data[54].missing != -1) && (data[54].fvalue <= (double)-0.038690538125306706) ) ) {
                      if ( LIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.6192635509156506624) ) ) {
                        result[1] += 0.0243209761657872;
                      } else {
                        result[1] += -0.014495881099348264;
                      }
                    } else {
                      result[1] += -0.015398302225550603;
                    }
                  }
                }
              } else {
                result[1] += -0.03352758028038329;
              }
            }
          } else {
            result[1] += -0.03498330737325871;
          }
        }
      } else {
        if ( UNLIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.598150121557414427) ) ) {
          result[1] += 0.029317252906865692;
        } else {
          result[1] += -0.03442708696616461;
        }
      }
    } else {
      result[1] += 0.03414350614140046;
    }
  }
  if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
    result[2] += -0.031488833624312235;
  } else {
    if ( UNLIKELY(  (data[3].missing != -1) && (data[3].fvalue <= (double)-0.5267935652193423968) ) ) {
      result[2] += 0.05626602326802857;
    } else {
      if ( UNLIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.4548443414119415773) ) ) {
        result[2] += 0.034445135328517305;
      } else {
        if ( UNLIKELY(  (data[43].missing != -1) && (data[43].fvalue <= (double)-0.270194635957233531) ) ) {
          result[2] += 0.00789810361417002;
        } else {
          result[2] += -0.026227800066372566;
        }
      }
    }
  }
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1845224968741556448) ) ) {
    if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1847700102364353281) ) ) {
      result[3] += -0.03534277099979906;
    } else {
      result[3] += 0.03480852233918455;
    }
  } else {
    result[3] += -0.035028857248205376;
  }
  if ( LIKELY( !(data[89].missing != -1) || (data[89].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.262377816431567767) ) ) {
      result[4] += 0.0021542617811097357;
    } else {
      result[4] += -0.03401033182260707;
    }
  } else {
    result[4] += 0.03530879432650772;
  }
  if ( UNLIKELY( !(data[84].missing != -1) || (data[84].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.7544702801259169922) ) ) {
      result[5] += -0.01674775167924939;
    } else {
      result[5] += 0.11488241568228845;
    }
  } else {
    result[5] += -0.03443872310494388;
  }
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1699192084996526686) ) ) {
    if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (double)1.00000001800250948e-35) ) ) {
      result[6] += -0.01675996184675956;
    } else {
      result[6] += 0.10166571183984943;
    }
  } else {
    result[6] += -0.03447939583475567;
  }
  if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-1.031327076639174445) ) ) {
    if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.4815484825403061886) ) ) {
      result[7] += -0.0014200431844694037;
    } else {
      result[7] += 0.02488470537691222;
    }
  } else {
    result[7] += -0.03444161371582749;
  }
  if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6189299289389768033) ) ) {
    result[8] += -0.03647054901849838;
  } else {
    if ( LIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5699021105360092543) ) ) {
      result[8] += -0.034436326616648014;
    } else {
      result[8] += 0.0357271727017073;
    }
  }
  if ( UNLIKELY(  (data[4].missing != -1) && (data[4].fvalue <= (double)-0.5523457074688490342) ) ) {
    if ( LIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5875014015255205502) ) ) {
      if ( UNLIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)0.3334782725859260499) ) ) {
        result[9] += 0.03665109482017356;
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6359230018345859436) ) ) {
          result[9] += 0.027353786149234987;
        } else {
          result[9] += 0.004097193918106992;
        }
      }
    } else {
      if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.6920988364730259468) ) ) {
        result[9] += -0.025707237564820518;
      } else {
        result[9] += 0.012487409428268266;
      }
    }
  } else {
    if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)0.9595213542107834392) ) ) {
      result[9] += -0.033002241042611964;
    } else {
      result[9] += 0.018319192190518502;
    }
  }
  if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8851947168287664924) ) ) {
    result[10] += 0.03004965238553816;
  } else {
    result[10] += -0.031817423700872;
  }
  if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02366057554279654349) ) ) {
    if ( UNLIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.619840163027092772) ) ) {
      if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.4432578306330479112) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9191755293951566763) ) ) {
          if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3672097625756842176) ) ) {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-2.053650784577106148) ) ) {
              result[11] += 0.037929516577706594;
            } else {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-1.948957976892493393) ) ) {
                result[11] += 0.005637704059365805;
              } else {
                result[11] += -0.018199224103422305;
              }
            }
          } else {
            result[11] += -0.02754903205375911;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.373439753823053389) ) ) {
            result[11] += 0.04035937118135337;
          } else {
            result[11] += 0.005438574257508521;
          }
        }
      } else {
        if ( LIKELY( !(data[53].missing != -1) || (data[53].fvalue <= (double)1.360982184391375194) ) ) {
          result[11] += -0.03240954789768568;
        } else {
          result[11] += 0.003659519827086286;
        }
      }
    } else {
      result[11] += -0.03347555827297742;
    }
  } else {
    if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.3700968684848933155) ) ) {
      if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.3588777014346508087) ) ) {
        if ( LIKELY( !(data[38].missing != -1) || (data[38].fvalue <= (double)1.334235260215556051) ) ) {
          if ( UNLIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6307850244566913789) ) ) {
            result[11] += 0.006043953992204303;
          } else {
            result[11] += 0.03545798355182583;
          }
        } else {
          result[11] += -0.03459879099823186;
        }
      } else {
        if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.6438362138560046466) ) ) {
          result[11] += 0.022006154621532267;
        } else {
          if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.3560940123812407765) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.4600137327860867043) ) ) {
              result[11] += -0.03130616017895111;
            } else {
              result[11] += 0.0019480881665584443;
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6359230018345859436) ) ) {
              result[11] += 0.00013657049410163767;
            } else {
              result[11] += 0.021456059279143524;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)2.258965045567843166) ) ) {
        result[11] += -0.029945956118067805;
      } else {
        result[11] += 0.014068415716646897;
      }
    }
  }
  if ( LIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (double)0.301285017925520815) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6280292678484594715) ) ) {
      if ( LIKELY(  (data[34].missing != -1) && (data[34].fvalue <= (double)-0.2544652182240408345) ) ) {
        result[12] += -0.021767053699876776;
      } else {
        result[12] += 0.03150523090595342;
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8215697967491829568) ) ) {
        if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.61991967279657334) ) ) {
          result[12] += 0.08805818558454662;
        } else {
          result[12] += 0.04324093141378486;
        }
      } else {
        result[12] += 0.016883090773744665;
      }
    }
  } else {
    result[12] += -0.026443050230079493;
  }
  if ( UNLIKELY( !(data[84].missing != -1) || (data[84].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02376901934613134468) ) ) {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4134826703502541556) ) ) {
        result[0] += 0.0023733198023253434;
      } else {
        if ( UNLIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.598150121557414427) ) ) {
          result[0] += -0.006103400560014599;
        } else {
          if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7576587737699298497) ) ) {
            result[0] += 0.033648069057827815;
          } else {
            if ( UNLIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.4548143047586095666) ) ) {
              result[0] += -0.037650392190392255;
            } else {
              if ( LIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.3228285899577809093) ) ) {
                result[0] += 0.032803892634058404;
              } else {
                if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)0.4059165118096518809) ) ) {
                  result[0] += 0.024935534168243918;
                } else {
                  result[0] += -0.01956983817165028;
                }
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY(  (data[58].missing != -1) && (data[58].fvalue <= (double)-0.4663266532852128887) ) ) {
        if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7896690979949527733) ) ) {
          if ( UNLIKELY(  (data[42].missing != -1) && (data[42].fvalue <= (double)-0.01055551470014969885) ) ) {
            result[0] += 0.00256646443785842;
          } else {
            result[0] += -0.034679474377699235;
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.175347363718650895) ) ) {
            if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02321671253988670178) ) ) {
              result[0] += 0.02420603183112248;
            } else {
              if ( LIKELY( !(data[52].missing != -1) || (data[52].fvalue <= (double)0.01546367856846388687) ) ) {
                if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.3678488213209678004) ) ) {
                  result[0] += -0.038561506576359955;
                } else {
                  result[0] += 0.0020627599894949234;
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8215697967491829568) ) ) {
                  result[0] += 0.007489078836582916;
                } else {
                  result[0] += 0.029250773531078533;
                }
              }
            }
          } else {
            result[0] += -0.015638447648217663;
          }
        }
      } else {
        result[0] += -0.034540579858621016;
      }
    }
  } else {
    if ( UNLIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.4432578306330479112) ) ) {
      if ( LIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.07982434462983790946) ) ) {
        if ( UNLIKELY(  (data[35].missing != -1) && (data[35].fvalue <= (double)-0.5574519420018757554) ) ) {
          result[0] += 0.039703225830541936;
        } else {
          if ( UNLIKELY(  (data[47].missing != -1) && (data[47].fvalue <= (double)-0.01600803693431190541) ) ) {
            result[0] += 0.028318063991595182;
          } else {
            result[0] += -0.024326343557971166;
          }
        }
      } else {
        result[0] += -0.03500310160320808;
      }
    } else {
      if ( LIKELY(  (data[47].missing != -1) && (data[47].fvalue <= (double)-0.01257821574043074299) ) ) {
        if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (double)2.986558014660257054) ) ) {
          result[0] += -0.03395558057965967;
        } else {
          if ( UNLIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.03889287964838449019) ) ) {
            result[0] += 0.019933530919775854;
          } else {
            result[0] += -0.013152765198471732;
          }
        }
      } else {
        result[0] += 0.03344495571307175;
      }
    }
  }
  if ( UNLIKELY(  (data[35].missing != -1) && (data[35].fvalue <= (double)-0.5574519420018757554) ) ) {
    if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1772208526869041567) ) ) {
      result[1] += -0.03466842626169187;
    } else {
      if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)0.2826767635433137804) ) ) {
        if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.08007185799211762045) ) ) {
          if ( LIKELY(  (data[53].missing != -1) && (data[53].fvalue <= (double)-0.2389049795789350561) ) ) {
            if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
              if ( UNLIKELY(  (data[79].missing != -1) && (data[79].fvalue <= (double)-0.4168475085733249208) ) ) {
                if ( LIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5757685408658465009) ) ) {
                  if ( UNLIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.8008727114737107522) ) ) {
                    result[1] += -0.05534826145244998;
                  } else {
                    result[1] += -0.006553224804878753;
                  }
                } else {
                  result[1] += 0.027890331408977887;
                }
              } else {
                result[1] += 0.03803606874691523;
              }
            } else {
              result[1] += -0.037087392968696634;
            }
          } else {
            result[1] += -0.03991653475188519;
          }
        } else {
          if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.146880090638758759) ) ) {
            result[1] += -0.03637367214570763;
          } else {
            if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7624603224036833327) ) ) {
              result[1] += 0.02899291007469011;
            } else {
              result[1] += -0.04347629137214166;
            }
          }
        }
      } else {
        result[1] += 0.039060260411284076;
      }
    }
  } else {
    if ( LIKELY(  (data[58].missing != -1) && (data[58].fvalue <= (double)-0.07150931649549026325) ) ) {
      if ( LIKELY(  (data[50].missing != -1) && (data[50].fvalue <= (double)-0.0172849402933750694) ) ) {
        if ( UNLIKELY( !(data[83].missing != -1) || (data[83].fvalue <= (double)1.00000001800250948e-35) ) ) {
          if ( UNLIKELY(  (data[42].missing != -1) && (data[42].fvalue <= (double)-0.01069082772624425394) ) ) {
            result[1] += -0.007591434576164855;
          } else {
            result[1] += 0.033327664232992424;
          }
        } else {
          if ( UNLIKELY(  (data[4].missing != -1) && (data[4].fvalue <= (double)-0.5384757477610738752) ) ) {
            if ( UNLIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6038432399713662413) ) ) {
              if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)1.015169628132993163) ) ) {
                result[1] += 0.0023440812075937816;
              } else {
                result[1] += -0.018128762832509845;
              }
            } else {
              if ( LIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.5587229921938315913) ) ) {
                if ( UNLIKELY(  (data[55].missing != -1) && (data[55].fvalue <= (double)-0.1292032387258958137) ) ) {
                  result[1] += -0.0022703595152106988;
                } else {
                  result[1] += 0.029771860483198423;
                }
              } else {
                result[1] += -0.03484567974893437;
              }
            }
          } else {
            result[1] += -0.034959335778535085;
          }
        }
      } else {
        if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8335982467741961388) ) ) {
          result[1] += 0.03658472740595743;
        } else {
          result[1] += -0.034053260612263346;
        }
      }
    } else {
      result[1] += 0.03423104967917673;
    }
  }
  if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
    result[2] += -0.03129352392477112;
  } else {
    if ( LIKELY( !(data[69].missing != -1) || (data[69].fvalue <= (double)0.3953092113754633208) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.713419879289624137) ) ) {
        result[2] += 0.018816863122112896;
      } else {
        result[2] += -0.0172401690971977;
      }
    } else {
      result[2] += 0.049832812235717235;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)0.9946455059545064037) ) ) {
    result[3] += -0.034910351278108424;
  } else {
    if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)1.00000001800250948e-35) ) ) {
      result[3] += -0.039674255740967106;
    } else {
      result[3] += 0.03478957887260804;
    }
  }
  if ( LIKELY( !(data[45].missing != -1) || (data[45].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.2752335735604075073) ) ) {
      result[4] += -0.03445677289068441;
    } else {
      result[4] += -0.0029497406692653807;
    }
  } else {
    result[4] += 0.03391251909118038;
  }
  if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)6.015862565909510629) ) ) {
    if ( UNLIKELY(  (data[13].missing != -1) && (data[13].fvalue <= (double)-0.9897634247260547191) ) ) {
      result[5] += 0.027757994018511617;
    } else {
      result[5] += -0.03444125663729169;
    }
  } else {
    result[5] += 0.09354020318768475;
  }
  if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[6] += -0.023845630251741894;
  } else {
    result[6] += 0.07068256136880181;
  }
  if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3728354207891853567) ) ) {
    if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.4815484825403061886) ) ) {
      result[7] += -0.0015695510291708428;
    } else {
      result[7] += 0.02437283007887512;
    }
  } else {
    result[7] += -0.03444103926929356;
  }
  if ( LIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.6192635509156506624) ) ) {
    result[8] += -0.03644435216953735;
  } else {
    if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (double)1.490178253475586745) ) ) {
      result[8] += -0.03450961847157763;
    } else {
      result[8] += 0.03662201649643922;
    }
  }
  if ( UNLIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-0.4969520972243098855) ) ) {
    if ( LIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5875014015255205502) ) ) {
      if ( UNLIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.5953365750146842883) ) ) {
        result[9] += 0.03692561742627975;
      } else {
        if ( UNLIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6297669482332345359) ) ) {
          result[9] += -0.019616733806161368;
        } else {
          if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)0.8804929462951799346) ) ) {
            if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.0164200224566713425) ) ) {
              if ( UNLIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.2936476673436070883) ) ) {
                result[9] += 0.030092645976615255;
              } else {
                result[9] += -0.004551956674758226;
              }
            } else {
              result[9] += 0.06471858816704346;
            }
          } else {
            result[9] += -0.008257197207418361;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.713419879289624137) ) ) {
        if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02379802175668314576) ) ) {
          if ( LIKELY(  (data[44].missing != -1) && (data[44].fvalue <= (double)-0.03868272262560683988) ) ) {
            result[9] += -0.031969890275458816;
          } else {
            result[9] += 0.038792389580349626;
          }
        } else {
          if ( UNLIKELY(  (data[55].missing != -1) && (data[55].fvalue <= (double)-0.1338641925353428463) ) ) {
            result[9] += -0.036624955713839766;
          } else {
            result[9] += 0.00917259792076004;
          }
        }
      } else {
        if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (double)1.525439072483760983) ) ) {
          result[9] += -0.020462699312771372;
        } else {
          result[9] += 0.03988172788202185;
        }
      }
    }
  } else {
    result[9] += -0.03280700862224031;
  }
  if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[10] += -0.031816844433081845;
  } else {
    result[10] += 0.035122350281844364;
  }
  if ( UNLIKELY( !(data[84].missing != -1) || (data[84].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( LIKELY(  (data[42].missing != -1) && (data[42].fvalue <= (double)-0.01064205461029017231) ) ) {
      if ( LIKELY( !(data[38].missing != -1) || (data[38].fvalue <= (double)1.258404084529293643) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5142327377564889224) ) ) {
          if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.650710626636601841) ) ) {
            result[11] += 0.008420238530142876;
          } else {
            if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3675841976191152605) ) ) {
              result[11] += -0.02593593609839408;
            } else {
              result[11] += 0.0046108280060662326;
            }
          }
        } else {
          if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.3560940123812407765) ) ) {
            if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.4143637838009673335) ) ) {
              if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.4818687682310768827) ) ) {
                if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.5549832342097297255) ) ) {
                  if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.5880657077722796222) ) ) {
                    result[11] += 0.00531428995311803;
                  } else {
                    result[11] += 0.04764155015818352;
                  }
                } else {
                  result[11] += -0.017757912294411326;
                }
              } else {
                result[11] += 0.03548690012703833;
              }
            } else {
              result[11] += -0.01461671276350744;
            }
          } else {
            result[11] += 0.020929712184609355;
          }
        }
      } else {
        result[11] += -0.03449063661630691;
      }
    } else {
      if ( LIKELY(  (data[43].missing != -1) && (data[43].fvalue <= (double)-0.1419916722303602996) ) ) {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-0.5313858905757674611) ) ) {
          result[11] += -0.012684165167494944;
        } else {
          if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.2936476673436070883) ) ) {
            if ( LIKELY(  (data[20].missing != -1) && (data[20].fvalue <= (double)-0.4852831446275442384) ) ) {
              result[11] += 0.03496546327899476;
            } else {
              result[11] += 0.0034839047508652306;
            }
          } else {
            result[11] += -0.0013552749841057442;
          }
        }
      } else {
        if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (double)1.945333284487767989) ) ) {
          result[11] += 0.012335688384828318;
        } else {
          result[11] += -0.03024858357385366;
        }
      }
    }
  } else {
    if ( UNLIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.4432578306330479112) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6359230018345859436) ) ) {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-1.964803063360995639) ) ) {
          if ( LIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-2.256928839343927518) ) ) {
            result[11] += -0.03425702048261134;
          } else {
            result[11] += 0.04941240758866219;
          }
        } else {
          result[11] += -0.03340360821049417;
        }
      } else {
        if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.4241077355256945292) ) ) {
          result[11] += -0.0037187006534056813;
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.175347363718650895) ) ) {
            result[11] += 0.05630391036130853;
          } else {
            result[11] += 0.015372404545161669;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)0.3715324298426891381) ) ) {
        result[11] += -0.03414069359812894;
      } else {
        result[11] += 0.012882826512277108;
      }
    }
  }
  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.32011123242420747) ) ) {
    if ( LIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.2709289357124474162) ) ) {
      if ( UNLIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.4241077355256945292) ) ) {
        result[12] += 0.03413920141312128;
      } else {
        result[12] += -0.029108936564670458;
      }
    } else {
      result[12] += -0.03464752331654664;
    }
  } else {
    result[12] += 0.04850323161242598;
  }
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1772208526869041567) ) ) {
    if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.7202423655937005842) ) ) {
      result[0] += 0.022427509764965874;
    } else {
      result[0] += -0.03653263657550598;
    }
  } else {
    if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)1.406239143841617301) ) ) {
      if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02370849257168504073) ) ) {
        if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.136326896897185579) ) ) {
          if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.08007185799211762045) ) ) {
            if ( LIKELY( !(data[49].missing != -1) || (data[49].fvalue <= (double)0.02604902279078946323) ) ) {
              result[0] += 0.0034317515581255746;
            } else {
              result[0] += 0.03881097197778126;
            }
          } else {
            result[0] += -0.04972174018350423;
          }
        } else {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4134826703502541556) ) ) {
            result[0] += 0.0012829411826573282;
          } else {
            if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.8166922260006254097) ) ) {
              if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.046103837241118883) ) ) {
                result[0] += 0.027826892130242944;
              } else {
                result[0] += -0.03492600246462774;
              }
            } else {
              result[0] += 0.03017375598558943;
            }
          }
        }
      } else {
        if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.3914927184801726967) ) ) {
          if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02358933048779946265) ) ) {
            if ( UNLIKELY(  (data[58].missing != -1) && (data[58].fvalue <= (double)-0.4663266532852128887) ) ) {
              result[0] += 0.019448039759694894;
            } else {
              result[0] += -0.03650302964253769;
            }
          } else {
            if ( UNLIKELY(  (data[58].missing != -1) && (data[58].fvalue <= (double)-0.5578126283066342506) ) ) {
              result[0] += -0.008034392280468662;
            } else {
              result[0] += -0.03591083087873642;
            }
          }
        } else {
          if ( LIKELY(  (data[71].missing != -1) && (data[71].fvalue <= (double)-0.451167852979034778) ) ) {
            if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.7544702801259169922) ) ) {
              if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.1631875991615196753) ) ) {
                if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.7906011883953875108) ) ) {
                  result[0] += 0.02499316975714687;
                } else {
                  if ( LIKELY(  (data[33].missing != -1) && (data[33].fvalue <= (double)-0.6178218225601107561) ) ) {
                    result[0] += -0.030473394593255314;
                  } else {
                    if ( LIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6030701101055554458) ) ) {
                      result[0] += -0.011889450966110186;
                    } else {
                      result[0] += 0.011316530312094824;
                    }
                  }
                }
              } else {
                result[0] += 0.03134122455474872;
              }
            } else {
              result[0] += -0.042099935082151284;
            }
          } else {
            if ( LIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.3636387587306315061) ) ) {
              if ( LIKELY(  (data[69].missing != -1) && (data[69].fvalue <= (double)-0.3624098660180067322) ) ) {
                result[0] += 0.017315767967593463;
              } else {
                result[0] += 0.050100578470754976;
              }
            } else {
              result[0] += -0.001886367141994425;
            }
          }
        }
      }
    } else {
      result[0] += -0.03448362696130403;
    }
  }
  if ( UNLIKELY(  (data[35].missing != -1) && (data[35].fvalue <= (double)-0.5574519420018757554) ) ) {
    if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.6198533550827970418) ) ) {
        if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7672618710374367046) ) ) {
          if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.146880090638758759) ) ) {
            if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.07982434462983790946) ) ) {
              result[1] += -0.007659413214521599;
            } else {
              result[1] += -0.036809621837844884;
            }
          } else {
            if ( LIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.03033133736758231516) ) ) {
              result[1] += 0.009283430148597359;
            } else {
              result[1] += 0.03875703346047136;
            }
          }
        } else {
          result[1] += -0.034155603885606935;
        }
      } else {
        result[1] += 0.023193040935406823;
      }
    } else {
      if ( UNLIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.4432578306330479112) ) ) {
        result[1] += -0.005561148762550244;
      } else {
        result[1] += -0.03481790106316649;
      }
    }
  } else {
    if ( LIKELY( !(data[38].missing != -1) || (data[38].fvalue <= (double)1.355342907056062307) ) ) {
      if ( UNLIKELY(  (data[33].missing != -1) && (data[33].fvalue <= (double)-0.6581596043575229649) ) ) {
        if ( UNLIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5699021105360092543) ) ) {
          result[1] += -0.0013173461841280642;
        } else {
          result[1] += 0.033171040292471726;
        }
      } else {
        if ( UNLIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6284344568935479325) ) ) {
          if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3708993176377855527) ) ) {
            result[1] += -0.04947658903853287;
          } else {
            if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)7.53102019047485971) ) ) {
              if ( UNLIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)0.736928258521945212) ) ) {
                result[1] += -0.025422388717603585;
              } else {
                if ( LIKELY(  (data[61].missing != -1) && (data[61].fvalue <= (double)-0.1680043385803572653) ) ) {
                  result[1] += 0.029563631261416284;
                } else {
                  if ( UNLIKELY(  (data[61].missing != -1) && (data[61].fvalue <= (double)-0.1669273088714700592) ) ) {
                    if ( LIKELY(  (data[55].missing != -1) && (data[55].fvalue <= (double)-0.1109290895755049022) ) ) {
                      result[1] += 0.01215417053474891;
                    } else {
                      result[1] += -0.01922503307787778;
                    }
                  } else {
                    result[1] += 0.032678214247537564;
                  }
                }
              }
            } else {
              result[1] += -0.038285868205160285;
            }
          }
        } else {
          if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.3083892198998683942) ) ) {
            if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)1.516004093432879118) ) ) {
              if ( UNLIKELY(  (data[35].missing != -1) && (data[35].fvalue <= (double)-0.3881343051148680723) ) ) {
                result[1] += 0.012747948260917056;
              } else {
                result[1] += -0.03511130786682138;
              }
            } else {
              result[1] += 0.027675820670736147;
            }
          } else {
            if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.2473048808965103429) ) ) {
              result[1] += 0.034322682164505035;
            } else {
              result[1] += -0.039954801673511744;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)0.7277191341578289618) ) ) {
        result[1] += 0.034712398126311904;
      } else {
        if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6198592857723482785) ) ) {
          result[1] += -0.025700489549388045;
        } else {
          result[1] += 0.02800441041383921;
        }
      }
    }
  }
  if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)1.077073811266402448) ) ) {
    result[2] += -0.03058496221936614;
  } else {
    if ( UNLIKELY(  (data[58].missing != -1) && (data[58].fvalue <= (double)-0.5578126283066342506) ) ) {
      result[2] += 0.05762016319360961;
    } else {
      if ( UNLIKELY(  (data[6].missing != -1) && (data[6].fvalue <= (double)-0.3683268691047871801) ) ) {
        if ( UNLIKELY(  (data[69].missing != -1) && (data[69].fvalue <= (double)-0.3982557217939283745) ) ) {
          result[2] += 0.003508312140141903;
        } else {
          result[2] += 0.026699777202004622;
        }
      } else {
        result[2] += -0.025519480456213797;
      }
    }
  }
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1845224968741556448) ) ) {
    if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1847700102364353281) ) ) {
      result[3] += -0.035324242204035385;
    } else {
      result[3] += 0.03475830405114678;
    }
  } else {
    result[3] += -0.03498352837710078;
  }
  if ( LIKELY( !(data[45].missing != -1) || (data[45].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8851947168287664924) ) ) {
      result[4] += -0.0037352281229172716;
    } else {
      result[4] += -0.03445050008755104;
    }
  } else {
    result[4] += 0.03372497445769151;
  }
  if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)6.015862565909510629) ) ) {
    if ( UNLIKELY(  (data[13].missing != -1) && (data[13].fvalue <= (double)-0.9897634247260547191) ) ) {
      result[5] += 0.027359066972128036;
    } else {
      result[5] += -0.034440872125499136;
    }
  } else {
    result[5] += 0.08501827097191697;
  }
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1749932324263867578) ) ) {
    result[6] += 0.044855241252357535;
  } else {
    result[6] += -0.02656594903111722;
  }
  if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-1.031327076639174445) ) ) {
    if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.4815484825403061886) ) ) {
      result[7] += -0.0017374206400569828;
    } else {
      result[7] += 0.02396189376294169;
    }
  } else {
    result[7] += -0.03444049895794475;
  }
  if ( LIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.6192635509156506624) ) ) {
    result[8] += -0.036424185799611423;
  } else {
    if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
      result[8] += -0.034435966691536764;
    } else {
      result[8] += 0.03670365277794558;
    }
  }
  if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( UNLIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5875014015255205502) ) ) {
      if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3699951939963300185) ) ) {
        if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1558109468497091699) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.1403463155960853748) ) ) {
            result[9] += -0.02983190156033585;
          } else {
            result[9] += 0.03418246781149307;
          }
        } else {
          if ( UNLIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.4893377696167382496) ) ) {
            result[9] += 0.04058697314969762;
          } else {
            if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)1.126466175977412165) ) ) {
              result[9] += 0.01478620398671067;
            } else {
              result[9] += 0.05124130565154608;
            }
          }
        }
      } else {
        result[9] += -0.015336231710278472;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.713419879289624137) ) ) {
        if ( LIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.5903304115434165888) ) ) {
          if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3680956210930699801) ) ) {
            result[9] += -0.035700247186234046;
          } else {
            result[9] += 0.019571095121433773;
          }
        } else {
          result[9] += 0.01651414670204949;
        }
      } else {
        if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (double)1.525439072483760983) ) ) {
          result[9] += -0.020501333978945477;
        } else {
          result[9] += 0.03935458251535582;
        }
      }
    }
  } else {
    result[9] += -0.0326459907391155;
  }
  if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[10] += -0.0316464670228885;
  } else {
    result[10] += 0.035081945087223045;
  }
  if ( UNLIKELY( !(data[84].missing != -1) || (data[84].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( LIKELY(  (data[42].missing != -1) && (data[42].fvalue <= (double)-0.01064205461029017231) ) ) {
      if ( LIKELY( !(data[38].missing != -1) || (data[38].fvalue <= (double)1.258404084529293643) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5142327377564889224) ) ) {
          if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.650710626636601841) ) ) {
            result[11] += 0.007982689897269083;
          } else {
            if ( LIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.03257665470314328321) ) ) {
              if ( UNLIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.03889268172121179007) ) ) {
                result[11] += -0.005923915586506815;
              } else {
                result[11] += -0.03198612839638469;
              }
            } else {
              result[11] += 0.014463752627342069;
            }
          }
        } else {
          if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.3560940123812407765) ) ) {
            if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.4143637838009673335) ) ) {
              result[11] += 0.010567190184534746;
            } else {
              result[11] += -0.013983942223856172;
            }
          } else {
            result[11] += 0.020352856789287506;
          }
        }
      } else {
        result[11] += -0.03449038816427408;
      }
    } else {
      if ( LIKELY(  (data[43].missing != -1) && (data[43].fvalue <= (double)-0.1419916722303602996) ) ) {
        if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.3700968684848933155) ) ) {
          if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.2936476673436070883) ) ) {
            result[11] += 0.03331964198402276;
          } else {
            result[11] += -0.0012335979383810323;
          }
        } else {
          result[11] += -0.012497566434857096;
        }
      } else {
        if ( UNLIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.4076512707803252034) ) ) {
          result[11] += 0.0146370947633796;
        } else {
          result[11] += -0.029863664482371516;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[82].missing != -1) || (data[82].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-2.256928839343927518) ) ) {
        result[11] += -0.03392285463757632;
      } else {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-1.964803063360995639) ) ) {
          result[11] += 0.04818541878557136;
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6280292678484594715) ) ) {
            result[11] += -0.038723819696895055;
          } else {
            result[11] += 0.022551080728908286;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
        result[11] += -0.03416831810488355;
      } else {
        result[11] += 0.0368762714918472;
      }
    }
  }
  if ( LIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (double)0.301285017925520815) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6280292678484594715) ) ) {
      if ( LIKELY(  (data[33].missing != -1) && (data[33].fvalue <= (double)-0.6491956528469868815) ) ) {
        result[12] += -0.021505252341986573;
      } else {
        result[12] += 0.033751735496869995;
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8215697967491829568) ) ) {
        if ( UNLIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.6198243377092070849) ) ) {
          result[12] += 0.0854593021883814;
        } else {
          result[12] += 0.04022119712525577;
        }
      } else {
        result[12] += 0.016088417064785268;
      }
    }
  } else {
    result[12] += -0.026170470876948154;
  }
  if ( UNLIKELY( !(data[84].missing != -1) || (data[84].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02376901934613134468) ) ) {
      if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.8166922260006254097) ) ) {
        result[0] += -0.01211017205818326;
      } else {
        if ( LIKELY( !(data[68].missing != -1) || (data[68].fvalue <= (double)0.1382934199195486047) ) ) {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4134826703502541556) ) ) {
            result[0] += 0.001795763504116046;
          } else {
            result[0] += 0.029436289622582337;
          }
        } else {
          result[0] += -0.0022157081309107864;
        }
      }
    } else {
      if ( LIKELY(  (data[58].missing != -1) && (data[58].fvalue <= (double)-0.4663266532852128887) ) ) {
        if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7880685817837016494) ) ) {
          result[0] += -0.020397960000300103;
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.175347363718650895) ) ) {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.3678488213209678004) ) ) {
              if ( LIKELY( !(data[52].missing != -1) || (data[52].fvalue <= (double)0.05737783864109703008) ) ) {
                result[0] += -0.031637962432029404;
              } else {
                result[0] += 0.0020751480182709206;
              }
            } else {
              result[0] += 0.013181147529719885;
            }
          } else {
            result[0] += -0.015757582684157976;
          }
        }
      } else {
        result[0] += -0.034458629385795976;
      }
    }
  } else {
    if ( LIKELY( !(data[50].missing != -1) || (data[50].fvalue <= (double)0.113078527307702334) ) ) {
      if ( UNLIKELY(  (data[22].missing != -1) && (data[22].fvalue <= (double)-0.5740772844739022718) ) ) {
        if ( UNLIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)0.8204006694052594639) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8963586048805135542) ) ) {
            result[0] += 0.03045310880913212;
          } else {
            result[0] += -0.02554460284244727;
          }
        } else {
          result[0] += -0.024600171871237333;
        }
      } else {
        if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
          result[0] += -0.03446970776969421;
        } else {
          result[0] += -0.005105565927438371;
        }
      }
    } else {
      result[0] += 0.02459654243120325;
    }
  }
  if ( UNLIKELY(  (data[61].missing != -1) && (data[61].fvalue <= (double)-0.1694510226187393442) ) ) {
    if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1772208526869041567) ) ) {
      result[1] += -0.034619646329743715;
    } else {
      if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)1.00000001800250948e-35) ) ) {
        if ( LIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6039903039694579645) ) ) {
          if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7672618710374367046) ) ) {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-1.563490236986021076) ) ) {
              result[1] += 0.021303198319270685;
            } else {
              if ( UNLIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.3914927184801726967) ) ) {
                if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.07982434462983790946) ) ) {
                  result[1] += 0.009194123307058885;
                } else {
                  result[1] += -0.03802628990969386;
                }
              } else {
                result[1] += -0.03227235615188874;
              }
            }
          } else {
            result[1] += -0.035160697564404;
          }
        } else {
          result[1] += 0.024179331191614074;
        }
      } else {
        if ( UNLIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.5272099775563079405) ) ) {
          result[1] += 0.029541003516427154;
        } else {
          result[1] += -0.03598214366476632;
        }
      }
    }
  } else {
    if ( LIKELY(  (data[58].missing != -1) && (data[58].fvalue <= (double)-0.07150931649549026325) ) ) {
      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-0.5313858905757674611) ) ) {
        if ( LIKELY(  (data[42].missing != -1) && (data[42].fvalue <= (double)-0.01069179887226926785) ) ) {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.3678488213209678004) ) ) {
            if ( UNLIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.3914927184801726967) ) ) {
              result[1] += -0.01027815447846613;
            } else {
              result[1] += 0.03561205578809584;
            }
          } else {
            if ( LIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.03804009243141264623) ) ) {
              if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7704629034599390636) ) ) {
                if ( LIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6030701101055554458) ) ) {
                  if ( LIKELY( !(data[52].missing != -1) || (data[52].fvalue <= (double)0.01546367856846388687) ) ) {
                    result[1] += 0.03287271755602729;
                  } else {
                    result[1] += -0.0013403981100192433;
                  }
                } else {
                  result[1] += -0.015466253122939819;
                }
              } else {
                result[1] += -0.032391358038801915;
              }
            } else {
              result[1] += -0.031804325911207985;
            }
          }
        } else {
          if ( LIKELY(  (data[54].missing != -1) && (data[54].fvalue <= (double)-0.03485749066799142398) ) ) {
            result[1] += 0.03387610103179824;
          } else {
            result[1] += 0.008413064303085693;
          }
        }
      } else {
        if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1845224968741556448) ) ) {
          result[1] += 0.034830060913382976;
        } else {
          if ( LIKELY( !(data[38].missing != -1) || (data[38].fvalue <= (double)1.355342907056062307) ) ) {
            if ( UNLIKELY(  (data[61].missing != -1) && (data[61].fvalue <= (double)-0.1684076919676497641) ) ) {
              result[1] += -0.003088774973679807;
            } else {
              if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (double)1.61433853283732498) ) ) {
                result[1] += -0.03460773302625716;
              } else {
                result[1] += -0.010682873052806003;
              }
            }
          } else {
            if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02377973762932657567) ) ) {
              result[1] += -0.024864622445842435;
            } else {
              result[1] += 0.033654045676898454;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)2.241896858953469351) ) ) {
        result[1] += 0.03465016259898894;
      } else {
        result[1] += 0.01642102224839963;
      }
    }
  }
  if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
    result[2] += -0.03089066707418247;
  } else {
    if ( LIKELY( !(data[55].missing != -1) || (data[55].fvalue <= (double)1.9687275667312647) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.713419879289624137) ) ) {
        result[2] += 0.017821475836470087;
      } else {
        result[2] += -0.03617984457106883;
      }
    } else {
      if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3640316309875374912) ) ) {
        result[2] += 0.06498933684508994;
      } else {
        result[2] += 0.02442405953227306;
      }
    }
  }
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1845224968741556448) ) ) {
    if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1847700102364353281) ) ) {
      result[3] += -0.035309328515820616;
    } else {
      result[3] += 0.034735188588553796;
    }
  } else {
    result[3] += -0.03496418351633022;
  }
  if ( LIKELY( !(data[45].missing != -1) || (data[45].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.2752335735604075073) ) ) {
      result[4] += -0.034454881073922965;
    } else {
      result[4] += -0.0007837522011165531;
    }
  } else {
    result[4] += 0.03354118634585082;
  }
  if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)6.015862565909510629) ) ) {
    if ( UNLIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-0.4969520972243098855) ) ) {
      result[5] += 0.02769179076705082;
    } else {
      result[5] += -0.034441618589730945;
    }
  } else {
    result[5] += 0.0774541257797073;
  }
  if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[6] += -0.023148308817104554;
  } else {
    result[6] += 0.06422753727694584;
  }
  if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8851947168287664924) ) ) {
    if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.4815484825403061886) ) ) {
      result[7] += -0.0019246248422651912;
    } else {
      result[7] += 0.02328163939501034;
    }
  } else {
    result[7] += -0.03443999437487805;
  }
  if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6189299289389768033) ) ) {
    result[8] += -0.03641716517165867;
  } else {
    if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (double)1.490178253475586745) ) ) {
      result[8] += -0.03451295299797891;
    } else {
      result[8] += 0.03735927992892667;
    }
  }
  if ( UNLIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-0.4969520972243098855) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.411986527813700709) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7369570350073810783) ) ) {
        if ( LIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5875014015255205502) ) ) {
          if ( LIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1558109468497091699) ) ) {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.351830879363718263) ) ) {
              result[9] += -0.029446293711843808;
            } else {
              result[9] += 0.04196510561385177;
            }
          } else {
            result[9] += 0.03160563860029172;
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.713419879289624137) ) ) {
            result[9] += -0.009728685776003956;
          } else {
            result[9] += 0.03799771253976444;
          }
        }
      } else {
        result[9] += -0.01772355317027232;
      }
    } else {
      result[9] += 0.035136809966885334;
    }
  } else {
    result[9] += -0.0325787847957897;
  }
  if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3728354207891853567) ) ) {
    result[10] += 0.029493774535642194;
  } else {
    result[10] += -0.0312652222263298;
  }
  if ( UNLIKELY( !(data[84].missing != -1) || (data[84].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( LIKELY(  (data[42].missing != -1) && (data[42].fvalue <= (double)-0.01064205461029017231) ) ) {
      if ( LIKELY( !(data[38].missing != -1) || (data[38].fvalue <= (double)1.258404084529293643) ) ) {
        if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.7163142958512370706) ) ) {
          result[11] += -0.02522245313465386;
        } else {
          if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3708993176377855527) ) ) {
            if ( LIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.0382312990769337821) ) ) {
              if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3719312971477298224) ) ) {
                result[11] += 0.0027513005201100548;
              } else {
                result[11] += 0.04873929570953707;
              }
            } else {
              result[11] += -0.018186614128185036;
            }
          } else {
            if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.370835389703541296) ) ) {
              result[11] += -0.04128259908707524;
            } else {
              if ( LIKELY(  (data[53].missing != -1) && (data[53].fvalue <= (double)-0.2527185796061401368) ) ) {
                result[11] += -0.0012857289943300995;
              } else {
                result[11] += 0.021706404218333943;
              }
            }
          }
        }
      } else {
        result[11] += -0.034486137047237;
      }
    } else {
      if ( LIKELY( !(data[69].missing != -1) || (data[69].fvalue <= (double)0.07927461561698297132) ) ) {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-0.5313858905757674611) ) ) {
          result[11] += -0.014844332526688186;
        } else {
          if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.2936476673436070883) ) ) {
            if ( LIKELY(  (data[20].missing != -1) && (data[20].fvalue <= (double)-0.4852831446275442384) ) ) {
              result[11] += 0.03474330096860745;
            } else {
              result[11] += 0.003569312265190108;
            }
          } else {
            result[11] += 0.00258129579305095;
          }
        }
      } else {
        if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.1185534018316622001) ) ) {
          result[11] += -0.032629511655821446;
        } else {
          result[11] += 0.01721524484948572;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[82].missing != -1) || (data[82].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.6196488487353301045) ) ) {
        if ( LIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5970539650723311054) ) ) {
          result[11] += -0.0055685254969470655;
        } else {
          result[11] += 0.021403004293819722;
        }
      } else {
        result[11] += -0.023694607426730113;
      }
    } else {
      if ( LIKELY( !(data[55].missing != -1) || (data[55].fvalue <= (double)1.00000001800250948e-35) ) ) {
        result[11] += -0.03375927599028573;
      } else {
        result[11] += 0.025705866210016734;
      }
    }
  }
  if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.1300100187573274835) ) ) {
    if ( UNLIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.4241077355256945292) ) ) {
      if ( LIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.2709289357124474162) ) ) {
        if ( LIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)1.00000001800250948e-35) ) ) {
          result[12] += 0.021307341681673305;
        } else {
          result[12] += 0.06151144448038446;
        }
      } else {
        result[12] += -9.844283929098566e-05;
      }
    } else {
      result[12] += -0.00748750773414671;
    }
  } else {
    result[12] += -0.029496226098836682;
  }
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1772208526869041567) ) ) {
    if ( UNLIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.6632283173061124248) ) ) {
      result[0] += 0.023537627146339196;
    } else {
      result[0] += -0.03662299497092649;
    }
  } else {
    if ( LIKELY(  (data[62].missing != -1) && (data[62].fvalue <= (double)-0.002452105269676800852) ) ) {
      if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02370849257168504073) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.135342507482403285) ) ) {
          if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.136326896897185579) ) ) {
            if ( LIKELY(  (data[45].missing != -1) && (data[45].fvalue <= (double)-0.09175981919967389489) ) ) {
              if ( LIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5699021105360092543) ) ) {
                result[0] += -0.029929852141575893;
              } else {
                result[0] += 0.0026567868830409905;
              }
            } else {
              result[0] += 0.027382398443468813;
            }
          } else {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4134826703502541556) ) ) {
              result[0] += 0.0010838314577284046;
            } else {
              result[0] += 0.02898976153191399;
            }
          }
        } else {
          result[0] += -0.051268430705671476;
        }
      } else {
        if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.3083892198998683942) ) ) {
          if ( LIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.3589765718219689039) ) ) {
            if ( LIKELY(  (data[54].missing != -1) && (data[54].fvalue <= (double)-0.03828963855561979407) ) ) {
              if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.0164200224566713425) ) ) {
                if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.8463879634762788706) ) ) {
                  if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.2232840142319784116) ) ) {
                    result[0] += -0.032260519255088424;
                  } else {
                    if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.8554970799520443814) ) ) {
                      if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.3262626843891289208) ) ) {
                        result[0] += -0.02707770840942665;
                      } else {
                        if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3708993176377855527) ) ) {
                          result[0] += 0.037013188127557856;
                        } else {
                          result[0] += 0.0037782437777495207;
                        }
                      }
                    } else {
                      result[0] += -0.034045338118601186;
                    }
                  }
                } else {
                  result[0] += 0.03429662487032765;
                }
              } else {
                result[0] += -0.032216558841053095;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5454331534753760202) ) ) {
                if ( LIKELY(  (data[71].missing != -1) && (data[71].fvalue <= (double)-0.4264011187105109513) ) ) {
                  result[0] += 0.022620842126871096;
                } else {
                  result[0] += 0.06028812781491856;
                }
              } else {
                result[0] += 0.009067587522465104;
              }
            }
          } else {
            if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)2.795914393643698315) ) ) {
              result[0] += -0.024735664761783252;
            } else {
              result[0] += 0.011908652839830423;
            }
          }
        } else {
          result[0] += -0.02602527544126734;
        }
      }
    } else {
      result[0] += -0.032235447532065524;
    }
  }
  if ( UNLIKELY(  (data[35].missing != -1) && (data[35].fvalue <= (double)-0.5574519420018757554) ) ) {
    if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1772208526869041567) ) ) {
      result[1] += -0.03458967872394157;
    } else {
      if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)10.1594652957461502) ) ) {
        if ( LIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)0.2372404051518106349) ) ) {
          if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.6569974455578183603) ) ) {
            if ( UNLIKELY(  (data[3].missing != -1) && (data[3].fvalue <= (double)-0.5866807462802454687) ) ) {
              result[1] += 0.02414950224382363;
            } else {
              if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.08007185799211762045) ) ) {
                result[1] += -0.016086727477264175;
              } else {
                result[1] += -0.03626363206399358;
              }
            }
          } else {
            if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.1305725821159978428) ) ) {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4134826703502541556) ) ) {
                result[1] += 0.036038204545649856;
              } else {
                result[1] += -0.017042511832857498;
              }
            } else {
              result[1] += -0.04144918430116658;
            }
          }
        } else {
          if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
            result[1] += 0.0354140482965743;
          } else {
            result[1] += -0.03518709951131819;
          }
        }
      } else {
        result[1] += 0.03794309601081542;
      }
    }
  } else {
    if ( LIKELY( !(data[38].missing != -1) || (data[38].fvalue <= (double)1.355342907056062307) ) ) {
      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-0.5313858905757674611) ) ) {
        if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.3083892198998683942) ) ) {
          if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.619894420122479084) ) ) {
            result[1] += -0.028720797289002408;
          } else {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.3678488213209678004) ) ) {
              result[1] += 0.03074972161657453;
            } else {
              if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.7163142958512370706) ) ) {
                result[1] += 0.032772492189460344;
              } else {
                if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3708993176377855527) ) ) {
                  result[1] += -0.030655455449265786;
                } else {
                  if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3707988594554016415) ) ) {
                    result[1] += 0.03192076583090765;
                  } else {
                    if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.8643446201027721321) ) ) {
                      if ( LIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.749034681232501498) ) ) {
                        if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.4143637838009673335) ) ) {
                          if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6198381441013823823) ) ) {
                            result[1] += -0.032461395811343045;
                          } else {
                            result[1] += 0.01929847201521956;
                          }
                        } else {
                          result[1] += 0.045683432410065936;
                        }
                      } else {
                        if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)0.8204006694052594639) ) ) {
                          result[1] += 0.002504549119235241;
                        } else {
                          result[1] += -0.02398542735983373;
                        }
                      }
                    } else {
                      result[1] += -0.03518157953942973;
                    }
                  }
                }
              }
            }
          }
        } else {
          result[1] += 0.034352478386328586;
        }
      } else {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-2.256928839343927518) ) ) {
          result[1] += 0.03480413722566841;
        } else {
          if ( UNLIKELY(  (data[35].missing != -1) && (data[35].fvalue <= (double)-0.3881343051148680723) ) ) {
            result[1] += 0.0010771367134270004;
          } else {
            result[1] += -0.03428380020146939;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)1.255335709851286952) ) ) {
        result[1] += 0.03464230950675319;
      } else {
        if ( UNLIKELY(  (data[47].missing != -1) && (data[47].fvalue <= (double)-0.01614666338323774916) ) ) {
          result[1] += -0.008748988651432395;
        } else {
          result[1] += 0.02577629272960317;
        }
      }
    }
  }
  if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
    result[2] += -0.030668348032129096;
  } else {
    if ( LIKELY( !(data[55].missing != -1) || (data[55].fvalue <= (double)1.9687275667312647) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.713419879289624137) ) ) {
        result[2] += 0.01707438940307305;
      } else {
        result[2] += -0.03606541139692134;
      }
    } else {
      if ( LIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.6198739046249822637) ) ) {
        result[2] += 0.014078089917272723;
      } else {
        result[2] += 0.06753143225730503;
      }
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)0.9946455059545064037) ) ) {
    result[3] += -0.03485388820298418;
  } else {
    if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)1.043568031522789319) ) ) {
      result[3] += 0.034722574667955905;
    } else {
      result[3] += -0.039202743514495104;
    }
  }
  if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.209321689314693193) ) ) {
    if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (double)1.490178253475586745) ) ) {
      result[4] += -0.026777731397990345;
    } else {
      result[4] += 0.0366764452740513;
    }
  } else {
    result[4] += -0.033632898298508906;
  }
  if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.8758359294256646832) ) ) {
    result[5] += -0.034453546804438503;
  } else {
    if ( UNLIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6038666070290387156) ) ) {
      result[5] += 0.0753457617579734;
    } else {
      result[5] += -0.01083739997568493;
    }
  }
  if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[6] += -0.02258609094907503;
  } else {
    result[6] += 0.059954892739086184;
  }
  if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8851947168287664924) ) ) {
    result[7] += 0.018461953812842435;
  } else {
    result[7] += -0.03443952567093889;
  }
  if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6189299289389768033) ) ) {
    result[8] += -0.03636943165141555;
  } else {
    if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (double)1.490178253475586745) ) ) {
      result[8] += -0.034514548720145206;
    } else {
      result[8] += 0.03749583527182721;
    }
  }
  if ( UNLIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-0.4969520972243098855) ) ) {
    if ( UNLIKELY( !(data[83].missing != -1) || (data[83].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7021266540248007892) ) ) {
        result[9] += -0.03499583309249506;
      } else {
        result[9] += 0.012064351443584852;
      }
    } else {
      if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.038896224531635992) ) ) {
        result[9] += 0.041051517494873825;
      } else {
        if ( UNLIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.3099551758663680601) ) ) {
          result[9] += -0.02471549278435629;
        } else {
          if ( LIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6036631336413064153) ) ) {
            if ( LIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6039999051450601897) ) ) {
              result[9] += 0.017979537611252667;
            } else {
              result[9] += 0.05991325524217804;
            }
          } else {
            result[9] += -0.025938468261792944;
          }
        }
      }
    }
  } else {
    result[9] += -0.03245180321269544;
  }
  if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[10] += -0.03128977503667619;
  } else {
    result[10] += 0.03501200635968587;
  }
  if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02366057554279654349) ) ) {
    if ( UNLIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.619840163027092772) ) ) {
      if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (double)1.00000001800250948e-35) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9191755293951566763) ) ) {
          if ( LIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5875014015255205502) ) ) {
            result[11] += 0.002262768017287225;
          } else {
            result[11] += -0.02337588084647237;
          }
        } else {
          if ( LIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6177908756732227724) ) ) {
            result[11] += -0.0005732496321312392;
          } else {
            result[11] += 0.03537983582311559;
          }
        }
      } else {
        result[11] += -0.032149860885696255;
      }
    } else {
      result[11] += -0.03321746866058606;
    }
  } else {
    if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.3700968684848933155) ) ) {
      if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.3588777014346508087) ) ) {
        if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (double)1.437164061230275403) ) ) {
          if ( UNLIKELY(  (data[3].missing != -1) && (data[3].fvalue <= (double)-0.5717089510150197285) ) ) {
            result[11] += 0.010235178828131328;
          } else {
            result[11] += 0.034592773773381665;
          }
        } else {
          result[11] += -0.034589996930588084;
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5865439505491081285) ) ) {
          if ( UNLIKELY(  (data[33].missing != -1) && (data[33].fvalue <= (double)-0.6701115397049043354) ) ) {
            result[11] += 0.00857973893444921;
          } else {
            result[11] += -0.028182533341489246;
          }
        } else {
          result[11] += 0.01040453641587575;
        }
      }
    } else {
      if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)2.258965045567843166) ) ) {
        result[11] += -0.028755759300582773;
      } else {
        result[11] += 0.014701404939409288;
      }
    }
  }
  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.32011123242420747) ) ) {
    if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (double)0.6108199825892823842) ) ) {
      if ( UNLIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.4241077355256945292) ) ) {
        if ( LIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (double)0.2762908174448318044) ) ) {
          result[12] += 0.039696096586798055;
        } else {
          result[12] += -0.00888874120662825;
        }
      } else {
        result[12] += -0.028542800859559944;
      }
    } else {
      result[12] += -0.0346981137917379;
    }
  } else {
    result[12] += 0.04715822948477071;
  }
  if ( UNLIKELY( !(data[84].missing != -1) || (data[84].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02376901934613134468) ) ) {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4134826703502541556) ) ) {
        result[0] += 0.0017231860976129768;
      } else {
        if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.136326896897185579) ) ) {
          result[0] += -0.014951181100320225;
        } else {
          if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1560584602119888531) ) ) {
            if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.651224445721728773) ) ) {
              if ( UNLIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.4548443414119415773) ) ) {
                result[0] += -0.0018591812237781832;
              } else {
                result[0] += 0.034379408246900646;
              }
            } else {
              result[0] += -0.022267625123585353;
            }
          } else {
            result[0] += 0.03385586484080743;
          }
        }
      }
    } else {
      if ( LIKELY(  (data[58].missing != -1) && (data[58].fvalue <= (double)-0.4663266532852128887) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.25526421801615129) ) ) {
          if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7896690979949527733) ) ) {
            result[0] += -0.02112436729789498;
          } else {
            if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02321671253988670178) ) ) {
              result[0] += 0.02091968880606086;
            } else {
              result[0] += 0.005036806469169605;
            }
          }
        } else {
          result[0] += -0.0392799897520056;
        }
      } else {
        result[0] += -0.034401014742522315;
      }
    }
  } else {
    if ( LIKELY( !(data[50].missing != -1) || (data[50].fvalue <= (double)0.113078527307702334) ) ) {
      if ( UNLIKELY(  (data[22].missing != -1) && (data[22].fvalue <= (double)-0.5740772844739022718) ) ) {
        if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)1.919454079368898114) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8963586048805135542) ) ) {
            if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.7655847180658988949) ) ) {
              result[0] += 0.012775889917208193;
            } else {
              result[0] += 0.04887149686676937;
            }
          } else {
            result[0] += -0.026033806239656936;
          }
        } else {
          result[0] += -0.03480357797637342;
        }
      } else {
        if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
          result[0] += -0.034466673586337634;
        } else {
          result[0] += -0.004702692367945901;
        }
      }
    } else {
      result[0] += 0.023941273401340186;
    }
  }
  if ( LIKELY(  (data[59].missing != -1) && (data[59].fvalue <= (double)-0.3479392415564711016) ) ) {
    if ( UNLIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5968190743969560286) ) ) {
      if ( LIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.9277945553648275778) ) ) {
        if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.146880090638758759) ) ) {
          if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.08007185799211762045) ) ) {
            if ( LIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.08328953170175386334) ) ) {
              if ( UNLIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.6198184648679473385) ) ) {
                result[1] += -0.0003077799756617759;
              } else {
                result[1] += -0.0431852274843943;
              }
            } else {
              result[1] += 0.008711804617692763;
            }
          } else {
            result[1] += -0.03713144557173897;
          }
        } else {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4134826703502541556) ) ) {
            result[1] += 0.03704081767795645;
          } else {
            result[1] += -0.035140585496225424;
          }
        }
      } else {
        if ( UNLIKELY(  (data[33].missing != -1) && (data[33].fvalue <= (double)-0.6701115397049043354) ) ) {
          result[1] += 0.0335393670170009;
        } else {
          if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3708993176377855527) ) ) {
            result[1] += -0.044935108294636594;
          } else {
            if ( LIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.749034681232501498) ) ) {
              if ( LIKELY(  (data[53].missing != -1) && (data[53].fvalue <= (double)-0.265032629752936788) ) ) {
                result[1] += 0.027408641201645146;
              } else {
                result[1] += 0.006235868765157734;
              }
            } else {
              if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.3739466545699799416) ) ) {
                result[1] += -0.04597528051275223;
              } else {
                if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)5.958477592097621844) ) ) {
                  result[1] += 0.032750293281514575;
                } else {
                  result[1] += -0.012831183381030568;
                }
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)3.946304548574234961) ) ) {
        if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.3083892198998683942) ) ) {
          if ( LIKELY( !(data[52].missing != -1) || (data[52].fvalue <= (double)1.00000001800250948e-35) ) ) {
            result[1] += -0.03481822197095233;
          } else {
            result[1] += -0.009465346431435708;
          }
        } else {
          result[1] += 0.010994446748096166;
        }
      } else {
        result[1] += 0.028600049430883276;
      }
    }
  } else {
    if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
      if ( UNLIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.603941323245218542) ) ) {
        result[1] += 0.0030876120764948725;
      } else {
        result[1] += 0.03428273330147689;
      }
    } else {
      result[1] += -0.03595113591698859;
    }
  }
  if ( LIKELY( !(data[55].missing != -1) || (data[55].fvalue <= (double)1.9687275667312647) ) ) {
    if ( LIKELY( !(data[87].missing != -1) || (data[87].fvalue <= (double)1.00000001800250948e-35) ) ) {
      result[2] += -0.031057517507906814;
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.713419879289624137) ) ) {
        result[2] += 0.01936056996347883;
      } else {
        result[2] += -0.036142315292093614;
      }
    }
  } else {
    if ( UNLIKELY(  (data[6].missing != -1) && (data[6].fvalue <= (double)-0.3683268691047871801) ) ) {
      result[2] += 0.06903302228966503;
    } else {
      result[2] += 0.016575225877277507;
    }
  }
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1845224968741556448) ) ) {
    if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1847700102364353281) ) ) {
      result[3] += -0.035312338319499585;
    } else {
      result[3] += 0.034694313036618074;
    }
  } else {
    result[3] += -0.03492708206181517;
  }
  if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.209321689314693193) ) ) {
    if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (double)1.490178253475586745) ) ) {
      result[4] += -0.026458195241186228;
    } else {
      result[4] += 0.03670346240423084;
    }
  } else {
    result[4] += -0.03357605118150017;
  }
  if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)6.015862565909510629) ) ) {
    if ( UNLIKELY(  (data[12].missing != -1) && (data[12].fvalue <= (double)-1.128486328597585908) ) ) {
      result[5] += 0.028762463406505127;
    } else {
      result[5] += -0.03444053959712577;
    }
  } else {
    result[5] += 0.06748412370129425;
  }
  if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[6] += -0.02191228811492828;
  } else {
    result[6] += 0.05618823308726696;
  }
  if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8851947168287664924) ) ) {
    result[7] += 0.017947322285836384;
  } else {
    result[7] += -0.034439084344741355;
  }
  if ( LIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.6192635509156506624) ) ) {
    result[8] += -0.0363519107711286;
  } else {
    if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
      result[8] += -0.0344351557541028;
    } else {
      result[8] += 0.03635854332282179;
    }
  }
  if ( UNLIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-0.4969520972243098855) ) ) {
    if ( UNLIKELY( !(data[83].missing != -1) || (data[83].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5699021105360092543) ) ) {
        result[9] += -0.03774646499391277;
      } else {
        result[9] += 0.00935645032213794;
      }
    } else {
      if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.038896224531635992) ) ) {
        result[9] += 0.04116356432935308;
      } else {
        if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.9285972811752244427) ) ) {
          result[9] += -0.02388281092882466;
        } else {
          if ( LIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6036631336413064153) ) ) {
            if ( LIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6039999051450601897) ) ) {
              result[9] += 0.01743690909440585;
            } else {
              result[9] += 0.0536046679909541;
            }
          } else {
            result[9] += -0.025593710198968597;
          }
        }
      }
    }
  } else {
    result[9] += -0.03232151047299652;
  }
  if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8851947168287664924) ) ) {
    result[10] += 0.029115727276129644;
  } else {
    result[10] += -0.030844785881554322;
  }
  if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.2270910346818499626) ) ) {
    if ( LIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6280911155401268653) ) ) {
      if ( LIKELY(  (data[20].missing != -1) && (data[20].fvalue <= (double)-0.5448433239136843964) ) ) {
        if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.146880090638758759) ) ) {
          result[11] += 0.004910368394176362;
        } else {
          result[11] += -0.0331044254851353;
        }
      } else {
        result[11] += -0.032967585431503875;
      }
    } else {
      if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)6.015862565909510629) ) ) {
        if ( LIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6036631336413064153) ) ) {
          if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.9564359567862011913) ) ) {
            result[11] += 0.03517222567973269;
          } else {
            if ( LIKELY(  (data[48].missing != -1) && (data[48].fvalue <= (double)-0.2273956383300503592) ) ) {
              if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.6999164834509911115) ) ) {
                result[11] += 0.016929658699417968;
              } else {
                result[11] += -0.019502156916053216;
              }
            } else {
              result[11] += 0.03134339551175368;
            }
          }
        } else {
          result[11] += -0.015333215999684851;
        }
      } else {
        result[11] += -0.012921120005048034;
      }
    }
  } else {
    if ( LIKELY( !(data[83].missing != -1) || (data[83].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY( !(data[55].missing != -1) || (data[55].fvalue <= (double)1.00000001800250948e-35) ) ) {
        result[11] += -0.033881819695895626;
      } else {
        result[11] += 0.01883519958848139;
      }
    } else {
      result[11] += 0.00792230650860162;
    }
  }
  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.32011123242420747) ) ) {
    if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (double)0.6108199825892823842) ) ) {
      if ( UNLIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.4241077355256945292) ) ) {
        if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.2962972548006537754) ) ) {
          if ( LIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)0.2078669411157570701) ) ) {
            result[12] += 0.021652714379371416;
          } else {
            result[12] += 0.06181736450075302;
          }
        } else {
          result[12] += -0.010225579048508624;
        }
      } else {
        result[12] += -0.028246572495354557;
      }
    } else {
      result[12] += -0.03469913550321752;
    }
  } else {
    result[12] += 0.04577024145453009;
  }
  if ( UNLIKELY( !(data[84].missing != -1) || (data[84].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( LIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.3434416239548997996) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.25526421801615129) ) ) {
        if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3675841976191152605) ) ) {
          if ( UNLIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.9024197210012386838) ) ) {
            if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4134826703502541556) ) ) {
              if ( LIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6189680459437261195) ) ) {
                if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3720043576440090205) ) ) {
                  result[0] += -0.0018155956415005327;
                } else {
                  result[0] += -0.037655827210812634;
                }
              } else {
                result[0] += 0.032689833985012164;
              }
            } else {
              if ( LIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6284344568935479325) ) ) {
                if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7720634196711901875) ) ) {
                  if ( UNLIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7880685817837016494) ) ) {
                    result[0] += -0.0006794141964715601;
                  } else {
                    result[0] += 0.03258285440281246;
                  }
                } else {
                  result[0] += -0.019737104610837664;
                }
              } else {
                result[0] += 0.03371643665609613;
              }
            }
          } else {
            if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7576587737699298497) ) ) {
              if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.7608941298791197516) ) ) {
                result[0] += -0.017472745192704982;
              } else {
                if ( UNLIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.8027583770133431829) ) ) {
                  result[0] += 0.03921915778213955;
                } else {
                  if ( UNLIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6038933927668245216) ) ) {
                    result[0] += 0.026160495981075702;
                  } else {
                    if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7704629034599390636) ) ) {
                      if ( UNLIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.6892214870717320307) ) ) {
                        result[0] += -0.04099158809547372;
                      } else {
                        result[0] += -0.0040577266358382555;
                      }
                    } else {
                      result[0] += 0.029597390621637028;
                    }
                  }
                }
              }
            } else {
              if ( UNLIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.6197393480935875498) ) ) {
                result[0] += -0.019398928400658103;
              } else {
                result[0] += -0.061342294179857836;
              }
            }
          }
        } else {
          result[0] += 0.02568303145966534;
        }
      } else {
        result[0] += -0.05651745239217339;
      }
    } else {
      if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.1763936403664350949) ) ) {
        if ( LIKELY(  (data[58].missing != -1) && (data[58].fvalue <= (double)-0.4524246343841663576) ) ) {
          if ( UNLIKELY(  (data[54].missing != -1) && (data[54].fvalue <= (double)-0.03120461920157937066) ) ) {
            result[0] += 0.025108506196005825;
          } else {
            result[0] += -0.02060484907406292;
          }
        } else {
          result[0] += -0.04771718781496812;
        }
      } else {
        if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)1.423044564059754213) ) ) {
          if ( LIKELY( !(data[51].missing != -1) || (data[51].fvalue <= (double)0.01822271374647590689) ) ) {
            result[0] += 0.0037866188202774365;
          } else {
            result[0] += 0.02781735666318908;
          }
        } else {
          result[0] += -0.03493166326266867;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[82].missing != -1) || (data[82].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( UNLIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.4241077355256945292) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5296168762549983144) ) ) {
          result[0] += 0.06795794966872498;
        } else {
          result[0] += 0.016117125695503175;
        }
      } else {
        result[0] += -0.011865698049864737;
      }
    } else {
      if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (double)0.6108199825892823842) ) ) {
        result[0] += -0.03448991188276124;
      } else {
        if ( LIKELY(  (data[47].missing != -1) && (data[47].fvalue <= (double)-0.01257821574043074299) ) ) {
          if ( UNLIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5508362119640387577) ) ) {
            result[0] += 0.006332569664542532;
          } else {
            if ( UNLIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.6198718202700538304) ) ) {
              result[0] += 0.0017281088378780377;
            } else {
              result[0] += -0.040008963447478355;
            }
          }
        } else {
          result[0] += 0.040975836298014386;
        }
      }
    }
  }
  if ( LIKELY( !(data[38].missing != -1) || (data[38].fvalue <= (double)1.355342907056062307) ) ) {
    if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.0237904559098773595) ) ) {
      if ( UNLIKELY(  (data[29].missing != -1) && (data[29].fvalue <= (double)-0.5968190743969560286) ) ) {
        if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.1794951076842806192) ) ) {
          if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.08007185799211762045) ) ) {
            result[1] += -0.003216417542728206;
          } else {
            result[1] += -0.03724507437342982;
          }
        } else {
          result[1] += 0.010985792976406625;
        }
      } else {
        result[1] += -0.034592562598039854;
      }
    } else {
      if ( LIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.4540401115217268524) ) ) {
        if ( LIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5699021105360092543) ) ) {
          if ( LIKELY(  (data[4].missing != -1) && (data[4].fvalue <= (double)-0.5384757477610738752) ) ) {
            if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3690088772965603447) ) ) {
              if ( UNLIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.4404152440484555009) ) ) {
                if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.8464874234943683406) ) ) {
                  result[1] += -0.007011858098934718;
                } else {
                  result[1] += -0.04822152848184379;
                }
              } else {
                if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3692645890335377046) ) ) {
                  if ( UNLIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6038432399713662413) ) ) {
                    if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.8714145528018332199) ) ) {
                      result[1] += -0.012680281568128539;
                    } else {
                      result[1] += 0.008650824974887138;
                    }
                  } else {
                    if ( UNLIKELY( !(data[52].missing != -1) || (data[52].fvalue <= (double)1.00000001800250948e-35) ) ) {
                      result[1] += -0.004996402589704405;
                    } else {
                      result[1] += 0.029157869981623733;
                    }
                  }
                } else {
                  result[1] += 0.04462218954809672;
                }
              }
            } else {
              result[1] += -0.024062418180625496;
            }
          } else {
            result[1] += -0.03728029364988788;
          }
        } else {
          if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
            if ( LIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.005581979393026918236) ) ) {
              result[1] += 0.033183809264211946;
            } else {
              result[1] += -0.029996905596900946;
            }
          } else {
            result[1] += -0.04163071222583418;
          }
        }
      } else {
        result[1] += -0.03493385792423584;
      }
    }
  } else {
    result[1] += 0.03378008866790621;
  }
  if ( LIKELY( !(data[55].missing != -1) || (data[55].fvalue <= (double)1.9687275667312647) ) ) {
    if ( UNLIKELY(  (data[10].missing != -1) && (data[10].fvalue <= (double)-0.4504562131888413812) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.713419879289624137) ) ) {
        result[2] += 0.017798874553930488;
      } else {
        result[2] += -0.035911295678966206;
      }
    } else {
      result[2] += -0.03455116723627819;
    }
  } else {
    if ( UNLIKELY(  (data[6].missing != -1) && (data[6].fvalue <= (double)-0.3683268691047871801) ) ) {
      result[2] += 0.06931713749820627;
    } else {
      result[2] += 0.015958953077204092;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)0.9946455059545064037) ) ) {
    result[3] += -0.034822113044015515;
  } else {
    if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)1.043568031522789319) ) ) {
      result[3] += 0.03468496387783649;
    } else {
      result[3] += -0.03886563942817224;
    }
  }
  if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.209321689314693193) ) ) {
    if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (double)0.6108199825892823842) ) ) {
      result[4] += -0.034537337696530605;
    } else {
      result[4] += 0.037250507026553095;
    }
  } else {
    result[4] += -0.03351628839994381;
  }
  if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)6.015862565909510629) ) ) {
    if ( UNLIKELY(  (data[12].missing != -1) && (data[12].fvalue <= (double)-1.128486328597585908) ) ) {
      result[5] += 0.028185875409284526;
    } else {
      result[5] += -0.03444009448849348;
    }
  } else {
    result[5] += 0.06285476871146162;
  }
  if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[6] += -0.02140569117112542;
  } else {
    result[6] += 0.05349183847053677;
  }
  if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8851947168287664924) ) ) {
    if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.4815484825403061886) ) ) {
      result[7] += -0.0037817172937158823;
    } else {
      result[7] += 0.02222044987713986;
    }
  } else {
    result[7] += -0.03443867140900175;
  }
  if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6189299289389768033) ) ) {
    result[8] += -0.036342826121840754;
  } else {
    if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (double)1.525439072483760983) ) ) {
      result[8] += -0.034434805563653685;
    } else {
      result[8] += 0.036163475284453635;
    }
  }
  if ( UNLIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-0.4969520972243098855) ) ) {
    if ( UNLIKELY( !(data[83].missing != -1) || (data[83].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
        result[9] += -0.03045198498070075;
      } else {
        result[9] += 0.0104825198152255;
      }
    } else {
      if ( LIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.8594402036712854853) ) ) {
        if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.038896224531635992) ) ) {
          result[9] += 0.04128937031901624;
        } else {
          if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.5549832342097297255) ) ) {
            if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8109270705380969835) ) ) {
              result[9] += 0.015437071526910269;
            } else {
              result[9] += -0.020673727558556454;
            }
          } else {
            if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.7139882480113284302) ) ) {
              result[9] += 0.10519431321768462;
            } else {
              result[9] += 0.0013461533656683252;
            }
          }
        }
      } else {
        result[9] += -0.026546206735545686;
      }
    }
  } else {
    result[9] += -0.03217116080332633;
  }
  if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8851947168287664924) ) ) {
    result[10] += 0.028728981657944203;
  } else {
    result[10] += -0.030613079837005817;
  }
  if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02366057554279654349) ) ) {
    if ( UNLIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.619840163027092772) ) ) {
      if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1602661873707439677) ) ) {
        if ( UNLIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5875014015255205502) ) ) {
          result[11] += 0.009543450955312331;
        } else {
          result[11] += -0.03457019464404394;
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9009104660841923407) ) ) {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.3678488213209678004) ) ) {
            result[11] += 0.007548310798502089;
          } else {
            result[11] += -0.014783919382393656;
          }
        } else {
          result[11] += 0.026549222611546526;
        }
      }
    } else {
      result[11] += -0.03305515150332949;
    }
  } else {
    if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.9564359567862011913) ) ) {
      if ( UNLIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6306144754393157026) ) ) {
        if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.009229353506927643128) ) ) {
          result[11] += -0.0348017137602213;
        } else {
          if ( LIKELY(  (data[53].missing != -1) && (data[53].fvalue <= (double)-0.255594466074791471) ) ) {
            result[11] += -0.004800136393012781;
          } else {
            result[11] += 0.042800125346764806;
          }
        }
      } else {
        result[11] += 0.035080821802996175;
      }
    } else {
      if ( LIKELY( !(data[38].missing != -1) || (data[38].fvalue <= (double)1.334235260215556051) ) ) {
        if ( LIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.5163702995551716635) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5865439505491081285) ) ) {
            if ( UNLIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6285816031773608925) ) ) {
              result[11] += -0.03293661462131674;
            } else {
              if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.650710626636601841) ) ) {
                result[11] += 0.019448375161386006;
              } else {
                if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.1185534018316622001) ) ) {
                  result[11] += -0.020126631999562616;
                } else {
                  result[11] += 0.004496757673494777;
                }
              }
            }
          } else {
            if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.3488614882332986) ) ) {
              result[11] += 0.0022871993656122082;
            } else {
              result[11] += 0.018791372538141168;
            }
          }
        } else {
          result[11] += 0.0396592313529235;
        }
      } else {
        result[11] += -0.03448267871255507;
      }
    }
  }
  if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.2152223708171482341) ) ) {
    if ( LIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( UNLIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.5428053622233520725) ) ) {
        result[12] += 0.020166755133199595;
      } else {
        result[12] += -0.028372584282509484;
      }
    } else {
      result[12] += 0.04309357094235103;
    }
  } else {
    result[12] += -0.026227161586935357;
  }
  if ( UNLIKELY( !(data[84].missing != -1) || (data[84].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.25526421801615129) ) ) {
      if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02376901934613134468) ) ) {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4134826703502541556) ) ) {
          result[0] += 0.0016230612747507322;
        } else {
          if ( LIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.3098210580521135182) ) ) {
            result[0] += 0.02790968828641616;
          } else {
            result[0] += 0.006158953390459924;
          }
        }
      } else {
        if ( LIKELY(  (data[58].missing != -1) && (data[58].fvalue <= (double)-0.4663266532852128887) ) ) {
          if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7880685817837016494) ) ) {
            result[0] += -0.018831421692626596;
          } else {
            if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.7544702801259169922) ) ) {
              result[0] += 0.011091368287699426;
            } else {
              result[0] += -0.0018743025067167194;
            }
          }
        } else {
          result[0] += -0.03431617593761237;
        }
      }
    } else {
      result[0] += -0.05363171455020478;
    }
  } else {
    if ( UNLIKELY( !(data[82].missing != -1) || (data[82].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( UNLIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.4241077355256945292) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5765759506980140392) ) ) {
          result[0] += 0.06714877598192599;
        } else {
          result[0] += 0.015149977745927256;
        }
      } else {
        result[0] += -0.011236146708381155;
      }
    } else {
      if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (double)0.6108199825892823842) ) ) {
        result[0] += -0.03448837540413414;
      } else {
        if ( LIKELY(  (data[47].missing != -1) && (data[47].fvalue <= (double)-0.01257821574043074299) ) ) {
          if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.08328953170175386334) ) ) {
            result[0] += -0.05729548735706998;
          } else {
            if ( UNLIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6040023038229446195) ) ) {
              result[0] += 0.015817269769641044;
            } else {
              result[0] += -0.03476557796310891;
            }
          }
        } else {
          result[0] += 0.03981836238968512;
        }
      }
    }
  }
  if ( LIKELY( !(data[38].missing != -1) || (data[38].fvalue <= (double)1.355342907056062307) ) ) {
    if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.4797701247966768001) ) ) {
        if ( LIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6037740769996097212) ) ) {
          if ( LIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6280911155401268653) ) ) {
            if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.6438362138560046466) ) ) {
              if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.08007185799211762045) ) ) {
                if ( UNLIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5875014015255205502) ) ) {
                  result[1] += 0.0011697945778562635;
                } else {
                  result[1] += -0.03412430042873097;
                }
              } else {
                result[1] += -0.0364836035425978;
              }
            } else {
              if ( UNLIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.2121101247298024794) ) ) {
                result[1] += -0.009373200595970334;
              } else {
                if ( UNLIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.1958026162070415632) ) ) {
                  result[1] += 0.039249669593252205;
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.102546986980341481) ) ) {
                    result[1] += -0.019688289445106616;
                  } else {
                    result[1] += 0.027831761751577724;
                  }
                }
              }
            }
          } else {
            result[1] += -0.0348796339801087;
          }
        } else {
          if ( UNLIKELY(  (data[2].missing != -1) && (data[2].fvalue <= (double)-0.03884564702762572513) ) ) {
            if ( UNLIKELY(  (data[61].missing != -1) && (data[61].fvalue <= (double)-0.1673596367082613723) ) ) {
              if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)3.9696737176793504) ) ) {
                if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)0.9873454911718881899) ) ) {
                  result[1] += -0.035495035357629386;
                } else {
                  result[1] += 0.018570655020592294;
                }
              } else {
                result[1] += 0.03299107847389177;
              }
            } else {
              result[1] += -0.04195250202586338;
            }
          } else {
            if ( LIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.5430802424648090154) ) ) {
              if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6194724696117658302) ) ) {
                result[1] += 0.013686187704521596;
              } else {
                result[1] += 0.03351565831323062;
              }
            } else {
              result[1] += -0.027559976433674183;
            }
          }
        }
      } else {
        if ( UNLIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.6198243377092070849) ) ) {
          result[1] += 9.822385442099141e-05;
        } else {
          result[1] += 0.03441841482512885;
        }
      }
    } else {
      if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.3083892198998683942) ) ) {
        result[1] += -0.03468795749045962;
      } else {
        if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.2585244533665149169) ) ) {
          result[1] += 0.0347617311979423;
        } else {
          if ( UNLIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (double)2.986558014660257054) ) ) {
            result[1] += -0.04713945196256832;
          } else {
            result[1] += -0.000977004059705863;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY(  (data[47].missing != -1) && (data[47].fvalue <= (double)-0.01613787243640939575) ) ) {
      result[1] += 0.009417315743165318;
    } else {
      result[1] += 0.03423342735726644;
    }
  }
  if ( LIKELY( !(data[55].missing != -1) || (data[55].fvalue <= (double)1.9687275667312647) ) ) {
    if ( UNLIKELY(  (data[10].missing != -1) && (data[10].fvalue <= (double)-0.4504562131888413812) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.713419879289624137) ) ) {
        result[2] += 0.01731755303820029;
      } else {
        result[2] += -0.03585464953496766;
      }
    } else {
      result[2] += -0.03454680947623644;
    }
  } else {
    if ( LIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.6198739046249822637) ) ) {
      result[2] += 0.009867763997014863;
    } else {
      result[2] += 0.06881732055298123;
    }
  }
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1845224968741556448) ) ) {
    if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.1913249152360226579) ) ) {
      result[3] += -0.035243967106869716;
    } else {
      result[3] += 0.03463962436606608;
    }
  } else {
    result[3] += -0.03489436764055927;
  }
  if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.209321689314693193) ) ) {
    if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (double)1.490178253475586745) ) ) {
      result[4] += -0.025489065063667403;
    } else {
      result[4] += 0.036755179745037586;
    }
  } else {
    result[4] += -0.03345189868841032;
  }
  if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.8758359294256646832) ) ) {
    result[5] += -0.034455293668181265;
  } else {
    if ( UNLIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6038666070290387156) ) ) {
      result[5] += 0.06452000774716131;
    } else {
      result[5] += -0.007871724291502177;
    }
  }
  if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[6] += -0.02070080397623415;
  } else {
    result[6] += 0.05054134215565697;
  }
  if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8851947168287664924) ) ) {
    result[7] += 0.016842417587281396;
  } else {
    result[7] += -0.03443828214465897;
  }
  if ( LIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.619334285637768045) ) ) {
    result[8] += -0.03631391819244212;
  } else {
    if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (double)1.490178253475586745) ) ) {
      result[8] += -0.03454059859921176;
    } else {
      result[8] += 0.036752113047086164;
    }
  }
  if ( UNLIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.7147321560568579146) ) ) {
    if ( LIKELY(  (data[33].missing != -1) && (data[33].fvalue <= (double)-0.6327617417443375247) ) ) {
      if ( UNLIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-0.5054713436603542887) ) ) {
        if ( UNLIKELY( !(data[83].missing != -1) || (data[83].fvalue <= (double)1.00000001800250948e-35) ) ) {
          if ( LIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5699021105360092543) ) ) {
            result[9] += -0.03762706787432132;
          } else {
            result[9] += 0.008744984346974044;
          }
        } else {
          if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.022644120845814131) ) ) {
            result[9] += 0.04101631451980732;
          } else {
            result[9] += 0.013635322889738824;
          }
        }
      } else {
        result[9] += -0.030166542416175328;
      }
    } else {
      result[9] += 0.06444259795268288;
    }
  } else {
    result[9] += -0.03444827660793993;
  }
  if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3728354207891853567) ) ) {
    result[10] += 0.028338211926324394;
  } else {
    result[10] += -0.030367839716515153;
  }
  if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02366057554279654349) ) ) {
    if ( UNLIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.6197939207825213792) ) ) {
      if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.4432578306330479112) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.854153056378048503) ) ) {
          if ( LIKELY(  (data[58].missing != -1) && (data[58].fvalue <= (double)-0.5578126283066342506) ) ) {
            result[11] += 0.002145872871501293;
          } else {
            result[11] += -0.03073059321302884;
          }
        } else {
          result[11] += 0.03197623362820818;
        }
      } else {
        if ( LIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.08328953170175386334) ) ) {
          result[11] += -0.03428387769536865;
        } else {
          result[11] += -0.002638418055229917;
        }
      }
    } else {
      result[11] += -0.03338111953857604;
    }
  } else {
    if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.9564359567862011913) ) ) {
      if ( UNLIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6306144754393157026) ) ) {
        if ( UNLIKELY(  (data[20].missing != -1) && (data[20].fvalue <= (double)-0.5448433239136843964) ) ) {
          if ( LIKELY(  (data[53].missing != -1) && (data[53].fvalue <= (double)-0.2609382412217621239) ) ) {
            result[11] += -0.011396042214682076;
          } else {
            result[11] += 0.034361930211485786;
          }
        } else {
          result[11] += -0.034603292381504766;
        }
      } else {
        result[11] += 0.034956656506186845;
      }
    } else {
      if ( LIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.0905753259763943247) ) ) {
        if ( LIKELY(  (data[3].missing != -1) && (data[3].fvalue <= (double)-0.5118217699541166565) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5865439505491081285) ) ) {
            if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.650710626636601841) ) ) {
              result[11] += 0.01873687123038795;
            } else {
              if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.1185534018316622001) ) ) {
                result[11] += -0.030007171217980216;
              } else {
                result[11] += 0.001591972855457418;
              }
            }
          } else {
            result[11] += 0.00837500324400408;
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5994504937089063512) ) ) {
            result[11] += 0.007118555893757349;
          } else {
            result[11] += 0.03683010480802674;
          }
        }
      } else {
        result[11] += -0.03423467936065742;
      }
    }
  }
  if ( LIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (double)0.301285017925520815) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6280292678484594715) ) ) {
      if ( LIKELY(  (data[33].missing != -1) && (data[33].fvalue <= (double)-0.6491956528469868815) ) ) {
        result[12] += -0.0203596349338192;
      } else {
        result[12] += 0.03325804045587973;
      }
    } else {
      result[12] += 0.036498122780475165;
    }
  } else {
    result[12] += -0.025458473683482388;
  }
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1772208526869041567) ) ) {
    if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.5210601204174857282) ) ) {
      result[0] += 0.017361313016374117;
    } else {
      result[0] += -0.03618864377028318;
    }
  } else {
    if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.3083892198998683942) ) ) {
      if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02376901934613134468) ) ) {
        if ( LIKELY(  (data[36].missing != -1) && (data[36].fvalue <= (double)-0.7102313324244843296) ) ) {
          if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1563059735742685918) ) ) {
            result[0] += -0.036054900615446334;
          } else {
            if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.076345667441572784) ) ) {
              result[0] += -0.023871661179948322;
            } else {
              if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4134826703502541556) ) ) {
                result[0] += 0.0023312499162568274;
              } else {
                result[0] += 0.031200967694170356;
              }
            }
          }
        } else {
          result[0] += 0.03239490977450328;
        }
      } else {
        if ( LIKELY(  (data[58].missing != -1) && (data[58].fvalue <= (double)-0.4576213480695666136) ) ) {
          if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.4076512707803252034) ) ) {
            if ( LIKELY(  (data[12].missing != -1) && (data[12].fvalue <= (double)-1.128486328597585908) ) ) {
              result[0] += 0.004850845959106996;
            } else {
              result[0] += -0.0322649171173885;
            }
          } else {
            if ( LIKELY( !(data[47].missing != -1) || (data[47].fvalue <= (double)0.01042025011524357753) ) ) {
              result[0] += 0.0010705395648952472;
            } else {
              result[0] += 0.05613960698405976;
            }
          }
        } else {
          result[0] += -0.029784241873672578;
        }
      }
    } else {
      if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
        result[0] += -0.034577804465873066;
      } else {
        result[0] += 0.0027710379151621454;
      }
    }
  }
  if ( UNLIKELY(  (data[61].missing != -1) && (data[61].fvalue <= (double)-0.1694510226187393442) ) ) {
    if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1772208526869041567) ) ) {
      result[1] += -0.03449452071589872;
    } else {
      if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
        if ( LIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.2709289357124474162) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6280292678484594715) ) ) {
            if ( LIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (double)1.744238483402544171) ) ) {
              if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.8000101339158310898) ) ) {
                if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)1.098642039016307193) ) ) {
                  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.08007185799211762045) ) ) {
                    result[1] += 0.022879447407872542;
                  } else {
                    result[1] += -0.03875046761987212;
                  }
                } else {
                  result[1] += 0.024306724468426945;
                }
              } else {
                result[1] += -0.04121376941691064;
              }
            } else {
              result[1] += 0.038921172345722246;
            }
          } else {
            result[1] += -0.0343458207214315;
          }
        } else {
          result[1] += 0.03573448358375093;
        }
      } else {
        result[1] += -0.0360803551900378;
      }
    }
  } else {
    if ( LIKELY( !(data[38].missing != -1) || (data[38].fvalue <= (double)1.355342907056062307) ) ) {
      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-0.5313858905757674611) ) ) {
        if ( LIKELY(  (data[80].missing != -1) && (data[80].fvalue <= (double)-0.3083892198998683942) ) ) {
          if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.3678488213209678004) ) ) {
            if ( UNLIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.4404152440484555009) ) ) {
              result[1] += -0.03951010936864122;
            } else {
              result[1] += 0.03429178246185654;
            }
          } else {
            if ( LIKELY( !(data[55].missing != -1) || (data[55].fvalue <= (double)1.00000001800250948e-35) ) ) {
              if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3713742108636006178) ) ) {
                result[1] += 0.03539296344914656;
              } else {
                if ( UNLIKELY(  (data[35].missing != -1) && (data[35].fvalue <= (double)-0.2527611410248588042) ) ) {
                  result[1] += -0.027870045214497107;
                } else {
                  if ( UNLIKELY(  (data[35].missing != -1) && (data[35].fvalue <= (double)-0.2358576112677701342) ) ) {
                    result[1] += 0.02895933124226389;
                  } else {
                    if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.1958026162070415632) ) ) {
                      if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)0.9873454911718881899) ) ) {
                        if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.8925561340682643952) ) ) {
                          if ( LIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.7914519369226754586) ) ) {
                            result[1] += 0.027390227436072723;
                          } else {
                            result[1] += -0.012003024505714601;
                          }
                        } else {
                          result[1] += -0.03767615739920112;
                        }
                      } else {
                        result[1] += 0.033338776018592836;
                      }
                    } else {
                      result[1] += -0.03472928678329696;
                    }
                  }
                }
              }
            } else {
              result[1] += -0.0318143137096617;
            }
          }
        } else {
          result[1] += 0.03414893097650199;
        }
      } else {
        if ( UNLIKELY(  (data[36].missing != -1) && (data[36].fvalue <= (double)-0.7102313324244843296) ) ) {
          result[1] += 0.030608178602025086;
        } else {
          result[1] += -0.03139131742965759;
        }
      }
    } else {
      if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)0.7277191341578289618) ) ) {
        result[1] += 0.03455975442599613;
      } else {
        if ( LIKELY(  (data[45].missing != -1) && (data[45].fvalue <= (double)-0.07395422708832057046) ) ) {
          result[1] += 0.025700734730476228;
        } else {
          result[1] += -0.01871769548674575;
        }
      }
    }
  }
  if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
    result[2] += -0.029673851309512694;
  } else {
    if ( LIKELY( !(data[69].missing != -1) || (data[69].fvalue <= (double)0.3953092113754633208) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.713419879289624137) ) ) {
        result[2] += 0.01530927435157681;
      } else {
        result[2] += -0.018372572199012543;
      }
    } else {
      result[2] += 0.049096725873145536;
    }
  }
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1845224968741556448) ) ) {
    if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1847700102364353281) ) ) {
      result[3] += -0.03530377212974808;
    } else {
      result[3] += 0.03464266809890487;
    }
  } else {
    result[3] += -0.03488259623342438;
  }
  if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.209321689314693193) ) ) {
    if ( LIKELY(  (data[10].missing != -1) && (data[10].fvalue <= (double)-0.6560419292383370404) ) ) {
      result[4] += 0.03560363138845848;
    } else {
      result[4] += -0.004227313029387292;
    }
  } else {
    result[4] += -0.03338468979376051;
  }
  if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)6.015862565909510629) ) ) {
    if ( UNLIKELY(  (data[12].missing != -1) && (data[12].fvalue <= (double)-1.128486328597585908) ) ) {
      result[5] += 0.02910943809437321;
    } else {
      result[5] += -0.03444023579821744;
    }
  } else {
    result[5] += 0.05580353611219095;
  }
  if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[6] += -0.020118028843265835;
  } else {
    result[6] += 0.04780005866712117;
  }
  if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8851947168287664924) ) ) {
    result[7] += 0.016401524227521624;
  } else {
    result[7] += -0.034437913045013716;
  }
  if ( LIKELY(  (data[9].missing != -1) && (data[9].fvalue <= (double)-0.6192635509156506624) ) ) {
    result[8] += -0.036232258725341186;
  } else {
    if ( LIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5699021105360092543) ) ) {
      result[8] += -0.03443416193217531;
    } else {
      result[8] += 0.03319778174206836;
    }
  }
  if ( UNLIKELY(  (data[41].missing != -1) && (data[41].fvalue <= (double)-0.7147321560568579146) ) ) {
    if ( LIKELY( !(data[83].missing != -1) || (data[83].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7021266540248007892) ) ) {
        result[9] += -0.03451751378184667;
      } else {
        if ( LIKELY(  (data[58].missing != -1) && (data[58].fvalue <= (double)-0.4705239925378736365) ) ) {
          result[9] += -0.013971643666762207;
        } else {
          result[9] += 0.018569551308543302;
        }
      }
    } else {
      if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.038896224531635992) ) ) {
        result[9] += 0.04132674141143242;
      } else {
        if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.9285972811752244427) ) ) {
          result[9] += -0.022557354226142044;
        } else {
          if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.6040092174898200605) ) ) {
            if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.7544702801259169922) ) ) {
              if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.7752644520936924355) ) ) {
                result[9] += 0.026728846101815404;
              } else {
                result[9] += -0.012692318290958814;
              }
            } else {
              result[9] += 0.061693894184900316;
            }
          } else {
            result[9] += -0.011368173371857278;
          }
        }
      }
    }
  } else {
    result[9] += -0.034447742718671466;
  }
  if ( UNLIKELY(  (data[39].missing != -1) && (data[39].fvalue <= (double)-0.3728354207891853567) ) ) {
    result[10] += 0.0279623220568272;
  } else {
    result[10] += -0.030111578087684956;
  }
  if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.2270910346818499626) ) ) {
    if ( LIKELY(  (data[36].missing != -1) && (data[36].fvalue <= (double)-0.618191645368454501) ) ) {
      if ( LIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5405699588868239092) ) ) {
        if ( LIKELY(  (data[54].missing != -1) && (data[54].fvalue <= (double)-0.03673984168271277745) ) ) {
          if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.7163142958512370706) ) ) {
            if ( UNLIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.6198103916251270773) ) ) {
              result[11] += -0.004028009957578372;
            } else {
              result[11] += -0.03209888079949445;
            }
          } else {
            if ( LIKELY(  (data[36].missing != -1) && (data[36].fvalue <= (double)-0.679715294562736716) ) ) {
              if ( UNLIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)0.736928258521945212) ) ) {
                result[11] += 0.03131452581598094;
              } else {
                if ( LIKELY(  (data[54].missing != -1) && (data[54].fvalue <= (double)-0.03828963855561979407) ) ) {
                  result[11] += 0.007389680075600076;
                } else {
                  result[11] += -0.019749413243247787;
                }
              }
            } else {
              result[11] += -0.03699646821398577;
            }
          }
        } else {
          if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.8367973224042829505) ) ) {
            result[11] += 0.03754822142557082;
          } else {
            result[11] += 0.006426002567006728;
          }
        }
      } else {
        result[11] += -0.029739330072788808;
      }
    } else {
      if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)2.258965045567843166) ) ) {
        if ( LIKELY(  (data[22].missing != -1) && (data[22].fvalue <= (double)-0.3976978592119855827) ) ) {
          result[11] += 0.031400998986700256;
        } else {
          result[11] += -0.015156330123263591;
        }
      } else {
        if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (double)1.525439072483760983) ) ) {
          result[11] += 0.0420112895855676;
        } else {
          result[11] += -0.02305318923257463;
        }
      }
    }
  } else {
    if ( UNLIKELY(  (data[13].missing != -1) && (data[13].fvalue <= (double)-0.9897634247260547191) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6280292678484594715) ) ) {
        result[11] += -0.02297586039100919;
      } else {
        result[11] += 0.029729203876606103;
      }
    } else {
      if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)2.258965045567843166) ) ) {
        result[11] += -0.03392256150904114;
      } else {
        result[11] += 0.027084641214200157;
      }
    }
  }
  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.32011123242420747) ) ) {
    if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.2781834005959584744) ) ) {
      if ( LIKELY( !(data[80].missing != -1) || (data[80].fvalue <= (double)0.2078669411157570701) ) ) {
        result[12] += 0.0023379526404742465;
      } else {
        result[12] += 0.03716610365433393;
      }
    } else {
      result[12] += -0.03467980230433572;
    }
  } else {
    result[12] += 0.0439867493338079;
  }
  if ( UNLIKELY( !(data[84].missing != -1) || (data[84].fvalue <= (double)1.00000001800250948e-35) ) ) {
    if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02376901934613134468) ) ) {
      if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-0.4134826703502541556) ) ) {
        result[0] += 0.001595380605684088;
      } else {
        if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.959205621047357071) ) ) {
          result[0] += 0.0006360225615098646;
        } else {
          if ( LIKELY(  (data[68].missing != -1) && (data[68].fvalue <= (double)-0.2207227011686356544) ) ) {
            result[0] += 0.030841920691110712;
          } else {
            if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)0.4059165118096518809) ) ) {
              result[0] += 0.031202175991328587;
            } else {
              result[0] += -0.02137855426432425;
            }
          }
        }
      }
    } else {
      if ( LIKELY(  (data[58].missing != -1) && (data[58].fvalue <= (double)-0.4663266532852128887) ) ) {
        if ( LIKELY(  (data[21].missing != -1) && (data[21].fvalue <= (double)-0.3772520826993655541) ) ) {
          if ( UNLIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02321671253988670178) ) ) {
            result[0] += 0.02229195759716973;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.246390969593790254) ) ) {
              if ( LIKELY( !(data[52].missing != -1) || (data[52].fvalue <= (double)0.01546367856846388687) ) ) {
                result[0] += -0.005381713493412989;
              } else {
                result[0] += 0.008512807918940912;
              }
            } else {
              result[0] += -0.03346926513086679;
            }
          }
        } else {
          result[0] += -0.03081290475191558;
        }
      } else {
        result[0] += -0.034203519742486525;
      }
    }
  } else {
    if ( UNLIKELY( !(data[82].missing != -1) || (data[82].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( UNLIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.4241077355256945292) ) ) {
        result[0] += 0.03737122032179033;
      } else {
        result[0] += -0.010842403433752291;
      }
    } else {
      if ( UNLIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6260555919228570909) ) ) {
        if ( UNLIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.4855911565985475131) ) ) {
          result[0] += 0.04529299114553064;
        } else {
          if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
            result[0] += -0.034726377759926805;
          } else {
            result[0] += 0.0018886133270730925;
          }
        }
      } else {
        result[0] += -0.03447437723412537;
      }
    }
  }
  if ( UNLIKELY(  (data[35].missing != -1) && (data[35].fvalue <= (double)-0.5574519420018757554) ) ) {
    if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1772208526869041567) ) ) {
      result[1] += -0.03446283568680426;
    } else {
      if ( LIKELY( !(data[78].missing != -1) || (data[78].fvalue <= (double)2.363850603185651877) ) ) {
        if ( LIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.2709289357124474162) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6280292678484594715) ) ) {
            if ( LIKELY(  (data[58].missing != -1) && (data[58].fvalue <= (double)-0.5521983535815221389) ) ) {
              if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (double)1.376883408627355143) ) ) {
                if ( LIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.146880090638758759) ) ) {
                  if ( LIKELY(  (data[79].missing != -1) && (data[79].fvalue <= (double)-0.4168475085733249208) ) ) {
                    result[1] += -0.03246959385549113;
                  } else {
                    result[1] += 0.040098458002927675;
                  }
                } else {
                  result[1] += 0.023742886739426008;
                }
              } else {
                result[1] += -0.04010389258413441;
              }
            } else {
              result[1] += 0.030638954988216664;
            }
          } else {
            result[1] += -0.03393903491458292;
          }
        } else {
          result[1] += 0.03566253123029622;
        }
      } else {
        result[1] += -0.035991251090975535;
      }
    }
  } else {
    if ( LIKELY( !(data[38].missing != -1) || (data[38].fvalue <= (double)1.355342907056062307) ) ) {
      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-0.5313858905757674611) ) ) {
        if ( LIKELY(  (data[78].missing != -1) && (data[78].fvalue <= (double)-0.4855911565985475131) ) ) {
          if ( UNLIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6038503153449400473) ) ) {
            result[1] += -0.006098997958845471;
          } else {
            if ( LIKELY(  (data[57].missing != -1) && (data[57].fvalue <= (double)-0.6030701101055554458) ) ) {
              if ( LIKELY( !(data[52].missing != -1) || (data[52].fvalue <= (double)0.01546367856846388687) ) ) {
                result[1] += 0.03129547537672882;
              } else {
                result[1] += 0.003959374251895884;
              }
            } else {
              result[1] += -0.007963396722282917;
            }
          }
        } else {
          result[1] += 0.031153162057605887;
        }
      } else {
        if ( UNLIKELY(  (data[0].missing != -1) && (data[0].fvalue <= (double)-2.256928839343927518) ) ) {
          result[1] += 0.034709791932888166;
        } else {
          if ( UNLIKELY(  (data[35].missing != -1) && (data[35].fvalue <= (double)-0.3881343051148680723) ) ) {
            result[1] += 0.0013530136288214271;
          } else {
            result[1] += -0.03384954136615684;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[79].missing != -1) || (data[79].fvalue <= (double)1.255335709851286952) ) ) {
        result[1] += 0.034513151174307456;
      } else {
        if ( LIKELY(  (data[45].missing != -1) && (data[45].fvalue <= (double)-0.08326047417679115215) ) ) {
          result[1] += 0.0259382058698679;
        } else {
          result[1] += -0.018598046625491898;
        }
      }
    }
  }
  if ( LIKELY( !(data[55].missing != -1) || (data[55].fvalue <= (double)1.9687275667312647) ) ) {
    if ( UNLIKELY(  (data[10].missing != -1) && (data[10].fvalue <= (double)-0.4504562131888413812) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.713419879289624137) ) ) {
        result[2] += 0.016665504148525252;
      } else {
        result[2] += -0.035757606774248545;
      }
    } else {
      result[2] += -0.03455097590581099;
    }
  } else {
    result[2] += 0.03996504475128225;
  }
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1845224968741556448) ) ) {
    if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1847700102364353281) ) ) {
      result[3] += -0.03531014372995132;
    } else {
      result[3] += 0.0346270669253585;
    }
  } else {
    result[3] += -0.03486785564644638;
  }
  if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (double)1.490178253475586745) ) ) {
    result[4] += -0.03365186755567116;
  } else {
    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.2752335735604075073) ) ) {
      result[4] += -0.020278849749995734;
    } else {
      result[4] += 0.03786685838990028;
    }
  }
  if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.7544702801259169922) ) ) {
    result[5] += -0.01695809315823823;
  } else {
    if ( LIKELY(  (data[47].missing != -1) && (data[47].fvalue <= (double)-0.01568141949717636111) ) ) {
      result[5] += 0.0003283770184990983;
    } else {
      result[5] += 0.08037851803602827;
    }
  }
  if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1842749835118759061) ) ) {
    result[6] += 0.03861321595492541;
  } else {
    result[6] += -0.01161085415291549;
  }
  if ( UNLIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.8851947168287664924) ) ) {
    result[7] += 0.015773954806057464;
  } else {
    result[7] += -0.0344375704715089;
  }
  if ( LIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)-0.6189299289389768033) ) ) {
    result[8] += -0.03623440355219335;
  } else {
    if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (double)1.490178253475586745) ) ) {
      result[8] += -0.03457246367079046;
    } else {
      result[8] += 0.03689886303813439;
    }
  }
  if ( UNLIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-0.4969520972243098855) ) ) {
    if ( UNLIKELY( !(data[83].missing != -1) || (data[83].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( LIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5699021105360092543) ) ) {
        result[9] += -0.03747939827160052;
      } else {
        result[9] += 0.008200166595312064;
      }
    } else {
      if ( UNLIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-1.038896224531635992) ) ) {
        result[9] += 0.04158594951579077;
      } else {
        if ( UNLIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.3099551758663680601) ) ) {
          result[9] += -0.023254240823623113;
        } else {
          if ( LIKELY(  (data[38].missing != -1) && (data[38].fvalue <= (double)-0.6686458955391302306) ) ) {
            result[9] += 0.02186257253168629;
          } else {
            result[9] += -0.015321409802572551;
          }
        }
      }
    }
  } else {
    result[9] += -0.031685588021765534;
  }
  if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (double)1.00000001800250948e-35) ) ) {
    result[10] += -0.03024512592479101;
  } else {
    result[10] += 0.0348784004869234;
  }
  if ( LIKELY(  (data[52].missing != -1) && (data[52].fvalue <= (double)-0.02366057554279654349) ) ) {
    if ( UNLIKELY(  (data[8].missing != -1) && (data[8].fvalue <= (double)-0.6197939207825213792) ) ) {
      if ( UNLIKELY(  (data[1].missing != -1) && (data[1].fvalue <= (double)-0.1602661873707439677) ) ) {
        if ( UNLIKELY(  (data[11].missing != -1) && (data[11].fvalue <= (double)-0.5875014015255205502) ) ) {
          result[11] += 0.008054725901432908;
        } else {
          result[11] += -0.03431746435811964;
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.854153056378048503) ) ) {
          if ( LIKELY( !(data[40].missing != -1) || (data[40].fvalue <= (double)0.3608785293220277968) ) ) {
            result[11] += 0.0023875817564110394;
          } else {
            result[11] += -0.02853366801451043;
          }
        } else {
          result[11] += 0.026958919039568655;
        }
      }
    } else {
      result[11] += -0.033261446501332594;
    }
  } else {
    if ( LIKELY(  (data[30].missing != -1) && (data[30].fvalue <= (double)-0.9564359567862011913) ) ) {
      if ( UNLIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6306144754393157026) ) ) {
        if ( UNLIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.8008727114737107522) ) ) {
          result[11] += 0.027862517872605748;
        } else {
          if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.7163142958512370706) ) ) {
            result[11] += -0.03605034338366122;
          } else {
            result[11] += 0.022703171927156717;
          }
        }
      } else {
        result[11] += 0.03473935708059274;
      }
    } else {
      if ( LIKELY( !(data[38].missing != -1) || (data[38].fvalue <= (double)1.334235260215556051) ) ) {
        if ( LIKELY(  (data[28].missing != -1) && (data[28].fvalue <= (double)-0.35192791421776487) ) ) {
          if ( UNLIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6300408038006478639) ) ) {
            result[11] += -0.03306431507426651;
          } else {
            if ( LIKELY(  (data[33].missing != -1) && (data[33].fvalue <= (double)-0.3362043459374370324) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5865439505491081285) ) ) {
                if ( LIKELY(  (data[60].missing != -1) && (data[60].fvalue <= (double)-0.6285816031773608925) ) ) {
                  result[11] += -0.03164286361794864;
                } else {
                  if ( UNLIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.650710626636601841) ) ) {
                    result[11] += 0.01769208596559122;
                  } else {
                    if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.4987288460340521534) ) ) {
                      result[11] += -0.02666104159156603;
                    } else {
                      result[11] += 0.0020872429430110334;
                    }
                  }
                }
              } else {
                if ( LIKELY(  (data[40].missing != -1) && (data[40].fvalue <= (double)-0.3817666597025218267) ) ) {
                  result[11] += 0.003317885913112853;
                } else {
                  result[11] += 0.021732015011016775;
                }
              }
            } else {
              result[11] += -0.026919717462715424;
            }
          }
        } else {
          result[11] += 0.03566355926713783;
        }
      } else {
        result[11] += -0.03447572596164399;
      }
    }
  }
  if ( LIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (double)0.301285017925520815) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6280292678484594715) ) ) {
      if ( LIKELY(  (data[33].missing != -1) && (data[33].fvalue <= (double)-0.6491956528469868815) ) ) {
        result[12] += -0.01954633050986581;
      } else {
        result[12] += 0.03279073420587225;
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8215697967491829568) ) ) {
        result[12] += 0.05501756148279493;
      } else {
        result[12] += 0.012983134885141641;
      }
    }
  } else {
    result[12] += -0.024681829092080502;
  }
}

