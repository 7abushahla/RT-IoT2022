
#include "header.h"

void predict_unit0(union Entry* data, float* result) {
  unsigned int tmp;
  if ( (data[86].missing != -1) && (data[86].fvalue < (float)1)) {
    if ( (data[51].missing != -1) && (data[51].fvalue < (float)0.91606855392)) {
      if ( (data[79].missing != -1) && (data[79].fvalue < (float)6.0763492584)) {
        if ( (data[40].missing != -1) && (data[40].fvalue < (float)3.3901019096)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)3.2361967564)) {
            if ( (data[35].missing != -1) && (data[35].fvalue < (float)2.3660285473)) {
              if ( (data[10].missing != -1) && (data[10].fvalue < (float)1.7383306026)) {
                if ( (data[12].missing != -1) && (data[12].fvalue < (float)3.7342278957)) {
                  if ( (data[79].missing != -1) && (data[79].fvalue < (float)0.69815886021)) {
                    if ( (data[55].missing != -1) && (data[55].fvalue < (float)7.806274516e-05)) {
                      if ( (data[12].missing != -1) && (data[12].fvalue < (float)-0.0058834324591)) {
                        if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.038397628814)) {
                          result[0] += -0.10116258;
                        } else {
                          result[0] += 0.65251905;
                        }
                      } else {
                        result[0] += -0.103573255;
                      }
                    } else {
                      if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60428506136)) {
                        if ( (data[14].missing != -1) && (data[14].fvalue < (float)-0.45095446706)) {
                          result[0] += 0.020793019;
                        } else {
                          result[0] += -0.09530431;
                        }
                      } else {
                        result[0] += 0.46994993;
                      }
                    }
                  } else {
                    if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025458958)) {
                      if ( (data[67].missing != -1) && (data[67].fvalue < (float)-0.11215373129)) {
                        result[0] += 1.229604;
                      } else {
                        result[0] += 0.5448094;
                      }
                    } else {
                      if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.46854448318)) {
                        result[0] += 0.09509571;
                      } else {
                        result[0] += -0.10330086;
                      }
                    }
                  }
                } else {
                  if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62010836601)) {
                    if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.73820483685)) {
                      if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.20198245347)) {
                        result[0] += -0.08249172;
                      } else {
                        result[0] += -0;
                      }
                    } else {
                      if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.79971778393)) {
                        result[0] += 1.1744969;
                      } else {
                        result[0] += 0.095652506;
                      }
                    }
                  } else {
                    result[0] += -0.102291845;
                  }
                }
              } else {
                if ( (data[79].missing != -1) && (data[79].fvalue < (float)-0.40983131528)) {
                  result[0] += 0.88042563;
                } else {
                  result[0] += -0.09923498;
                }
              }
            } else {
              if ( (data[21].missing != -1) && (data[21].fvalue < (float)-0.26361367106)) {
                if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025406084955)) {
                  result[0] += 1.2318492;
                } else {
                  result[0] += 0.31152958;
                }
              } else {
                if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.02548956871)) {
                  if ( (data[59].missing != -1) && (data[59].fvalue < (float)0.66945952177)) {
                    result[0] += 0.5363903;
                  } else {
                    result[0] += -0.08545414;
                  }
                } else {
                  result[0] += -0.10243173;
                }
              }
            }
          } else {
            result[0] += 0.77299887;
          }
        } else {
          if ( (data[32].missing != -1) && (data[32].fvalue < (float)0.8841226697)) {
            if ( (data[45].missing != -1) && (data[45].fvalue < (float)-0.090347088873)) {
              result[0] += -0.098837696;
            } else {
              result[0] += -0.0062240805;
            }
          } else {
            result[0] += 1.150649;
          }
        }
      } else {
        if ( (data[33].missing != -1) && (data[33].fvalue < (float)1.4050359726)) {
          if ( (data[47].missing != -1) && (data[47].fvalue < (float)-0.016089519486)) {
            result[0] += 1.1587062;
          } else {
            if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.18107253313)) {
              if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62016826868)) {
                result[0] += 0.17051199;
              } else {
                result[0] += -0.08808389;
              }
            } else {
              result[0] += 0.6079123;
            }
          }
        } else {
          if ( (data[33].missing != -1) && (data[33].fvalue < (float)1.4378955364)) {
            result[0] += -0.10035381;
          } else {
            result[0] += 1.2198752;
          }
        }
      }
    } else {
      if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.045697547495)) {
        if ( (data[84].missing != -1) && (data[84].fvalue < (float)1)) {
          if ( (data[73].missing != -1) && (data[73].fvalue < (float)0.63558840752)) {
            result[0] += -0;
          } else {
            result[0] += -0.09955332;
          }
        } else {
          result[0] += 0.80681765;
        }
      } else {
        if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025413041934)) {
          result[0] += 1.242473;
        } else {
          result[0] += 0.36740592;
        }
      }
    }
  } else {
    if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.024974752218)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.53519374132)) {
        if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59280967712)) {
          if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.20401591063)) {
            result[0] += 0.026802028;
          } else {
            result[0] += -0.09552791;
          }
        } else {
          result[0] += 0.85504663;
        }
      } else {
        result[0] += 1.2365057;
      }
    } else {
      if ( (data[61].missing != -1) && (data[61].fvalue < (float)-0.16463732719)) {
        if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.12229329348)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.61850941181)) {
            if ( (data[52].missing != -1) && (data[52].fvalue < (float)0.23504699767)) {
              if ( (data[55].missing != -1) && (data[55].fvalue < (float)-0.10196504742)) {
                if ( (data[55].missing != -1) && (data[55].fvalue < (float)-0.1285303086)) {
                  result[0] += -0.003655418;
                } else {
                  if ( (data[32].missing != -1) && (data[32].fvalue < (float)5.9198932648)) {
                    result[0] += -0.10266462;
                  } else {
                    result[0] += -0.025043873;
                  }
                }
              } else {
                if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.23670496047)) {
                  if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.31842756271)) {
                    result[0] += -0.09971301;
                  } else {
                    if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.62002372742)) {
                      result[0] += 0.038482;
                    } else {
                      result[0] += -0.08249172;
                    }
                  }
                } else {
                  if ( (data[33].missing != -1) && (data[33].fvalue < (float)-0.64121770859)) {
                    result[0] += -0.021723926;
                  } else {
                    result[0] += 0.26246163;
                  }
                }
              }
            } else {
              if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.54161769152)) {
                if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.17132686079)) {
                  if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.038621056825)) {
                    result[0] += -0.054578867;
                  } else {
                    result[0] += 0.16342849;
                  }
                } else {
                  result[0] += -0.094271615;
                }
              } else {
                if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.62006938457)) {
                  result[0] += 0.55030423;
                } else {
                  result[0] += 0.08032144;
                }
              }
            }
          } else {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.21259637177)) {
              result[0] += -0.07970749;
            } else {
              if ( (data[61].missing != -1) && (data[61].fvalue < (float)-0.16704104841)) {
                result[0] += 0.7367817;
              } else {
                result[0] += 0.36884093;
              }
            }
          }
        } else {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.6996152401)) {
            result[0] += 0.7782898;
          } else {
            result[0] += 0.23527193;
          }
        }
      } else {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.55792814493)) {
          result[0] += 1.2192279;
        } else {
          result[0] += 0.6629199;
        }
      }
    }
  }
  if ( (data[33].missing != -1) && (data[33].fvalue < (float)-0.6964815259)) {
    if ( (data[17].missing != -1) && (data[17].fvalue < (float)2.4384834766)) {
      if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.59351676702)) {
        if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.021839931607)) {
          if ( (data[80].missing != -1) && (data[80].fvalue < (float)-0.28237974644)) {
            if ( (data[78].missing != -1) && (data[78].fvalue < (float)-0.54036176205)) {
              if ( (data[83].missing != -1) && (data[83].fvalue < (float)1)) {
                result[1] += 0.64732605;
              } else {
                if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.17132686079)) {
                  result[1] += -0.10135776;
                } else {
                  if ( (data[1].missing != -1) && (data[1].fvalue < (float)0.45149809122)) {
                    result[1] += -0.09380264;
                  } else {
                    if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.12229329348)) {
                      result[1] += 0.5086126;
                    } else {
                      result[1] += -0.09135612;
                    }
                  }
                }
              }
            } else {
              result[1] += -0.10363873;
            }
          } else {
            if ( (data[78].missing != -1) && (data[78].fvalue < (float)3.4584906101)) {
              result[1] += 1.2001237;
            } else {
              result[1] += -0.102396905;
            }
          }
        } else {
          if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.12229329348)) {
            if ( (data[78].missing != -1) && (data[78].fvalue < (float)3.4584906101)) {
              if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.64542460442)) {
                result[1] += 0.75100994;
              } else {
                result[1] += 1.2333632;
              }
            } else {
              result[1] += -0.0884871;
            }
          } else {
            result[1] += -0.09046512;
          }
        }
      } else {
        if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60423654318)) {
          result[1] += 0.36565897;
        } else {
          if ( (data[56].missing != -1) && (data[56].fvalue < (float)-0.14189395308)) {
            result[1] += 0.9486792;
          } else {
            result[1] += 1.2351563;
          }
        }
      }
    } else {
      if ( (data[47].missing != -1) && (data[47].fvalue < (float)-0.015093309805)) {
        result[1] += 1.2380366;
      } else {
        result[1] += 0.44506133;
      }
    }
  } else {
    if ( (data[47].missing != -1) && (data[47].fvalue < (float)-0.015835743397)) {
      if ( (data[78].missing != -1) && (data[78].fvalue < (float)3.4584906101)) {
        if ( (data[69].missing != -1) && (data[69].fvalue < (float)-0.39860424399)) {
          if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31392768025)) {
            if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.82802081108)) {
              result[1] += 0.46600243;
            } else {
              result[1] += 0.9007374;
            }
          } else {
            result[1] += -0.10095995;
          }
        } else {
          if ( (data[52].missing != -1) && (data[52].fvalue < (float)0.10056277364)) {
            if ( (data[56].missing != -1) && (data[56].fvalue < (float)0.35746175051)) {
              if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.15498234332)) {
                if ( (data[12].missing != -1) && (data[12].fvalue < (float)-0.0058834324591)) {
                  if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.013868609443)) {
                    result[1] += -0.09300398;
                  } else {
                    if ( (data[32].missing != -1) && (data[32].fvalue < (float)5.9198932648)) {
                      result[1] += 1.2362795;
                    } else {
                      result[1] += 0.7274524;
                    }
                  }
                } else {
                  result[1] += 1.2427062;
                }
              } else {
                result[1] += 0.11750469;
              }
            } else {
              result[1] += -0.048192926;
            }
          } else {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.15619270504)) {
              if ( (data[32].missing != -1) && (data[32].fvalue < (float)4.82117939)) {
                if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.60498034954)) {
                  if ( (data[32].missing != -1) && (data[32].fvalue < (float)1.9828362465)) {
                    if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.62006348372)) {
                      result[1] += 0.28280124;
                    } else {
                      result[1] += 0.0343282;
                    }
                  } else {
                    result[1] += -0.07837725;
                  }
                } else {
                  if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.54161769152)) {
                    if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31443795562)) {
                      result[1] += 0.97069085;
                    } else {
                      result[1] += 1.2316895;
                    }
                  } else {
                    result[1] += 0.40621248;
                  }
                }
              } else {
                if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.62004214525)) {
                  if ( (data[37].missing != -1) && (data[37].fvalue < (float)0.98161232471)) {
                    result[1] += -0;
                  } else {
                    result[1] += -0.08297263;
                  }
                } else {
                  result[1] += 0.35748902;
                }
              }
            } else {
              result[1] += 1.2397053;
            }
          }
        }
      } else {
        result[1] += -0.10325719;
      }
    } else {
      if ( (data[33].missing != -1) && (data[33].fvalue < (float)-0.65615385771)) {
        if ( (data[45].missing != -1) && (data[45].fvalue < (float)-0.10042212158)) {
          result[1] += 0.8296643;
        } else {
          result[1] += 1.2365893;
        }
      } else {
        if ( (data[80].missing != -1) && (data[80].fvalue < (float)-0.37019988894)) {
          if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59852188826)) {
            result[1] += 0.9241623;
          } else {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)2.1549119949)) {
              result[1] += -0.10348268;
            } else {
              result[1] += 0.039847393;
            }
          }
        } else {
          if ( (data[33].missing != -1) && (data[33].fvalue < (float)-0.094554312527)) {
            result[1] += -0.0887357;
          } else {
            result[1] += 1.2342575;
          }
        }
      }
    }
  }
  if ( (data[17].missing != -1) && (data[17].fvalue < (float)5.2582302094)) {
    if ( (data[51].missing != -1) && (data[51].fvalue < (float)3.7525391579)) {
      if ( (data[87].missing != -1) && (data[87].fvalue < (float)1)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)3.2361967564)) {
          result[2] += -0.10363533;
        } else {
          result[2] += -0;
        }
      } else {
        if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31298440695)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.50391459465)) {
            result[2] += 1.2349013;
          } else {
            if ( (data[45].missing != -1) && (data[45].fvalue < (float)-0.10049580783)) {
              result[2] += 0.30545238;
            } else {
              result[2] += 0.6067832;
            }
          }
        } else {
          result[2] += -0.10295284;
        }
      }
    } else {
      if ( (data[87].missing != -1) && (data[87].fvalue < (float)1)) {
        result[2] += -0.100817375;
      } else {
        result[2] += 1.222725;
      }
    }
  } else {
    if ( (data[77].missing != -1) && (data[77].fvalue < (float)1.4607651234)) {
      result[2] += 0.47996348;
    } else {
      result[2] += 1.1511774;
    }
  }
  if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.17688424885)) {
    if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.25832360983)) {
      result[3] += -0.10302398;
    } else {
      result[3] += 1.2437874;
    }
  } else {
    result[3] += -0.10363986;
  }
  if ( (data[89].missing != -1) && (data[89].fvalue < (float)1)) {
    result[4] += -0.10356679;
  } else {
    result[4] += 1.243492;
  }
  if ( (data[79].missing != -1) && (data[79].fvalue < (float)6.0763492584)) {
    result[5] += -0.10356722;
  } else {
    if ( (data[68].missing != -1) && (data[68].fvalue < (float)0.031676556915)) {
      result[5] += -0.103221714;
    } else {
      if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.099427320063)) {
        result[5] += 0.45444724;
      } else {
        result[5] += -0.085082754;
      }
    }
  }
  result[6] += -0.10350111;
  if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.54112535715)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.58758682013)) {
      result[7] += -0.103074215;
    } else {
      if ( (data[17].missing != -1) && (data[17].fvalue < (float)1.0286098719)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.56495398283)) {
          result[7] += 1.2411085;
        } else {
          result[7] += -0.102279544;
        }
      } else {
        result[7] += -0.102965735;
      }
    }
  } else {
    result[7] += -0.1036452;
  }
  if ( (data[80].missing != -1) && (data[80].fvalue < (float)9.5720357895)) {
    result[8] += -0.10360667;
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62010836601)) {
      result[8] += -0.09606951;
    } else {
      result[8] += 1.2424423;
    }
  }
  if ( (data[1].missing != -1) && (data[1].fvalue < (float)3.6675543785)) {
    if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.83832764626)) {
      if ( (data[83].missing != -1) && (data[83].fvalue < (float)1)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.1565849781)) {
          result[9] += -0.103368565;
        } else {
          result[9] += -0.015217884;
        }
      } else {
        if ( (data[37].missing != -1) && (data[37].fvalue < (float)0.42099300027)) {
          result[9] += 1.2413899;
        } else {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.61771321297)) {
            result[9] += -0.09046512;
          } else {
            result[9] += -0.013609996;
          }
        }
      }
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)-0.51474040747)) {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.9851242304)) {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.4400168657)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)-0.0058834324591)) {
              if ( (data[86].missing != -1) && (data[86].fvalue < (float)1)) {
                if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59280967712)) {
                  result[9] += 1.1537788;
                } else {
                  if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62016826868)) {
                    result[9] += 0.05822276;
                  } else {
                    result[9] += -0.08823007;
                  }
                }
              } else {
                if ( (data[37].missing != -1) && (data[37].fvalue < (float)1.3740458488)) {
                  result[9] += -0.10311033;
                } else {
                  if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.5637139678)) {
                    result[9] += 0.06718052;
                  } else {
                    result[9] += -0.06334189;
                  }
                }
              }
            } else {
              result[9] += -0.10351158;
            }
          } else {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.17023339868)) {
              result[9] += -0.0922783;
            } else {
              result[9] += 1.22266;
            }
          }
        } else {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.71015536785)) {
            result[9] += -0.08897629;
          } else {
            result[9] += 1.2339315;
          }
        }
      } else {
        if ( (data[37].missing != -1) && (data[37].fvalue < (float)1.3460149765)) {
          result[9] += -0.10356965;
        } else {
          if ( (data[34].missing != -1) && (data[34].fvalue < (float)-0.20845749974)) {
            result[9] += 0.015930885;
          } else {
            result[9] += -0.088897906;
          }
        }
      }
    }
  } else {
    if ( (data[12].missing != -1) && (data[12].fvalue < (float)-0.0058834324591)) {
      if ( (data[37].missing != -1) && (data[37].fvalue < (float)0.86948847771)) {
        result[9] += 1.2430105;
      } else {
        result[9] += 0.09026592;
      }
    } else {
      result[9] += -0.101736374;
    }
  }
  if ( (data[23].missing != -1) && (data[23].fvalue < (float)10.179190636)) {
    result[10] += -0.10361623;
  } else {
    result[10] += 1.243145;
  }
  if ( (data[42].missing != -1) && (data[42].fvalue < (float)-0.010509602726)) {
    if ( (data[90].missing != -1) && (data[90].fvalue < (float)1)) {
      if ( (data[55].missing != -1) && (data[55].fvalue < (float)-0.044618733227)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.5824829936)) {
          if ( (data[53].missing != -1) && (data[53].fvalue < (float)-0.26547160745)) {
            if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.65628534555)) {
              if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.93369174)) {
                if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.62011039257)) {
                  if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.77468854189)) {
                    if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.77788865566)) {
                      result[11] += 0.5073797;
                    } else {
                      result[11] += 1.0772518;
                    }
                  } else {
                    result[11] += -0.0077543897;
                  }
                } else {
                  result[11] += -0.10011149;
                }
              } else {
                if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.61899483204)) {
                  if ( (data[55].missing != -1) && (data[55].fvalue < (float)-0.1082419157)) {
                    result[11] += -0.10279051;
                  } else {
                    result[11] += 0.06950443;
                  }
                } else {
                  if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.46778979897)) {
                    result[11] += -0.07963742;
                  } else {
                    if ( (data[53].missing != -1) && (data[53].fvalue < (float)-0.26869207621)) {
                      result[11] += -0;
                    } else {
                      result[11] += 0.47522023;
                    }
                  }
                }
              }
            } else {
              result[11] += 0.70295393;
            }
          } else {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.58649593592)) {
              result[11] += -0.0978193;
            } else {
              if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.77948868275)) {
                result[11] += 1.065507;
              } else {
                if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.0159345865)) {
                  result[11] += 0.39509046;
                } else {
                  result[11] += 0.73195815;
                }
              }
            }
          }
        } else {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)2.4427080154)) {
            result[11] += -0.1035253;
          } else {
            result[11] += -0.031879343;
          }
        }
      } else {
        if ( (data[56].missing != -1) && (data[56].fvalue < (float)-0.090239189565)) {
          if ( (data[87].missing != -1) && (data[87].fvalue < (float)1)) {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.57992994785)) {
              result[11] += -0.0806176;
            } else {
              if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.5824829936)) {
                if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.62957751751)) {
                  result[11] += 0.99396634;
                } else {
                  result[11] += 0.59592897;
                }
              } else {
                result[11] += -0.035636198;
              }
            }
          } else {
            result[11] += 1.22055;
          }
        } else {
          if ( (data[43].missing != -1) && (data[43].fvalue < (float)-0.1650904119)) {
            result[11] += -0;
          } else {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)2.4427080154)) {
              result[11] += -0.10097574;
            } else {
              result[11] += -0;
            }
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.62005156279)) {
        result[11] += 0.65709865;
      } else {
        result[11] += 1.2231408;
      }
    }
  } else {
    if ( (data[33].missing != -1) && (data[33].fvalue < (float)-0.64719218016)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)-0.43788185716)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.08081638813)) {
          result[11] += 0.59372956;
        } else {
          if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.73308742046)) {
            result[11] += -0.09710596;
          } else {
            result[11] += 0.33286867;
          }
        }
      } else {
        if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60429447889)) {
          if ( (data[43].missing != -1) && (data[43].fvalue < (float)-0.063070945442)) {
            result[11] += 0.014243306;
          } else {
            result[11] += -0.079060346;
          }
        } else {
          result[11] += -0.10343285;
        }
      }
    } else {
      if ( (data[79].missing != -1) && (data[79].fvalue < (float)2.4900910854)) {
        if ( (data[84].missing != -1) && (data[84].fvalue < (float)1)) {
          if ( (data[33].missing != -1) && (data[33].fvalue < (float)1.4050359726)) {
            if ( (data[32].missing != -1) && (data[32].fvalue < (float)2.8984308243)) {
              if ( (data[44].missing != -1) && (data[44].fvalue < (float)0.096534334123)) {
                if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60406202078)) {
                  result[11] += 1.2380105;
                } else {
                  result[11] += 0.81851864;
                }
              } else {
                result[11] += -0.08297263;
              }
            } else {
              if ( (data[42].missing != -1) && (data[42].fvalue < (float)-0.010366139933)) {
                result[11] += -0.08249172;
              } else {
                result[11] += 0.4125899;
              }
            }
          } else {
            result[11] += -0.099516064;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.62009978294)) {
            result[11] += 0.095652506;
          } else {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.0803849697)) {
              result[11] += -0.1010448;
            } else {
              result[11] += -0;
            }
          }
        }
      } else {
        if ( (data[21].missing != -1) && (data[21].fvalue < (float)-0.12675917149)) {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.9851242304)) {
            result[11] += 0.19184995;
          } else {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.46779358387)) {
              if ( (data[71].missing != -1) && (data[71].fvalue < (float)-0.29506281018)) {
                result[11] += -0.10298338;
              } else {
                result[11] += -0.042553037;
              }
            } else {
              result[11] += -0;
            }
          }
        } else {
          result[11] += 0.87498385;
        }
      }
    }
  }
  if ( (data[78].missing != -1) && (data[78].fvalue < (float)3.5391829014)) {
    if ( (data[75].missing != -1) && (data[75].fvalue < (float)2.3511066437)) {
      if ( (data[58].missing != -1) && (data[58].fvalue < (float)-0.57980215549)) {
        result[12] += 0.07440183;
      } else {
        if ( (data[52].missing != -1) && (data[52].fvalue < (float)0.052392564714)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)2.1549119949)) {
            result[12] += -0.10335752;
          } else {
            if ( (data[80].missing != -1) && (data[80].fvalue < (float)-0.10689549893)) {
              result[12] += -0.1035737;
            } else {
              result[12] += 0.97659826;
            }
          }
        } else {
          if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.79708915949)) {
            if ( (data[78].missing != -1) && (data[78].fvalue < (float)-0.54036176205)) {
              result[12] += 0.65251905;
            } else {
              result[12] += -0.029736882;
            }
          } else {
            if ( (data[68].missing != -1) && (data[68].fvalue < (float)1.1776794195)) {
              result[12] += -0.10193399;
            } else {
              result[12] += -0.015729211;
            }
          }
        }
      }
    } else {
      result[12] += 0.12822026;
    }
  } else {
    result[12] += 0.5119422;
  }
  if ( (data[86].missing != -1) && (data[86].fvalue < (float)1)) {
    if ( (data[50].missing != -1) && (data[50].fvalue < (float)0.49784451723)) {
      if ( (data[79].missing != -1) && (data[79].fvalue < (float)2.4661560059)) {
        if ( (data[40].missing != -1) && (data[40].fvalue < (float)3.3901019096)) {
          if ( (data[80].missing != -1) && (data[80].fvalue < (float)9.5720357895)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)-0.0058834324591)) {
              if ( (data[28].missing != -1) && (data[28].fvalue < (float)1.3149677515)) {
                if ( (data[55].missing != -1) && (data[55].fvalue < (float)7.806274516e-05)) {
                  result[0] += -0.09930281;
                } else {
                  result[0] += 0.094481416;
                }
              } else {
                if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025418607518)) {
                  if ( (data[35].missing != -1) && (data[35].fvalue < (float)2.2401018143)) {
                    result[0] += 0.55659443;
                  } else {
                    result[0] += 0.3800259;
                  }
                } else {
                  result[0] += 0.6740505;
                }
              }
            } else {
              if ( (data[79].missing != -1) && (data[79].fvalue < (float)0.69815886021)) {
                if ( (data[50].missing != -1) && (data[50].fvalue < (float)0.17703424394)) {
                  if ( (data[36].missing != -1) && (data[36].fvalue < (float)2.2058756351)) {
                    result[0] += -0.10201221;
                  } else {
                    if ( (data[80].missing != -1) && (data[80].fvalue < (float)-0.37019988894)) {
                      result[0] += 0.050873388;
                    } else {
                      result[0] += -0.100995764;
                    }
                  }
                } else {
                  result[0] += -0;
                }
              } else {
                if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025458958)) {
                  if ( (data[49].missing != -1) && (data[49].fvalue < (float)0.051169540733)) {
                    result[0] += 0.43572554;
                  } else {
                    result[0] += 0.015249577;
                  }
                } else {
                  if ( (data[36].missing != -1) && (data[36].fvalue < (float)-0.68227016926)) {
                    result[0] += -0;
                  } else {
                    result[0] += -0.10132933;
                  }
                }
              }
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62010836601)) {
              result[0] += 0.42147785;
            } else {
              result[0] += -0.10048289;
            }
          }
        } else {
          if ( (data[32].missing != -1) && (data[32].fvalue < (float)0.8841226697)) {
            result[0] += -0.09089776;
          } else {
            if ( (data[47].missing != -1) && (data[47].fvalue < (float)-0.016011226922)) {
              result[0] += 0.4228015;
            } else {
              result[0] += 0.21836093;
            }
          }
        }
      } else {
        if ( (data[80].missing != -1) && (data[80].fvalue < (float)-0.37019988894)) {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.9851242304)) {
            result[0] += -0.082622744;
          } else {
            if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025418607518)) {
              if ( (data[20].missing != -1) && (data[20].fvalue < (float)-0.43627506495)) {
                result[0] += 0.46070796;
              } else {
                if ( (data[21].missing != -1) && (data[21].fvalue < (float)-0.21799550951)) {
                  result[0] += 0.1529042;
                } else {
                  result[0] += 0.408716;
                }
              }
            } else {
              if ( (data[48].missing != -1) && (data[48].fvalue < (float)-0.2966286242)) {
                result[0] += 0.4282433;
              } else {
                result[0] += 0.050360948;
              }
            }
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)-0.43627506495)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)-0.41173663735)) {
              result[0] += 0.1954972;
            } else {
              if ( (data[50].missing != -1) && (data[50].fvalue < (float)-0.0057230344974)) {
                result[0] += -0.10113504;
              } else {
                result[0] += -0;
              }
            }
          } else {
            result[0] += 0.36978686;
          }
        }
      }
    } else {
      if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.045697547495)) {
        if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60429447889)) {
          result[0] += 0.48917645;
        } else {
          if ( (data[50].missing != -1) && (data[50].fvalue < (float)7.7017717361)) {
            if ( (data[55].missing != -1) && (data[55].fvalue < (float)0.90189987421)) {
              result[0] += 0.047747415;
            } else {
              result[0] += -0.09375094;
            }
          } else {
            result[0] += 0.10853514;
          }
        }
      } else {
        if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025342080742)) {
          result[0] += 0.3983324;
        } else {
          result[0] += 0.15519348;
        }
      }
    }
  } else {
    if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.024578202516)) {
      if ( (data[34].missing != -1) && (data[34].fvalue < (float)-0.20921711624)) {
        if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.024974752218)) {
          if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.17132686079)) {
            if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.72704064846)) {
              result[0] += 0.21128045;
            } else {
              result[0] += 0.38942957;
            }
          } else {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.08081638813)) {
              result[0] += 0.39080557;
            } else {
              result[0] += 0.2932199;
            }
          }
        } else {
          result[0] += 0.02287156;
        }
      } else {
        if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.024974752218)) {
          result[0] += 0.3952667;
        } else {
          result[0] += 0.57428825;
        }
      }
    } else {
      if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.15498234332)) {
        if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60252219439)) {
          if ( (data[55].missing != -1) && (data[55].fvalue < (float)-0.035617761314)) {
            if ( (data[55].missing != -1) && (data[55].fvalue < (float)-0.099804222584)) {
              if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60342478752)) {
                result[0] += -0.101039894;
              } else {
                result[0] += -0.026775064;
              }
            } else {
              if ( (data[32].missing != -1) && (data[32].fvalue < (float)3.4477875233)) {
                if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.30208304524)) {
                  result[0] += -0.09599613;
                } else {
                  if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.22036042809)) {
                    result[0] += 0.013649748;
                  } else {
                    result[0] += -0.089633405;
                  }
                }
              } else {
                if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60419660807)) {
                  result[0] += 0.15914151;
                } else {
                  if ( (data[69].missing != -1) && (data[69].fvalue < (float)-0.38874548674)) {
                    result[0] += -0.05345351;
                  } else {
                    result[0] += -0;
                  }
                }
              }
            }
          } else {
            if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.93103021383)) {
              result[0] += -0.089345016;
            } else {
              result[0] += 0.31218812;
            }
          }
        } else {
          if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31341737509)) {
            if ( (data[55].missing != -1) && (data[55].fvalue < (float)-0.13423721492)) {
              result[0] += 0.019896053;
            } else {
              result[0] += 0.27457246;
            }
          } else {
            result[0] += 0.40998372;
          }
        }
      } else {
        if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.79142647982)) {
          result[0] += -0.09071309;
        } else {
          if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.0078816348687)) {
            if ( (data[53].missing != -1) && (data[53].fvalue < (float)-0.25699743629)) {
              result[0] += 0.5741111;
            } else {
              result[0] += 0.3074389;
            }
          } else {
            if ( (data[35].missing != -1) && (data[35].fvalue < (float)-0.12977306545)) {
              result[0] += 0.408186;
            } else {
              result[0] += 0.048771717;
            }
          }
        }
      }
    }
  }
  if ( (data[53].missing != -1) && (data[53].fvalue < (float)-0.26869207621)) {
    if ( (data[80].missing != -1) && (data[80].fvalue < (float)-0.28237974644)) {
      if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.024974752218)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.57866376638)) {
          result[1] += 0.4367111;
        } else {
          if ( (data[86].missing != -1) && (data[86].fvalue < (float)1)) {
            if ( (data[40].missing != -1) && (data[40].fvalue < (float)0.0035779729951)) {
              if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.18476673961)) {
                result[1] += -0;
              } else {
                result[1] += -0.10211286;
              }
            } else {
              result[1] += 0.014674402;
            }
          } else {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.53519374132)) {
              if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.86629867554)) {
                result[1] += -0.024839727;
              } else {
                result[1] += 0.59345144;
              }
            } else {
              result[1] += -0.100487694;
            }
          }
        }
      } else {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.18137912452)) {
          result[1] += 0.54540366;
        } else {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.039240390062)) {
            result[1] += 0.24706425;
          } else {
            result[1] += -0.0016920342;
          }
        }
      }
    } else {
      if ( (data[80].missing != -1) && (data[80].fvalue < (float)9.5720357895)) {
        result[1] += 0.40931886;
      } else {
        result[1] += -0.100646906;
      }
    }
  } else {
    if ( (data[50].missing != -1) && (data[50].fvalue < (float)0.049115914851)) {
      if ( (data[47].missing != -1) && (data[47].fvalue < (float)-0.0052432520315)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)1.724832654)) {
          if ( (data[79].missing != -1) && (data[79].fvalue < (float)6.0763492584)) {
            if ( (data[55].missing != -1) && (data[55].fvalue < (float)7.806274516e-05)) {
              if ( (data[83].missing != -1) && (data[83].fvalue < (float)1)) {
                if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31586059928)) {
                  result[1] += 0.5250079;
                } else {
                  result[1] += 0.39467186;
                }
              } else {
                if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.27981966734)) {
                  if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.54357796907)) {
                    if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60414254665)) {
                      if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.25796613097)) {
                        if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.27180546522)) {
                          result[1] += 0.48923224;
                        } else {
                          result[1] += 0.34958574;
                        }
                      } else {
                        if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.85705131292)) {
                          if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.86629867554)) {
                            if ( (data[33].missing != -1) && (data[33].fvalue < (float)-0.62329429388)) {
                              result[1] += -0;
                            } else {
                              if ( (data[33].missing != -1) && (data[33].fvalue < (float)-0.60387730598)) {
                                result[1] += 0.39643556;
                              } else {
                                result[1] += 0.025558958;
                              }
                            }
                          } else {
                            result[1] += 0.49935102;
                          }
                        } else {
                          if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31457713246)) {
                            result[1] += 0.0025806522;
                          } else {
                            result[1] += -0.090466835;
                          }
                        }
                      }
                    } else {
                      if ( (data[35].missing != -1) && (data[35].fvalue < (float)0.29399675131)) {
                        if ( (data[37].missing != -1) && (data[37].fvalue < (float)19.53811264)) {
                          result[1] += 0.39306104;
                        } else {
                          result[1] += 0.48838484;
                        }
                      } else {
                        result[1] += 0.65571475;
                      }
                    }
                  } else {
                    if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.93103021383)) {
                      result[1] += -0.09498384;
                    } else {
                      result[1] += 0.1341043;
                    }
                  }
                } else {
                  result[1] += -0.1004369;
                }
              }
            } else {
              if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.54161769152)) {
                if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.63733571768)) {
                  if ( (data[20].missing != -1) && (data[20].fvalue < (float)-0.53552961349)) {
                    if ( (data[43].missing != -1) && (data[43].fvalue < (float)0.0036577463616)) {
                      result[1] += -0;
                    } else {
                      result[1] += -0.091496386;
                    }
                  } else {
                    result[1] += 0.3894348;
                  }
                } else {
                  if ( (data[53].missing != -1) && (data[53].fvalue < (float)-0.1984834224)) {
                    result[1] += 0.19464508;
                  } else {
                    result[1] += 0.39495564;
                  }
                }
              } else {
                if ( (data[37].missing != -1) && (data[37].fvalue < (float)0.98161232471)) {
                  result[1] += 0.06040626;
                } else {
                  result[1] += -0.06882366;
                }
              }
            }
          } else {
            result[1] += -0.10910045;
          }
        } else {
          if ( (data[80].missing != -1) && (data[80].fvalue < (float)-0.28877517581)) {
            if ( (data[42].missing != -1) && (data[42].fvalue < (float)-0.010200172663)) {
              result[1] += -0.09509603;
            } else {
              result[1] += 0.16170621;
            }
          } else {
            result[1] += 0.3927274;
          }
        }
      } else {
        if ( (data[84].missing != -1) && (data[84].fvalue < (float)1)) {
          result[1] += -0.10148325;
        } else {
          result[1] += 0.44268176;
        }
      }
    } else {
      if ( (data[80].missing != -1) && (data[80].fvalue < (float)-0.28877517581)) {
        result[1] += -0.10159958;
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)1.797724247)) {
          result[1] += 0.39612514;
        } else {
          if ( (data[42].missing != -1) && (data[42].fvalue < (float)-0.010524100624)) {
            result[1] += 0.017776933;
          } else {
            result[1] += -0.08934795;
          }
        }
      }
    }
  }
  if ( (data[50].missing != -1) && (data[50].fvalue < (float)2.0699031353)) {
    if ( (data[87].missing != -1) && (data[87].fvalue < (float)1)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)3.2361967564)) {
        result[2] += -0.102124915;
      } else {
        result[2] += 0.00889349;
      }
    } else {
      if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31298440695)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.71015536785)) {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.62646782398)) {
            result[2] += 0.39364734;
          } else {
            result[2] += 0.72838134;
          }
        } else {
          result[2] += -0.0987382;
        }
      } else {
        result[2] += -0.10129244;
      }
    }
  } else {
    if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.45554211736)) {
      if ( (data[17].missing != -1) && (data[17].fvalue < (float)8.0779771805)) {
        result[2] += 0.39772347;
      } else {
        result[2] += 0.5039086;
      }
    } else {
      result[2] += -0.10061337;
    }
  }
  if ( (data[27].missing != -1) && (data[27].fvalue < (float)1.0054787397)) {
    result[3] += -0.10212488;
  } else {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)0.3592517674)) {
      result[3] += -0.09675616;
    } else {
      result[3] += 0.3941074;
    }
  }
  if ( (data[89].missing != -1) && (data[89].fvalue < (float)1)) {
    result[4] += -0.102030575;
  } else {
    result[4] += 0.39414674;
  }
  if ( (data[79].missing != -1) && (data[79].fvalue < (float)6.0763492584)) {
    if ( (data[37].missing != -1) && (data[37].fvalue < (float)3.6165232658)) {
      result[5] += -0.10207658;
    } else {
      if ( (data[84].missing != -1) && (data[84].fvalue < (float)1)) {
        result[5] += -0;
      } else {
        result[5] += -0.093707494;
      }
    }
  } else {
    if ( (data[71].missing != -1) && (data[71].fvalue < (float)0.20683848858)) {
      if ( (data[71].missing != -1) && (data[71].fvalue < (float)-0.046441379935)) {
        result[5] += -0.10075962;
      } else {
        if ( (data[72].missing != -1) && (data[72].fvalue < (float)1.1335852146)) {
          result[5] += -0;
        } else {
          result[5] += -0.08394161;
        }
      }
    } else {
      if ( (data[44].missing != -1) && (data[44].fvalue < (float)1.6984145986e-05)) {
        result[5] += 0.28951195;
      } else {
        result[5] += -0.094569355;
      }
    }
  }
  result[6] += -0.10190607;
  if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.83832764626)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.68544656038)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.42764511704)) {
        result[7] += -0.101397224;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.60121154785)) {
          result[7] += -0.10028361;
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.56495398283)) {
            result[7] += 0.39465997;
          } else {
            result[7] += -0.09132569;
          }
        }
      }
    } else {
      result[7] += -0.10149664;
    }
  } else {
    result[7] += -0.102123134;
  }
  if ( (data[80].missing != -1) && (data[80].fvalue < (float)9.5720357895)) {
    result[8] += -0.10207768;
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.62000608444)) {
      result[8] += -0.09398177;
    } else {
      result[8] += 0.39423174;
    }
  }
  if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.5824829936)) {
    if ( (data[86].missing != -1) && (data[86].fvalue < (float)1)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)-0.51474040747)) {
        if ( (data[27].missing != -1) && (data[27].fvalue < (float)0.62955474854)) {
          result[9] += 0.3950482;
        } else {
          result[9] += -0.049004715;
        }
      } else {
        result[9] += -0.07390133;
      }
    } else {
      if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.0078816348687)) {
        if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.83832764626)) {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.61771321297)) {
            result[9] += -0.08838815;
          } else {
            result[9] += 0.026187837;
          }
        } else {
          result[9] += -0.10103639;
        }
      } else {
        if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.7070043087)) {
          result[9] += 0.12788816;
        } else {
          result[9] += -0.027226346;
        }
      }
    }
  } else {
    if ( (data[87].missing != -1) && (data[87].fvalue < (float)1)) {
      if ( (data[72].missing != -1) && (data[72].fvalue < (float)3.9158737659)) {
        if ( (data[37].missing != -1) && (data[37].fvalue < (float)3.5604615211)) {
          result[9] += -0.10203279;
        } else {
          result[9] += -0.041193575;
        }
      } else {
        result[9] += -0.012424972;
      }
    } else {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.039231427014)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.71015536785)) {
          result[9] += -0.08865825;
        } else {
          result[9] += 0.41007137;
        }
      } else {
        result[9] += -0.10091515;
      }
    }
  }
  if ( (data[23].missing != -1) && (data[23].fvalue < (float)10.179190636)) {
    result[10] += -0.10208932;
  } else {
    result[10] += 0.39407182;
  }
  if ( (data[47].missing != -1) && (data[47].fvalue < (float)-0.015903236344)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)2.1672489643)) {
      if ( (data[55].missing != -1) && (data[55].fvalue < (float)7.806274516e-05)) {
        if ( (data[82].missing != -1) && (data[82].fvalue < (float)1)) {
          if ( (data[55].missing != -1) && (data[55].fvalue < (float)-0.10687579215)) {
            if ( (data[27].missing != -1) && (data[27].fvalue < (float)0.23728621006)) {
              if ( (data[32].missing != -1) && (data[32].fvalue < (float)8.1173200607)) {
                if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.88479340076)) {
                  if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.6029086709)) {
                    if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.46552827954)) {
                      if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.15619270504)) {
                        result[11] += 0.26942697;
                      } else {
                        result[11] += -0.09824656;
                      }
                    } else {
                      result[11] += -0.101773955;
                    }
                  } else {
                    result[11] += 0.013706507;
                  }
                } else {
                  if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.81487703323)) {
                    result[11] += 0.1609689;
                  } else {
                    if ( (data[86].missing != -1) && (data[86].fvalue < (float)1)) {
                      if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62004947662)) {
                        if ( (data[27].missing != -1) && (data[27].fvalue < (float)0.18825264275)) {
                          if ( (data[36].missing != -1) && (data[36].fvalue < (float)1.6514831781)) {
                            result[11] += 0.053063784;
                          } else {
                            result[11] += -0.08222536;
                          }
                        } else {
                          result[11] += -0.089607045;
                        }
                      } else {
                        result[11] += 0.13807733;
                      }
                    } else {
                      if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59750467539)) {
                        result[11] += -0;
                      } else {
                        if ( (data[34].missing != -1) && (data[34].fvalue < (float)-0.20895290375)) {
                          result[11] += -0.0987828;
                        } else {
                          result[11] += -0.003765334;
                        }
                      }
                    }
                  }
                }
              } else {
                result[11] += 0.091188036;
              }
            } else {
              if ( (data[1].missing != -1) && (data[1].fvalue < (float)1.7314175367)) {
                if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.50391459465)) {
                  if ( (data[40].missing != -1) && (data[40].fvalue < (float)0.11706339568)) {
                    result[11] += 0.19573225;
                  } else {
                    result[11] += 0.07053444;
                  }
                } else {
                  result[11] += -0.08195301;
                }
              } else {
                result[11] += 0.60152304;
              }
            }
          } else {
            if ( (data[34].missing != -1) && (data[34].fvalue < (float)-0.20994369686)) {
              result[11] += 0.40182737;
            } else {
              if ( (data[32].missing != -1) && (data[32].fvalue < (float)3.4935674667)) {
                if ( (data[34].missing != -1) && (data[34].fvalue < (float)-0.20964646339)) {
                  if ( (data[32].missing != -1) && (data[32].fvalue < (float)2.623752594)) {
                    result[11] += -0.088236116;
                  } else {
                    result[11] += 0.13423535;
                  }
                } else {
                  if ( (data[44].missing != -1) && (data[44].fvalue < (float)-0.03691521287)) {
                    result[11] += -0.096393414;
                  } else {
                    result[11] += -0.00088966946;
                  }
                }
              } else {
                if ( (data[55].missing != -1) && (data[55].fvalue < (float)-0.084266364574)) {
                  if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.33477210999)) {
                    result[11] += -0;
                  } else {
                    result[11] += 0.22487043;
                  }
                } else {
                  if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31372666359)) {
                    result[11] += 0.15860763;
                  } else {
                    if ( (data[32].missing != -1) && (data[32].fvalue < (float)7.2017254829)) {
                      result[11] += 0.40897453;
                    } else {
                      result[11] += 0.24190867;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( (data[79].missing != -1) && (data[79].fvalue < (float)6.0763492584)) {
            if ( (data[35].missing != -1) && (data[35].fvalue < (float)4.8224534988)) {
              result[11] += -0.1020477;
            } else {
              result[11] += -0.009651474;
            }
          } else {
            result[11] += 0.0729336;
          }
        }
      } else {
        if ( (data[46].missing != -1) && (data[46].fvalue < (float)0.014761108905)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)0.45149809122)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.036982625723)) {
              if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.31842756271)) {
                result[11] += 0.31938276;
              } else {
                result[11] += 0.15111981;
              }
            } else {
              if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.17023339868)) {
                result[11] += 0.29427293;
              } else {
                result[11] += 0.59487426;
              }
            }
          } else {
            result[11] += -0.02140973;
          }
        } else {
          if ( (data[72].missing != -1) && (data[72].fvalue < (float)1.5056420565)) {
            if ( (data[27].missing != -1) && (data[27].fvalue < (float)0.33535334468)) {
              if ( (data[47].missing != -1) && (data[47].fvalue < (float)-0.016084119678)) {
                if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.71822422743)) {
                  result[11] += -0;
                } else {
                  result[11] += -0.09567151;
                }
              } else {
                result[11] += 0.10951003;
              }
            } else {
              result[11] += 0.14094816;
            }
          } else {
            result[11] += 0.37418264;
          }
        }
      }
    } else {
      if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.22042307258)) {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)2.4427080154)) {
          result[11] += -0.10164119;
        } else {
          if ( (data[59].missing != -1) && (data[59].fvalue < (float)-0.18191027641)) {
            result[11] += 0.21858042;
          } else {
            result[11] += -0.081076;
          }
        }
      } else {
        if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.51182812452)) {
          if ( (data[45].missing != -1) && (data[45].fvalue < (float)0.0045417477377)) {
            result[11] += 0.39139757;
          } else {
            result[11] += -0.047882695;
          }
        } else {
          if ( (data[15].missing != -1) && (data[15].fvalue < (float)0.72947192192)) {
            result[11] += -0.09345193;
          } else {
            result[11] += 0.01936678;
          }
        }
      }
    }
  } else {
    if ( (data[36].missing != -1) && (data[36].fvalue < (float)-0.61669498682)) {
      if ( (data[32].missing != -1) && (data[32].fvalue < (float)5.9198932648)) {
        if ( (data[47].missing != -1) && (data[47].fvalue < (float)0.032373789698)) {
          result[11] += -0.101703435;
        } else {
          if ( (data[36].missing != -1) && (data[36].fvalue < (float)-0.68227016926)) {
            result[11] += 0.16707198;
          } else {
            result[11] += -0.100585185;
          }
        }
      } else {
        if ( (data[56].missing != -1) && (data[56].fvalue < (float)-0.15283603966)) {
          result[11] += 0.06070008;
        } else {
          result[11] += -0;
        }
      }
    } else {
      if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.49173647165)) {
        if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.62648659945)) {
          if ( (data[84].missing != -1) && (data[84].fvalue < (float)1)) {
            if ( (data[72].missing != -1) && (data[72].fvalue < (float)0.59269851446)) {
              result[11] += 0.011259715;
            } else {
              result[11] += -0.078608915;
            }
          } else {
            result[11] += -0.09564277;
          }
        } else {
          if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.93103021383)) {
            if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60406202078)) {
              result[11] += 0.39539418;
            } else {
              result[11] += 0.53553313;
            }
          } else {
            result[11] += -0.08655142;
          }
        }
      } else {
        if ( (data[35].missing != -1) && (data[35].fvalue < (float)2.3171114922)) {
          if ( (data[45].missing != -1) && (data[45].fvalue < (float)-0.069677487016)) {
            result[11] += -0.09956624;
          } else {
            if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.29100000858)) {
              result[11] += -0.08788533;
            } else {
              if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.83999991417)) {
                result[11] += -0.07961041;
              } else {
                result[11] += 0.20041335;
              }
            }
          }
        } else {
          if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.16744674742)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.62005549669)) {
              result[11] += 0.005746048;
            } else {
              result[11] += -0.09099216;
            }
          } else {
            result[11] += 0.378468;
          }
        }
      }
    }
  }
  if ( (data[80].missing != -1) && (data[80].fvalue < (float)9.7740383148)) {
    if ( (data[32].missing != -1) && (data[32].fvalue < (float)6.7439284325)) {
      if ( (data[75].missing != -1) && (data[75].fvalue < (float)2.3511066437)) {
        if ( (data[58].missing != -1) && (data[58].fvalue < (float)-0.57980215549)) {
          result[12] += 0.061746113;
        } else {
          if ( (data[42].missing != -1) && (data[42].fvalue < (float)-0.010392322205)) {
            result[12] += -0.10197299;
          } else {
            if ( (data[80].missing != -1) && (data[80].fvalue < (float)-0.10689549893)) {
              if ( (data[77].missing != -1) && (data[77].fvalue < (float)0.16413605213)) {
                result[12] += -0.10182578;
              } else {
                if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.63551598787)) {
                  result[12] += -0;
                } else {
                  result[12] += -0.07675685;
                }
              }
            } else {
              if ( (data[80].missing != -1) && (data[80].fvalue < (float)0.33438891172)) {
                if ( (data[80].missing != -1) && (data[80].fvalue < (float)0.23471385241)) {
                  result[12] += 0.050409902;
                } else {
                  result[12] += 0.5976391;
                }
              } else {
                result[12] += -0.100647874;
              }
            }
          }
        }
      } else {
        result[12] += 0.11671773;
      }
    } else {
      if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31341737509)) {
        result[12] += 0.83421427;
      } else {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.5222806931)) {
          result[12] += -0;
        } else {
          result[12] += -0.098199025;
        }
      }
    }
  } else {
    result[12] += 0.67697984;
  }
  if ( (data[83].missing != -1) && (data[83].fvalue < (float)1)) {
    if ( (data[50].missing != -1) && (data[50].fvalue < (float)0.49784451723)) {
      if ( (data[78].missing != -1) && (data[78].fvalue < (float)3.4584906101)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.5824829936)) {
          result[0] += 0.015291378;
        } else {
          if ( (data[47].missing != -1) && (data[47].fvalue < (float)0.64647638798)) {
            if ( (data[52].missing != -1) && (data[52].fvalue < (float)0.23504699767)) {
              result[0] += -0.101197004;
            } else {
              result[0] += -0.02779928;
            }
          } else {
            result[0] += -0;
          }
        }
      } else {
        if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025407476351)) {
          if ( (data[44].missing != -1) && (data[44].fvalue < (float)-0.038927663118)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.039243385196)) {
              result[0] += 0.287668;
            } else {
              result[0] += -0.09755351;
            }
          } else {
            if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.53537410498)) {
              if ( (data[47].missing != -1) && (data[47].fvalue < (float)-0.016094919294)) {
                result[0] += 0.31425503;
              } else {
                result[0] += 0.41597596;
              }
            } else {
              if ( (data[47].missing != -1) && (data[47].fvalue < (float)-0.015904586762)) {
                result[0] += 0.29956725;
              } else {
                result[0] += 0.071596175;
              }
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.50391459465)) {
            if ( (data[55].missing != -1) && (data[55].fvalue < (float)-0.12265005708)) {
              result[0] += 0.002035071;
            } else {
              if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.15619270504)) {
                result[0] += 0.11144822;
              } else {
                result[0] += 0.38133076;
              }
            }
          } else {
            if ( (data[31].missing != -1) && (data[31].fvalue < (float)0.18281649053)) {
              result[0] += -0.10104729;
            } else {
              result[0] += -0.029004479;
            }
          }
        }
      }
    } else {
      if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025243291631)) {
        if ( (data[17].missing != -1) && (data[17].fvalue < (float)5.2582302094)) {
          if ( (data[17].missing != -1) && (data[17].fvalue < (float)1.0286098719)) {
            if ( (data[49].missing != -1) && (data[49].fvalue < (float)1.5571995974)) {
              result[0] += -0.093121305;
            } else {
              result[0] += 0.28035653;
            }
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)-0.44936171174)) {
              if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.17023339868)) {
                result[0] += 0.2832792;
              } else {
                result[0] += 0.566805;
              }
            } else {
              result[0] += 0.27862003;
            }
          }
        } else {
          if ( (data[71].missing != -1) && (data[71].fvalue < (float)0.26204559207)) {
            result[0] += -0;
          } else {
            result[0] += -0.07894344;
          }
        }
      } else {
        if ( (data[50].missing != -1) && (data[50].fvalue < (float)7.7017717361)) {
          result[0] += -0.097400256;
        } else {
          result[0] += -0;
        }
      }
    }
  } else {
    if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.024578202516)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)1.7314175367)) {
        if ( (data[37].missing != -1) && (data[37].fvalue < (float)0.44902396202)) {
          result[0] += -0.10041858;
        } else {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.53519374132)) {
            if ( (data[37].missing != -1) && (data[37].fvalue < (float)2.8316562176)) {
              if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.81487703323)) {
                result[0] += -0;
              } else {
                result[0] += -0.10035422;
              }
            } else {
              result[0] += 0.2731335;
            }
          } else {
            if ( (data[37].missing != -1) && (data[37].fvalue < (float)1.5982936621)) {
              if ( (data[33].missing != -1) && (data[33].fvalue < (float)1.2765849829)) {
                result[0] += 0.27902153;
              } else {
                result[0] += 0.32155535;
              }
            } else {
              if ( (data[4].missing != -1) && (data[4].fvalue < (float)-0.50166469812)) {
                result[0] += -0.09562595;
              } else {
                result[0] += 0.26868805;
              }
            }
          }
        }
      } else {
        result[0] += -0.10021419;
      }
    } else {
      if ( (data[37].missing != -1) && (data[37].fvalue < (float)1.0937361717)) {
        if ( (data[69].missing != -1) && (data[69].fvalue < (float)-0.39860424399)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.039240390062)) {
            result[0] += 0.05796477;
          } else {
            result[0] += 0.34657463;
          }
        } else {
          if ( (data[55].missing != -1) && (data[55].fvalue < (float)-0.035617761314)) {
            if ( (data[61].missing != -1) && (data[61].fvalue < (float)-0.16463732719)) {
              if ( (data[52].missing != -1) && (data[52].fvalue < (float)0.10056277364)) {
                if ( (data[55].missing != -1) && (data[55].fvalue < (float)-0.1285303086)) {
                  result[0] += -0.014128158;
                } else {
                  result[0] += -0.09996049;
                }
              } else {
                if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.22036042809)) {
                  if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59805238247)) {
                    result[0] += -0.085064255;
                  } else {
                    if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.20487844944)) {
                      result[0] += -0.078243434;
                    } else {
                      result[0] += 0.106247686;
                    }
                  }
                } else {
                  result[0] += -0.087482035;
                }
              }
            } else {
              result[0] += 0.16584201;
            }
          } else {
            if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.93103021383)) {
              result[0] += -0.08612234;
            } else {
              if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59750467539)) {
                result[0] += 0.29460523;
              } else {
                result[0] += 0.10289657;
              }
            }
          }
        }
      } else {
        if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.79142647982)) {
          result[0] += -0.08915512;
        } else {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.097951889)) {
            if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.0078816348687)) {
              result[0] += 0.3663375;
            } else {
              if ( (data[71].missing != -1) && (data[71].fvalue < (float)-0.45259317756)) {
                result[0] += -0;
              } else {
                result[0] += 0.25591275;
              }
            }
          } else {
            result[0] += -0.002572434;
          }
        }
      }
    }
  }
  if ( (data[53].missing != -1) && (data[53].fvalue < (float)-0.26869207621)) {
    if ( (data[80].missing != -1) && (data[80].fvalue < (float)-0.28237974644)) {
      if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.024974752218)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.57866376638)) {
          if ( (data[79].missing != -1) && (data[79].fvalue < (float)0.065078593791)) {
            result[1] += 0.16594493;
          } else {
            result[1] += 0.3988806;
          }
        } else {
          if ( (data[86].missing != -1) && (data[86].fvalue < (float)1)) {
            if ( (data[40].missing != -1) && (data[40].fvalue < (float)0.0035779729951)) {
              if ( (data[81].missing != -1) && (data[81].fvalue < (float)1)) {
                result[1] += -0.10118689;
              } else {
                result[1] += -0;
              }
            } else {
              result[1] += 0.015095667;
            }
          } else {
            if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.17132686079)) {
              result[1] += -0.09693202;
            } else {
              if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.80237007141)) {
                result[1] += 0.12661693;
              } else {
                result[1] += -0.09939202;
              }
            }
          }
        }
      } else {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.039240390062)) {
          if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.024123216048)) {
            result[1] += 0.19633265;
          } else {
            result[1] += 0.37674463;
          }
        } else {
          result[1] += 0.011632373;
        }
      }
    } else {
      if ( (data[78].missing != -1) && (data[78].fvalue < (float)3.4584906101)) {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)0.5904673934)) {
          result[1] += 0.288538;
        } else {
          result[1] += 0.16358472;
        }
      } else {
        result[1] += -0.09954954;
      }
    }
  } else {
    if ( (data[78].missing != -1) && (data[78].fvalue < (float)3.4584906101)) {
      if ( (data[83].missing != -1) && (data[83].fvalue < (float)1)) {
        if ( (data[44].missing != -1) && (data[44].fvalue < (float)0.18442375958)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)-0.51474040747)) {
            result[1] += 0.14266832;
          } else {
            result[1] += 0.2776301;
          }
        } else {
          result[1] += -0.09214537;
        }
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)-0.50166469812)) {
          if ( (data[54].missing != -1) && (data[54].fvalue < (float)-0.038957804441)) {
            if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.4328392446)) {
              result[1] += -0.09420985;
            } else {
              if ( (data[32].missing != -1) && (data[32].fvalue < (float)7.5221838951)) {
                if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.45484149456)) {
                  result[1] += 0.13633922;
                } else {
                  if ( (data[86].missing != -1) && (data[86].fvalue < (float)1)) {
                    if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.50391459465)) {
                      result[1] += -0.09729457;
                    } else {
                      result[1] += 0.31055474;
                    }
                  } else {
                    if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.15498234332)) {
                      if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31324729323)) {
                        result[1] += 0.27929056;
                      } else {
                        result[1] += 0.34644717;
                      }
                    } else {
                      result[1] += 0.10303309;
                    }
                  }
                }
              } else {
                result[1] += 0.050055217;
              }
            }
          } else {
            if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.40275913477)) {
              if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.64542460442)) {
                if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.038373697549)) {
                  result[1] += 0.1318785;
                } else {
                  result[1] += -0.04349259;
                }
              } else {
                if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.42648643255)) {
                  if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.54161769152)) {
                    result[1] += 0.2674965;
                  } else {
                    result[1] += -0.087899424;
                  }
                } else {
                  result[1] += 0.43568447;
                }
              }
            } else {
              if ( (data[32].missing != -1) && (data[32].fvalue < (float)5.7825541496)) {
                result[1] += -0.09612221;
              } else {
                if ( (data[32].missing != -1) && (data[32].fvalue < (float)7.430624485)) {
                  result[1] += 0.18193348;
                } else {
                  result[1] += -0;
                }
              }
            }
          }
        } else {
          result[1] += -0.10113207;
        }
      }
    } else {
      result[1] += -0.10125709;
    }
  }
  if ( (data[79].missing != -1) && (data[79].fvalue < (float)6.0763492584)) {
    if ( (data[87].missing != -1) && (data[87].fvalue < (float)1)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)3.2361967564)) {
        result[2] += -0.10119024;
      } else {
        result[2] += 0.0052368175;
      }
    } else {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.039231427014)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.71015536785)) {
          result[2] += 0.37079594;
        } else {
          result[2] += -0.096918754;
        }
      } else {
        result[2] += -0.100854516;
      }
    }
  } else {
    if ( (data[87].missing != -1) && (data[87].fvalue < (float)1)) {
      result[2] += -0.100691915;
    } else {
      if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.46908029914)) {
        result[2] += 0.28786358;
      } else {
        result[2] += -0.08536865;
      }
    }
  }
  if ( (data[27].missing != -1) && (data[27].fvalue < (float)1.0054787397)) {
    result[3] += -0.10120597;
  } else {
    if ( (data[27].missing != -1) && (data[27].fvalue < (float)1.0872013569)) {
      result[3] += 0.27738047;
    } else {
      result[3] += -0.09507368;
    }
  }
  if ( (data[89].missing != -1) && (data[89].fvalue < (float)1)) {
    result[4] += -0.101084776;
  } else {
    result[4] += 0.2775183;
  }
  if ( (data[27].missing != -1) && (data[27].fvalue < (float)1.3160247803)) {
    if ( (data[79].missing != -1) && (data[79].fvalue < (float)6.0763492584)) {
      result[5] += -0.10113699;
    } else {
      if ( (data[68].missing != -1) && (data[68].fvalue < (float)0.031676556915)) {
        result[5] += -0.099807166;
      } else {
        if ( (data[28].missing != -1) && (data[28].fvalue < (float)0.21893824637)) {
          result[5] += -0.08755189;
        } else {
          result[5] += 0.42765573;
        }
      }
    }
  } else {
    if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.57948327065)) {
      result[5] += 0.021730576;
    } else {
      result[5] += -0.09114181;
    }
  }
  result[6] += -0.10096923;
  if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31586059928)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.68544656038)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.42764511704)) {
        result[7] += -0.10038616;
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.60102975368)) {
          result[7] += -0.09910386;
        } else {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.15478906035)) {
            result[7] += 0.2775821;
          } else {
            result[7] += -0.08888611;
          }
        }
      }
    } else {
      result[7] += -0.100501165;
    }
  } else {
    result[7] += -0.10120344;
  }
  if ( (data[80].missing != -1) && (data[80].fvalue < (float)9.5720357895)) {
    result[8] += -0.1011519;
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62010836601)) {
      result[8] += -0.091913395;
    } else {
      result[8] += 0.27740636;
    }
  }
  if ( (data[1].missing != -1) && (data[1].fvalue < (float)3.6675543785)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)-0.51474040747)) {
      if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.48187279701)) {
        if ( (data[80].missing != -1) && (data[80].fvalue < (float)-0.43852174282)) {
          if ( (data[83].missing != -1) && (data[83].fvalue < (float)1)) {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.71015536785)) {
              result[9] += -0.077489115;
            } else {
              result[9] += 0.283407;
            }
          } else {
            result[9] += 0.27975625;
          }
        } else {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.15619270504)) {
            result[9] += -0.00042309635;
          } else {
            result[9] += -0.09544682;
          }
        }
      } else {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.4400168657)) {
          if ( (data[83].missing != -1) && (data[83].fvalue < (float)1)) {
            result[9] += -0.10106725;
          } else {
            if ( (data[86].missing != -1) && (data[86].fvalue < (float)1)) {
              if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.4555888176)) {
                result[9] += 0.28934857;
              } else {
                result[9] += -0.08882943;
              }
            } else {
              if ( (data[27].missing != -1) && (data[27].fvalue < (float)0.0084628881887)) {
                result[9] += -0.100665316;
              } else {
                if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.039243385196)) {
                  result[9] += 0.04414275;
                } else {
                  result[9] += -0.026364353;
                }
              }
            }
          }
        } else {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.17023339868)) {
            result[9] += -0.08577578;
          } else {
            result[9] += 0.28062537;
          }
        }
      }
    } else {
      result[9] += -0.101018585;
    }
  } else {
    if ( (data[13].missing != -1) && (data[13].fvalue < (float)-0.3027947247)) {
      if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.28573852777)) {
        result[9] += 0.2772959;
      } else {
        result[9] += 0.067458995;
      }
    } else {
      result[9] += -0.09854042;
    }
  }
  if ( (data[23].missing != -1) && (data[23].fvalue < (float)10.179190636)) {
    result[10] += -0.10116522;
  } else {
    result[10] += 0.27733004;
  }
  if ( (data[42].missing != -1) && (data[42].fvalue < (float)-0.010509602726)) {
    if ( (data[52].missing != -1) && (data[52].fvalue < (float)0.10056277364)) {
      if ( (data[37].missing != -1) && (data[37].fvalue < (float)4.345328331)) {
        if ( (data[15].missing != -1) && (data[15].fvalue < (float)0.72947192192)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.5824829936)) {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.93369174)) {
              if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.81487703323)) {
                result[11] += 0.3396911;
              } else {
                if ( (data[27].missing != -1) && (data[27].fvalue < (float)0.073840983212)) {
                  result[11] += -0.09430554;
                } else {
                  result[11] += 0.11020023;
                }
              }
            } else {
              if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.61899483204)) {
                if ( (data[71].missing != -1) && (data[71].fvalue < (float)-0.46307510138)) {
                  result[11] += -0.099513315;
                } else {
                  if ( (data[35].missing != -1) && (data[35].fvalue < (float)0.013004039414)) {
                    result[11] += 0.12615037;
                  } else {
                    result[11] += -0.0640069;
                  }
                }
              } else {
                if ( (data[71].missing != -1) && (data[71].fvalue < (float)-0.46831515431)) {
                  if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.88865399361)) {
                    result[11] += 0.0111964885;
                  } else {
                    result[11] += -0.08794193;
                  }
                } else {
                  result[11] += 0.23292111;
                }
              }
            }
          } else {
            if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025137545541)) {
              if ( (data[77].missing != -1) && (data[77].fvalue < (float)3.2038238049)) {
                result[11] += -0.10113452;
              } else {
                result[11] += -0.04485835;
              }
            } else {
              result[11] += -0;
            }
          }
        } else {
          if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.1878336966)) {
            result[11] += -0.10055147;
          } else {
            if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025360168889)) {
              result[11] += -0.08291985;
            } else {
              result[11] += 0.29496518;
            }
          }
        }
      } else {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)0.45149809122)) {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)-2.2394132614)) {
            result[11] += 0.08083726;
          } else {
            result[11] += -0.08581795;
          }
        } else {
          result[11] += 0.36835176;
        }
      }
    } else {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.46778979897)) {
        if ( (data[90].missing != -1) && (data[90].fvalue < (float)1)) {
          result[11] += -0.09984997;
        } else {
          result[11] += 0.2581577;
        }
      } else {
        if ( (data[37].missing != -1) && (data[37].fvalue < (float)1.3179839849)) {
          if ( (data[35].missing != -1) && (data[35].fvalue < (float)0.15605132282)) {
            if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31466990709)) {
              result[11] += 0.2565749;
            } else {
              if ( (data[37].missing != -1) && (data[37].fvalue < (float)1.0657052994)) {
                if ( (data[35].missing != -1) && (data[35].fvalue < (float)-0.12977306545)) {
                  result[11] += -0.031734195;
                } else {
                  if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31392768025)) {
                    result[11] += 0.3309006;
                  } else {
                    result[11] += 0.07881748;
                  }
                }
              } else {
                result[11] += 0.31105843;
              }
            }
          } else {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.097951889)) {
              if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.85385841131)) {
                result[11] += 0.3237573;
              } else {
                result[11] += 0.10527493;
              }
            } else {
              result[11] += 0.3911146;
            }
          }
        } else {
          result[11] += 0.44767645;
        }
      }
    }
  } else {
    if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.78673630953)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.56495398283)) {
        if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.80862355232)) {
          result[11] += 0.47882822;
        } else {
          result[11] += -0.0890332;
        }
      } else {
        if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.83832764626)) {
          if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.013868609443)) {
            result[11] += -0.08768522;
          } else {
            result[11] += 0.0016020004;
          }
        } else {
          result[11] += -0.10110449;
        }
      }
    } else {
      if ( (data[80].missing != -1) && (data[80].fvalue < (float)-0.37019988894)) {
        if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025413041934)) {
          result[11] += -0.099547446;
        } else {
          if ( (data[35].missing != -1) && (data[35].fvalue < (float)-0.32745957375)) {
            if ( (data[61].missing != -1) && (data[61].fvalue < (float)-0.16732256114)) {
              if ( (data[42].missing != -1) && (data[42].fvalue < (float)0.40617159009)) {
                result[11] += 0.34552205;
              } else {
                if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.61824411154)) {
                  result[11] += 0.12866946;
                } else {
                  result[11] += -0;
                }
              }
            } else {
              result[11] += -0.093905255;
            }
          } else {
            if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.30208304524)) {
              if ( (data[38].missing != -1) && (data[38].fvalue < (float)1.3613381386)) {
                if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.631049335)) {
                  result[11] += -0.08228257;
                } else {
                  if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.43112769723)) {
                    if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.50712585449)) {
                      result[11] += 0.27964553;
                    } else {
                      result[11] += 0.02744161;
                    }
                  } else {
                    result[11] += 0.43071374;
                  }
                }
              } else {
                result[11] += -0.087518536;
              }
            } else {
              if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.93506932259)) {
                result[11] += -0.098338775;
              } else {
                result[11] += 0.1569252;
              }
            }
          }
        }
      } else {
        if ( (data[26].missing != -1) && (data[26].fvalue < (float)40.746994019)) {
          result[11] += -0.10104955;
        } else {
          result[11] += 0.34814817;
        }
      }
    }
  }
  if ( (data[88].missing != -1) && (data[88].fvalue < (float)1)) {
    if ( (data[32].missing != -1) && (data[32].fvalue < (float)6.7439284325)) {
      if ( (data[79].missing != -1) && (data[79].fvalue < (float)6.1137475967)) {
        if ( (data[75].missing != -1) && (data[75].fvalue < (float)2.3511066437)) {
          if ( (data[58].missing != -1) && (data[58].fvalue < (float)-0.57980215549)) {
            result[12] += 0.032627437;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)3.2361967564)) {
              if ( (data[49].missing != -1) && (data[49].fvalue < (float)0.25168430805)) {
                if ( (data[37].missing != -1) && (data[37].fvalue < (float)4.5415453911)) {
                  result[12] += -0.10095802;
                } else {
                  result[12] += -0.047933504;
                }
              } else {
                if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.83999991417)) {
                  result[12] += 0.092887715;
                } else {
                  result[12] += -0.098413;
                }
              }
            } else {
              if ( (data[54].missing != -1) && (data[54].fvalue < (float)-0.0087187811732)) {
                result[12] += -0.07722105;
              } else {
                result[12] += 0.023452865;
              }
            }
          }
        } else {
          result[12] += 0.18143941;
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.83999991417)) {
          result[12] += 0.3555041;
        } else {
          result[12] += -0.10053858;
        }
      }
    } else {
      if ( (data[35].missing != -1) && (data[35].fvalue < (float)0.29399675131)) {
        result[12] += 0.37818798;
      } else {
        if ( (data[49].missing != -1) && (data[49].fvalue < (float)-0.040186408907)) {
          result[12] += -0.09651619;
        } else {
          result[12] += -0.0032244585;
        }
      }
    }
  } else {
    result[12] += 0.3821945;
  }
  if ( (data[83].missing != -1) && (data[83].fvalue < (float)1)) {
    if ( (data[51].missing != -1) && (data[51].fvalue < (float)0.64061713219)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)1.724832654)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)3.7342278957)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3.2750649452)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)3.7193567753)) {
              if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.5824829936)) {
                result[0] += -0;
              } else {
                if ( (data[52].missing != -1) && (data[52].fvalue < (float)0.23504699767)) {
                  if ( (data[67].missing != -1) && (data[67].fvalue < (float)0.86935961246)) {
                    if ( (data[45].missing != -1) && (data[45].fvalue < (float)-0.010286094621)) {
                      result[0] += -0.10013085;
                    } else {
                      if ( (data[42].missing != -1) && (data[42].fvalue < (float)-0.010531241074)) {
                        result[0] += -0;
                      } else {
                        result[0] += -0.09256326;
                      }
                    }
                  } else {
                    if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025471480563)) {
                      result[0] += 0.09113775;
                    } else {
                      result[0] += -0.097931996;
                    }
                  }
                } else {
                  result[0] += -0.006452542;
                }
              }
            } else {
              result[0] += -0;
            }
          } else {
            result[0] += 0.05274542;
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62010836601)) {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.73820483685)) {
              result[0] += -0.027613671;
            } else {
              if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.78405153751)) {
                result[0] += 0.22553273;
              } else {
                result[0] += 0.08534128;
              }
            }
          } else {
            result[0] += -0.098334685;
          }
        }
      } else {
        if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025407476351)) {
          if ( (data[55].missing != -1) && (data[55].fvalue < (float)-0.13260184228)) {
            result[0] += -0.09831324;
          } else {
            if ( (data[93].missing != -1) && (data[93].fvalue < (float)1)) {
              if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.95877230167)) {
                result[0] += 0.24177442;
              } else {
                result[0] += -0.09392555;
              }
            } else {
              result[0] += 0.24339224;
            }
          }
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)-0.48858895898)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)-0.50166469812)) {
              result[0] += 0.09848267;
            } else {
              result[0] += 0.34051615;
            }
          } else {
            if ( (data[31].missing != -1) && (data[31].fvalue < (float)0.52103292942)) {
              if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.52279245853)) {
                result[0] += -0.02618851;
              } else {
                result[0] += -0.09992613;
              }
            } else {
              result[0] += 0.08219531;
            }
          }
        }
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.83999991417)) {
        result[0] += -0.08945723;
      } else {
        if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.45558649302)) {
          result[0] += -0.093864;
        } else {
          if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025243291631)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1.7383306026)) {
              result[0] += 0.22565918;
            } else {
              if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.57992994785)) {
                result[0] += 0.21384166;
              } else {
                result[0] += 0.02236329;
              }
            }
          } else {
            result[0] += -0.034568507;
          }
        }
      }
    }
  } else {
    if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.024578202516)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)1.7314175367)) {
        if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.80720156431)) {
          result[0] += -0.09801605;
        } else {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.53519374132)) {
            if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31457713246)) {
              if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59750467539)) {
                result[0] += -0;
              } else {
                result[0] += -0.099198475;
              }
            } else {
              result[0] += 0.19579302;
            }
          } else {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.2629079819)) {
              if ( (data[62].missing != -1) && (data[62].fvalue < (float)0.054874494672)) {
                result[0] += 0.22144966;
              } else {
                result[0] += -0;
              }
            } else {
              result[0] += -0.08035658;
            }
          }
        }
      } else {
        result[0] += -0.09925664;
      }
    } else {
      if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.2248044759)) {
        if ( (data[52].missing != -1) && (data[52].fvalue < (float)0.23504699767)) {
          if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60342478752)) {
            if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.62383723259)) {
              if ( (data[33].missing != -1) && (data[33].fvalue < (float)-0.53069013357)) {
                if ( (data[52].missing != -1) && (data[52].fvalue < (float)0.10056277364)) {
                  result[0] += -0.09881641;
                } else {
                  if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.072406753898)) {
                    result[0] += -0.08862096;
                  } else {
                    if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59734815359)) {
                      if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62012577057)) {
                        result[0] += 0.04680777;
                      } else {
                        result[0] += -0.0062439544;
                      }
                    } else {
                      result[0] += -0.052755978;
                    }
                  }
                }
              } else {
                result[0] += 0.05763279;
              }
            } else {
              result[0] += 0.16604471;
            }
          } else {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.21259637177)) {
              result[0] += -0.08429362;
            } else {
              if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.94221127033)) {
                result[0] += 0.21326247;
              } else {
                result[0] += -0;
              }
            }
          }
        } else {
          if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.54161769152)) {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.6406987906)) {
              result[0] += -0.08739363;
            } else {
              if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62018883228)) {
                result[0] += 0.13694315;
              } else {
                if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62016826868)) {
                  result[0] += -0;
                } else {
                  result[0] += -0.049878143;
                }
              }
            }
          } else {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.94221127033)) {
              if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31372666359)) {
                result[0] += 0.30781573;
              } else {
                result[0] += 0.13345484;
              }
            } else {
              result[0] += 0.014749329;
            }
          }
        }
      } else {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.097951889)) {
          if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31298440695)) {
            result[0] += 0.01968542;
          } else {
            if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.18199364841)) {
              if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.5295907259)) {
                result[0] += 0.22415453;
              } else {
                result[0] += 0.12489575;
              }
            } else {
              result[0] += 0.03140106;
            }
          }
        } else {
          result[0] += -0.004706411;
        }
      }
    }
  }
  if ( (data[55].missing != -1) && (data[55].fvalue < (float)-0.1346296072)) {
    if ( (data[80].missing != -1) && (data[80].fvalue < (float)-0.28237974644)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.57866376638)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.082774102688)) {
          result[1] += 0.11376144;
        } else {
          result[1] += 0.25476065;
        }
      } else {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)-0.0058834324591)) {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.93369174)) {
            if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.77148842812)) {
              result[1] += -0.09179435;
            } else {
              if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.7241204381)) {
                result[1] += 0.35071093;
              } else {
                result[1] += -0.09215797;
              }
            }
          } else {
            result[1] += -0.099161506;
          }
        } else {
          result[1] += -0.10038894;
        }
      }
    } else {
      if ( (data[78].missing != -1) && (data[78].fvalue < (float)3.4584906101)) {
        result[1] += 0.2196522;
      } else {
        result[1] += -0.09848866;
      }
    }
  } else {
    if ( (data[78].missing != -1) && (data[78].fvalue < (float)3.4584906101)) {
      if ( (data[47].missing != -1) && (data[47].fvalue < (float)-0.0052432520315)) {
        if ( (data[53].missing != -1) && (data[53].fvalue < (float)-0.26869207621)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)-0.50166469812)) {
            if ( (data[55].missing != -1) && (data[55].fvalue < (float)-0.13423721492)) {
              if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.57785737514)) {
                if ( (data[32].missing != -1) && (data[32].fvalue < (float)2.5779726505)) {
                  result[1] += 0.15425646;
                } else {
                  if ( (data[32].missing != -1) && (data[32].fvalue < (float)2.7153120041)) {
                    result[1] += 0.3632756;
                  } else {
                    result[1] += 0.19417334;
                  }
                }
              } else {
                result[1] += 0.067938015;
              }
            } else {
              result[1] += -0.013550143;
            }
          } else {
            result[1] += -0.092950724;
          }
        } else {
          if ( (data[46].missing != -1) && (data[46].fvalue < (float)1.0866270065)) {
            if ( (data[32].missing != -1) && (data[32].fvalue < (float)5.9198932648)) {
              if ( (data[37].missing != -1) && (data[37].fvalue < (float)1.3179839849)) {
                if ( (data[83].missing != -1) && (data[83].fvalue < (float)1)) {
                  if ( (data[4].missing != -1) && (data[4].fvalue < (float)-0.51474040747)) {
                    result[1] += 0.06401072;
                  } else {
                    result[1] += 0.22018965;
                  }
                } else {
                  if ( (data[4].missing != -1) && (data[4].fvalue < (float)-0.50166469812)) {
                    if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.9311388731)) {
                      if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.93369174)) {
                        result[1] += 0.22090945;
                      } else {
                        if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.43109288812)) {
                          result[1] += -0.09740902;
                        } else {
                          result[1] += 0.08397734;
                        }
                      }
                    } else {
                      if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.62869435549)) {
                        if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.6201660037)) {
                          if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.051844842732)) {
                            result[1] += 0.30830446;
                          } else {
                            result[1] += 0.008702328;
                          }
                        } else {
                          result[1] += 0.22055817;
                        }
                      } else {
                        result[1] += -0.054414865;
                      }
                    }
                  } else {
                    result[1] += -0.09787512;
                  }
                }
              } else {
                if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.38747811317)) {
                  if ( (data[37].missing != -1) && (data[37].fvalue < (float)1.542231679)) {
                    result[1] += -0.0945761;
                  } else {
                    result[1] += -0.010565039;
                  }
                } else {
                  result[1] += 0.24811211;
                }
              }
            } else {
              if ( (data[32].missing != -1) && (data[32].fvalue < (float)6.9728269577)) {
                result[1] += -0.0995157;
              } else {
                if ( (data[35].missing != -1) && (data[35].fvalue < (float)0.35726323724)) {
                  result[1] += 0.27207;
                } else {
                  if ( (data[32].missing != -1) && (data[32].fvalue < (float)13.473548889)) {
                    result[1] += -0.07589102;
                  } else {
                    result[1] += 0.29573804;
                  }
                }
              }
            }
          } else {
            result[1] += -0.0691888;
          }
        }
      } else {
        if ( (data[83].missing != -1) && (data[83].fvalue < (float)1)) {
          if ( (data[78].missing != -1) && (data[78].fvalue < (float)-0.4874599874)) {
            result[1] += 0.06917186;
          } else {
            if ( (data[35].missing != -1) && (data[35].fvalue < (float)-0.56847894192)) {
              result[1] += 0.3392678;
            } else {
              result[1] += 0.2269239;
            }
          }
        } else {
          result[1] += -0.10018506;
        }
      }
    } else {
      result[1] += -0.10044421;
    }
  }
  if ( (data[79].missing != -1) && (data[79].fvalue < (float)6.0763492584)) {
    if ( (data[78].missing != -1) && (data[78].fvalue < (float)3.4584906101)) {
      result[2] += -0.10039292;
    } else {
      if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60146820545)) {
        if ( (data[22].missing != -1) && (data[22].fvalue < (float)-0.55805647373)) {
          result[2] += -0;
        } else {
          result[2] += -0.10024593;
        }
      } else {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.71015536785)) {
          result[2] += 0.26418212;
        } else {
          result[2] += -0.094314605;
        }
      }
    }
  } else {
    if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.45147165656)) {
      if ( (data[47].missing != -1) && (data[47].fvalue < (float)-0.015926184133)) {
        result[2] += -0.08226107;
      } else {
        result[2] += 0.22490391;
      }
    } else {
      if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31324729323)) {
        result[2] += -0;
      } else {
        result[2] += -0.09988106;
      }
    }
  }
  if ( (data[27].missing != -1) && (data[27].fvalue < (float)1.0054787397)) {
    result[3] += -0.100412905;
  } else {
    if ( (data[27].missing != -1) && (data[27].fvalue < (float)1.0872013569)) {
      result[3] += 0.22012356;
    } else {
      result[3] += -0.09377377;
    }
  }
  if ( (data[89].missing != -1) && (data[89].fvalue < (float)1)) {
    result[4] += -0.10028905;
  } else {
    result[4] += 0.2202071;
  }
  if ( (data[27].missing != -1) && (data[27].fvalue < (float)1.3160247803)) {
    if ( (data[79].missing != -1) && (data[79].fvalue < (float)6.0763492584)) {
      result[5] += -0.10033336;
    } else {
      if ( (data[71].missing != -1) && (data[71].fvalue < (float)-0.046441379935)) {
        result[5] += -0.09865915;
      } else {
        if ( (data[54].missing != -1) && (data[54].fvalue < (float)-0.012708449736)) {
          result[5] += 0.18977004;
        } else {
          result[5] += -0.09600141;
        }
      }
    }
  } else {
    if ( (data[30].missing != -1) && (data[30].fvalue < (float)0.45216721296)) {
      result[5] += 0.0016561587;
    } else {
      result[5] += -0.087909155;
    }
  }
  result[6] += -0.10012573;
  if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31586059928)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.68544656038)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.42764511704)) {
        result[7] += -0.099496074;
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.60102975368)) {
          result[7] += -0.09801446;
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.74213886261)) {
            result[7] += 0.22018819;
          } else {
            result[7] += -0.08658108;
          }
        }
      }
    } else {
      result[7] += -0.099616595;
    }
  } else {
    result[7] += -0.10040956;
  }
  if ( (data[80].missing != -1) && (data[80].fvalue < (float)9.5720357895)) {
    result[8] += -0.100350685;
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62010836601)) {
      result[8] += -0.089832775;
    } else {
      result[8] += 0.2201463;
    }
  }
  if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.5824829936)) {
    if ( (data[84].missing != -1) && (data[84].fvalue < (float)1)) {
      if ( (data[30].missing != -1) && (data[30].fvalue < (float)-1.0593373775)) {
        result[9] += 0.1488132;
      } else {
        if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.75656324625)) {
          if ( (data[86].missing != -1) && (data[86].fvalue < (float)1)) {
            result[9] += -0.03160999;
          } else {
            result[9] += -0.09904871;
          }
        } else {
          if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.7070043087)) {
            result[9] += 0.116707616;
          } else {
            result[9] += -0.04077969;
          }
        }
      }
    } else {
      if ( (data[83].missing != -1) && (data[83].fvalue < (float)1)) {
        result[9] += -0.085388035;
      } else {
        if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.54449033737)) {
          result[9] += 0.221898;
        } else {
          result[9] += -0;
        }
      }
    }
  } else {
    if ( (data[87].missing != -1) && (data[87].fvalue < (float)1)) {
      result[9] += -0.10022852;
    } else {
      if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.64759612083)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.71015536785)) {
          result[9] += -0.08309945;
        } else {
          result[9] += 0.21890181;
        }
      } else {
        result[9] += -0.10003696;
      }
    }
  }
  if ( (data[23].missing != -1) && (data[23].fvalue < (float)10.179190636)) {
    result[10] += -0.10038128;
  } else {
    result[10] += 0.22006603;
  }
  if ( (data[42].missing != -1) && (data[42].fvalue < (float)-0.010509602726)) {
    if ( (data[52].missing != -1) && (data[52].fvalue < (float)0.10056277364)) {
      if ( (data[87].missing != -1) && (data[87].fvalue < (float)1)) {
        if ( (data[27].missing != -1) && (data[27].fvalue < (float)1.7409822941)) {
          if ( (data[81].missing != -1) && (data[81].fvalue < (float)1)) {
            if ( (data[82].missing != -1) && (data[82].fvalue < (float)1)) {
              if ( (data[27].missing != -1) && (data[27].fvalue < (float)0.23728621006)) {
                if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.23670496047)) {
                  if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.61899483204)) {
                    if ( (data[35].missing != -1) && (data[35].fvalue < (float)1.103725791)) {
                      result[11] += -0.0986517;
                    } else {
                      if ( (data[36].missing != -1) && (data[36].fvalue < (float)1.7235001326)) {
                        result[11] += -0;
                      } else {
                        result[11] += -0.08218926;
                      }
                    }
                  } else {
                    if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.61797738075)) {
                      result[11] += 0.19066915;
                    } else {
                      result[11] += -0.088945664;
                    }
                  }
                } else {
                  if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.6291359067)) {
                    if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.22036042809)) {
                      result[11] += -0.023630088;
                    } else {
                      result[11] += 0.11168983;
                    }
                  } else {
                    if ( (data[86].missing != -1) && (data[86].fvalue < (float)1)) {
                      if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.82930922508)) {
                        result[11] += 0.22084711;
                      } else {
                        result[11] += -0.08740878;
                      }
                    } else {
                      if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.0078816348687)) {
                        if ( (data[35].missing != -1) && (data[35].fvalue < (float)0.097454592586)) {
                          result[11] += -0.10018943;
                        } else {
                          if ( (data[44].missing != -1) && (data[44].fvalue < (float)-0.039033170789)) {
                            result[11] += 0.03485387;
                          } else {
                            result[11] += -0.0952391;
                          }
                        }
                      } else {
                        if ( (data[27].missing != -1) && (data[27].fvalue < (float)0.0084628881887)) {
                          result[11] += -0;
                        } else {
                          result[11] += -0.047921307;
                        }
                      }
                    }
                  }
                }
              } else {
                result[11] += 0.061685387;
              }
            } else {
              if ( (data[13].missing != -1) && (data[13].fvalue < (float)2.4427080154)) {
                result[11] += -0.10030941;
              } else {
                if ( (data[70].missing != -1) && (data[70].fvalue < (float)-0.077996723354)) {
                  result[11] += -0.0806326;
                } else {
                  result[11] += 0.09187788;
                }
              }
            }
          } else {
            result[11] += 0.26451537;
          }
        } else {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)0.45149809122)) {
            result[11] += -0.017933417;
          } else {
            result[11] += 0.27336046;
          }
        }
      } else {
        if ( (data[33].missing != -1) && (data[33].fvalue < (float)0.056300889701)) {
          result[11] += -0.09838296;
        } else {
          result[11] += 0.21666504;
        }
      }
    } else {
      if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.18767139316)) {
        if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.25304949284)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.17023339868)) {
            if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.38253700733)) {
              if ( (data[33].missing != -1) && (data[33].fvalue < (float)-0.65615385771)) {
                result[11] += 0.15766212;
              } else {
                result[11] += 0.286844;
              }
            } else {
              if ( (data[35].missing != -1) && (data[35].fvalue < (float)0.17355711758)) {
                result[11] += -0.032232724;
              } else {
                if ( (data[35].missing != -1) && (data[35].fvalue < (float)0.35726323724)) {
                  result[11] += 0.13900867;
                } else {
                  result[11] += 0.24476251;
                }
              }
            }
          } else {
            result[11] += -0;
          }
        } else {
          if ( (data[35].missing != -1) && (data[35].fvalue < (float)-0.057024430484)) {
            if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.22036042809)) {
              result[11] += -0.09391708;
            } else {
              result[11] += -0.017373364;
            }
          } else {
            result[11] += 0.0532509;
          }
        }
      } else {
        if ( (data[35].missing != -1) && (data[35].fvalue < (float)0.21910408139)) {
          if ( (data[33].missing != -1) && (data[33].fvalue < (float)-0.57848584652)) {
            if ( (data[53].missing != -1) && (data[53].fvalue < (float)-0.2361369431)) {
              if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.038621056825)) {
                if ( (data[33].missing != -1) && (data[33].fvalue < (float)-0.65167301893)) {
                  result[11] += 0.24876016;
                } else {
                  result[11] += 0.07774504;
                }
              } else {
                result[11] += -0;
              }
            } else {
              result[11] += 0.2835126;
            }
          } else {
            result[11] += 0.2885242;
          }
        } else {
          result[11] += 0.04045559;
        }
      }
    }
  } else {
    if ( (data[33].missing != -1) && (data[33].fvalue < (float)-0.64719218016)) {
      if ( (data[83].missing != -1) && (data[83].fvalue < (float)1)) {
        if ( (data[52].missing != -1) && (data[52].fvalue < (float)0.23504699767)) {
          if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.83832764626)) {
            result[11] += -0.02026176;
          } else {
            result[11] += -0.09991133;
          }
        } else {
          result[11] += 0.07224541;
        }
      } else {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)1.0963844061)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.17023339868)) {
            result[11] += 0.1372393;
          } else {
            result[11] += 0.41048822;
          }
        } else {
          if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.80237007141)) {
            result[11] += -0.086320065;
          } else {
            if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.61824411154)) {
              result[11] += 0.14867032;
            } else {
              result[11] += -0;
            }
          }
        }
      }
    } else {
      if ( (data[80].missing != -1) && (data[80].fvalue < (float)-0.37019988894)) {
        if ( (data[84].missing != -1) && (data[84].fvalue < (float)1)) {
          if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025413041934)) {
            result[11] += -0.09595235;
          } else {
            if ( (data[33].missing != -1) && (data[33].fvalue < (float)1.4050359726)) {
              if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.25304949284)) {
                if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.38903820515)) {
                  result[11] += 0.22107248;
                } else {
                  result[11] += 0.3805602;
                }
              } else {
                if ( (data[42].missing != -1) && (data[42].fvalue < (float)-0.010392322205)) {
                  result[11] += -0.08840213;
                } else {
                  result[11] += 0.02372179;
                }
              }
            } else {
              result[11] += -0.08484226;
            }
          }
        } else {
          if ( (data[65].missing != -1) && (data[65].fvalue < (float)-0.07379039377)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.43112769723)) {
              result[11] += -0.09619244;
            } else {
              result[11] += -0;
            }
          } else {
            result[11] += 0.1672865;
          }
        }
      } else {
        if ( (data[25].missing != -1) && (data[25].fvalue < (float)57.008499146)) {
          if ( (data[75].missing != -1) && (data[75].fvalue < (float)0.14207716286)) {
            result[11] += -0.09999153;
          } else {
            result[11] += -0.012402504;
          }
        } else {
          result[11] += 0.36828807;
        }
      }
    }
  }
  if ( (data[88].missing != -1) && (data[88].fvalue < (float)1)) {
    if ( (data[32].missing != -1) && (data[32].fvalue < (float)6.7439284325)) {
      if ( (data[79].missing != -1) && (data[79].fvalue < (float)6.1137475967)) {
        if ( (data[77].missing != -1) && (data[77].fvalue < (float)4.8884630203)) {
          if ( (data[27].missing != -1) && (data[27].fvalue < (float)1.8553940058)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.57866376638)) {
              result[12] += 0.05086289;
            } else {
              if ( (data[18].missing != -1) && (data[18].fvalue < (float)3.2361967564)) {
                result[12] += -0.100072905;
              } else {
                result[12] += -0.03971402;
              }
            }
          } else {
            result[12] += 0.02394954;
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.74213886261)) {
            result[12] += 0.26756358;
          } else {
            result[12] += -0.08917533;
          }
        }
      } else {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.0699566603)) {
          result[12] += 0.27709183;
        } else {
          result[12] += -0.099622026;
        }
      }
    } else {
      if ( (data[32].missing != -1) && (data[32].fvalue < (float)6.9270472527)) {
        result[12] += 0.26670122;
      } else {
        if ( (data[49].missing != -1) && (data[49].fvalue < (float)-0.040266092867)) {
          result[12] += -0.09529005;
        } else {
          result[12] += -0;
        }
      }
    }
  } else {
    result[12] += 0.2742982;
  }
  if ( (data[86].missing != -1) && (data[86].fvalue < (float)1)) {
    if ( (data[51].missing != -1) && (data[51].fvalue < (float)0.64061713219)) {
      if ( (data[78].missing != -1) && (data[78].fvalue < (float)3.4584906101)) {
        if ( (data[82].missing != -1) && (data[82].fvalue < (float)1)) {
          if ( (data[35].missing != -1) && (data[35].fvalue < (float)-0.25344574451)) {
            if ( (data[55].missing != -1) && (data[55].fvalue < (float)7.806274516e-05)) {
              result[0] += -0.09564704;
            } else {
              if ( (data[69].missing != -1) && (data[69].fvalue < (float)-0.20082317293)) {
                result[0] += 0.0882577;
              } else {
                result[0] += -0.008108676;
              }
            }
          } else {
            if ( (data[28].missing != -1) && (data[28].fvalue < (float)1.3149677515)) {
              result[0] += 0.08550921;
            } else {
              result[0] += 0.20166293;
            }
          }
        } else {
          if ( (data[47].missing != -1) && (data[47].fvalue < (float)0.64647638798)) {
            result[0] += -0.09972327;
          } else {
            result[0] += -0.010748669;
          }
        }
      } else {
        if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025407476351)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.61899483204)) {
            if ( (data[28].missing != -1) && (data[28].fvalue < (float)0.21893824637)) {
              result[0] += 0.20772704;
            } else {
              if ( (data[47].missing != -1) && (data[47].fvalue < (float)-0.015904586762)) {
                result[0] += 0.18435569;
              } else {
                result[0] += -0.0064801355;
              }
            }
          } else {
            result[0] += -0.09835775;
          }
        } else {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.52279245853)) {
            if ( (data[47].missing != -1) && (data[47].fvalue < (float)-0.015892436728)) {
              if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.62003624439)) {
                result[0] += 0.14682439;
              } else {
                result[0] += 0.021080406;
              }
            } else {
              result[0] += 0.31837457;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)-0.47597688437)) {
              result[0] += -0.09946493;
            } else {
              result[0] += -0.00885307;
            }
          }
        }
      }
    } else {
      if ( (data[80].missing != -1) && (data[80].fvalue < (float)-0.37019988894)) {
        if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.45558649302)) {
          result[0] += -0.0840408;
        } else {
          if ( (data[69].missing != -1) && (data[69].fvalue < (float)2.2985236645)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)-0.44936171174)) {
              result[0] += 0.29476765;
            } else {
              result[0] += 0.189169;
            }
          } else {
            result[0] += 0.07682354;
          }
        }
      } else {
        if ( (data[47].missing != -1) && (data[47].fvalue < (float)-0.016124617308)) {
          result[0] += 0.18390426;
        } else {
          if ( (data[17].missing != -1) && (data[17].fvalue < (float)2.4384834766)) {
            result[0] += -0.097845;
          } else {
            if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025475654751)) {
              result[0] += 0.17559169;
            } else {
              result[0] += -0.068948016;
            }
          }
        }
      }
    }
  } else {
    if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.024578202516)) {
      if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.78908890486)) {
        if ( (data[37].missing != -1) && (data[37].fvalue < (float)0.56114780903)) {
          if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.63217777014)) {
            result[0] += 0.06972734;
          } else {
            result[0] += 0.17976525;
          }
        } else {
          result[0] += -0.03363965;
        }
      } else {
        result[0] += 0.18305837;
      }
    } else {
      if ( (data[37].missing != -1) && (data[37].fvalue < (float)1.0937361717)) {
        if ( (data[69].missing != -1) && (data[69].fvalue < (float)-0.39860424399)) {
          if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59734815359)) {
            if ( (data[69].missing != -1) && (data[69].fvalue < (float)-0.39887568355)) {
              result[0] += 0.11621063;
            } else {
              result[0] += 0.27763024;
            }
          } else {
            result[0] += -0;
          }
        } else {
          if ( (data[52].missing != -1) && (data[52].fvalue < (float)0.23504699767)) {
            if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59507888556)) {
              if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.6029086709)) {
                if ( (data[52].missing != -1) && (data[52].fvalue < (float)0.10056277364)) {
                  result[0] += -0.098566875;
                } else {
                  if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.77788865566)) {
                    if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.6041829586)) {
                      result[0] += -0.015649175;
                    } else {
                      result[0] += -0.08717196;
                    }
                  } else {
                    result[0] += -0;
                  }
                }
              } else {
                result[0] += 0.0032717716;
              }
            } else {
              result[0] += 0.117601804;
            }
          } else {
            if ( (data[37].missing != -1) && (data[37].fvalue < (float)1.0096433163)) {
              if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59805238247)) {
                result[0] += -0.08241933;
              } else {
                if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.54161769152)) {
                  result[0] += 0.062203534;
                } else {
                  if ( (data[35].missing != -1) && (data[35].fvalue < (float)0.12133514881)) {
                    result[0] += 0.31658286;
                  } else {
                    result[0] += 0.062346615;
                  }
                }
              }
            } else {
              result[0] += -0.063756436;
            }
          }
        }
      } else {
        if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.79142647982)) {
          result[0] += -0.084221885;
        } else {
          if ( (data[35].missing != -1) && (data[35].fvalue < (float)0.21910408139)) {
            if ( (data[35].missing != -1) && (data[35].fvalue < (float)-0.12977306545)) {
              if ( (data[55].missing != -1) && (data[55].fvalue < (float)-0.082331426442)) {
                result[0] += 0.2951296;
              } else {
                if ( (data[73].missing != -1) && (data[73].fvalue < (float)1.0611419678)) {
                  result[0] += 0.14212327;
                } else {
                  result[0] += 0.017113486;
                }
              }
            } else {
              if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.69918745756)) {
                result[0] += -0.027706292;
              } else {
                result[0] += 0.06929782;
              }
            }
          } else {
            if ( (data[35].missing != -1) && (data[35].fvalue < (float)0.31368622184)) {
              result[0] += 0.33244562;
            } else {
              if ( (data[55].missing != -1) && (data[55].fvalue < (float)-0.12352977693)) {
                result[0] += 0.09209504;
              } else {
                result[0] += 0.22692709;
              }
            }
          }
        }
      }
    }
  }
  if ( (data[55].missing != -1) && (data[55].fvalue < (float)-0.1346296072)) {
    if ( (data[80].missing != -1) && (data[80].fvalue < (float)-0.28237974644)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.5824829936)) {
        if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59734815359)) {
          if ( (data[15].missing != -1) && (data[15].fvalue < (float)0.17268300056)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.17023339868)) {
              result[1] += 0.02534822;
            } else {
              result[1] += -0.0992938;
            }
          } else {
            result[1] += 0.22328115;
          }
        } else {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)1.0963844061)) {
            result[1] += -0.07752969;
          } else {
            if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.80237007141)) {
              result[1] += 0.14818244;
            } else {
              result[1] += -0.09203265;
            }
          }
        }
      } else {
        result[1] += -0.09962133;
      }
    } else {
      if ( (data[78].missing != -1) && (data[78].fvalue < (float)3.4584906101)) {
        if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59805238247)) {
          result[1] += 0.17855275;
        } else {
          result[1] += 0.2913655;
        }
      } else {
        result[1] += -0.09746142;
      }
    }
  } else {
    if ( (data[78].missing != -1) && (data[78].fvalue < (float)3.4584906101)) {
      if ( (data[47].missing != -1) && (data[47].fvalue < (float)-0.0052432520315)) {
        if ( (data[53].missing != -1) && (data[53].fvalue < (float)-0.26869207621)) {
          if ( (data[34].missing != -1) && (data[34].fvalue < (float)-0.20938225091)) {
            if ( (data[44].missing != -1) && (data[44].fvalue < (float)-0.039030920714)) {
              if ( (data[32].missing != -1) && (data[32].fvalue < (float)2.5779726505)) {
                result[1] += 0.008177882;
              } else {
                if ( (data[32].missing != -1) && (data[32].fvalue < (float)2.7153120041)) {
                  result[1] += 0.2733046;
                } else {
                  result[1] += 0.14462876;
                }
              }
            } else {
              result[1] += 0.30275568;
            }
          } else {
            result[1] += -0.091933265;
          }
        } else {
          if ( (data[75].missing != -1) && (data[75].fvalue < (float)0.12649607658)) {
            if ( (data[90].missing != -1) && (data[90].fvalue < (float)1)) {
              if ( (data[32].missing != -1) && (data[32].fvalue < (float)5.9198932648)) {
                if ( (data[55].missing != -1) && (data[55].fvalue < (float)7.806274516e-05)) {
                  if ( (data[83].missing != -1) && (data[83].fvalue < (float)1)) {
                    result[1] += 0.1859899;
                  } else {
                    if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.27981966734)) {
                      if ( (data[55].missing != -1) && (data[55].fvalue < (float)-0.085162721574)) {
                        if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.45484149456)) {
                          if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.17023339868)) {
                            result[1] += -0.054073755;
                          } else {
                            result[1] += 0.20886776;
                          }
                        } else {
                          result[1] += 0.18649678;
                        }
                      } else {
                        if ( (data[32].missing != -1) && (data[32].fvalue < (float)2.5779726505)) {
                          result[1] += -0;
                        } else {
                          if ( (data[32].missing != -1) && (data[32].fvalue < (float)4.82117939)) {
                            if ( (data[32].missing != -1) && (data[32].fvalue < (float)4.7753996849)) {
                              if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31457713246)) {
                                result[1] += 0.18960316;
                              } else {
                                result[1] += 0.09536148;
                              }
                            } else {
                              result[1] += 0.25709847;
                            }
                          } else {
                            result[1] += -0;
                          }
                        }
                      }
                    } else {
                      result[1] += -0.096583;
                    }
                  }
                } else {
                  if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.7738250494)) {
                    if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.15619270504)) {
                      if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.60498034954)) {
                        result[1] += -0.018433234;
                      } else {
                        result[1] += 0.13229938;
                      }
                    } else {
                      result[1] += 0.18701275;
                    }
                  } else {
                    if ( (data[83].missing != -1) && (data[83].fvalue < (float)1)) {
                      result[1] += 0.15481234;
                    } else {
                      result[1] += -0.087775;
                    }
                  }
                }
              } else {
                if ( (data[32].missing != -1) && (data[32].fvalue < (float)7.0186066628)) {
                  result[1] += -0.097500436;
                } else {
                  if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.62101882696)) {
                    result[1] += 0.22409171;
                  } else {
                    if ( (data[40].missing != -1) && (data[40].fvalue < (float)0.41258627176)) {
                      result[1] += -0.09090509;
                    } else {
                      result[1] += 0.2475959;
                    }
                  }
                }
              }
            } else {
              if ( (data[53].missing != -1) && (data[53].fvalue < (float)-0.26050439477)) {
                result[1] += -0.09438577;
              } else {
                result[1] += 0.062351953;
              }
            }
          } else {
            result[1] += -0.092106;
          }
        }
      } else {
        if ( (data[83].missing != -1) && (data[83].fvalue < (float)1)) {
          if ( (data[78].missing != -1) && (data[78].fvalue < (float)-0.4874599874)) {
            result[1] += 0.0511442;
          } else {
            result[1] += 0.19642584;
          }
        } else {
          result[1] += -0.099387;
        }
      }
    } else {
      result[1] += -0.0997241;
    }
  }
  if ( (data[79].missing != -1) && (data[79].fvalue < (float)6.0763492584)) {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)3.2361967564)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)-0.51474040747)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)1.797724247)) {
          result[2] += -0.099388905;
        } else {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.71015536785)) {
            result[2] += 0.21349514;
          } else {
            result[2] += -0.09117779;
          }
        }
      } else {
        result[2] += -0.09971134;
      }
    } else {
      result[2] += -0;
    }
  } else {
    if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.45147165656)) {
      if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.58435863256)) {
        result[2] += 0.18565148;
      } else {
        result[2] += -0.019848717;
      }
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)-0.47551319003)) {
        result[2] += 0.009479399;
      } else {
        result[2] += -0.099051625;
      }
    }
  }
  if ( (data[27].missing != -1) && (data[27].fvalue < (float)1.0054787397)) {
    result[3] += -0.099718325;
  } else {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)0.3592517674)) {
      result[3] += -0.09195894;
    } else {
      result[3] += 0.18600626;
    }
  }
  if ( (data[89].missing != -1) && (data[89].fvalue < (float)1)) {
    result[4] += -0.09955723;
  } else {
    result[4] += 0.18603702;
  }
  if ( (data[27].missing != -1) && (data[27].fvalue < (float)1.3160247803)) {
    result[5] += -0.0993537;
  } else {
    if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.57948327065)) {
      result[5] += 0.02287686;
    } else {
      result[5] += -0.08827681;
    }
  }
  result[6] += -0.09938687;
  if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31586059928)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.68544656038)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.42764511704)) {
        result[7] += -0.09865848;
      } else {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)0.5904673934)) {
          result[7] += -0.09677709;
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.56495398283)) {
            result[7] += 0.1859134;
          } else {
            result[7] += -0.08549561;
          }
        }
      }
    } else {
      result[7] += -0.09881402;
    }
  } else {
    result[7] += -0.0997143;
  }
  if ( (data[80].missing != -1) && (data[80].fvalue < (float)9.5720357895)) {
    result[8] += -0.099646494;
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62010836601)) {
      result[8] += -0.0879787;
    } else {
      result[8] += 0.18596618;
    }
  }
  if ( (data[1].missing != -1) && (data[1].fvalue < (float)3.6675543785)) {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.5824829936)) {
      if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.80720156431)) {
        if ( (data[83].missing != -1) && (data[83].fvalue < (float)1)) {
          result[9] += -0.07955204;
        } else {
          result[9] += 0.18674129;
        }
      } else {
        if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.7241204381)) {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.4400168657)) {
            if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.75656324625)) {
              if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.79868918657)) {
                if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.62911725044)) {
                  result[9] += -0.009842549;
                } else {
                  result[9] += -0.0782507;
                }
              } else {
                if ( (data[90].missing != -1) && (data[90].fvalue < (float)1)) {
                  result[9] += -0.09619629;
                } else {
                  result[9] += -0.028733162;
                }
              }
            } else {
              result[9] += -0;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.62002694607)) {
              result[9] += 0.105381094;
            } else {
              result[9] += -0.07456442;
            }
          }
        } else {
          if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31460806727)) {
            result[9] += 0.19531465;
          } else {
            result[9] += -0;
          }
        }
      }
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)-0.51474040747)) {
        if ( (data[31].missing != -1) && (data[31].fvalue < (float)-0.50509554148)) {
          if ( (data[80].missing != -1) && (data[80].fvalue < (float)9.5720357895)) {
            if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.10896807164)) {
              result[9] += -0.099533975;
            } else {
              result[9] += -0.04048806;
            }
          } else {
            result[9] += -0;
          }
        } else {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.71015536785)) {
            result[9] += -0.013511482;
          } else {
            result[9] += 0.18625563;
          }
        }
      } else {
        result[9] += -0.099612504;
      }
    }
  } else {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.5824829936)) {
      result[9] += 0.18466231;
    } else {
      result[9] += -0.09621088;
    }
  }
  if ( (data[23].missing != -1) && (data[23].fvalue < (float)10.179190636)) {
    result[10] += -0.09968163;
  } else {
    result[10] += 0.18592611;
  }
  if ( (data[42].missing != -1) && (data[42].fvalue < (float)-0.010509602726)) {
    if ( (data[52].missing != -1) && (data[52].fvalue < (float)0.10056277364)) {
      if ( (data[87].missing != -1) && (data[87].fvalue < (float)1)) {
        if ( (data[37].missing != -1) && (data[37].fvalue < (float)4.345328331)) {
          if ( (data[81].missing != -1) && (data[81].fvalue < (float)1)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.5824829936)) {
              if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.93369174)) {
                if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.3156131804)) {
                  result[11] += 0.18680026;
                } else {
                  if ( (data[27].missing != -1) && (data[27].fvalue < (float)0.073840983212)) {
                    result[11] += -0.096290156;
                  } else {
                    result[11] += 0.055984415;
                  }
                }
              } else {
                if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.6029086709)) {
                  if ( (data[69].missing != -1) && (data[69].fvalue < (float)-0.39465501904)) {
                    result[11] += -0.09752366;
                  } else {
                    if ( (data[33].missing != -1) && (data[33].fvalue < (float)-0.65167301893)) {
                      result[11] += 0.29550126;
                    } else {
                      result[11] += -0.07197072;
                    }
                  }
                } else {
                  if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.46778979897)) {
                    result[11] += -0.07003993;
                  } else {
                    if ( (data[35].missing != -1) && (data[35].fvalue < (float)0.03643072024)) {
                      result[11] += 0.04113486;
                    } else {
                      result[11] += 0.30823758;
                    }
                  }
                }
              }
            } else {
              if ( (data[42].missing != -1) && (data[42].fvalue < (float)-0.010511550121)) {
                if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025137545541)) {
                  result[11] += -0.0996047;
                } else {
                  result[11] += -0.03236631;
                }
              } else {
                if ( (data[36].missing != -1) && (data[36].fvalue < (float)1.3831657171)) {
                  result[11] += -0.09083239;
                } else {
                  result[11] += -0;
                }
              }
            }
          } else {
            result[11] += 0.24562636;
          }
        } else {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)0.45149809122)) {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)-2.2394132614)) {
              result[11] += 0.07471746;
            } else {
              result[11] += -0.08300728;
            }
          } else {
            result[11] += 0.2207506;
          }
        }
      } else {
        if ( (data[33].missing != -1) && (data[33].fvalue < (float)0.056300889701)) {
          result[11] += -0.09745616;
        } else {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.34159609675)) {
            result[11] += 0.19015653;
          } else {
            result[11] += 0.08880394;
          }
        }
      }
    } else {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.42764511704)) {
        if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.9311388731)) {
          if ( (data[70].missing != -1) && (data[70].fvalue < (float)-0.14120779932)) {
            result[11] += 0.17281093;
          } else {
            if ( (data[55].missing != -1) && (data[55].fvalue < (float)7.806274516e-05)) {
              result[11] += -0;
            } else {
              result[11] += 0.07341531;
            }
          }
        } else {
          result[11] += -0.09847477;
        }
      } else {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.58649593592)) {
          result[11] += 0.07904863;
        } else {
          result[11] += 0.1787996;
        }
      }
    }
  } else {
    if ( (data[33].missing != -1) && (data[33].fvalue < (float)-0.64719218016)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)-0.43788185716)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)-0.0058834324591)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)1.0963844061)) {
            if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.64542460442)) {
              result[11] += 0.302208;
            } else {
              result[11] += 0.122959696;
            }
          } else {
            if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.60498034954)) {
              result[11] += -0.08410444;
            } else {
              if ( (data[46].missing != -1) && (data[46].fvalue < (float)0.43176159263)) {
                result[11] += 0.02635688;
              } else {
                result[11] += 0.12153696;
              }
            }
          }
        } else {
          result[11] += -0.08875102;
        }
      } else {
        if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31586059928)) {
          result[11] += -0;
        } else {
          result[11] += -0.09934704;
        }
      }
    } else {
      if ( (data[80].missing != -1) && (data[80].fvalue < (float)-0.37019988894)) {
        if ( (data[84].missing != -1) && (data[84].fvalue < (float)1)) {
          if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025413041934)) {
            result[11] += -0.093125924;
          } else {
            if ( (data[33].missing != -1) && (data[33].fvalue < (float)1.4050359726)) {
              if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.25304949284)) {
                if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.53513938189)) {
                  if ( (data[54].missing != -1) && (data[54].fvalue < (float)-0.0087187811732)) {
                    result[11] += 0.18659236;
                  } else {
                    result[11] += 0.04913283;
                  }
                } else {
                  result[11] += 0.29980004;
                }
              } else {
                if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.78405153751)) {
                  result[11] += -0.08907323;
                } else {
                  result[11] += 0.035727154;
                }
              }
            } else {
              result[11] += -0.0822279;
            }
          }
        } else {
          if ( (data[65].missing != -1) && (data[65].fvalue < (float)-0.07379039377)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.1328496635)) {
              result[11] += -0.09467368;
            } else {
              result[11] += -0;
            }
          } else {
            result[11] += 0.11198443;
          }
        }
      } else {
        if ( (data[25].missing != -1) && (data[25].fvalue < (float)57.008499146)) {
          if ( (data[75].missing != -1) && (data[75].fvalue < (float)0.14207716286)) {
            result[11] += -0.099173814;
          } else {
            result[11] += -0.018042607;
          }
        } else {
          result[11] += 0.28609553;
        }
      }
    }
  }
  if ( (data[88].missing != -1) && (data[88].fvalue < (float)1)) {
    if ( (data[79].missing != -1) && (data[79].fvalue < (float)6.1137475967)) {
      if ( (data[44].missing != -1) && (data[44].fvalue < (float)1.04114604)) {
        if ( (data[58].missing != -1) && (data[58].fvalue < (float)-0.57980215549)) {
          result[12] += 0.07695028;
        } else {
          if ( (data[52].missing != -1) && (data[52].fvalue < (float)0.018169729039)) {
            if ( (data[49].missing != -1) && (data[49].fvalue < (float)0.25168430805)) {
              result[12] += -0.09933913;
            } else {
              if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.83999991417)) {
                result[12] += 0.059699565;
              } else {
                result[12] += -0.09556028;
              }
            }
          } else {
            if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.79708915949)) {
              if ( (data[33].missing != -1) && (data[33].fvalue < (float)-0.60387730598)) {
                if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.0699566603)) {
                  result[12] += 0.044654306;
                } else {
                  result[12] += -0.07938094;
                }
              } else {
                result[12] += 0.21805078;
              }
            } else {
              if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62021154165)) {
                result[12] += -0;
              } else {
                result[12] += -0.09651051;
              }
            }
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.83999991417)) {
          result[12] += 0.36294317;
        } else {
          result[12] += -0.08845088;
        }
      }
    } else {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.0699566603)) {
        result[12] += 0.23213762;
      } else {
        result[12] += -0.09879421;
      }
    }
  } else {
    result[12] += 0.2186799;
  }
  if ( (data[86].missing != -1) && (data[86].fvalue < (float)1)) {
    if ( (data[51].missing != -1) && (data[51].fvalue < (float)0.64061713219)) {
      if ( (data[78].missing != -1) && (data[78].fvalue < (float)3.4584906101)) {
        if ( (data[82].missing != -1) && (data[82].fvalue < (float)1)) {
          if ( (data[33].missing != -1) && (data[33].fvalue < (float)-0.22151166201)) {
            if ( (data[55].missing != -1) && (data[55].fvalue < (float)7.806274516e-05)) {
              result[0] += -0.09456926;
            } else {
              if ( (data[70].missing != -1) && (data[70].fvalue < (float)-0.1211900264)) {
                result[0] += 0.15964916;
              } else {
                result[0] += -0.031852413;
              }
            }
          } else {
            result[0] += 0.17152219;
          }
        } else {
          if ( (data[50].missing != -1) && (data[50].fvalue < (float)0.17703424394)) {
            result[0] += -0.09911108;
          } else {
            result[0] += -0.00035000648;
          }
        }
      } else {
        if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025407476351)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.61931306124)) {
            if ( (data[46].missing != -1) && (data[46].fvalue < (float)-0.049288485199)) {
              result[0] += 0.17863421;
            } else {
              if ( (data[15].missing != -1) && (data[15].fvalue < (float)0.72947192192)) {
                result[0] += 0.16603899;
              } else {
                result[0] += 0.0021676896;
              }
            }
          } else {
            result[0] += -0.093983434;
          }
        } else {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.52279245853)) {
            if ( (data[47].missing != -1) && (data[47].fvalue < (float)-0.015892436728)) {
              if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.6996152401)) {
                result[0] += 0.040783625;
              } else {
                result[0] += 0.12769134;
              }
            } else {
              result[0] += 0.22565031;
            }
          } else {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.48612654209)) {
              result[0] += -0.09881166;
            } else {
              result[0] += -0;
            }
          }
        }
      }
    } else {
      if ( (data[80].missing != -1) && (data[80].fvalue < (float)-0.37019988894)) {
        if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.45558649302)) {
          result[0] += -0.08145705;
        } else {
          if ( (data[72].missing != -1) && (data[72].fvalue < (float)3.043926239)) {
            if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.69806528091)) {
              result[0] += 0.2322485;
            } else {
              result[0] += 0.1654744;
            }
          } else {
            result[0] += -0;
          }
        }
      } else {
        if ( (data[47].missing != -1) && (data[47].fvalue < (float)-0.016124617308)) {
          result[0] += 0.16126432;
        } else {
          if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025475654751)) {
            if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.45558604598)) {
              result[0] += -0.080784045;
            } else {
              result[0] += 0.1392737;
            }
          } else {
            result[0] += -0.085833706;
          }
        }
      }
    }
  } else {
    if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.024578202516)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.53519374132)) {
        if ( (data[27].missing != -1) && (data[27].fvalue < (float)0.92375618219)) {
          if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.81487703323)) {
            result[0] += -0;
          } else {
            result[0] += -0.09981393;
          }
        } else {
          result[0] += 0.14235584;
        }
      } else {
        if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.35111662745)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62017846107)) {
            result[0] += 0.15299046;
          } else {
            result[0] += -0.012599688;
          }
        } else {
          result[0] += 0.16517194;
        }
      }
    } else {
      if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.15498234332)) {
        if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.45484149456)) {
          if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59734815359)) {
            if ( (data[33].missing != -1) && (data[33].fvalue < (float)-0.60387730598)) {
              result[0] += 0.1981954;
            } else {
              if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.2248044759)) {
                result[0] += -0;
              } else {
                result[0] += 0.1870359;
              }
            }
          } else {
            result[0] += -0;
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62012350559)) {
            if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.93103021383)) {
              result[0] += -0.085848086;
            } else {
              if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.60995388031)) {
                result[0] += -0.089734614;
              } else {
                if ( (data[70].missing != -1) && (data[70].fvalue < (float)-0.13857327402)) {
                  if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.22036042809)) {
                    result[0] += 0.061573327;
                  } else {
                    result[0] += -0.027777059;
                  }
                } else {
                  if ( (data[35].missing != -1) && (data[35].fvalue < (float)0.20866623521)) {
                    result[0] += 0.20809397;
                  } else {
                    result[0] += 0.00705726;
                  }
                }
              }
            }
          } else {
            if ( (data[55].missing != -1) && (data[55].fvalue < (float)-0.1285303086)) {
              result[0] += -0;
            } else {
              if ( (data[55].missing != -1) && (data[55].fvalue < (float)-0.099804222584)) {
                result[0] += -0.097313315;
              } else {
                result[0] += -0.041118693;
              }
            }
          }
        }
      } else {
        if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.79142647982)) {
          result[0] += -0.081115924;
        } else {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.097951889)) {
            if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.0078816348687)) {
              result[0] += 0.19202164;
            } else {
              if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.43870261312)) {
                result[0] += -0;
              } else {
                if ( (data[73].missing != -1) && (data[73].fvalue < (float)1.0611419678)) {
                  result[0] += 0.13541576;
                } else {
                  result[0] += 0.047212657;
                }
              }
            }
          } else {
            result[0] += -0.009744807;
          }
        }
      }
    }
  }
  if ( (data[53].missing != -1) && (data[53].fvalue < (float)-0.26869207621)) {
    if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59609615803)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.5871013999)) {
        if ( (data[82].missing != -1) && (data[82].fvalue < (float)1)) {
          if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31556677818)) {
            if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.3156131804)) {
              result[1] += -0.09536609;
            } else {
              result[1] += -0.030392056;
            }
          } else {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)0.27389571071)) {
              if ( (data[32].missing != -1) && (data[32].fvalue < (float)2.5779726505)) {
                result[1] += -0.09746119;
              } else {
                if ( (data[32].missing != -1) && (data[32].fvalue < (float)4.866959095)) {
                  if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31457713246)) {
                    result[1] += 0.22291276;
                  } else {
                    result[1] += 0.11318926;
                  }
                } else {
                  result[1] += -0.08567222;
                }
              }
            } else {
              result[1] += 0.12332675;
            }
          }
        } else {
          if ( (data[78].missing != -1) && (data[78].fvalue < (float)-0.54036176205)) {
            result[1] += 0.2009989;
          } else {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.0699566603)) {
              result[1] += -0.022752218;
            } else {
              result[1] += 0.14973922;
            }
          }
        }
      } else {
        result[1] += -0.09872939;
      }
    } else {
      if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.57856816053)) {
        result[1] += -0.09905236;
      } else {
        result[1] += 0.21279052;
      }
    }
  } else {
    if ( (data[78].missing != -1) && (data[78].fvalue < (float)3.4584906101)) {
      if ( (data[79].missing != -1) && (data[79].fvalue < (float)-0.40983131528)) {
        if ( (data[36].missing != -1) && (data[36].fvalue < (float)-0.68227016926)) {
          if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.4328392446)) {
            if ( (data[78].missing != -1) && (data[78].fvalue < (float)-0.54036176205)) {
              result[1] += -0.107637025;
            } else {
              result[1] += 0.08594226;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.6200761199)) {
              if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.12229329348)) {
                if ( (data[32].missing != -1) && (data[32].fvalue < (float)5.9198932648)) {
                  if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.64542460442)) {
                    if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.038373697549)) {
                      result[1] += 0.1286393;
                    } else {
                      result[1] += -0.015887225;
                    }
                  } else {
                    if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.20401591063)) {
                      if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.23670496047)) {
                        result[1] += 0.13931754;
                      } else {
                        result[1] += -0.10649756;
                      }
                    } else {
                      result[1] += 0.16608606;
                    }
                  }
                } else {
                  if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.63001906872)) {
                    result[1] += 0.10474201;
                  } else {
                    result[1] += -0.08013014;
                  }
                }
              } else {
                if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.60602760315)) {
                  result[1] += -0.09459103;
                } else {
                  result[1] += 0.111011446;
                }
              }
            } else {
              if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.45484149456)) {
                if ( (data[32].missing != -1) && (data[32].fvalue < (float)2.7153120041)) {
                  result[1] += 0.1628039;
                } else {
                  result[1] += -0.09193103;
                }
              } else {
                if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.17023339868)) {
                  if ( (data[35].missing != -1) && (data[35].fvalue < (float)0.32429370284)) {
                    result[1] += 0.16359694;
                  } else {
                    result[1] += 0.08652195;
                  }
                } else {
                  if ( (data[27].missing != -1) && (data[27].fvalue < (float)10.599714279)) {
                    result[1] += -0.091736525;
                  } else {
                    result[1] += 0.17013691;
                  }
                }
              }
            }
          }
        } else {
          if ( (data[78].missing != -1) && (data[78].fvalue < (float)-0.4874599874)) {
            result[1] += -0.09892555;
          } else {
            result[1] += 0.1567394;
          }
        }
      } else {
        result[1] += 0.16351172;
      }
    } else {
      result[1] += -0.09907608;
    }
  }
  if ( (data[79].missing != -1) && (data[79].fvalue < (float)6.0763492584)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)-0.51474040747)) {
      if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.82802081108)) {
        if ( (data[80].missing != -1) && (data[80].fvalue < (float)9.5720357895)) {
          result[2] += -0.0987235;
        } else {
          result[2] += 0.008217417;
        }
      } else {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.71015536785)) {
          result[2] += 0.1807053;
        } else {
          result[2] += -0.08951778;
        }
      }
    } else {
      result[2] += -0.09910361;
    }
  } else {
    if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.45147165656)) {
      if ( (data[47].missing != -1) && (data[47].fvalue < (float)-0.015926184133)) {
        result[2] += -0.07967365;
      } else {
        result[2] += 0.16561572;
      }
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)-0.47551319003)) {
        result[2] += 0.0047558574;
      } else {
        result[2] += -0.09832922;
      }
    }
  }
  if ( (data[27].missing != -1) && (data[27].fvalue < (float)1.0054787397)) {
    result[3] += -0.09911108;
  } else {
    if ( (data[27].missing != -1) && (data[27].fvalue < (float)1.0872013569)) {
      result[3] += 0.16356562;
    } else {
      result[3] += -0.09045891;
    }
  }
  if ( (data[89].missing != -1) && (data[89].fvalue < (float)1)) {
    result[4] += -0.0989656;
  } else {
    result[4] += 0.16357261;
  }
  if ( (data[92].missing != -1) && (data[92].fvalue < (float)1)) {
    if ( (data[27].missing != -1) && (data[27].fvalue < (float)1.3160247803)) {
      result[5] += -0.09901222;
    } else {
      if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.60602760315)) {
        result[5] += -0;
      } else {
        result[5] += -0.08318987;
      }
    }
  } else {
    result[5] += 0.36888707;
  }
  if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.83832764626)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.17688424885)) {
      result[6] += 0.2157295;
    } else {
      result[6] += -0.098762065;
    }
  } else {
    result[6] += -0.09908951;
  }
  if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.83832764626)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.68544656038)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.42764511704)) {
        result[7] += -0.09785446;
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.60102975368)) {
          result[7] += -0.09597423;
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.56495398283)) {
            result[7] += 0.16351688;
          } else {
            result[7] += -0.08103011;
          }
        }
      }
    } else {
      result[7] += -0.098070644;
    }
  } else {
    result[7] += -0.09910627;
  }
  if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31586059928)) {
    if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.9851242304)) {
      result[8] += -0.09798722;
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.61965614557)) {
        result[8] += -0.092409685;
      } else {
        result[8] += 0.16443554;
      }
    }
  } else {
    result[8] += -0.0991074;
  }
  if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.5824829936)) {
    if ( (data[84].missing != -1) && (data[84].fvalue < (float)1)) {
      if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.56359541416)) {
        result[9] += 0.088998765;
      } else {
        if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.0078816348687)) {
          if ( (data[86].missing != -1) && (data[86].fvalue < (float)1)) {
            result[9] += -0.023444535;
          } else {
            result[9] += -0.09731214;
          }
        } else {
          if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.7070043087)) {
            result[9] += 0.087265335;
          } else {
            result[9] += -0.015822861;
          }
        }
      }
    } else {
      if ( (data[83].missing != -1) && (data[83].fvalue < (float)1)) {
        result[9] += -0.08040977;
      } else {
        if ( (data[27].missing != -1) && (data[27].fvalue < (float)0.62955474854)) {
          result[9] += 0.16512828;
        } else {
          result[9] += -0.040657204;
        }
      }
    }
  } else {
    if ( (data[87].missing != -1) && (data[87].fvalue < (float)1)) {
      if ( (data[27].missing != -1) && (data[27].fvalue < (float)1.2833356857)) {
        result[9] += -0.098905854;
      } else {
        result[9] += -0.02004687;
      }
    } else {
      if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.64759612083)) {
        result[9] += 0.13139254;
      } else {
        result[9] += -0.09859508;
      }
    }
  }
  if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31586059928)) {
    if ( (data[17].missing != -1) && (data[17].fvalue < (float)1.0286098719)) {
      result[10] += -0.098619446;
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.61469757557)) {
        result[10] += 0.002474419;
      } else {
        result[10] += 0.16346106;
      }
    }
  } else {
    result[10] += -0.099043764;
  }
  if ( (data[42].missing != -1) && (data[42].fvalue < (float)-0.010509602726)) {
    if ( (data[82].missing != -1) && (data[82].fvalue < (float)1)) {
      if ( (data[55].missing != -1) && (data[55].fvalue < (float)-0.1082419157)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.93369174)) {
          if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.81487703323)) {
            result[11] += 0.16371751;
          } else {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)-2.2394132614)) {
              result[11] += 0.12952052;
            } else {
              if ( (data[27].missing != -1) && (data[27].fvalue < (float)0.073840983212)) {
                result[11] += -0.095401436;
              } else {
                result[11] += 0.024545034;
              }
            }
          }
        } else {
          if ( (data[27].missing != -1) && (data[27].fvalue < (float)0.23728621006)) {
            if ( (data[32].missing != -1) && (data[32].fvalue < (float)4.9585189819)) {
              if ( (data[55].missing != -1) && (data[55].fvalue < (float)-0.11085164547)) {
                result[11] += -0.09377292;
              } else {
                result[11] += -0.008673486;
              }
            } else {
              if ( (data[55].missing != -1) && (data[55].fvalue < (float)-0.13024370372)) {
                if ( (data[55].missing != -1) && (data[55].fvalue < (float)-0.13342361152)) {
                  result[11] += -0.08363276;
                } else {
                  result[11] += 0.1968452;
                }
              } else {
                result[11] += -0.09527845;
              }
            }
          } else {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.62911725044)) {
              result[11] += -0.04819865;
            } else {
              result[11] += 0.19142574;
            }
          }
        }
      } else {
        if ( (data[59].missing != -1) && (data[59].fvalue < (float)-0.46622672677)) {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.37062469125)) {
            if ( (data[90].missing != -1) && (data[90].fvalue < (float)1)) {
              result[11] += -0.09075788;
            } else {
              if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.62007713318)) {
                result[11] += 0.05212308;
              } else {
                result[11] += 0.16180895;
              }
            }
          } else {
            if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.024226156995)) {
              if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.78908890486)) {
                result[11] += 0.184483;
              } else {
                if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.0517596006)) {
                  if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.62005215883)) {
                    if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.36591973901)) {
                      if ( (data[32].missing != -1) && (data[32].fvalue < (float)3.0815498829)) {
                        result[11] += -0.04329251;
                      } else {
                        if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.22036042809)) {
                          result[11] += -0;
                        } else {
                          result[11] += 0.07063576;
                        }
                      }
                    } else {
                      result[11] += 0.15129136;
                    }
                  } else {
                    if ( (data[32].missing != -1) && (data[32].fvalue < (float)2.4406335354)) {
                      result[11] += 0.17441124;
                    } else {
                      if ( (data[35].missing != -1) && (data[35].fvalue < (float)0.013004039414)) {
                        result[11] += -0;
                      } else {
                        result[11] += 0.13678752;
                      }
                    }
                  }
                } else {
                  if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.62003046274)) {
                    result[11] += 0.16509706;
                  } else {
                    result[11] += 0.069288164;
                  }
                }
              }
            } else {
              if ( (data[55].missing != -1) && (data[55].fvalue < (float)-0.068880498409)) {
                result[11] += 0.3066412;
              } else {
                result[11] += 0.15370539;
              }
            }
          }
        } else {
          result[11] += -0.09214128;
        }
      }
    } else {
      if ( (data[47].missing != -1) && (data[47].fvalue < (float)-0.015841141343)) {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)2.4427080154)) {
          if ( (data[87].missing != -1) && (data[87].fvalue < (float)1)) {
            result[11] += -0.09899903;
          } else {
            if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.22042307258)) {
              result[11] += -0.09488658;
            } else {
              result[11] += 0.16726406;
            }
          }
        } else {
          result[11] += 0.02280328;
        }
      } else {
        if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.1878336966)) {
          result[11] += -0.087867275;
        } else {
          result[11] += 0.15103509;
        }
      }
    }
  } else {
    if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.78673630953)) {
      if ( (data[59].missing != -1) && (data[59].fvalue < (float)-0.46938577294)) {
        if ( (data[68].missing != -1) && (data[68].fvalue < (float)0.35266622901)) {
          if ( (data[69].missing != -1) && (data[69].fvalue < (float)-0.39758071303)) {
            result[11] += 0.032860003;
          } else {
            result[11] += 0.1486254;
          }
        } else {
          result[11] += -0.05579568;
        }
      } else {
        if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.83832764626)) {
          result[11] += -0;
        } else {
          if ( (data[47].missing != -1) && (data[47].fvalue < (float)0.10450585932)) {
            result[11] += -0.09866657;
          } else {
            result[11] += -0.03793813;
          }
        }
      }
    } else {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.52279245853)) {
        if ( (data[56].missing != -1) && (data[56].fvalue < (float)-0.15283603966)) {
          result[11] += 0.071410544;
        } else {
          result[11] += -0.096660115;
        }
      } else {
        if ( (data[38].missing != -1) && (data[38].fvalue < (float)1.3613381386)) {
          if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.45008984208)) {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.7679245472)) {
              if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.36746114492)) {
                result[11] += 0.054192033;
              } else {
                result[11] += -0.057903;
              }
            } else {
              result[11] += -0.08534284;
            }
          } else {
            if ( (data[84].missing != -1) && (data[84].fvalue < (float)1)) {
              if ( (data[43].missing != -1) && (data[43].fvalue < (float)-0.023317089304)) {
                if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.25304949284)) {
                  if ( (data[36].missing != -1) && (data[36].fvalue < (float)-0.68227016926)) {
                    result[11] += 0.31014502;
                  } else {
                    if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.51182812452)) {
                      if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.48612654209)) {
                        result[11] += 0.16380343;
                      } else {
                        result[11] += 0.033852093;
                      }
                    } else {
                      result[11] += 0.24583253;
                    }
                  }
                } else {
                  result[11] += 0.01399138;
                }
              } else {
                if ( (data[41].missing != -1) && (data[41].fvalue < (float)0.53180974722)) {
                  if ( (data[17].missing != -1) && (data[17].fvalue < (float)1.0286098719)) {
                    if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.61824411154)) {
                      result[11] += 0.12973441;
                    } else {
                      result[11] += -0.007973934;
                    }
                  } else {
                    result[11] += -0.077942945;
                  }
                } else {
                  result[11] += 0.18201007;
                }
              }
            } else {
              if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.41649469733)) {
                if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.45906504989)) {
                  result[11] += -0.09047303;
                } else {
                  result[11] += -0;
                }
              } else {
                if ( (data[28].missing != -1) && (data[28].fvalue < (float)0.11013531685)) {
                  result[11] += 0.09998415;
                } else {
                  result[11] += 0.23913594;
                }
              }
            }
          }
        } else {
          result[11] += -0.09589443;
        }
      }
    }
  }
  if ( (data[88].missing != -1) && (data[88].fvalue < (float)1)) {
    if ( (data[32].missing != -1) && (data[32].fvalue < (float)6.7439284325)) {
      if ( (data[79].missing != -1) && (data[79].fvalue < (float)6.1137475967)) {
        if ( (data[75].missing != -1) && (data[75].fvalue < (float)2.3511066437)) {
          if ( (data[58].missing != -1) && (data[58].fvalue < (float)-0.57980215549)) {
            result[12] += 0.021400912;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)3.2361967564)) {
              if ( (data[77].missing != -1) && (data[77].fvalue < (float)4.8002839088)) {
                if ( (data[37].missing != -1) && (data[37].fvalue < (float)4.5415453911)) {
                  result[12] += -0.09865247;
                } else {
                  result[12] += -0.038302284;
                }
              } else {
                if ( (data[33].missing != -1) && (data[33].fvalue < (float)-0.70245593786)) {
                  result[12] += -0.07635143;
                } else {
                  result[12] += 0.013359799;
                }
              }
            } else {
              result[12] += -0;
            }
          }
        } else {
          result[12] += 0.1375753;
        }
      } else {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.0699566603)) {
          result[12] += 0.20368633;
        } else {
          result[12] += -0.09805395;
        }
      }
    } else {
      if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31341737509)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.039158571512)) {
          result[12] += 0.29303843;
        } else {
          result[12] += 0.15857579;
        }
      } else {
        if ( (data[47].missing != -1) && (data[47].fvalue < (float)-0.0052432520315)) {
          result[12] += -0.09306907;
        } else {
          result[12] += -0;
        }
      }
    }
  } else {
    result[12] += 0.18460637;
  }
  if ( (data[86].missing != -1) && (data[86].fvalue < (float)1)) {
    if ( (data[78].missing != -1) && (data[78].fvalue < (float)3.4584906101)) {
      if ( (data[83].missing != -1) && (data[83].fvalue < (float)1)) {
        if ( (data[45].missing != -1) && (data[45].fvalue < (float)3.0072851181)) {
          if ( (data[47].missing != -1) && (data[47].fvalue < (float)0.64647638798)) {
            result[0] += -0.09844535;
          } else {
            result[0] += -0.0056069223;
          }
        } else {
          result[0] += 0.15503469;
        }
      } else {
        if ( (data[32].missing != -1) && (data[32].fvalue < (float)0.92990243435)) {
          if ( (data[27].missing != -1) && (data[27].fvalue < (float)3.6532914639)) {
            result[0] += -0.09858316;
          } else {
            result[0] += -0.012092242;
          }
        } else {
          if ( (data[34].missing != -1) && (data[34].fvalue < (float)-0.20538602769)) {
            if ( (data[55].missing != -1) && (data[55].fvalue < (float)7.806274516e-05)) {
              result[0] += -0.08097176;
            } else {
              result[0] += 0.07785737;
            }
          } else {
            result[0] += 0.15867145;
          }
        }
      }
    } else {
      if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025407476351)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.61899483204)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.15619270504)) {
            if ( (data[43].missing != -1) && (data[43].fvalue < (float)1.1454337835)) {
              if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60428112745)) {
                result[0] += 0.15492174;
              } else {
                result[0] += -0.067452125;
              }
            } else {
              result[0] += -0.095719874;
            }
          } else {
            result[0] += 0.15331428;
          }
        } else {
          result[0] += -0.09249404;
        }
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.52279245853)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)1.724832654)) {
            if ( (data[43].missing != -1) && (data[43].fvalue < (float)-0.063070945442)) {
              result[0] += -0;
            } else {
              result[0] += 0.1027511;
            }
          } else {
            if ( (data[47].missing != -1) && (data[47].fvalue < (float)-0.015892436728)) {
              result[0] += 0.08212594;
            } else {
              result[0] += 0.20710114;
            }
          }
        } else {
          if ( (data[49].missing != -1) && (data[49].fvalue < (float)-0.0010379530722)) {
            result[0] += -0.09780308;
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.74213886261)) {
              result[0] += -0.079205625;
            } else {
              result[0] += 0.054446932;
            }
          }
        }
      }
    }
  } else {
    if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.024578202516)) {
      if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.78908890486)) {
        if ( (data[37].missing != -1) && (data[37].fvalue < (float)0.56114780903)) {
          if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.86921608448)) {
            result[0] += 0.066859655;
          } else {
            result[0] += 0.14198932;
          }
        } else {
          result[0] += -0.027738756;
        }
      } else {
        if ( (data[27].missing != -1) && (data[27].fvalue < (float)0.67858833075)) {
          result[0] += 0.14476095;
        } else {
          result[0] += 0.095495336;
        }
      }
    } else {
      if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.15498234332)) {
        if ( (data[69].missing != -1) && (data[69].fvalue < (float)-0.39758071303)) {
          if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.20401591063)) {
            if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.28573852777)) {
              result[0] += -0.027620342;
            } else {
              if ( (data[34].missing != -1) && (data[34].fvalue < (float)-0.20895290375)) {
                if ( (data[34].missing != -1) && (data[34].fvalue < (float)-0.20964646339)) {
                  result[0] += 0.14719158;
                } else {
                  result[0] += -0;
                }
              } else {
                result[0] += 0.21836253;
              }
            }
          } else {
            result[0] += -0.0057506156;
          }
        } else {
          if ( (data[55].missing != -1) && (data[55].fvalue < (float)-0.089842647314)) {
            if ( (data[55].missing != -1) && (data[55].fvalue < (float)-0.099804222584)) {
              result[0] += -0.09716007;
            } else {
              result[0] += -0.030756364;
            }
          } else {
            if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.93103021383)) {
              result[0] += -0.07741039;
            } else {
              if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.038621056825)) {
                if ( (data[37].missing != -1) && (data[37].fvalue < (float)0.98161232471)) {
                  if ( (data[32].missing != -1) && (data[32].fvalue < (float)5.3705363274)) {
                    result[0] += -0;
                  } else {
                    result[0] += 0.07173533;
                  }
                } else {
                  result[0] += -0.050579548;
                }
              } else {
                if ( (data[55].missing != -1) && (data[55].fvalue < (float)0.25409945846)) {
                  result[0] += 0.1435703;
                } else {
                  result[0] += 0.0068402397;
                }
              }
            }
          }
        }
      } else {
        if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.60498034954)) {
          result[0] += -0.07355061;
        } else {
          if ( (data[32].missing != -1) && (data[32].fvalue < (float)6.3319106102)) {
            if ( (data[32].missing != -1) && (data[32].fvalue < (float)4.82117939)) {
              if ( (data[73].missing != -1) && (data[73].fvalue < (float)1.0611419678)) {
                result[0] += 0.12023457;
              } else {
                result[0] += 0.022220425;
              }
            } else {
              result[0] += -0.03238089;
            }
          } else {
            result[0] += 0.17897372;
          }
        }
      }
    }
  }
  if ( (data[53].missing != -1) && (data[53].fvalue < (float)-0.26869207621)) {
    if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59609615803)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.36735785007)) {
        if ( (data[86].missing != -1) && (data[86].fvalue < (float)1)) {
          result[1] += -0.08221801;
        } else {
          if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.20401591063)) {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.93369174)) {
              result[1] += -0;
            } else {
              result[1] += 0.18056819;
            }
          } else {
            result[1] += 0.19764195;
          }
        }
      } else {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)0.06673399359)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)2.23818326)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.58832603693)) {
              result[1] += 0.18058975;
            } else {
              if ( (data[53].missing != -1) && (data[53].fvalue < (float)-0.26881948113)) {
                if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.17023339868)) {
                  result[1] += -0.03773946;
                } else {
                  result[1] += -0.09560684;
                }
              } else {
                if ( (data[32].missing != -1) && (data[32].fvalue < (float)2.7153120041)) {
                  result[1] += 0.12228109;
                } else {
                  if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.78405153751)) {
                    result[1] += -0;
                  } else {
                    result[1] += 0.046836875;
                  }
                }
              }
            }
          } else {
            if ( (data[78].missing != -1) && (data[78].fvalue < (float)3.4584906101)) {
              result[1] += 0.15027924;
            } else {
              result[1] += -0.08763572;
            }
          }
        } else {
          result[1] += -0.099203035;
        }
      }
    } else {
      if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.57856816053)) {
        result[1] += -0.09851294;
      } else {
        result[1] += 0.16386336;
      }
    }
  } else {
    if ( (data[78].missing != -1) && (data[78].fvalue < (float)3.4584906101)) {
      if ( (data[47].missing != -1) && (data[47].fvalue < (float)-0.0052432520315)) {
        if ( (data[46].missing != -1) && (data[46].fvalue < (float)1.0866270065)) {
          if ( (data[90].missing != -1) && (data[90].fvalue < (float)1)) {
            if ( (data[32].missing != -1) && (data[32].fvalue < (float)5.9198932648)) {
              if ( (data[37].missing != -1) && (data[37].fvalue < (float)1.3179839849)) {
                if ( (data[83].missing != -1) && (data[83].fvalue < (float)1)) {
                  if ( (data[4].missing != -1) && (data[4].fvalue < (float)-0.51474040747)) {
                    result[1] += 0.015379802;
                  } else {
                    if ( (data[79].missing != -1) && (data[79].fvalue < (float)6.0763492584)) {
                      result[1] += 0.14801969;
                    } else {
                      if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.74213886261)) {
                        result[1] += -0.120283395;
                      } else {
                        result[1] += 0.14821486;
                      }
                    }
                  }
                } else {
                  if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.013868609443)) {
                    result[1] += -0.09196785;
                  } else {
                    if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62012577057)) {
                      if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.71015536785)) {
                        if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.16122038662)) {
                          result[1] += 0.15969488;
                        } else {
                          if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.20401591063)) {
                            if ( (data[69].missing != -1) && (data[69].fvalue < (float)-0.38432779908)) {
                              result[1] += -0;
                            } else {
                              result[1] += 0.05417022;
                            }
                          } else {
                            result[1] += 0.15545626;
                          }
                        }
                      } else {
                        if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.18767139316)) {
                          if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.20401591063)) {
                            result[1] += -0;
                          } else {
                            result[1] += 0.115822025;
                          }
                        } else {
                          result[1] += -0.10269365;
                        }
                      }
                    } else {
                      result[1] += 0.14780147;
                    }
                  }
                }
              } else {
                if ( (data[27].missing != -1) && (data[27].fvalue < (float)2.1822843552)) {
                  if ( (data[52].missing != -1) && (data[52].fvalue < (float)0.018169729039)) {
                    result[1] += -0;
                  } else {
                    result[1] += -0.09124345;
                  }
                } else {
                  result[1] += 0.15651095;
                }
              }
            } else {
              if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31324729323)) {
                result[1] += -0.097004294;
              } else {
                if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.62101882696)) {
                  result[1] += 0.17177881;
                } else {
                  if ( (data[86].missing != -1) && (data[86].fvalue < (float)1)) {
                    result[1] += 0.1885945;
                  } else {
                    result[1] += -0.090438634;
                  }
                }
              }
            }
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.038621056825)) {
              result[1] += -0.09007375;
            } else {
              result[1] += 0.08688635;
            }
          }
        } else {
          result[1] += -0.06607485;
        }
      } else {
        if ( (data[83].missing != -1) && (data[83].fvalue < (float)1)) {
          if ( (data[51].missing != -1) && (data[51].fvalue < (float)-0.096017740667)) {
            result[1] += 0.15085052;
          } else {
            result[1] += 0.000769458;
          }
        } else {
          result[1] += -0.09807844;
        }
      }
    } else {
      result[1] += -0.09849821;
    }
  }
  if ( (data[87].missing != -1) && (data[87].fvalue < (float)1)) {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)3.2361967564)) {
      result[2] += -0.098559186;
    } else {
      result[2] += 0.003535729;
    }
  } else {
    if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.57788324356)) {
      if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.64759612083)) {
        if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025411650538)) {
          result[2] += 0.024711922;
        } else {
          result[2] += 0.10400692;
        }
      } else {
        result[2] += 0.15117301;
      }
    } else {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)0.034175641835)) {
        result[2] += -0.09791722;
      } else {
        result[2] += -0.010741449;
      }
    }
  }
  if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.039243191481)) {
    if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59171414375)) {
      result[3] += -0.09833372;
    } else {
      result[3] += 0.14785008;
    }
  } else {
    if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.53914117813)) {
      result[3] += -0.098576955;
    } else {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.052001450211)) {
        result[3] += 0.11834151;
      } else {
        result[3] += -0.0126492735;
      }
    }
  }
  if ( (data[50].missing != -1) && (data[50].fvalue < (float)0.17703424394)) {
    result[4] += -0.0983848;
  } else {
    if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.91407823563)) {
      result[4] += 0.1475272;
    } else {
      result[4] += -0.09467886;
    }
  }
  if ( (data[92].missing != -1) && (data[92].fvalue < (float)1)) {
    if ( (data[27].missing != -1) && (data[27].fvalue < (float)1.3160247803)) {
      result[5] += -0.09849057;
    } else {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)1.0963844061)) {
        result[5] += -0.081676774;
      } else {
        result[5] += 0.021776287;
      }
    }
  } else {
    result[5] += 0.2706804;
  }
  if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31586059928)) {
    if ( (data[17].missing != -1) && (data[17].fvalue < (float)1.0286098719)) {
      result[6] += -0.09804928;
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62016826868)) {
        result[6] += 0.4829275;
      } else {
        result[6] += -0.09697084;
      }
    }
  } else {
    result[6] += -0.098532386;
  }
  if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31586059928)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.61777055264)) {
      result[7] += -0.09753026;
    } else {
      if ( (data[17].missing != -1) && (data[17].fvalue < (float)1.0286098719)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.74213886261)) {
          result[7] += 0.14761229;
        } else {
          result[7] += -0.09529691;
        }
      } else {
        result[7] += -0.096908055;
      }
    }
  } else {
    result[7] += -0.09857809;
  }
  if ( (data[80].missing != -1) && (data[80].fvalue < (float)9.5720357895)) {
    result[8] += -0.09851019;
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62010836601)) {
      result[8] += -0.08303608;
    } else {
      result[8] += 0.14777972;
    }
  }
  if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.5824829936)) {
    if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.81956714392)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.61771321297)) {
        result[9] += -0.07358098;
      } else {
        result[9] += 0.14511593;
      }
    } else {
      if ( (data[37].missing != -1) && (data[37].fvalue < (float)1.3460149765)) {
        if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60422152281)) {
          if ( (data[90].missing != -1) && (data[90].fvalue < (float)1)) {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.5222806931)) {
              if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.3156131804)) {
                result[9] += 0.010489791;
              } else {
                result[9] += -0.07217;
              }
            } else {
              if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62016886473)) {
                result[9] += -0.08685296;
              } else {
                result[9] += -0.0041160276;
              }
            }
          } else {
            result[9] += -0.0018874134;
          }
        } else {
          result[9] += -0.09707627;
        }
      } else {
        if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31392768025)) {
          if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31460806727)) {
            result[9] += 0.1494493;
          } else {
            result[9] += 0.037387386;
          }
        } else {
          if ( (data[37].missing != -1) && (data[37].fvalue < (float)4.5415453911)) {
            result[9] += -0.088232666;
          } else {
            result[9] += -0;
          }
        }
      }
    }
  } else {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)-0.51474040747)) {
      if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.85384505987)) {
        if ( (data[78].missing != -1) && (data[78].fvalue < (float)3.4584906101)) {
          if ( (data[37].missing != -1) && (data[37].fvalue < (float)3.5604615211)) {
            result[9] += -0.098337345;
          } else {
            result[9] += -0.037955813;
          }
        } else {
          result[9] += -0;
        }
      } else {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.71015536785)) {
          result[9] += -0.051215976;
        } else {
          result[9] += 0.14806558;
        }
      }
    } else {
      if ( (data[37].missing != -1) && (data[37].fvalue < (float)1.3460149765)) {
        result[9] += -0.098493524;
      } else {
        result[9] += -0.013084756;
      }
    }
  }
  if ( (data[23].missing != -1) && (data[23].fvalue < (float)10.179190636)) {
    result[10] += -0.098510586;
  } else {
    result[10] += 0.14788704;
  }
  if ( (data[84].missing != -1) && (data[84].fvalue < (float)1)) {
    if ( (data[33].missing != -1) && (data[33].fvalue < (float)1.4050359726)) {
      if ( (data[36].missing != -1) && (data[36].fvalue < (float)-0.61982524395)) {
        if ( (data[36].missing != -1) && (data[36].fvalue < (float)-0.68227016926)) {
          if ( (data[54].missing != -1) && (data[54].fvalue < (float)-0.039086114615)) {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.93369174)) {
              if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.81487703323)) {
                result[11] += 0.14706184;
              } else {
                if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.62648659945)) {
                  if ( (data[32].missing != -1) && (data[32].fvalue < (float)4.82117939)) {
                    result[11] += -0.09341875;
                  } else {
                    result[11] += -0.012220678;
                  }
                } else {
                  if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.18199364841)) {
                    result[11] += 0.19751172;
                  } else {
                    result[11] += -0;
                  }
                }
              }
            } else {
              if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.61924982071)) {
                if ( (data[69].missing != -1) && (data[69].fvalue < (float)-0.39465501904)) {
                  result[11] += -0.09527139;
                } else {
                  result[11] += -0.0052270046;
                }
              } else {
                if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.7679245472)) {
                  if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.87554603815)) {
                    result[11] += -0;
                  } else {
                    result[11] += -0.07434099;
                  }
                } else {
                  if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.039231427014)) {
                    result[11] += -0;
                  } else {
                    result[11] += 0.1998825;
                  }
                }
              }
            }
          } else {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.63977259398)) {
              if ( (data[90].missing != -1) && (data[90].fvalue < (float)1)) {
                if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31298440695)) {
                  if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.58649593592)) {
                    result[11] += -0.09277393;
                  } else {
                    result[11] += -0;
                  }
                } else {
                  if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.69918745756)) {
                    result[11] += 0.08134597;
                  } else {
                    if ( (data[14].missing != -1) && (data[14].fvalue < (float)-0.44441816211)) {
                      result[11] += -0;
                    } else {
                      result[11] += -0.07575733;
                    }
                  }
                }
              } else {
                if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.037399079651)) {
                  if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62014877796)) {
                    result[11] += -0;
                  } else {
                    result[11] += 0.14899044;
                  }
                } else {
                  result[11] += 0.19477296;
                }
              }
            } else {
              if ( (data[12].missing != -1) && (data[12].fvalue < (float)-0.0058834324591)) {
                if ( (data[4].missing != -1) && (data[4].fvalue < (float)-0.50166469812)) {
                  if ( (data[32].missing != -1) && (data[32].fvalue < (float)5.4163160324)) {
                    if ( (data[32].missing != -1) && (data[32].fvalue < (float)4.9127392769)) {
                      if ( (data[69].missing != -1) && (data[69].fvalue < (float)-0.34602001309)) {
                        if ( (data[32].missing != -1) && (data[32].fvalue < (float)3.3104484081)) {
                          if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31457713246)) {
                            if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.88479340076)) {
                              result[11] += 0.17644526;
                            } else {
                              if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.17023339868)) {
                                result[11] += -0;
                              } else {
                                result[11] += 0.11604974;
                              }
                            }
                          } else {
                            result[11] += 0.27174762;
                          }
                        } else {
                          if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.82802081108)) {
                            result[11] += -0;
                          } else {
                            result[11] += 0.11659547;
                          }
                        }
                      } else {
                        result[11] += 0.025151698;
                      }
                    } else {
                      result[11] += 0.20728038;
                    }
                  } else {
                    if ( (data[61].missing != -1) && (data[61].fvalue < (float)-0.16615319252)) {
                      result[11] += -0.038534313;
                    } else {
                      if ( (data[37].missing != -1) && (data[37].fvalue < (float)1.0937361717)) {
                        result[11] += 0.15378383;
                      } else {
                        result[11] += -0;
                      }
                    }
                  }
                } else {
                  result[11] += 0.27599096;
                }
              } else {
                result[11] += -0.084950276;
              }
            }
          }
        } else {
          result[11] += -0.09843327;
        }
      } else {
        if ( (data[79].missing != -1) && (data[79].fvalue < (float)2.4661560059)) {
          if ( (data[37].missing != -1) && (data[37].fvalue < (float)0.7573646307)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)-0.47597688437)) {
              if ( (data[56].missing != -1) && (data[56].fvalue < (float)-0.034679178149)) {
                result[11] += 0.14810061;
              } else {
                result[11] += 0.02415863;
              }
            } else {
              result[11] += -0.08054687;
            }
          } else {
            result[11] += -0.09225253;
          }
        } else {
          if ( (data[80].missing != -1) && (data[80].fvalue < (float)-0.3703558743)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)2.1549119949)) {
              result[11] += 0.24178162;
            } else {
              result[11] += -0.030481024;
            }
          } else {
            if ( (data[25].missing != -1) && (data[25].fvalue < (float)28.495761871)) {
              result[11] += -0.09856772;
            } else {
              result[11] += 0.2443273;
            }
          }
        }
      }
    } else {
      result[11] += -0.09842187;
    }
  } else {
    if ( (data[37].missing != -1) && (data[37].fvalue < (float)3.2240898609)) {
      if ( (data[45].missing != -1) && (data[45].fvalue < (float)0.31484985352)) {
        if ( (data[82].missing != -1) && (data[82].fvalue < (float)1)) {
          if ( (data[46].missing != -1) && (data[46].fvalue < (float)-0.16115507483)) {
            if ( (data[37].missing != -1) && (data[37].fvalue < (float)0.42099300027)) {
              if ( (data[0].missing != -1) && (data[0].fvalue < (float)-2.2394132614)) {
                result[11] += 0.13634701;
              } else {
                result[11] += -0.0964657;
              }
            } else {
              result[11] += -0.09630006;
            }
          } else {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.89647972584)) {
              result[11] += -0.08668888;
            } else {
              result[11] += 0.13341604;
            }
          }
        } else {
          if ( (data[47].missing != -1) && (data[47].fvalue < (float)0.10450585932)) {
            result[11] += -0.09844757;
          } else {
            result[11] += -0.026386939;
          }
        }
      } else {
        if ( (data[80].missing != -1) && (data[80].fvalue < (float)-0.43852174282)) {
          if ( (data[58].missing != -1) && (data[58].fvalue < (float)-0.52407383919)) {
            result[11] += 0.22310412;
          } else {
            result[11] += -0.017202176;
          }
        } else {
          if ( (data[43].missing != -1) && (data[43].fvalue < (float)0.27750822902)) {
            result[11] += -0.08524572;
          } else {
            result[11] += -0.009635801;
          }
        }
      }
    } else {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.62911725044)) {
        result[11] += -0.078014694;
      } else {
        if ( (data[30].missing != -1) && (data[30].fvalue < (float)0.24758394063)) {
          result[11] += 0.17391351;
        } else {
          result[11] += 0.07422935;
        }
      }
    }
  }
  if ( (data[88].missing != -1) && (data[88].fvalue < (float)1)) {
    if ( (data[32].missing != -1) && (data[32].fvalue < (float)6.7439284325)) {
      if ( (data[79].missing != -1) && (data[79].fvalue < (float)6.1137475967)) {
        if ( (data[77].missing != -1) && (data[77].fvalue < (float)4.8884630203)) {
          if ( (data[37].missing != -1) && (data[37].fvalue < (float)4.5415453911)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)-2.2499501705)) {
              result[12] += 0.018750547;
            } else {
              if ( (data[18].missing != -1) && (data[18].fvalue < (float)3.2361967564)) {
                if ( (data[19].missing != -1) && (data[19].fvalue < (float)3.7193567753)) {
                  if ( (data[32].missing != -1) && (data[32].fvalue < (float)5.7825541496)) {
                    result[12] += -0.09823297;
                  } else {
                    if ( (data[52].missing != -1) && (data[52].fvalue < (float)0.018169729039)) {
                      result[12] += -0.0871341;
                    } else {
                      result[12] += -0;
                    }
                  }
                } else {
                  result[12] += -0;
                }
              } else {
                result[12] += -0.011328742;
              }
            }
          } else {
            result[12] += 0.01012222;
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.83999991417)) {
            result[12] += 0.21624926;
          } else {
            result[12] += -0.085050516;
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.83999991417)) {
          result[12] += 0.18805726;
        } else {
          result[12] += -0.09733732;
        }
      }
    } else {
      if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31341737509)) {
        result[12] += 0.18262377;
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62016826868)) {
          result[12] += -0;
        } else {
          result[12] += -0.09024163;
        }
      }
    }
  } else {
    result[12] += 0.16088778;
  }
  if ( (data[86].missing != -1) && (data[86].fvalue < (float)1)) {
    if ( (data[78].missing != -1) && (data[78].fvalue < (float)3.4584906101)) {
      if ( (data[83].missing != -1) && (data[83].fvalue < (float)1)) {
        if ( (data[75].missing != -1) && (data[75].fvalue < (float)0.33958044648)) {
          if ( (data[47].missing != -1) && (data[47].fvalue < (float)0.64647638798)) {
            result[0] += -0.09796221;
          } else {
            result[0] += -0;
          }
        } else {
          if ( (data[72].missing != -1) && (data[72].fvalue < (float)0.33048978448)) {
            result[0] += 0.18911207;
          } else {
            result[0] += 0.061481852;
          }
        }
      } else {
        if ( (data[33].missing != -1) && (data[33].fvalue < (float)-0.22151166201)) {
          if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.4190364778)) {
            result[0] += -0.09758073;
          } else {
            result[0] += 0.044447407;
          }
        } else {
          if ( (data[28].missing != -1) && (data[28].fvalue < (float)1.3149677515)) {
            result[0] += 0.08041388;
          } else {
            result[0] += 0.1443717;
          }
        }
      }
    } else {
      if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025407476351)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.61899483204)) {
          if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.45554211736)) {
            if ( (data[47].missing != -1) && (data[47].fvalue < (float)-0.016165113077)) {
              result[0] += 0.12819204;
            } else {
              result[0] += -0.08754987;
            }
          } else {
            result[0] += 0.13906687;
          }
        } else {
          result[0] += -0.0909878;
        }
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)-0.51567870378)) {
          if ( (data[47].missing != -1) && (data[47].fvalue < (float)-0.015892436728)) {
            if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.0080859577283)) {
              result[0] += 0.01217342;
            } else {
              if ( (data[45].missing != -1) && (data[45].fvalue < (float)0.8430133462)) {
                result[0] += 0.13128135;
              } else {
                result[0] += 0.022641748;
              }
            }
          } else {
            result[0] += 0.15743935;
          }
        } else {
          if ( (data[48].missing != -1) && (data[48].fvalue < (float)0.36222153902)) {
            result[0] += -0.0972032;
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.74213886261)) {
              result[0] += -0.07073773;
            } else {
              result[0] += 0.070060976;
            }
          }
        }
      }
    }
  } else {
    if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.024578202516)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.53519374132)) {
        if ( (data[37].missing != -1) && (data[37].fvalue < (float)2.8316562176)) {
          if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.3156131804)) {
            result[0] += -0.005435207;
          } else {
            result[0] += -0.099360146;
          }
        } else {
          result[0] += 0.097399235;
        }
      } else {
        if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.78908890486)) {
          if ( (data[37].missing != -1) && (data[37].fvalue < (float)0.56114780903)) {
            if ( (data[37].missing != -1) && (data[37].fvalue < (float)0.11265233904)) {
              result[0] += 0.06517083;
            } else {
              result[0] += 0.13030045;
            }
          } else {
            result[0] += -0.030768106;
          }
        } else {
          result[0] += 0.13701758;
        }
      }
    } else {
      if ( (data[37].missing != -1) && (data[37].fvalue < (float)1.0937361717)) {
        if ( (data[69].missing != -1) && (data[69].fvalue < (float)-0.39860424399)) {
          if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31386581063)) {
            if ( (data[54].missing != -1) && (data[54].fvalue < (float)-0.039258748293)) {
              result[0] += -0.011060644;
            } else {
              result[0] += 0.10079761;
            }
          } else {
            result[0] += 0.17434251;
          }
        } else {
          if ( (data[55].missing != -1) && (data[55].fvalue < (float)-0.099804222584)) {
            if ( (data[55].missing != -1) && (data[55].fvalue < (float)-0.1285303086)) {
              if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.77628856897)) {
                result[0] += 0.03128012;
              } else {
                result[0] += -0.05236862;
              }
            } else {
              result[0] += -0.09500114;
            }
          } else {
            if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.78908890486)) {
              result[0] += -0.090418234;
            } else {
              if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.39068439603)) {
                result[0] += -0.091854274;
              } else {
                if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.2322666645)) {
                  if ( (data[37].missing != -1) && (data[37].fvalue < (float)1.0096433163)) {
                    if ( (data[35].missing != -1) && (data[35].fvalue < (float)0.28229063749)) {
                      if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.77788865566)) {
                        if ( (data[33].missing != -1) && (data[33].fvalue < (float)-0.60387730598)) {
                          result[0] += -0.007345695;
                        } else {
                          result[0] += 0.16403812;
                        }
                      } else {
                        result[0] += 0.25511923;
                      }
                    } else {
                      result[0] += -0;
                    }
                  } else {
                    result[0] += -0.013589496;
                  }
                } else {
                  result[0] += -0.08619004;
                }
              }
            }
          }
        }
      } else {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.0563672781)) {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.97995305061)) {
            if ( (data[37].missing != -1) && (data[37].fvalue < (float)2.7755942345)) {
              result[0] += -0.093681395;
            } else {
              result[0] += 0.08045552;
            }
          } else {
            if ( (data[61].missing != -1) && (data[61].fvalue < (float)-0.16619649529)) {
              if ( (data[35].missing != -1) && (data[35].fvalue < (float)-0.090235762298)) {
                result[0] += 0.15468964;
              } else {
                result[0] += -0;
              }
            } else {
              result[0] += 0.17517097;
            }
          }
        } else {
          result[0] += -0.017988613;
        }
      }
    }
  }
  if ( (data[71].missing != -1) && (data[71].fvalue < (float)-0.46831515431)) {
    if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.62648659945)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.36735785007)) {
        if ( (data[86].missing != -1) && (data[86].fvalue < (float)1)) {
          result[1] += -0.080142535;
        } else {
          if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.18767139316)) {
            if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.22036042809)) {
              result[1] += 0.18616244;
            } else {
              result[1] += -0.026457872;
            }
          } else {
            result[1] += 0.1686919;
          }
        }
      } else {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)0.06673399359)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.59183168411)) {
            if ( (data[82].missing != -1) && (data[82].fvalue < (float)1)) {
              if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.17023339868)) {
                if ( (data[71].missing != -1) && (data[71].fvalue < (float)-0.46860352159)) {
                  if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.58321207762)) {
                    result[1] += 0.1435452;
                  } else {
                    result[1] += -0;
                  }
                } else {
                  result[1] += -0.053605977;
                }
              } else {
                result[1] += -0.09400535;
              }
            } else {
              if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.74638354778)) {
                result[1] += 0.13901292;
              } else {
                if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.79971778393)) {
                  result[1] += -0.027522217;
                } else {
                  result[1] += 0.11409295;
                }
              }
            }
          } else {
            result[1] += -0.09428601;
          }
        } else {
          result[1] += -0.098517634;
        }
      }
    } else {
      if ( (data[27].missing != -1) && (data[27].fvalue < (float)3.7677032948)) {
        result[1] += -0.0980419;
      } else {
        result[1] += 0.14455949;
      }
    }
  } else {
    if ( (data[78].missing != -1) && (data[78].fvalue < (float)3.4584906101)) {
      if ( (data[47].missing != -1) && (data[47].fvalue < (float)-0.0052432520315)) {
        if ( (data[46].missing != -1) && (data[46].fvalue < (float)1.0866270065)) {
          if ( (data[32].missing != -1) && (data[32].fvalue < (float)5.9198932648)) {
            if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.024226156995)) {
              if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62019306421)) {
                if ( (data[71].missing != -1) && (data[71].fvalue < (float)-0.30970868468)) {
                  result[1] += -0.050681088;
                } else {
                  if ( (data[47].missing != -1) && (data[47].fvalue < (float)-0.015931583941)) {
                    result[1] += 0.12683569;
                  } else {
                    result[1] += 0.020300431;
                  }
                }
              } else {
                if ( (data[83].missing != -1) && (data[83].fvalue < (float)1)) {
                  result[1] += 0.13638546;
                } else {
                  if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.62869435549)) {
                    if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.17023339868)) {
                      if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62016886473)) {
                        if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.23112621903)) {
                          result[1] += 0.13861693;
                        } else {
                          result[1] += -0.03461497;
                        }
                      } else {
                        if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.6200761199)) {
                          if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.71015536785)) {
                            result[1] += 0.14157055;
                          } else {
                            if ( (data[32].missing != -1) && (data[32].fvalue < (float)3.4477875233)) {
                              result[1] += 0.046637584;
                            } else {
                              result[1] += -0.030150587;
                            }
                          }
                        } else {
                          result[1] += 0.13578509;
                        }
                      }
                    } else {
                      result[1] += 0.024200186;
                    }
                  } else {
                    if ( (data[43].missing != -1) && (data[43].fvalue < (float)-0.2696479857)) {
                      result[1] += -0.018686952;
                    } else {
                      result[1] += -0.09383451;
                    }
                  }
                }
              }
            } else {
              if ( (data[30].missing != -1) && (data[30].fvalue < (float)0.97991621494)) {
                if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62008339167)) {
                  result[1] += -0.090995684;
                } else {
                  result[1] += -0.012102537;
                }
              } else {
                result[1] += 0.14439835;
              }
            }
          } else {
            if ( (data[32].missing != -1) && (data[32].fvalue < (float)7.0186066628)) {
              result[1] += -0.094015725;
            } else {
              if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.43870261312)) {
                if ( (data[34].missing != -1) && (data[34].fvalue < (float)-0.20812723041)) {
                  result[1] += 0.16131194;
                } else {
                  if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.082774102688)) {
                    result[1] += 0.15344398;
                  } else {
                    result[1] += -0;
                  }
                }
              } else {
                result[1] += -0.019986281;
              }
            }
          }
        } else {
          result[1] += -0.06164148;
        }
      } else {
        if ( (data[83].missing != -1) && (data[83].fvalue < (float)1)) {
          if ( (data[78].missing != -1) && (data[78].fvalue < (float)-0.4874599874)) {
            result[1] += 0.029309863;
          } else {
            result[1] += 0.14142896;
          }
        } else {
          result[1] += -0.09749863;
        }
      }
    } else {
      result[1] += -0.097991124;
    }
  }
  if ( (data[50].missing != -1) && (data[50].fvalue < (float)2.0699031353)) {
    if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.80720156431)) {
      if ( (data[31].missing != -1) && (data[31].fvalue < (float)-0.37359598279)) {
        if ( (data[42].missing != -1) && (data[42].fvalue < (float)0.40617159009)) {
          result[2] += -0.09799138;
        } else {
          result[2] += 0.050491847;
        }
      } else {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.71015536785)) {
          result[2] += 0.14314292;
        } else {
          result[2] += -0.08680987;
        }
      }
    } else {
      result[2] += -0.09809105;
    }
  } else {
    if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.45554211736)) {
      result[2] += 0.13929139;
    } else {
      result[2] += -0.09467146;
    }
  }
  if ( (data[27].missing != -1) && (data[27].fvalue < (float)1.0054787397)) {
    result[3] += -0.09812521;
  } else {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)0.3592517674)) {
      result[3] += -0.08755968;
    } else {
      result[3] += 0.13648787;
    }
  }
  if ( (data[89].missing != -1) && (data[89].fvalue < (float)1)) {
    result[4] += -0.0978991;
  } else {
    result[4] += 0.13647631;
  }
  if ( (data[92].missing != -1) && (data[92].fvalue < (float)1)) {
    if ( (data[27].missing != -1) && (data[27].fvalue < (float)1.3160247803)) {
      result[5] += -0.09801637;
    } else {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)1.0963844061)) {
        result[5] += -0.08042905;
      } else {
        result[5] += 0.009329715;
      }
    }
  } else {
    result[5] += 0.21819836;
  }
  if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31586059928)) {
    if ( (data[22].missing != -1) && (data[22].fvalue < (float)-0.55805647373)) {
      if ( (data[17].missing != -1) && (data[17].fvalue < (float)1.0286098719)) {
        result[6] += -0.0963509;
      } else {
        result[6] += 0.43293008;
      }
    } else {
      result[6] += -0.097524635;
    }
  } else {
    result[6] += -0.09803752;
  }
  if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59867841005)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.59183168411)) {
      result[7] += -0.09704909;
    } else {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)-0.53552961349)) {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.15478906035)) {
          result[7] += 0.13613506;
        } else {
          result[7] += -0.09423408;
        }
      } else {
        result[7] += -0.09613685;
      }
    }
  } else {
    result[7] += -0.09812017;
  }
  if ( (data[80].missing != -1) && (data[80].fvalue < (float)9.5720357895)) {
    result[8] += -0.0980127;
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.62005853653)) {
      result[8] += -0.081182286;
    } else {
      result[8] += 0.1363371;
    }
  }
  if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.5824829936)) {
    if ( (data[84].missing != -1) && (data[84].fvalue < (float)1)) {
      if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.56359541416)) {
        result[9] += 0.056542452;
      } else {
        if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.0078816348687)) {
          if ( (data[86].missing != -1) && (data[86].fvalue < (float)1)) {
            result[9] += -0.023608034;
          } else {
            result[9] += -0.0957629;
          }
        } else {
          if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31392768025)) {
            result[9] += 0.083696604;
          } else {
            result[9] += -0.04969514;
          }
        }
      }
    } else {
      if ( (data[83].missing != -1) && (data[83].fvalue < (float)1)) {
        result[9] += -0.083124146;
      } else {
        if ( (data[27].missing != -1) && (data[27].fvalue < (float)0.23728621006)) {
          result[9] += 0.1376777;
        } else {
          result[9] += -0.011521263;
        }
      }
    }
  } else {
    if ( (data[87].missing != -1) && (data[87].fvalue < (float)1)) {
      if ( (data[27].missing != -1) && (data[27].fvalue < (float)1.2833356857)) {
        result[9] += -0.09787583;
      } else {
        result[9] += -0.033168294;
      }
    } else {
      if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.57948327065)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.71015536785)) {
          result[9] += -0.076867014;
        } else {
          result[9] += 0.13372584;
        }
      } else {
        result[9] += -0.09741342;
      }
    }
  }
  if ( (data[23].missing != -1) && (data[23].fvalue < (float)10.179190636)) {
    result[10] += -0.098041765;
  } else {
    result[10] += 0.13647218;
  }
  if ( (data[47].missing != -1) && (data[47].fvalue < (float)-0.015903236344)) {
    if ( (data[78].missing != -1) && (data[78].fvalue < (float)3.4584906101)) {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)-0.3027947247)) {
        if ( (data[55].missing != -1) && (data[55].fvalue < (float)-0.1082419157)) {
          if ( (data[27].missing != -1) && (data[27].fvalue < (float)0.23728621006)) {
            if ( (data[81].missing != -1) && (data[81].fvalue < (float)1)) {
              if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.61924982071)) {
                if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.77628856897)) {
                  if ( (data[32].missing != -1) && (data[32].fvalue < (float)6.9270472527)) {
                    result[11] += -0.09574512;
                  } else {
                    result[11] += -0;
                  }
                } else {
                  if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.20401591063)) {
                    if ( (data[32].missing != -1) && (data[32].fvalue < (float)0.92990243435)) {
                      result[11] += 0.072028674;
                    } else {
                      result[11] += -0.039360933;
                    }
                  } else {
                    if ( (data[55].missing != -1) && (data[55].fvalue < (float)-0.11213746667)) {
                      if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.0078816348687)) {
                        result[11] += -0.0931928;
                      } else {
                        result[11] += -0.013543125;
                      }
                    } else {
                      result[11] += -0;
                    }
                  }
                }
              } else {
                if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.024322185665)) {
                  result[11] += -0.090624265;
                } else {
                  if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.20401591063)) {
                    result[11] += 0.13432853;
                  } else {
                    result[11] += -0;
                  }
                }
              }
            } else {
              result[11] += 0.117471;
            }
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.039240390062)) {
              if ( (data[30].missing != -1) && (data[30].fvalue < (float)0.18033055961)) {
                result[11] += 0.043045048;
              } else {
                result[11] += 0.14034373;
              }
            } else {
              result[11] += -0.0172763;
            }
          }
        } else {
          if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025342080742)) {
            result[11] += -0.09029048;
          } else {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)1.0963844061)) {
              if ( (data[32].missing != -1) && (data[32].fvalue < (float)0.92990243435)) {
                if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.17023339868)) {
                  result[11] += 0.10699786;
                } else {
                  result[11] += 0.24649975;
                }
              } else {
                if ( (data[34].missing != -1) && (data[34].fvalue < (float)-0.20994369686)) {
                  if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.43109288812)) {
                    result[11] += 0.14006218;
                  } else {
                    if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.36591973901)) {
                      if ( (data[32].missing != -1) && (data[32].fvalue < (float)1.9828362465)) {
                        result[11] += -0.055560958;
                      } else {
                        result[11] += 0.11720982;
                      }
                    } else {
                      result[11] += 0.12680353;
                    }
                  }
                } else {
                  if ( (data[32].missing != -1) && (data[32].fvalue < (float)3.6766862869)) {
                    if ( (data[34].missing != -1) && (data[34].fvalue < (float)-0.20964646339)) {
                      if ( (data[61].missing != -1) && (data[61].fvalue < (float)-0.16766904294)) {
                        result[11] += -0.0405424;
                      } else {
                        result[11] += 0.10422885;
                      }
                    } else {
                      result[11] += -0.07469454;
                    }
                  } else {
                    if ( (data[32].missing != -1) && (data[32].fvalue < (float)5.4163160324)) {
                      if ( (data[32].missing != -1) && (data[32].fvalue < (float)4.9127392769)) {
                        result[11] += 0.04745643;
                      } else {
                        result[11] += 0.17710915;
                      }
                    } else {
                      if ( (data[61].missing != -1) && (data[61].fvalue < (float)-0.16615319252)) {
                        result[11] += -0.04033174;
                      } else {
                        if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.15498234332)) {
                          if ( (data[32].missing != -1) && (data[32].fvalue < (float)7.430624485)) {
                            if ( (data[32].missing != -1) && (data[32].fvalue < (float)6.6981487274)) {
                              result[11] += 0.10255416;
                            } else {
                              result[11] += -0;
                            }
                          } else {
                            result[11] += 0.1477354;
                          }
                        } else {
                          result[11] += -0;
                        }
                      }
                    }
                  }
                }
              }
            } else {
              if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.76508826017)) {
                result[11] += -0.07796704;
              } else {
                if ( (data[55].missing != -1) && (data[55].fvalue < (float)4.7785139084)) {
                  result[11] += 0.060557116;
                } else {
                  result[11] += -0;
                }
              }
            }
          }
        }
      } else {
        result[11] += -0.09808108;
      }
    } else {
      if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025413041934)) {
        result[11] += -0.093147166;
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)1.2824162245)) {
          result[11] += -0.08999041;
        } else {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)2.4427080154)) {
            if ( (data[59].missing != -1) && (data[59].fvalue < (float)-0.40304526687)) {
              result[11] += -0;
            } else {
              result[11] += 0.1379767;
            }
          } else {
            if ( (data[48].missing != -1) && (data[48].fvalue < (float)1.3143134117)) {
              result[11] += 0.3299643;
            } else {
              result[11] += 0.17371114;
            }
          }
        }
      }
    }
  } else {
    if ( (data[36].missing != -1) && (data[36].fvalue < (float)-0.61669498682)) {
      if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.013868609443)) {
        if ( (data[47].missing != -1) && (data[47].fvalue < (float)0.64647638798)) {
          result[11] += -0.09751756;
        } else {
          result[11] += -0.022996992;
        }
      } else {
        result[11] += 0.15561229;
      }
    } else {
      if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.93103021383)) {
        if ( (data[30].missing != -1) && (data[30].fvalue < (float)-1.0593373775)) {
          if ( (data[78].missing != -1) && (data[78].fvalue < (float)3.4584906101)) {
            result[11] += -0.08810293;
          } else {
            result[11] += -0.010597815;
          }
        } else {
          if ( (data[34].missing != -1) && (data[34].fvalue < (float)-0.20172007382)) {
            result[11] += 0.13659197;
          } else {
            result[11] += -0.06438675;
          }
        }
      } else {
        if ( (data[78].missing != -1) && (data[78].fvalue < (float)3.4584906101)) {
          result[11] += -0.0955573;
        } else {
          if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025243291631)) {
            result[11] += -0.07389217;
          } else {
            result[11] += 0.1449712;
          }
        }
      }
    }
  }
  if ( (data[88].missing != -1) && (data[88].fvalue < (float)1)) {
    if ( (data[79].missing != -1) && (data[79].fvalue < (float)6.1137475967)) {
      if ( (data[75].missing != -1) && (data[75].fvalue < (float)2.3511066437)) {
        if ( (data[58].missing != -1) && (data[58].fvalue < (float)-0.57980215549)) {
          result[12] += 0.07601252;
        } else {
          if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.79708915949)) {
            if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.44918376207)) {
              if ( (data[53].missing != -1) && (data[53].fvalue < (float)-0.22910408676)) {
                if ( (data[42].missing != -1) && (data[42].fvalue < (float)-0.0077007142827)) {
                  result[12] += -0.09539306;
                } else {
                  result[12] += -0.00989572;
                }
              } else {
                result[12] += -0;
              }
            } else {
              if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62007164955)) {
                result[12] += 0.12412505;
              } else {
                result[12] += 0.23674615;
              }
            }
          } else {
            if ( (data[77].missing != -1) && (data[77].fvalue < (float)4.8884630203)) {
              if ( (data[51].missing != -1) && (data[51].fvalue < (float)0.91606855392)) {
                if ( (data[37].missing != -1) && (data[37].fvalue < (float)4.5415453911)) {
                  result[12] += -0.09794777;
                } else {
                  result[12] += -0.035072435;
                }
              } else {
                if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.83999991417)) {
                  result[12] += 0.06526026;
                } else {
                  result[12] += -0.09433241;
                }
              }
            } else {
              if ( (data[42].missing != -1) && (data[42].fvalue < (float)-0.010366139933)) {
                result[12] += -0.076990426;
              } else {
                result[12] += 0.06400647;
              }
            }
          }
        }
      } else {
        result[12] += 0.1006488;
      }
    } else {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.0699566603)) {
        result[12] += 0.16073947;
      } else {
        result[12] += -0.09663955;
      }
    }
  } else {
    result[12] += 0.1400073;
  }
  if ( (data[83].missing != -1) && (data[83].fvalue < (float)1)) {
    if ( (data[50].missing != -1) && (data[50].fvalue < (float)0.49784451723)) {
      if ( (data[79].missing != -1) && (data[79].fvalue < (float)2.4661560059)) {
        if ( (data[80].missing != -1) && (data[80].fvalue < (float)9.5720357895)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)1.724832654)) {
            if ( (data[55].missing != -1) && (data[55].fvalue < (float)7.806274516e-05)) {
              result[0] += -0.097436816;
            } else {
              result[0] += -0;
            }
          } else {
            if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025413041934)) {
              result[0] += 0.1428225;
            } else {
              if ( (data[36].missing != -1) && (data[36].fvalue < (float)-0.68227016926)) {
                result[0] += -0.014755537;
              } else {
                result[0] += -0.09630555;
              }
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62010836601)) {
            if ( (data[45].missing != -1) && (data[45].fvalue < (float)0.8430133462)) {
              result[0] += 0.1234481;
            } else {
              result[0] += 0.029622437;
            }
          } else {
            result[0] += -0.09337647;
          }
        }
      } else {
        if ( (data[80].missing != -1) && (data[80].fvalue < (float)-0.28877517581)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.039184696972)) {
            result[0] += -0.061403178;
          } else {
            if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025336515158)) {
              if ( (data[47].missing != -1) && (data[47].fvalue < (float)-0.01553606987)) {
                result[0] += 0.12731618;
              } else {
                if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.61771321297)) {
                  result[0] += -0.019785233;
                } else {
                  result[0] += 0.14838342;
                }
              }
            } else {
              result[0] += -0.024850901;
            }
          }
        } else {
          if ( (data[48].missing != -1) && (data[48].fvalue < (float)-0.23962953687)) {
            result[0] += -0.09478918;
          } else {
            result[0] += 0.058214795;
          }
        }
      }
    } else {
      if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025243291631)) {
        if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.45558649302)) {
          result[0] += -0.08279899;
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2.2360525131)) {
            result[0] += 0.12950319;
          } else {
            result[0] += 0.016131995;
          }
        }
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)-0.46243745089)) {
          result[0] += -0;
        } else {
          result[0] += -0.09408358;
        }
      }
    }
  } else {
    if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.024578202516)) {
      if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.80720156431)) {
        result[0] += -0.096279636;
      } else {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.2629079819)) {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.53519374132)) {
            if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.7070043087)) {
              if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.81487703323)) {
                result[0] += -0.0013450355;
              } else {
                result[0] += -0.09806864;
              }
            } else {
              if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.64759612083)) {
                result[0] += 0.05695512;
              } else {
                result[0] += 0.12703583;
              }
            }
          } else {
            if ( (data[27].missing != -1) && (data[27].fvalue < (float)0.22094169259)) {
              if ( (data[86].missing != -1) && (data[86].fvalue < (float)1)) {
                if ( (data[32].missing != -1) && (data[32].fvalue < (float)0.92990243435)) {
                  result[0] += -0.09278269;
                } else {
                  result[0] += 0.13390747;
                }
              } else {
                if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.024974752218)) {
                  result[0] += 0.12777247;
                } else {
                  if ( (data[35].missing != -1) && (data[35].fvalue < (float)-0.23067225516)) {
                    result[0] += -0.06044042;
                  } else {
                    if ( (data[33].missing != -1) && (data[33].fvalue < (float)-0.60387730598)) {
                      result[0] += 0.18963769;
                    } else {
                      if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.23670496047)) {
                        result[0] += 0.007671186;
                      } else {
                        result[0] += 0.13286074;
                      }
                    }
                  }
                }
              }
            } else {
              if ( (data[4].missing != -1) && (data[4].fvalue < (float)-0.51474040747)) {
                result[0] += -0.08094907;
              } else {
                result[0] += 0.115685746;
              }
            }
          }
        } else {
          result[0] += -0.09964384;
        }
      }
    } else {
      if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.54161769152)) {
        if ( (data[33].missing != -1) && (data[33].fvalue < (float)-0.65017938614)) {
          if ( (data[33].missing != -1) && (data[33].fvalue < (float)-0.65914112329)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62018990517)) {
              if ( (data[71].missing != -1) && (data[71].fvalue < (float)-0.38767385483)) {
                result[0] += 0.11335753;
              } else {
                result[0] += -0.020527821;
              }
            } else {
              result[0] += -0.0886083;
            }
          } else {
            result[0] += 0.17256075;
          }
        } else {
          if ( (data[34].missing != -1) && (data[34].fvalue < (float)-0.20921711624)) {
            if ( (data[55].missing != -1) && (data[55].fvalue < (float)-0.035617761314)) {
              result[0] += -0.095076896;
            } else {
              result[0] += -0.025569424;
            }
          } else {
            result[0] += -0;
          }
        }
      } else {
        if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.93103021383)) {
          if ( (data[50].missing != -1) && (data[50].fvalue < (float)-0.029687238857)) {
            result[0] += -0.095335156;
          } else {
            result[0] += 0.062109843;
          }
        } else {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.2629079819)) {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.35428348184)) {
              if ( (data[71].missing != -1) && (data[71].fvalue < (float)-0.13326488435)) {
                result[0] += -0.09951407;
              } else {
                if ( (data[73].missing != -1) && (data[73].fvalue < (float)1.0611419678)) {
                  result[0] += 0.084950276;
                } else {
                  result[0] += 0.013065513;
                }
              }
            } else {
              if ( (data[34].missing != -1) && (data[34].fvalue < (float)-0.20895290375)) {
                if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.42648643255)) {
                  result[0] += 0.12114202;
                } else {
                  if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.15498234332)) {
                    result[0] += -0.06822505;
                  } else {
                    result[0] += -0.006901209;
                  }
                }
              } else {
                if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31372666359)) {
                  result[0] += 0.22517179;
                } else {
                  if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.28573852777)) {
                    result[0] += -0.056139003;
                  } else {
                    if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.0563672781)) {
                      result[0] += 0.14758582;
                    } else {
                      result[0] += 0.02559944;
                    }
                  }
                }
              }
            }
          } else {
            result[0] += -0.09078361;
          }
        }
      }
    }
  }
  if ( (data[53].missing != -1) && (data[53].fvalue < (float)-0.26869207621)) {
    if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59609615803)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.5871013999)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)2.23818326)) {
          if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.80862355232)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.57866376638)) {
              result[1] += 0.10641678;
            } else {
              if ( (data[12].missing != -1) && (data[12].fvalue < (float)-0.0058834324591)) {
                if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.3156131804)) {
                  result[1] += -0.09180876;
                } else {
                  result[1] += -0.0068259384;
                }
              } else {
                result[1] += -0;
              }
            }
          } else {
            if ( (data[35].missing != -1) && (data[35].fvalue < (float)0.03643072024)) {
              if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.49173647165)) {
                if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.20401591063)) {
                  result[1] += -0.10523796;
                } else {
                  if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.15498234332)) {
                    result[1] += 0.14681889;
                  } else {
                    result[1] += 0.054348003;
                  }
                }
              } else {
                result[1] += 0.15248407;
              }
            } else {
              result[1] += -0.08002743;
            }
          }
        } else {
          result[1] += 0.11246045;
        }
      } else {
        result[1] += -0.09573734;
      }
    } else {
      if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.57856816053)) {
        result[1] += -0.0976358;
      } else {
        result[1] += 0.12593478;
      }
    }
  } else {
    if ( (data[78].missing != -1) && (data[78].fvalue < (float)3.4584906101)) {
      if ( (data[47].missing != -1) && (data[47].fvalue < (float)-0.0052432520315)) {
        if ( (data[44].missing != -1) && (data[44].fvalue < (float)0.18442375958)) {
          if ( (data[90].missing != -1) && (data[90].fvalue < (float)1)) {
            if ( (data[83].missing != -1) && (data[83].fvalue < (float)1)) {
              if ( (data[4].missing != -1) && (data[4].fvalue < (float)-0.51474040747)) {
                if ( (data[44].missing != -1) && (data[44].fvalue < (float)-0.019624406472)) {
                  result[1] += -0.021644145;
                } else {
                  result[1] += 0.08653509;
                }
              } else {
                if ( (data[79].missing != -1) && (data[79].fvalue < (float)6.0763492584)) {
                  result[1] += 0.12802479;
                } else {
                  if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.74213886261)) {
                    result[1] += -0.1136276;
                  } else {
                    result[1] += 0.12815282;
                  }
                }
              }
            } else {
              if ( (data[4].missing != -1) && (data[4].fvalue < (float)-0.50166469812)) {
                if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.4328392446)) {
                  result[1] += -0.113228835;
                } else {
                  if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62012577057)) {
                    if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.12229329348)) {
                      if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.20401591063)) {
                        if ( (data[33].missing != -1) && (data[33].fvalue < (float)-0.62329429388)) {
                          result[1] += -0.042927023;
                        } else {
                          if ( (data[61].missing != -1) && (data[61].fvalue < (float)-0.16704104841)) {
                            result[1] += 0.1524145;
                          } else {
                            if ( (data[33].missing != -1) && (data[33].fvalue < (float)-0.54562628269)) {
                              result[1] += -0.093641475;
                            } else {
                              result[1] += 0.077490516;
                            }
                          }
                        }
                      } else {
                        if ( (data[35].missing != -1) && (data[35].fvalue < (float)-0.23067225516)) {
                          result[1] += 0.12846047;
                        } else {
                          result[1] += 0.04697149;
                        }
                      }
                    } else {
                      if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.30989176035)) {
                        result[1] += -0.084469244;
                      } else {
                        result[1] += -0;
                      }
                    }
                  } else {
                    if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.61850941181)) {
                      if ( (data[33].missing != -1) && (data[33].fvalue < (float)-0.48886889219)) {
                        result[1] += 0.12696382;
                      } else {
                        result[1] += 0.011306492;
                      }
                    } else {
                      result[1] += -0.05647804;
                    }
                  }
                }
              } else {
                result[1] += -0.09292998;
              }
            }
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.038621056825)) {
              result[1] += -0.08691242;
            } else {
              result[1] += 0.06335178;
            }
          }
        } else {
          result[1] += -0.08654416;
        }
      } else {
        if ( (data[83].missing != -1) && (data[83].fvalue < (float)1)) {
          if ( (data[78].missing != -1) && (data[78].fvalue < (float)-0.4874599874)) {
            result[1] += 0.025354072;
          } else {
            result[1] += 0.13150293;
          }
        } else {
          result[1] += -0.09693537;
        }
      }
    } else {
      result[1] += -0.09751717;
    }
  }
  if ( (data[87].missing != -1) && (data[87].fvalue < (float)1)) {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)3.2361967564)) {
      result[2] += -0.09770031;
    } else {
      result[2] += 0.010809067;
    }
  } else {
    if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.44930633903)) {
      if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.60602760315)) {
        result[2] += 0.12781677;
      } else {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.71015536785)) {
          result[2] += 0.13511544;
        } else {
          result[2] += -0.083775885;
        }
      }
    } else {
      if ( (data[42].missing != -1) && (data[42].fvalue < (float)-0.010550498962)) {
        result[2] += -0.024668816;
      } else {
        result[2] += -0.09690256;
      }
    }
  }
  if ( (data[54].missing != -1) && (data[54].fvalue < (float)-0.039261560887)) {
    if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59171414375)) {
      result[3] += -0.0973778;
    } else {
      result[3] += 0.1279145;
    }
  } else {
    if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.53914117813)) {
      result[3] += -0.09772319;
    } else {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.46250709891)) {
        result[3] += 0.106421255;
      } else {
        result[3] += -0;
      }
    }
  }
  if ( (data[89].missing != -1) && (data[89].fvalue < (float)1)) {
    result[4] += -0.09746621;
  } else {
    result[4] += 0.12792666;
  }
  if ( (data[27].missing != -1) && (data[27].fvalue < (float)1.3160247803)) {
    if ( (data[79].missing != -1) && (data[79].fvalue < (float)6.0763492584)) {
      result[5] += -0.09756296;
    } else {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.17688424885)) {
        result[5] += 0.17301032;
      } else {
        result[5] += -0.09664617;
      }
    }
  } else {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)1.0963844061)) {
      result[5] += -0.0764219;
    } else {
      result[5] += 0.015320584;
    }
  }
  if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31586059928)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.17688424885)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.68544656038)) {
        result[6] += 0.06303641;
      } else {
        result[6] += 0.19029257;
      }
    } else {
      result[6] += -0.09725691;
    }
  } else {
    result[6] += -0.097628035;
  }
  if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31586059928)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.68544656038)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.42764511704)) {
        result[7] += -0.095817864;
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.61959242821)) {
          result[7] += -0.092736855;
        } else {
          result[7] += 0.12592785;
        }
      }
    } else {
      result[7] += -0.096067205;
    }
  } else {
    result[7] += -0.09772778;
  }
  if ( (data[12].missing != -1) && (data[12].fvalue < (float)3.7342278957)) {
    result[8] += -0.09760034;
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62013286352)) {
      result[8] += -0.0843903;
    } else {
      result[8] += 0.12776102;
    }
  }
  if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.5824829936)) {
    if ( (data[86].missing != -1) && (data[86].fvalue < (float)1)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)-0.45095446706)) {
        if ( (data[27].missing != -1) && (data[27].fvalue < (float)0.23728621006)) {
          result[9] += 0.12796172;
        } else {
          result[9] += -0;
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.62009418011)) {
          result[9] += -0.0071924655;
        } else {
          result[9] += -0.078679346;
        }
      }
    } else {
      if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.0078816348687)) {
        if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.83832764626)) {
          result[9] += -0;
        } else {
          result[9] += -0.0947973;
        }
      } else {
        if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.7070043087)) {
          result[9] += 0.061323594;
        } else {
          result[9] += -0.0071127405;
        }
      }
    }
  } else {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)-0.45095446706)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.42472195625)) {
        if ( (data[46].missing != -1) && (data[46].fvalue < (float)0.11023624986)) {
          result[9] += -0.09675333;
        } else {
          result[9] += -0;
        }
      } else {
        result[9] += 0.10485118;
      }
    } else {
      if ( (data[37].missing != -1) && (data[37].fvalue < (float)1.3460149765)) {
        result[9] += -0.09761214;
      } else {
        result[9] += -0;
      }
    }
  }
  if ( (data[23].missing != -1) && (data[23].fvalue < (float)10.179190636)) {
    result[10] += -0.09763362;
  } else {
    result[10] += 0.12793443;
  }
  if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.18199364841)) {
    if ( (data[36].missing != -1) && (data[36].fvalue < (float)-0.61669498682)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)-0.44659695029)) {
        if ( (data[53].missing != -1) && (data[53].fvalue < (float)-0.26658165455)) {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.93369174)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.62011039257)) {
              if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.81487703323)) {
                result[11] += 0.11728421;
              } else {
                if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.78673630953)) {
                  result[11] += -0.06409503;
                } else {
                  result[11] += 0.10690807;
                }
              }
            } else {
              result[11] += -0.090625495;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.61924982071)) {
              if ( (data[53].missing != -1) && (data[53].fvalue < (float)-0.26749920845)) {
                result[11] += -0.093801625;
              } else {
                if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60406643152)) {
                  result[11] += 0.0005530366;
                } else {
                  result[11] += -0.07559031;
                }
              }
            } else {
              if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.49699115753)) {
                result[11] += -0.06351614;
              } else {
                if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59750467539)) {
                  result[11] += 0.1404777;
                } else {
                  result[11] += 0.0131776165;
                }
              }
            }
          }
        } else {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.46778979897)) {
            if ( (data[32].missing != -1) && (data[32].fvalue < (float)1.9828362465)) {
              if ( (data[68].missing != -1) && (data[68].fvalue < (float)1.1005766392)) {
                if ( (data[54].missing != -1) && (data[54].fvalue < (float)0.079855747521)) {
                  if ( (data[43].missing != -1) && (data[43].fvalue < (float)0.14091680944)) {
                    result[11] += 0.092479505;
                  } else {
                    result[11] += -0.016914077;
                  }
                } else {
                  result[11] += 0.13545609;
                }
              } else {
                result[11] += -0;
              }
            } else {
              result[11] += -0.0955068;
            }
          } else {
            if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.27454009652)) {
              if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.63046061993)) {
                result[11] += 0.14113866;
              } else {
                if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.2629079819)) {
                  if ( (data[53].missing != -1) && (data[53].fvalue < (float)-0.2361369431)) {
                    if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60426801443)) {
                      result[11] += -0.018064309;
                    } else {
                      if ( (data[32].missing != -1) && (data[32].fvalue < (float)2.4406335354)) {
                        result[11] += 0.1356975;
                      } else {
                        if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.82802081108)) {
                          if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.85385841131)) {
                            result[11] += -0.019159373;
                          } else {
                            result[11] += 0.023438811;
                          }
                        } else {
                          if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.62004899979)) {
                            if ( (data[32].missing != -1) && (data[32].fvalue < (float)5.3705363274)) {
                              result[11] += 0.10133842;
                            } else {
                              if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62017637491)) {
                                result[11] += 0.038965844;
                              } else {
                                result[11] += -0.019079616;
                              }
                            }
                          } else {
                            if ( (data[32].missing != -1) && (data[32].fvalue < (float)5.7825541496)) {
                              result[11] += 0.1686858;
                            } else {
                              result[11] += 0.07078227;
                            }
                          }
                        }
                      }
                    }
                  } else {
                    result[11] += 0.14144439;
                  }
                } else {
                  if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.4400168657)) {
                    result[11] += 0.16404773;
                  } else {
                    result[11] += 0.047432672;
                  }
                }
              }
            } else {
              result[11] += -0.09503622;
            }
          }
        }
      } else {
        if ( (data[32].missing != -1) && (data[32].fvalue < (float)5.9198932648)) {
          if ( (data[32].missing != -1) && (data[32].fvalue < (float)3.3562281132)) {
            if ( (data[51].missing != -1) && (data[51].fvalue < (float)3.7525391579)) {
              result[11] += -0.09503921;
            } else {
              result[11] += -0.0145953875;
            }
          } else {
            if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.92178285122)) {
              result[11] += 0.029328564;
            } else {
              result[11] += -0.0790446;
            }
          }
        } else {
          result[11] += 0.0429092;
        }
      }
    } else {
      if ( (data[33].missing != -1) && (data[33].fvalue < (float)1.4050359726)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.52279245853)) {
          if ( (data[79].missing != -1) && (data[79].fvalue < (float)6.0763492584)) {
            result[11] += -0.09435485;
          } else {
            result[11] += 0.023478154;
          }
        } else {
          if ( (data[44].missing != -1) && (data[44].fvalue < (float)-0.03903195262)) {
            result[11] += -0.08670261;
          } else {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.48612654209)) {
              if ( (data[48].missing != -1) && (data[48].fvalue < (float)-0.16163724661)) {
                result[11] += 0.12783742;
              } else {
                result[11] += -0.064620994;
              }
            } else {
              if ( (data[25].missing != -1) && (data[25].fvalue < (float)57.008499146)) {
                if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.9851242304)) {
                  if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.83999991417)) {
                    result[11] += -0.081710964;
                  } else {
                    result[11] += 0.16946767;
                  }
                } else {
                  if ( (data[13].missing != -1) && (data[13].fvalue < (float)2.4427080154)) {
                    result[11] += -0.08970431;
                  } else {
                    result[11] += -0.022296285;
                  }
                }
              } else {
                result[11] += 0.16679066;
              }
            }
          }
        }
      } else {
        result[11] += -0.09673586;
      }
    }
  } else {
    if ( (data[83].missing != -1) && (data[83].fvalue < (float)1)) {
      if ( (data[79].missing != -1) && (data[79].fvalue < (float)2.4900910854)) {
        result[11] += -0.09762106;
      } else {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.74213886261)) {
          result[11] += 0.16363339;
        } else {
          result[11] += -0.07505957;
        }
      }
    } else {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.62911725044)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.5222806931)) {
          result[11] += -0.017914932;
        } else {
          result[11] += -0.088793926;
        }
      } else {
        if ( (data[32].missing != -1) && (data[32].fvalue < (float)0.92990243435)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62021154165)) {
            result[11] += 0.1068182;
          } else {
            result[11] += 0.22441027;
          }
        } else {
          result[11] += -0.057096425;
        }
      }
    }
  }
  if ( (data[80].missing != -1) && (data[80].fvalue < (float)9.7740383148)) {
    if ( (data[32].missing != -1) && (data[32].fvalue < (float)6.7439284325)) {
      if ( (data[79].missing != -1) && (data[79].fvalue < (float)6.1137475967)) {
        if ( (data[75].missing != -1) && (data[75].fvalue < (float)2.3511066437)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.58832603693)) {
            result[12] += 0.051148605;
          } else {
            if ( (data[51].missing != -1) && (data[51].fvalue < (float)1.925927639)) {
              if ( (data[52].missing != -1) && (data[52].fvalue < (float)0.23504699767)) {
                result[12] += -0.09723666;
              } else {
                if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.79708915949)) {
                  result[12] += 0.058847103;
                } else {
                  if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.78405153751)) {
                    result[12] += -0.09127028;
                  } else {
                    result[12] += -0.0025948302;
                  }
                }
              }
            } else {
              if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025155633688)) {
                result[12] += -0.09377506;
              } else {
                result[12] += 0.20097734;
              }
            }
          }
        } else {
          result[12] += 0.08600069;
        }
      } else {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.0699566603)) {
          result[12] += 0.15425886;
        } else {
          result[12] += -0.09596048;
        }
      }
    } else {
      if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.4328392446)) {
        if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60409045219)) {
          result[12] += -0;
        } else {
          result[12] += 0.17565937;
        }
      } else {
        result[12] += -0.08823124;
      }
    }
  } else {
    result[12] += 0.124692805;
  }
  if ( (data[86].missing != -1) && (data[86].fvalue < (float)1)) {
    if ( (data[78].missing != -1) && (data[78].fvalue < (float)3.4584906101)) {
      if ( (data[82].missing != -1) && (data[82].fvalue < (float)1)) {
        if ( (data[33].missing != -1) && (data[33].fvalue < (float)-0.22151166201)) {
          if ( (data[55].missing != -1) && (data[55].fvalue < (float)7.806274516e-05)) {
            result[0] += -0.08865219;
          } else {
            if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.36591973901)) {
              result[0] += 0.16659914;
            } else {
              result[0] += -0.059031356;
            }
          }
        } else {
          if ( (data[28].missing != -1) && (data[28].fvalue < (float)1.3149677515)) {
            result[0] += 0.06246039;
          } else {
            result[0] += 0.12572888;
          }
        }
      } else {
        if ( (data[55].missing != -1) && (data[55].fvalue < (float)3.4052605629)) {
          if ( (data[50].missing != -1) && (data[50].fvalue < (float)0.17703424394)) {
            result[0] += -0.097386785;
          } else {
            result[0] += -0.014098829;
          }
        } else {
          result[0] += 0.09986679;
        }
      }
    } else {
      if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025407476351)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.61899483204)) {
          if ( (data[17].missing != -1) && (data[17].fvalue < (float)5.2582302094)) {
            if ( (data[93].missing != -1) && (data[93].fvalue < (float)1)) {
              if ( (data[43].missing != -1) && (data[43].fvalue < (float)1.1454337835)) {
                if ( (data[61].missing != -1) && (data[61].fvalue < (float)-0.15318180621)) {
                  result[0] += 0.12322275;
                } else {
                  result[0] += -0;
                }
              } else {
                result[0] += -0.095513016;
              }
            } else {
              result[0] += 0.12423161;
            }
          } else {
            result[0] += -0;
          }
        } else {
          result[0] += -0.087929256;
        }
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)-0.51567870378)) {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.81572955847)) {
            if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025115283206)) {
              if ( (data[45].missing != -1) && (data[45].fvalue < (float)-0.087043471634)) {
                result[0] += 0.036937665;
              } else {
                result[0] += 0.15777946;
              }
            } else {
              if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.6996152401)) {
                result[0] += -0;
              } else {
                result[0] += 0.11211917;
              }
            }
          } else {
            result[0] += -0;
          }
        } else {
          if ( (data[79].missing != -1) && (data[79].fvalue < (float)2.4661560059)) {
            result[0] += -0.0968897;
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.21683251858)) {
              result[0] += 0.069296725;
            } else {
              result[0] += -0.09334092;
            }
          }
        }
      }
    }
  } else {
    if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.024578202516)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.53519374132)) {
        if ( (data[37].missing != -1) && (data[37].fvalue < (float)2.8316562176)) {
          if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.77468854189)) {
            result[0] += -0;
          } else {
            result[0] += -0.0962392;
          }
        } else {
          result[0] += 0.07110374;
        }
      } else {
        if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.63217777014)) {
          if ( (data[72].missing != -1) && (data[72].fvalue < (float)-0.13171011209)) {
            result[0] += -0;
          } else {
            result[0] += 0.107029445;
          }
        } else {
          result[0] += 0.120326206;
        }
      }
    } else {
      if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.93103021383)) {
        result[0] += -0.09542322;
      } else {
        if ( (data[34].missing != -1) && (data[34].fvalue < (float)-0.20895290375)) {
          if ( (data[32].missing != -1) && (data[32].fvalue < (float)2.5321929455)) {
            if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.77148842812)) {
              if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60372674465)) {
                result[0] += 0.29430443;
              } else {
                result[0] += 0.109491624;
              }
            } else {
              if ( (data[37].missing != -1) && (data[37].fvalue < (float)2.7755942345)) {
                result[0] += -0.08182482;
              } else {
                if ( (data[73].missing != -1) && (data[73].fvalue < (float)1.0611419678)) {
                  result[0] += 0.08267996;
                } else {
                  result[0] += -0;
                }
              }
            }
          } else {
            if ( (data[37].missing != -1) && (data[37].fvalue < (float)1.0937361717)) {
              if ( (data[32].missing != -1) && (data[32].fvalue < (float)3.5393471718)) {
                if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.61850941181)) {
                  if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62016886473)) {
                    result[0] += -0.017887095;
                  } else {
                    result[0] += -0.09608854;
                  }
                } else {
                  result[0] += -0.004681747;
                }
              } else {
                if ( (data[32].missing != -1) && (data[32].fvalue < (float)4.5465011597)) {
                  if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.77788865566)) {
                    result[0] += -0;
                  } else {
                    result[0] += 0.20813254;
                  }
                } else {
                  result[0] += -0.083120674;
                }
              }
            } else {
              if ( (data[32].missing != -1) && (data[32].fvalue < (float)3.6766862869)) {
                result[0] += 0.102758005;
              } else {
                result[0] += -0.01182214;
              }
            }
          }
        } else {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.2157365084)) {
            if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.78268873692)) {
              if ( (data[34].missing != -1) && (data[34].fvalue < (float)-0.20878776908)) {
                result[0] += 0.18996847;
              } else {
                result[0] += -0.071760066;
              }
            } else {
              if ( (data[34].missing != -1) && (data[34].fvalue < (float)-0.20878776908)) {
                result[0] += -0;
              } else {
                if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.0563672781)) {
                  if ( (data[32].missing != -1) && (data[32].fvalue < (float)6.7439284325)) {
                    result[0] += 0.18433376;
                  } else {
                    if ( (data[33].missing != -1) && (data[33].fvalue < (float)-0.48886889219)) {
                      result[0] += -0;
                    } else {
                      result[0] += 0.13657014;
                    }
                  }
                } else {
                  result[0] += 0.038560662;
                }
              }
            }
          } else {
            result[0] += -0.039211642;
          }
        }
      }
    }
  }
  if ( (data[55].missing != -1) && (data[55].fvalue < (float)-0.1346296072)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.17688424885)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)0.3592517674)) {
        result[1] += -0.031860437;
      } else {
        result[1] += -0.09734088;
      }
    } else {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.93369174)) {
        if ( (data[37].missing != -1) && (data[37].fvalue < (float)1.1497981548)) {
          if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.18767139316)) {
            result[1] += -0.04122763;
          } else {
            result[1] += 0.14858031;
          }
        } else {
          result[1] += -0.08366894;
        }
      } else {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)0.06673399359)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.62016272545)) {
            if ( (data[82].missing != -1) && (data[82].fvalue < (float)1)) {
              if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.15498234332)) {
                result[1] += 0.010868755;
              } else {
                result[1] += -0.09010571;
              }
            } else {
              if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.74638354778)) {
                result[1] += 0.12447908;
              } else {
                if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.78900486231)) {
                  result[1] += -0.077099144;
                } else {
                  result[1] += 0.10286087;
                }
              }
            }
          } else {
            result[1] += -0.0947532;
          }
        } else {
          result[1] += -0.09778215;
        }
      }
    }
  } else {
    if ( (data[78].missing != -1) && (data[78].fvalue < (float)3.4584906101)) {
      if ( (data[47].missing != -1) && (data[47].fvalue < (float)-0.0052432520315)) {
        if ( (data[69].missing != -1) && (data[69].fvalue < (float)-0.39860424399)) {
          if ( (data[34].missing != -1) && (data[34].fvalue < (float)-0.20938225091)) {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.63977259398)) {
              result[1] += 0.10417739;
            } else {
              if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31466990709)) {
                result[1] += -0.019613968;
              } else {
                result[1] += 0.05788133;
              }
            }
          } else {
            result[1] += -0.09500931;
          }
        } else {
          if ( (data[55].missing != -1) && (data[55].fvalue < (float)7.806274516e-05)) {
            if ( (data[32].missing != -1) && (data[32].fvalue < (float)5.9198932648)) {
              if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.024226156995)) {
                if ( (data[90].missing != -1) && (data[90].fvalue < (float)1)) {
                  if ( (data[71].missing != -1) && (data[71].fvalue < (float)-0.46705591679)) {
                    if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31386581063)) {
                      result[1] += 0.11360768;
                    } else {
                      result[1] += -0.08049436;
                    }
                  } else {
                    result[1] += 0.12097206;
                  }
                } else {
                  result[1] += 0.020519458;
                }
              } else {
                if ( (data[27].missing != -1) && (data[27].fvalue < (float)1.2833356857)) {
                  result[1] += -0.07812026;
                } else {
                  result[1] += 0.12375449;
                }
              }
            } else {
              if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.2248044759)) {
                result[1] += -0.091676004;
              } else {
                if ( (data[34].missing != -1) && (data[34].fvalue < (float)-0.20812723041)) {
                  result[1] += 0.13152821;
                } else {
                  if ( (data[40].missing != -1) && (data[40].fvalue < (float)0.41258627176)) {
                    result[1] += -0.084940925;
                  } else {
                    result[1] += 0.12468081;
                  }
                }
              }
            }
          } else {
            if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.76508826017)) {
              if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.27454009652)) {
                if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.37365320325)) {
                  if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.47568050027)) {
                    result[1] += 0.12404933;
                  } else {
                    result[1] += -0;
                  }
                } else {
                  result[1] += -0.08109443;
                }
              } else {
                result[1] += 0.11664421;
              }
            } else {
              if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60426038504)) {
                if ( (data[84].missing != -1) && (data[84].fvalue < (float)1)) {
                  result[1] += -0.0954266;
                } else {
                  result[1] += -0.019290596;
                }
              } else {
                result[1] += 0.06534034;
              }
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)-0.43788185716)) {
          result[1] += -0.096415676;
        } else {
          if ( (data[78].missing != -1) && (data[78].fvalue < (float)-0.4874599874)) {
            result[1] += 0.0049457187;
          } else {
            result[1] += 0.12327297;
          }
        }
      }
    } else {
      result[1] += -0.09711862;
    }
  }
  if ( (data[87].missing != -1) && (data[87].fvalue < (float)1)) {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)3.2361967564)) {
      result[2] += -0.09735846;
    } else {
      result[2] += 0.008550759;
    }
  } else {
    if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.44750031829)) {
      if ( (data[59].missing != -1) && (data[59].fvalue < (float)-0.45464345813)) {
        result[2] += 0.07564369;
      } else {
        result[2] += 0.11980925;
      }
    } else {
      result[2] += -0.09537853;
    }
  }
  if ( (data[27].missing != -1) && (data[27].fvalue < (float)1.0054787397)) {
    result[3] += -0.09739279;
  } else {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)0.3592517674)) {
      result[3] += -0.08631348;
    } else {
      result[3] += 0.12143903;
    }
  }
  if ( (data[89].missing != -1) && (data[89].fvalue < (float)1)) {
    result[4] += -0.09708205;
  } else {
    result[4] += 0.12140496;
  }
  if ( (data[27].missing != -1) && (data[27].fvalue < (float)1.3160247803)) {
    result[5] += -0.096925505;
  } else {
    result[5] += -0.015300104;
  }
  if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31586059928)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.17688424885)) {
      result[6] += 0.11013733;
    } else {
      result[6] += -0.09681741;
    }
  } else {
    result[6] += -0.0972732;
  }
  if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31586059928)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.59183168411)) {
      result[7] += -0.09563628;
    } else {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)-0.53552961349)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)0.3592517674)) {
          result[7] += 0.12097987;
        } else {
          result[7] += -0.09237668;
        }
      } else {
        result[7] += -0.09465899;
      }
    }
  } else {
    result[7] += -0.09739194;
  }
  if ( (data[80].missing != -1) && (data[80].fvalue < (float)9.5720357895)) {
    result[8] += -0.097240135;
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.62005853653)) {
      result[8] += -0.07517222;
    } else {
      result[8] += 0.12126356;
    }
  }
  if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.5824829936)) {
    if ( (data[84].missing != -1) && (data[84].fvalue < (float)1)) {
      if ( (data[30].missing != -1) && (data[30].fvalue < (float)-1.1794397831)) {
        result[9] += 0.08394527;
      } else {
        if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.75656324625)) {
          result[9] += -0.093039416;
        } else {
          if ( (data[53].missing != -1) && (data[53].fvalue < (float)-0.26859682798)) {
            result[9] += 0.070392914;
          } else {
            result[9] += -0.01935951;
          }
        }
      }
    } else {
      if ( (data[83].missing != -1) && (data[83].fvalue < (float)1)) {
        result[9] += -0.08360981;
      } else {
        if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.54449033737)) {
          result[9] += 0.122551404;
        } else {
          result[9] += -0;
        }
      }
    }
  } else {
    if ( (data[87].missing != -1) && (data[87].fvalue < (float)1)) {
      if ( (data[37].missing != -1) && (data[37].fvalue < (float)3.5604615211)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)2.9971334934)) {
          result[9] += -0.097135104;
        } else {
          result[9] += -0.0067180125;
        }
      } else {
        result[9] += -0;
      }
    } else {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.039231427014)) {
        result[9] += 0.09507847;
      } else {
        result[9] += -0.094993696;
      }
    }
  }
  if ( (data[23].missing != -1) && (data[23].fvalue < (float)10.179190636)) {
    result[10] += -0.09728011;
  } else {
    result[10] += 0.12137412;
  }
  if ( (data[84].missing != -1) && (data[84].fvalue < (float)1)) {
    if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60396414995)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.62009978294)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.74213886261)) {
          if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.60498034954)) {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.35428348184)) {
              if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.20401591063)) {
                result[11] += 0.096467376;
              } else {
                result[11] += -0.087376855;
              }
            } else {
              if ( (data[55].missing != -1) && (data[55].fvalue < (float)1.9582731724)) {
                if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.78908890486)) {
                  result[11] += -0.024920365;
                } else {
                  result[11] += -0.09271201;
                }
              } else {
                result[11] += 0.07526325;
              }
            }
          } else {
            if ( (data[27].missing != -1) && (data[27].fvalue < (float)0.9727897644)) {
              if ( (data[45].missing != -1) && (data[45].fvalue < (float)2.145118475)) {
                if ( (data[35].missing != -1) && (data[35].fvalue < (float)2.4906179905)) {
                  if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.62016224861)) {
                    if ( (data[27].missing != -1) && (data[27].fvalue < (float)0.82568901777)) {
                      result[11] += 0.2954299;
                    } else {
                      result[11] += 0.08532953;
                    }
                  } else {
                    if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.57992994785)) {
                      if ( (data[71].missing != -1) && (data[71].fvalue < (float)0.87892109156)) {
                        result[11] += -0;
                      } else {
                        result[11] += 0.01574553;
                      }
                    } else {
                      if ( (data[35].missing != -1) && (data[35].fvalue < (float)0.19620749354)) {
                        result[11] += 0.024655962;
                      } else {
                        result[11] += 0.1710144;
                      }
                    }
                  }
                } else {
                  result[11] += -0;
                }
              } else {
                result[11] += -0.0012213162;
              }
            } else {
              result[11] += -0.062452655;
            }
          }
        } else {
          result[11] += -0.09352799;
        }
      } else {
        if ( (data[80].missing != -1) && (data[80].fvalue < (float)-0.37019988894)) {
          if ( (data[45].missing != -1) && (data[45].fvalue < (float)-0.10042212158)) {
            if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59523540735)) {
              if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.28597417474)) {
                result[11] += -0.091849595;
              } else {
                if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.51605558395)) {
                  if ( (data[32].missing != -1) && (data[32].fvalue < (float)1.9828362465)) {
                    if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62016540766)) {
                      result[11] += 0.028869985;
                    } else {
                      result[11] += 0.10864413;
                    }
                  } else {
                    result[11] += -0.08375917;
                  }
                } else {
                  if ( (data[32].missing != -1) && (data[32].fvalue < (float)3.3104484081)) {
                    if ( (data[33].missing != -1) && (data[33].fvalue < (float)-0.64121770859)) {
                      if ( (data[32].missing != -1) && (data[32].fvalue < (float)2.5779726505)) {
                        if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60426801443)) {
                          if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.79971778393)) {
                            result[11] += 0.09618715;
                          } else {
                            result[11] += -0;
                          }
                        } else {
                          result[11] += 0.13204642;
                        }
                      } else {
                        result[11] += -0;
                      }
                    } else {
                      result[11] += 0.17608221;
                    }
                  } else {
                    if ( (data[32].missing != -1) && (data[32].fvalue < (float)4.9127392769)) {
                      if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59750467539)) {
                        result[11] += 0.04597374;
                      } else {
                        result[11] += -0.028553577;
                      }
                    } else {
                      if ( (data[32].missing != -1) && (data[32].fvalue < (float)5.3705363274)) {
                        result[11] += 0.1595155;
                      } else {
                        if ( (data[32].missing != -1) && (data[32].fvalue < (float)5.9656729698)) {
                          result[11] += -0.017084215;
                        } else {
                          if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.15498234332)) {
                            result[11] += 0.12043224;
                          } else {
                            result[11] += 0.0015226565;
                          }
                        }
                      }
                    }
                  }
                }
              }
            } else {
              result[11] += -0.09414215;
            }
          } else {
            if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.50712585449)) {
              if ( (data[36].missing != -1) && (data[36].fvalue < (float)-0.68227016926)) {
                result[11] += 0.1851752;
              } else {
                result[11] += 0.12079203;
              }
            } else {
              if ( (data[38].missing != -1) && (data[38].fvalue < (float)1.2894229889)) {
                result[11] += -0;
              } else {
                result[11] += -0.08654904;
              }
            }
          }
        } else {
          if ( (data[48].missing != -1) && (data[48].fvalue < (float)-0.25514149666)) {
            result[11] += -0.09530531;
          } else {
            result[11] += -0;
          }
        }
      }
    } else {
      if ( (data[71].missing != -1) && (data[71].fvalue < (float)-0.46705591679)) {
        if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59547013044)) {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.21960693598)) {
            result[11] += -0.08143956;
          } else {
            if ( (data[61].missing != -1) && (data[61].fvalue < (float)-0.16697607934)) {
              result[11] += -0;
            } else {
              result[11] += 0.10351073;
            }
          }
        } else {
          result[11] += -0.0916177;
        }
      } else {
        if ( (data[78].missing != -1) && (data[78].fvalue < (float)3.4584906101)) {
          result[11] += -0.096711576;
        } else {
          if ( (data[45].missing != -1) && (data[45].fvalue < (float)-0.083737097681)) {
            result[11] += -0.05815669;
          } else {
            result[11] += 0.1427546;
          }
        }
      }
    }
  } else {
    if ( (data[27].missing != -1) && (data[27].fvalue < (float)1.0872013569)) {
      if ( (data[55].missing != -1) && (data[55].fvalue < (float)7.806274516e-05)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)-0.0058834324591)) {
          if ( (data[55].missing != -1) && (data[55].fvalue < (float)-0.12463054806)) {
            if ( (data[81].missing != -1) && (data[81].fvalue < (float)1)) {
              result[11] += -0.095710784;
            } else {
              if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62021207809)) {
                result[11] += 0.15071322;
              } else {
                result[11] += -0.0960786;
              }
            }
          } else {
            if ( (data[36].missing != -1) && (data[36].fvalue < (float)1.6514831781)) {
              result[11] += 0.13836284;
            } else {
              result[11] += -0.07911964;
            }
          }
        } else {
          result[11] += -0.0972743;
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.52405297756)) {
          if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.9311388731)) {
            result[11] += 0.16290757;
          } else {
            result[11] += -0;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.33946627378)) {
            result[11] += -0.085592285;
          } else {
            result[11] += 9.7267744e-05;
          }
        }
      }
    } else {
      if ( (data[27].missing != -1) && (data[27].fvalue < (float)1.8553940058)) {
        result[11] += 0.13665286;
      } else {
        result[11] += -0;
      }
    }
  }
  if ( (data[70].missing != -1) && (data[70].fvalue < (float)0.97333478928)) {
    if ( (data[79].missing != -1) && (data[79].fvalue < (float)6.1137475967)) {
      if ( (data[32].missing != -1) && (data[32].fvalue < (float)6.7439284325)) {
        if ( (data[58].missing != -1) && (data[58].fvalue < (float)-0.57980215549)) {
          result[12] += 0.04736243;
        } else {
          if ( (data[49].missing != -1) && (data[49].fvalue < (float)0.25168430805)) {
            if ( (data[52].missing != -1) && (data[52].fvalue < (float)0.23504699767)) {
              result[12] += -0.09677273;
            } else {
              if ( (data[68].missing != -1) && (data[68].fvalue < (float)0.8986749649)) {
                if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59852188826)) {
                  result[12] += -0.012977461;
                } else {
                  result[12] += -0.09142764;
                }
              } else {
                result[12] += 0.06325436;
              }
            }
          } else {
            if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025155633688)) {
              result[12] += -0.09191393;
            } else {
              result[12] += 0.13179389;
            }
          }
        }
      } else {
        if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31341737509)) {
          result[12] += 0.13323253;
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)-0.50166469812)) {
            result[12] += -0.08663115;
          } else {
            result[12] += -0;
          }
        }
      }
    } else {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.0699566603)) {
        result[12] += 0.13538793;
      } else {
        result[12] += -0.09525259;
      }
    }
  } else {
    if ( (data[61].missing != -1) && (data[61].fvalue < (float)-0.16619649529)) {
      result[12] += 0.17037766;
    } else {
      result[12] += -0.09051867;
    }
  }
  if ( (data[86].missing != -1) && (data[86].fvalue < (float)1)) {
    if ( (data[78].missing != -1) && (data[78].fvalue < (float)3.4584906101)) {
      if ( (data[82].missing != -1) && (data[82].fvalue < (float)1)) {
        if ( (data[33].missing != -1) && (data[33].fvalue < (float)-0.22151166201)) {
          if ( (data[55].missing != -1) && (data[55].fvalue < (float)7.806274516e-05)) {
            result[0] += -0.0867872;
          } else {
            if ( (data[69].missing != -1) && (data[69].fvalue < (float)-0.33236810565)) {
              result[0] += 0.0836306;
            } else {
              result[0] += -0.045208912;
            }
          }
        } else {
          result[0] += 0.1163832;
        }
      } else {
        if ( (data[45].missing != -1) && (data[45].fvalue < (float)3.0072851181)) {
          if ( (data[47].missing != -1) && (data[47].fvalue < (float)0.64647638798)) {
            result[0] += -0.097102374;
          } else {
            result[0] += -0;
          }
        } else {
          result[0] += 0.09035321;
        }
      }
    } else {
      if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.46908029914)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.52279245853)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.61899483204)) {
            if ( (data[71].missing != -1) && (data[71].fvalue < (float)-0.38767385483)) {
              result[0] += 0.11818127;
            } else {
              if ( (data[56].missing != -1) && (data[56].fvalue < (float)-0.069168739021)) {
                result[0] += -0;
              } else {
                if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.15619270504)) {
                  result[0] += -0;
                } else {
                  result[0] += 0.096242465;
                }
              }
            }
          } else {
            result[0] += -0.081212774;
          }
        } else {
          if ( (data[71].missing != -1) && (data[71].fvalue < (float)1.1588152647)) {
            result[0] += -0.09587682;
          } else {
            result[0] += -0;
          }
        }
      } else {
        if ( (data[42].missing != -1) && (data[42].fvalue < (float)-0.010526913218)) {
          result[0] += 0.11789167;
        } else {
          if ( (data[59].missing != -1) && (data[59].fvalue < (float)-0.35881829262)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.46779358387)) {
              result[0] += 0.12859245;
            } else {
              result[0] += 0.032340374;
            }
          } else {
            if ( (data[36].missing != -1) && (data[36].fvalue < (float)2.1603925228)) {
              result[0] += -0.09355241;
            } else {
              result[0] += -0.011476885;
            }
          }
        }
      }
    }
  } else {
    if ( (data[42].missing != -1) && (data[42].fvalue < (float)-0.010402492248)) {
      if ( (data[55].missing != -1) && (data[55].fvalue < (float)-0.13260184228)) {
        if ( (data[37].missing != -1) && (data[37].fvalue < (float)1.3460149765)) {
          if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31341737509)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.17023339868)) {
              if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.62869435549)) {
                if ( (data[37].missing != -1) && (data[37].fvalue < (float)0.95358139277)) {
                  result[0] += 0.019333268;
                } else {
                  if ( (data[54].missing != -1) && (data[54].fvalue < (float)-0.039258748293)) {
                    result[0] += -0.04282781;
                  } else {
                    result[0] += 0.011383449;
                  }
                }
              } else {
                result[0] += 0.13117622;
              }
            } else {
              result[0] += 0.10865959;
            }
          } else {
            result[0] += 0.1171519;
          }
        } else {
          if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31392768025)) {
            result[0] += -0;
          } else {
            result[0] += 0.10959517;
          }
        }
      } else {
        if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.62869435549)) {
          if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60419660807)) {
            if ( (data[35].missing != -1) && (data[35].fvalue < (float)-0.25344574451)) {
              result[0] += 0.11739228;
            } else {
              if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.54161769152)) {
                result[0] += -0.07700341;
              } else {
                if ( (data[35].missing != -1) && (data[35].fvalue < (float)0.12133514881)) {
                  result[0] += 0.11001278;
                } else {
                  result[0] += -0.008166203;
                }
              }
            }
          } else {
            if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60342478752)) {
              if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60414606333)) {
                result[0] += -0.00823107;
              } else {
                result[0] += -0.0914744;
              }
            } else {
              result[0] += 0.0070878747;
            }
          }
        } else {
          if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31341737509)) {
            if ( (data[33].missing != -1) && (data[33].fvalue < (float)-0.57848584652)) {
              if ( (data[55].missing != -1) && (data[55].fvalue < (float)-0.081173732877)) {
                result[0] += 0.10793316;
              } else {
                result[0] += 0.022707416;
              }
            } else {
              result[0] += -0.024754744;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62007719278)) {
              result[0] += 0.11898975;
            } else {
              if ( (data[42].missing != -1) && (data[42].fvalue < (float)-0.01055396162)) {
                if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.76508826017)) {
                  result[0] += 0.114903174;
                } else {
                  result[0] += 0.036790855;
                }
              } else {
                result[0] += -0;
              }
            }
          }
        }
      }
    } else {
      if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.78268873692)) {
        result[0] += -0.09627366;
      } else {
        if ( (data[69].missing != -1) && (data[69].fvalue < (float)-0.17200122774)) {
          result[0] += 0.11128083;
        } else {
          if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.57856816053)) {
            result[0] += -0.060173698;
          } else {
            if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.30989176035)) {
              result[0] += 0.0752245;
            } else {
              if ( (data[70].missing != -1) && (data[70].fvalue < (float)0.22358208895)) {
                result[0] += 0.025370512;
              } else {
                result[0] += -0;
              }
            }
          }
        }
      }
    }
  }
  if ( (data[53].missing != -1) && (data[53].fvalue < (float)-0.26869207621)) {
    if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.62648659945)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.36735785007)) {
        if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.79868918657)) {
          result[1] += -0.10306231;
        } else {
          result[1] += 0.12544265;
        }
      } else {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)0.06673399359)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.59183168411)) {
            if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.62869435549)) {
              if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.60239255428)) {
                if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.62011039257)) {
                  result[1] += 0.12175236;
                } else {
                  result[1] += -0;
                }
              } else {
                if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31586059928)) {
                  if ( (data[12].missing != -1) && (data[12].fvalue < (float)2.23818326)) {
                    if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.0274538994)) {
                      result[1] += -0.124221854;
                    } else {
                      result[1] += -0.028718531;
                    }
                  } else {
                    result[1] += 0.06124837;
                  }
                } else {
                  if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.024322185665)) {
                    result[1] += 0.14045063;
                  } else {
                    result[1] += -0;
                  }
                }
              }
            } else {
              result[1] += -0.08987635;
            }
          } else {
            result[1] += -0.090652555;
          }
        } else {
          result[1] += -0.09764104;
        }
      }
    } else {
      if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.59351676702)) {
        result[1] += -0.096976034;
      } else {
        result[1] += 0.10167135;
      }
    }
  } else {
    if ( (data[78].missing != -1) && (data[78].fvalue < (float)3.4584906101)) {
      if ( (data[47].missing != -1) && (data[47].fvalue < (float)-0.0052432520315)) {
        if ( (data[44].missing != -1) && (data[44].fvalue < (float)0.18442375958)) {
          if ( (data[52].missing != -1) && (data[52].fvalue < (float)0.10056277364)) {
            if ( (data[71].missing != -1) && (data[71].fvalue < (float)-0.46705591679)) {
              if ( (data[32].missing != -1) && (data[32].fvalue < (float)4.82117939)) {
                if ( (data[33].missing != -1) && (data[33].fvalue < (float)-0.64121770859)) {
                  result[1] += 0.108908325;
                } else {
                  if ( (data[32].missing != -1) && (data[32].fvalue < (float)4.7753996849)) {
                    result[1] += -0.070470385;
                  } else {
                    result[1] += 0.10980002;
                  }
                }
              } else {
                result[1] += -0.08704358;
              }
            } else {
              if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.62010771036)) {
                if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025202941149)) {
                  result[1] += 0.063166484;
                } else {
                  result[1] += -0.05971915;
                }
              } else {
                if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62020581961)) {
                  result[1] += 0.032780997;
                } else {
                  if ( (data[83].missing != -1) && (data[83].fvalue < (float)1)) {
                    result[1] += 0.116234615;
                  } else {
                    if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.5637139678)) {
                      if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.6200107336)) {
                        result[1] += -0;
                      } else {
                        result[1] += 0.11490509;
                      }
                    } else {
                      result[1] += -0.090266265;
                    }
                  }
                }
              }
            }
          } else {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.58649593592)) {
              if ( (data[37].missing != -1) && (data[37].fvalue < (float)1.1497981548)) {
                if ( (data[90].missing != -1) && (data[90].fvalue < (float)1)) {
                  result[1] += 0.111927815;
                } else {
                  result[1] += -0;
                }
              } else {
                result[1] += -0;
              }
            } else {
              if ( (data[12].missing != -1) && (data[12].fvalue < (float)2.23818326)) {
                if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.62869435549)) {
                  if ( (data[61].missing != -1) && (data[61].fvalue < (float)-0.16615319252)) {
                    if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.60498034954)) {
                      if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.88496041298)) {
                        result[1] += -0.0497644;
                      } else {
                        result[1] += -0;
                      }
                    } else {
                      if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.1497886181)) {
                        if ( (data[32].missing != -1) && (data[32].fvalue < (float)3.4477875233)) {
                          if ( (data[32].missing != -1) && (data[32].fvalue < (float)3.3104484081)) {
                            result[1] += -0;
                          } else {
                            result[1] += 0.106522165;
                          }
                        } else {
                          result[1] += -0.02520243;
                        }
                      } else {
                        result[1] += 0.11867996;
                      }
                    }
                  } else {
                    result[1] += -0.057795443;
                  }
                } else {
                  result[1] += -0.08732437;
                }
              } else {
                result[1] += 0.11663278;
              }
            }
          }
        } else {
          result[1] += -0.085057564;
        }
      } else {
        if ( (data[78].missing != -1) && (data[78].fvalue < (float)-0.4874599874)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.61990123987)) {
            result[1] += -0.095910095;
          } else {
            result[1] += 0.022738919;
          }
        } else {
          result[1] += 0.11664132;
        }
      }
    } else {
      result[1] += -0.09670811;
    }
  }
  if ( (data[79].missing != -1) && (data[79].fvalue < (float)6.0763492584)) {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)3.2361967564)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)-0.51474040747)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)1.797724247)) {
          result[2] += -0.09621354;
        } else {
          result[2] += 0.0714334;
        }
      } else {
        result[2] += -0.09709893;
      }
    } else {
      result[2] += 0.02418528;
    }
  } else {
    if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.46908029914)) {
      if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.57948327065)) {
        result[2] += -0.07718062;
      } else {
        result[2] += 0.11810759;
      }
    } else {
      result[2] += -0.095217116;
    }
  }
  if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.17688424885)) {
    if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.65628534555)) {
      result[3] += -0.09440061;
    } else {
      result[3] += 0.11636116;
    }
  } else {
    result[3] += -0.09710605;
  }
  if ( (data[89].missing != -1) && (data[89].fvalue < (float)1)) {
    result[4] += -0.09668822;
  } else {
    result[4] += 0.11632172;
  }
  if ( (data[92].missing != -1) && (data[92].fvalue < (float)1)) {
    if ( (data[27].missing != -1) && (data[27].fvalue < (float)1.3160247803)) {
      result[5] += -0.096882164;
    } else {
      result[5] += -0.0054362277;
    }
  } else {
    result[5] += 0.17181236;
  }
  if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31586059928)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.17688424885)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.039243385196)) {
        result[6] += 0.20515864;
      } else {
        result[6] += -0.074016355;
      }
    } else {
      result[6] += -0.09640477;
    }
  } else {
    result[6] += -0.09696367;
  }
  if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31586059928)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.61777055264)) {
      result[7] += -0.09493277;
    } else {
      if ( (data[17].missing != -1) && (data[17].fvalue < (float)1.0286098719)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.56495398283)) {
          result[7] += 0.115777925;
        } else {
          result[7] += -0.091007225;
        }
      } else {
        result[7] += -0.09385736;
      }
    }
  } else {
    result[7] += -0.09710542;
  }
  if ( (data[80].missing != -1) && (data[80].fvalue < (float)9.5720357895)) {
    result[8] += -0.09692422;
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62010836601)) {
      result[8] += -0.07245615;
    } else {
      result[8] += 0.11608519;
    }
  }
  if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.5824829936)) {
    if ( (data[84].missing != -1) && (data[84].fvalue < (float)1)) {
      if ( (data[30].missing != -1) && (data[30].fvalue < (float)-1.0593373775)) {
        result[9] += 0.058252297;
      } else {
        if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.75656324625)) {
          if ( (data[90].missing != -1) && (data[90].fvalue < (float)1)) {
            result[9] += -0.09432023;
          } else {
            result[9] += -0.0129028475;
          }
        } else {
          if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.016932468861)) {
            result[9] += 0.036798082;
          } else {
            result[9] += -0.048962235;
          }
        }
      }
    } else {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.15619270504)) {
        result[9] += 0.053155158;
      } else {
        result[9] += 0.11556026;
      }
    }
  } else {
    if ( (data[87].missing != -1) && (data[87].fvalue < (float)1)) {
      if ( (data[37].missing != -1) && (data[37].fvalue < (float)3.5604615211)) {
        if ( (data[44].missing != -1) && (data[44].fvalue < (float)1.04114604)) {
          result[9] += -0.09690061;
        } else {
          result[9] += -0.029317569;
        }
      } else {
        result[9] += -0.010303046;
      }
    } else {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.039231427014)) {
        result[9] += 0.08592777;
      } else {
        result[9] += -0.094243884;
      }
    }
  }
  if ( (data[23].missing != -1) && (data[23].fvalue < (float)10.179190636)) {
    result[10] += -0.09697271;
  } else {
    result[10] += 0.11627945;
  }
  if ( (data[84].missing != -1) && (data[84].fvalue < (float)1)) {
    if ( (data[33].missing != -1) && (data[33].fvalue < (float)1.4050359726)) {
      if ( (data[61].missing != -1) && (data[61].fvalue < (float)-0.16697607934)) {
        if ( (data[52].missing != -1) && (data[52].fvalue < (float)0.052392564714)) {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.93369174)) {
            if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.018215337768)) {
              if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.20401591063)) {
                result[11] += 0.095827036;
              } else {
                if ( (data[27].missing != -1) && (data[27].fvalue < (float)0.073840983212)) {
                  result[11] += -0.076972365;
                } else {
                  result[11] += 0.07233388;
                }
              }
            } else {
              result[11] += -0.07837619;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.61701476574)) {
              if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.48612654209)) {
                if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.0053368807)) {
                  result[11] += -0.0946163;
                } else {
                  if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31466990709)) {
                    result[11] += -0;
                  } else {
                    result[11] += -0.092721336;
                  }
                }
              } else {
                result[11] += -0;
              }
            } else {
              result[11] += 0.011440235;
            }
          }
        } else {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.067782856524)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.17023339868)) {
              result[11] += -0.07722773;
            } else {
              if ( (data[43].missing != -1) && (data[43].fvalue < (float)0.14091680944)) {
                result[11] += 0.04858895;
              } else {
                if ( (data[44].missing != -1) && (data[44].fvalue < (float)0.080477841198)) {
                  result[11] += -0.07095069;
                } else {
                  result[11] += 0.024389047;
                }
              }
            }
          } else {
            if ( (data[33].missing != -1) && (data[33].fvalue < (float)-0.62329429388)) {
              if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31457713246)) {
                if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31466990709)) {
                  if ( (data[69].missing != -1) && (data[69].fvalue < (float)-0.38108387589)) {
                    result[11] += 0.11672712;
                  } else {
                    if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.86359214783)) {
                      if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.03723815456)) {
                        result[11] += -0;
                      } else {
                        result[11] += 0.10751551;
                      }
                    } else {
                      result[11] += -0;
                    }
                  }
                } else {
                  result[11] += -0.05367857;
                }
              } else {
                result[11] += 0.15885584;
              }
            } else {
              result[11] += -0.00084816874;
            }
          }
        }
      } else {
        if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025413041934)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.27981966734)) {
            result[11] += -0;
          } else {
            result[11] += -0.09379138;
          }
        } else {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.52279245853)) {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.57992994785)) {
              if ( (data[40].missing != -1) && (data[40].fvalue < (float)0.0035779729951)) {
                result[11] += -0.0954521;
              } else {
                result[11] += -0.013114016;
              }
            } else {
              if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.50068098307)) {
                if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.42648643255)) {
                  result[11] += 0.16153367;
                } else {
                  if ( (data[35].missing != -1) && (data[35].fvalue < (float)0.03643072024)) {
                    result[11] += -0.02451167;
                  } else {
                    if ( (data[33].missing != -1) && (data[33].fvalue < (float)-0.54562628269)) {
                      if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.038802653551)) {
                        result[11] += 0.18909274;
                      } else {
                        result[11] += 0.053477485;
                      }
                    } else {
                      if ( (data[35].missing != -1) && (data[35].fvalue < (float)0.17355711758)) {
                        result[11] += -0.0789951;
                      } else {
                        if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.28573852777)) {
                          result[11] += 0.117657125;
                        } else {
                          if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.0563672781)) {
                            result[11] += -0;
                          } else {
                            result[11] += 0.11044937;
                          }
                        }
                      }
                    }
                  }
                }
              } else {
                result[11] += -0.08447517;
              }
            }
          } else {
            if ( (data[45].missing != -1) && (data[45].fvalue < (float)-0.10042212158)) {
              if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.35111662745)) {
                result[11] += 0.08804126;
              } else {
                result[11] += -0.09253676;
              }
            } else {
              if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.25304949284)) {
                if ( (data[31].missing != -1) && (data[31].fvalue < (float)0.75578355789)) {
                  if ( (data[69].missing != -1) && (data[69].fvalue < (float)0.37661227584)) {
                    result[11] += 0.11670003;
                  } else {
                    result[11] += 0.011117267;
                  }
                } else {
                  result[11] += 0.19389036;
                }
              } else {
                result[11] += 0.02293192;
              }
            }
          }
        }
      }
    } else {
      result[11] += -0.09678603;
    }
  } else {
    if ( (data[37].missing != -1) && (data[37].fvalue < (float)3.2240898609)) {
      if ( (data[45].missing != -1) && (data[45].fvalue < (float)0.31484985352)) {
        if ( (data[82].missing != -1) && (data[82].fvalue < (float)1)) {
          if ( (data[45].missing != -1) && (data[45].fvalue < (float)-0.092079631984)) {
            if ( (data[81].missing != -1) && (data[81].fvalue < (float)1)) {
              result[11] += -0.09485334;
            } else {
              if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.039243385196)) {
                result[11] += 0.11307506;
              } else {
                result[11] += -0.09559959;
              }
            }
          } else {
            if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025307295844)) {
              result[11] += -0.083356746;
            } else {
              result[11] += 0.17722112;
            }
          }
        } else {
          if ( (data[47].missing != -1) && (data[47].fvalue < (float)-0.0082885762677)) {
            result[11] += -0.09679631;
          } else {
            result[11] += -0.018240944;
          }
        }
      } else {
        if ( (data[80].missing != -1) && (data[80].fvalue < (float)-0.43852174282)) {
          if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.5277056098)) {
            result[11] += 0.14850602;
          } else {
            result[11] += 0.0020251556;
          }
        } else {
          result[11] += -0.05473118;
        }
      }
    } else {
      if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.22972987592)) {
        if ( (data[27].missing != -1) && (data[27].fvalue < (float)1.8553940058)) {
          result[11] += 0.12732556;
        } else {
          result[11] += 0.03348245;
        }
      } else {
        result[11] += -0.030666873;
      }
    }
  }
  if ( (data[70].missing != -1) && (data[70].fvalue < (float)0.97333478928)) {
    if ( (data[32].missing != -1) && (data[32].fvalue < (float)6.7439284325)) {
      if ( (data[77].missing != -1) && (data[77].fvalue < (float)4.9144158363)) {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)2.1549119949)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.58832603693)) {
            result[12] += -0;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)3.2361967564)) {
              if ( (data[32].missing != -1) && (data[32].fvalue < (float)5.7825541496)) {
                if ( (data[37].missing != -1) && (data[37].fvalue < (float)4.5415453911)) {
                  result[12] += -0.09634589;
                } else {
                  result[12] += -0.0016496638;
                }
              } else {
                if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60379326344)) {
                  result[12] += -0;
                } else {
                  result[12] += -0.071556106;
                }
              }
            } else {
              result[12] += -0;
            }
          }
        } else {
          if ( (data[80].missing != -1) && (data[80].fvalue < (float)-0.10689549893)) {
            result[12] += -0.096759826;
          } else {
            result[12] += 0.13942885;
          }
        }
      } else {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.74213886261)) {
          result[12] += 0.06733756;
        } else {
          result[12] += -0.074160665;
        }
      }
    } else {
      if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.79708915949)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.61998140812)) {
          result[12] += -0;
        } else {
          result[12] += 0.16285735;
        }
      } else {
        result[12] += -0.085263625;
      }
    }
  } else {
    if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.56564307213)) {
      result[12] += 0.15492685;
    } else {
      result[12] += -0.08919835;
    }
  }
  if ( (data[83].missing != -1) && (data[83].fvalue < (float)1)) {
    if ( (data[78].missing != -1) && (data[78].fvalue < (float)3.4584906101)) {
      if ( (data[45].missing != -1) && (data[45].fvalue < (float)3.0072851181)) {
        result[0] += -0.09648514;
      } else {
        if ( (data[69].missing != -1) && (data[69].fvalue < (float)-0.26032924652)) {
          result[0] += 0.13133717;
        } else {
          result[0] += 0.030008659;
        }
      }
    } else {
      if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025323992595)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.61899483204)) {
          if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.45554211736)) {
            if ( (data[79].missing != -1) && (data[79].fvalue < (float)2.4661560059)) {
              result[0] += 0.09016538;
            } else {
              result[0] += -0.077871084;
            }
          } else {
            if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025418607518)) {
              result[0] += 0.11217668;
            } else {
              if ( (data[34].missing != -1) && (data[34].fvalue < (float)-0.12818625569)) {
                if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.12656737864)) {
                  result[0] += 0.1222979;
                } else {
                  result[0] += 0.0271263;
                }
              } else {
                result[0] += -0.08506578;
              }
            }
          }
        } else {
          result[0] += -0.084201306;
        }
      } else {
        if ( (data[51].missing != -1) && (data[51].fvalue < (float)-0.11487928778)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.15619270504)) {
            result[0] += -0;
          } else {
            result[0] += 0.09186947;
          }
        } else {
          if ( (data[58].missing != -1) && (data[58].fvalue < (float)-0.52407383919)) {
            result[0] += -0.0032873896;
          } else {
            result[0] += -0.096565835;
          }
        }
      }
    }
  } else {
    if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.024578202516)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)1.7314175367)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.54112535715)) {
          if ( (data[32].missing != -1) && (data[32].fvalue < (float)13.702447891)) {
            result[0] += -0.087518044;
          } else {
            result[0] += 0.08300194;
          }
        } else {
          if ( (data[34].missing != -1) && (data[34].fvalue < (float)-0.20921711624)) {
            if ( (data[86].missing != -1) && (data[86].fvalue < (float)1)) {
              result[0] += -0.08400352;
            } else {
              if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.024974752218)) {
                if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.76508826017)) {
                  result[0] += 0.10093717;
                } else {
                  result[0] += 0.05220559;
                }
              } else {
                if ( (data[32].missing != -1) && (data[32].fvalue < (float)2.7153120041)) {
                  result[0] += -0.041737564;
                } else {
                  result[0] += 0.044654667;
                }
              }
            }
          } else {
            if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.02535321191)) {
              result[0] += 0.113173634;
            } else {
              if ( (data[4].missing != -1) && (data[4].fvalue < (float)-0.4101344645)) {
                if ( (data[36].missing != -1) && (data[36].fvalue < (float)-0.63763225079)) {
                  result[0] += 0.11393822;
                } else {
                  if ( (data[33].missing != -1) && (data[33].fvalue < (float)-0.60387730598)) {
                    result[0] += -0.02907732;
                  } else {
                    result[0] += 0.10666924;
                  }
                }
              } else {
                result[0] += -0;
              }
            }
          }
        }
      } else {
        result[0] += -0.09269222;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.62007403374)) {
        if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.78908890486)) {
          if ( (data[52].missing != -1) && (data[52].fvalue < (float)0.23504699767)) {
            result[0] += -0.07730521;
          } else {
            result[0] += 0.0076907654;
          }
        } else {
          if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.65628534555)) {
            if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.6041829586)) {
              if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.7070043087)) {
                if ( (data[54].missing != -1) && (data[54].fvalue < (float)-0.031562451273)) {
                  if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60427820683)) {
                    result[0] += 0.09973504;
                  } else {
                    if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60426217318)) {
                      result[0] += -0.032557286;
                    } else {
                      if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.43109288812)) {
                        if ( (data[52].missing != -1) && (data[52].fvalue < (float)0.23504699767)) {
                          result[0] += 0.008686977;
                        } else {
                          result[0] += -0;
                        }
                      } else {
                        result[0] += 0.12109818;
                      }
                    }
                  }
                } else {
                  result[0] += -0.023140691;
                }
              } else {
                if ( (data[32].missing != -1) && (data[32].fvalue < (float)5.5536551476)) {
                  if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.77948868275)) {
                    result[0] += 0.1699537;
                  } else {
                    if ( (data[43].missing != -1) && (data[43].fvalue < (float)-0.1043317616)) {
                      result[0] += 0.005842593;
                    } else {
                      result[0] += 0.067963555;
                    }
                  }
                } else {
                  if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60423654318)) {
                    result[0] += -0;
                  } else {
                    result[0] += 0.07882504;
                  }
                }
              }
            } else {
              result[0] += -0;
            }
          } else {
            result[0] += -0.005345999;
          }
        }
      } else {
        if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60342478752)) {
          if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.76828837395)) {
            if ( (data[33].missing != -1) && (data[33].fvalue < (float)-0.53069013357)) {
              if ( (data[52].missing != -1) && (data[52].fvalue < (float)0.10056277364)) {
                result[0] += -0.09338806;
              } else {
                result[0] += -0;
              }
            } else {
              result[0] += -0;
            }
          } else {
            result[0] += 0.0031754777;
          }
        } else {
          if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31341737509)) {
            if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59758293629)) {
              if ( (data[32].missing != -1) && (data[32].fvalue < (float)3.9513647556)) {
                result[0] += 0.0966709;
              } else {
                result[0] += -0;
              }
            } else {
              if ( (data[33].missing != -1) && (data[33].fvalue < (float)-0.64121770859)) {
                result[0] += -0.045567725;
              } else {
                if ( (data[32].missing != -1) && (data[32].fvalue < (float)4.5465011597)) {
                  result[0] += 0.080543526;
                } else {
                  result[0] += -0.032657042;
                }
              }
            }
          } else {
            result[0] += 0.080205545;
          }
        }
      }
    }
  }
  if ( (data[55].missing != -1) && (data[55].fvalue < (float)-0.1346296072)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.17688424885)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)0.3592517674)) {
        result[1] += -0.029348671;
      } else {
        result[1] += -0.096795954;
      }
    } else {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.93369174)) {
        if ( (data[37].missing != -1) && (data[37].fvalue < (float)1.1497981548)) {
          result[1] += 0.11001423;
        } else {
          result[1] += -0.083784804;
        }
      } else {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)0.06673399359)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.039243385196)) {
            if ( (data[82].missing != -1) && (data[82].fvalue < (float)1)) {
              if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.15498234332)) {
                result[1] += 0.0053665517;
              } else {
                result[1] += -0.08643324;
              }
            } else {
              if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.74638354778)) {
                result[1] += 0.11181697;
              } else {
                if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.0903491974)) {
                  result[1] += 0.004622416;
                } else {
                  result[1] += 0.085159004;
                }
              }
            }
          } else {
            result[1] += -0.0931664;
          }
        } else {
          result[1] += -0.09700847;
        }
      }
    }
  } else {
    if ( (data[56].missing != -1) && (data[56].fvalue < (float)0.68352377415)) {
      if ( (data[47].missing != -1) && (data[47].fvalue < (float)-0.0052432520315)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.62008905411)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)1.797724247)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.08081638813)) {
              if ( (data[69].missing != -1) && (data[69].fvalue < (float)-0.27248257399)) {
                result[1] += -0.06796266;
              } else {
                result[1] += 0.08178327;
              }
            } else {
              if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.74638354778)) {
                result[1] += 0.10926939;
              } else {
                if ( (data[21].missing != -1) && (data[21].fvalue < (float)-0.4460863471)) {
                  result[1] += -0.05307737;
                } else {
                  result[1] += 0.11125024;
                }
              }
            }
          } else {
            if ( (data[80].missing != -1) && (data[80].fvalue < (float)-0.28877517581)) {
              result[1] += -0.094132185;
            } else {
              result[1] += -0;
            }
          }
        } else {
          if ( (data[69].missing != -1) && (data[69].fvalue < (float)-0.39758071303)) {
            if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31386581063)) {
              if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60252219439)) {
                result[1] += 0.10526601;
              } else {
                if ( (data[55].missing != -1) && (data[55].fvalue < (float)-0.13423721492)) {
                  if ( (data[32].missing != -1) && (data[32].fvalue < (float)3.9971444607)) {
                    if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.20401591063)) {
                      result[1] += -0.10903396;
                    } else {
                      result[1] += 0.08017205;
                    }
                  } else {
                    result[1] += 0.13528593;
                  }
                } else {
                  result[1] += -0.07524017;
                }
              }
            } else {
              result[1] += -0.08482447;
            }
          } else {
            if ( (data[52].missing != -1) && (data[52].fvalue < (float)0.10056277364)) {
              if ( (data[79].missing != -1) && (data[79].fvalue < (float)2.2252106667)) {
                if ( (data[83].missing != -1) && (data[83].fvalue < (float)1)) {
                  result[1] += 0.112420335;
                } else {
                  if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.5637139678)) {
                    if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60414254665)) {
                      result[1] += -0;
                    } else {
                      result[1] += 0.110587165;
                    }
                  } else {
                    result[1] += -0.088149756;
                  }
                }
              } else {
                if ( (data[50].missing != -1) && (data[50].fvalue < (float)-0.014389973134)) {
                  if ( (data[80].missing != -1) && (data[80].fvalue < (float)-0.37019988894)) {
                    result[1] += -0.010286723;
                  } else {
                    result[1] += 0.11189211;
                  }
                } else {
                  result[1] += -0.09801418;
                }
              }
            } else {
              if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.6755399704)) {
                if ( (data[32].missing != -1) && (data[32].fvalue < (float)4.82117939)) {
                  if ( (data[55].missing != -1) && (data[55].fvalue < (float)-0.018760954961)) {
                    result[1] += 0.101902716;
                  } else {
                    if ( (data[32].missing != -1) && (data[32].fvalue < (float)1.9828362465)) {
                      result[1] += 0.21399584;
                    } else {
                      result[1] += 0.07180156;
                    }
                  }
                } else {
                  if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60417711735)) {
                    result[1] += -0;
                  } else {
                    result[1] += 0.088172674;
                  }
                }
              } else {
                if ( (data[14].missing != -1) && (data[14].fvalue < (float)-0.44659695029)) {
                  if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.18767139316)) {
                    if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31466990709)) {
                      result[1] += -0.050811917;
                    } else {
                      if ( (data[32].missing != -1) && (data[32].fvalue < (float)3.4477875233)) {
                        result[1] += 0.07631279;
                      } else {
                        if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.30208304524)) {
                          result[1] += 0.048619203;
                        } else {
                          result[1] += -0.04392651;
                        }
                      }
                    }
                  } else {
                    result[1] += -0.069887266;
                  }
                } else {
                  result[1] += 0.10890957;
                }
              }
            }
          }
        }
      } else {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.15619270504)) {
          if ( (data[37].missing != -1) && (data[37].fvalue < (float)1.2899529934)) {
            result[1] += -0.09442338;
          } else {
            result[1] += -0;
          }
        } else {
          if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.023906158283)) {
            result[1] += -0;
          } else {
            result[1] += 0.11239103;
          }
        }
      }
    } else {
      if ( (data[75].missing != -1) && (data[75].fvalue < (float)0.051606349647)) {
        result[1] += 0.047079805;
      } else {
        result[1] += -0.09647083;
      }
    }
  }
  if ( (data[87].missing != -1) && (data[87].fvalue < (float)1)) {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)3.2361967564)) {
      result[2] += -0.09681209;
    } else {
      result[2] += 0.016705997;
    }
  } else {
    if ( (data[59].missing != -1) && (data[59].fvalue < (float)-0.40304526687)) {
      if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.45147165656)) {
        if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.59494549036)) {
          result[2] += 0.11081231;
        } else {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.71015536785)) {
            result[2] += 0.118252344;
          } else {
            result[2] += -0.08029864;
          }
        }
      } else {
        result[2] += -0;
      }
    } else {
      result[2] += -0.095377974;
    }
  }
  if ( (data[27].missing != -1) && (data[27].fvalue < (float)1.0054787397)) {
    result[3] += -0.09685723;
  } else {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)0.3592517674)) {
      result[3] += -0.08166929;
    } else {
      result[3] += 0.11240026;
    }
  }
  if ( (data[89].missing != -1) && (data[89].fvalue < (float)1)) {
    result[4] += -0.09636412;
  } else {
    result[4] += 0.11231365;
  }
  if ( (data[92].missing != -1) && (data[92].fvalue < (float)1)) {
    if ( (data[37].missing != -1) && (data[37].fvalue < (float)3.6165232658)) {
      result[5] += -0.0966483;
    } else {
      result[5] += -0.030656597;
    }
  } else {
    result[5] += 0.15515019;
  }
  if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.83832764626)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.17688424885)) {
      result[6] += 0.07267228;
    } else {
      result[6] += -0.096011;
    }
  } else {
    result[6] += -0.09669138;
  }
  if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.83832764626)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.61777055264)) {
      result[7] += -0.09429602;
    } else {
      if ( (data[17].missing != -1) && (data[17].fvalue < (float)1.0286098719)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.56495398283)) {
          result[7] += 0.11160818;
        } else {
          result[7] += -0.089557774;
        }
      } else {
        result[7] += -0.09292972;
      }
    }
  } else {
    result[7] += -0.09686163;
  }
  if ( (data[80].missing != -1) && (data[80].fvalue < (float)9.5720357895)) {
    result[8] += -0.09664579;
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.11647147685)) {
      result[8] += 0.042440936;
    } else {
      result[8] += 0.1118847;
    }
  }
  if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.5824829936)) {
    if ( (data[84].missing != -1) && (data[84].fvalue < (float)1)) {
      if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.56359541416)) {
        result[9] += 0.057369664;
      } else {
        if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.0078816348687)) {
          if ( (data[86].missing != -1) && (data[86].fvalue < (float)1)) {
            result[9] += -0.0072688973;
          } else {
            if ( (data[55].missing != -1) && (data[55].fvalue < (float)-0.074920251966)) {
              result[9] += -0.09468381;
            } else {
              result[9] += -0.038612533;
            }
          }
        } else {
          if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.016932468861)) {
            result[9] += 0.051232398;
          } else {
            result[9] += -0.041937444;
          }
        }
      }
    } else {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.5295907259)) {
        result[9] += -0;
      } else {
        result[9] += 0.11112136;
      }
    }
  } else {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)-0.45095446706)) {
      if ( (data[31].missing != -1) && (data[31].fvalue < (float)-0.50509554148)) {
        if ( (data[27].missing != -1) && (data[27].fvalue < (float)1.2833356857)) {
          result[9] += -0.095217064;
        } else {
          result[9] += -0.00823578;
        }
      } else {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.71015536785)) {
          result[9] += -0.017739953;
        } else {
          result[9] += 0.11092;
        }
      }
    } else {
      result[9] += -0.09660808;
    }
  }
  if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.83832764626)) {
    if ( (data[20].missing != -1) && (data[20].fvalue < (float)-0.53552961349)) {
      result[10] += -0.095720194;
    } else {
      result[10] += 0.11212673;
    }
  } else {
    result[10] += -0.09668992;
  }
  if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.18199364841)) {
    if ( (data[36].missing != -1) && (data[36].fvalue < (float)-0.61669498682)) {
      if ( (data[52].missing != -1) && (data[52].fvalue < (float)0.052392564714)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.93369174)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.62008190155)) {
            if ( (data[37].missing != -1) && (data[37].fvalue < (float)1.0937361717)) {
              result[11] += 0.087040365;
            } else {
              if ( (data[37].missing != -1) && (data[37].fvalue < (float)1.4861698151)) {
                result[11] += -0.078918085;
              } else {
                if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.54449033737)) {
                  result[11] += 0.0905308;
                } else {
                  result[11] += 0.016571179;
                }
              }
            }
          } else {
            result[11] += -0.094687246;
          }
        } else {
          if ( (data[35].missing != -1) && (data[35].fvalue < (float)-0.057024430484)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.15619270504)) {
              if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.79142647982)) {
                if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.63046061993)) {
                  result[11] += -0.08636777;
                } else {
                  result[11] += 0.0938529;
                }
              } else {
                if ( (data[44].missing != -1) && (data[44].fvalue < (float)-0.038927663118)) {
                  result[11] += -0.08929325;
                } else {
                  result[11] += -0;
                }
              }
            } else {
              result[11] += -0.09367608;
            }
          } else {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.60239255428)) {
              result[11] += -0.08499418;
            } else {
              if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.018215337768)) {
                result[11] += -0.056159355;
              } else {
                if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.61899483204)) {
                  result[11] += -0;
                } else {
                  result[11] += 0.1138187;
                }
              }
            }
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.55034649372)) {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.58649593592)) {
            if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.9311388731)) {
              if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.15619270504)) {
                if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.03723815456)) {
                  if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62014877796)) {
                    result[11] += -0.027972173;
                  } else {
                    result[11] += 0.114200704;
                  }
                } else {
                  result[11] += 0.13834476;
                }
              } else {
                if ( (data[70].missing != -1) && (data[70].fvalue < (float)0.21682018042)) {
                  result[11] += -0.019537508;
                } else {
                  if ( (data[43].missing != -1) && (data[43].fvalue < (float)0.84773308039)) {
                    result[11] += -0;
                  } else {
                    result[11] += 0.06930699;
                  }
                }
              }
            } else {
              result[11] += -0.09135029;
            }
          } else {
            if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.78908890486)) {
              result[11] += 0.1176611;
            } else {
              if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.63001906872)) {
                if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62015599012)) {
                  result[11] += 0.04002184;
                } else {
                  result[11] += -0;
                }
              } else {
                if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.68544656038)) {
                  result[11] += -0;
                } else {
                  if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.78405153751)) {
                    result[11] += 0.13189311;
                  } else {
                    if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.89647972584)) {
                      result[11] += -0.014860518;
                    } else {
                      if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.1560666561)) {
                        if ( (data[33].missing != -1) && (data[33].fvalue < (float)-0.62777519226)) {
                          result[11] += 0.08877371;
                        } else {
                          if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31386581063)) {
                            result[11] += -0;
                          } else {
                            if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.68042695522)) {
                              result[11] += 0.09021548;
                            } else {
                              result[11] += 0.010009064;
                            }
                          }
                        }
                      } else {
                        if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.76508826017)) {
                          if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.77468854189)) {
                            result[11] += 0.11560887;
                          } else {
                            result[11] += 0.007978214;
                          }
                        } else {
                          result[11] += 0.16113757;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        } else {
          result[11] += -0.074632056;
        }
      }
    } else {
      if ( (data[80].missing != -1) && (data[80].fvalue < (float)-0.37019988894)) {
        if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025407476351)) {
          if ( (data[61].missing != -1) && (data[61].fvalue < (float)-0.038085237145)) {
            result[11] += -0.09480803;
          } else {
            result[11] += -0.016191896;
          }
        } else {
          if ( (data[33].missing != -1) && (data[33].fvalue < (float)1.4050359726)) {
            if ( (data[30].missing != -1) && (data[30].fvalue < (float)-1.0593373775)) {
              result[11] += -0.025455052;
            } else {
              if ( (data[37].missing != -1) && (data[37].fvalue < (float)0.7573646307)) {
                if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.7964707613)) {
                  result[11] += 0.112741195;
                } else {
                  result[11] += 0.034556456;
                }
              } else {
                result[11] += -0.047508817;
              }
            }
          } else {
            result[11] += -0.08469651;
          }
        }
      } else {
        if ( (data[78].missing != -1) && (data[78].fvalue < (float)3.5391829014)) {
          result[11] += -0.0963224;
        } else {
          result[11] += 0.07500386;
        }
      }
    }
  } else {
    if ( (data[83].missing != -1) && (data[83].fvalue < (float)1)) {
      if ( (data[79].missing != -1) && (data[79].fvalue < (float)2.4900910854)) {
        if ( (data[55].missing != -1) && (data[55].fvalue < (float)0.25409945846)) {
          result[11] += -0.09683432;
        } else {
          result[11] += -0.0030410332;
        }
      } else {
        if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025323992595)) {
          result[11] += -0.008684951;
        } else {
          result[11] += 0.15928228;
        }
      }
    } else {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.62911725044)) {
        if ( (data[37].missing != -1) && (data[37].fvalue < (float)8.0734472275)) {
          if ( (data[31].missing != -1) && (data[31].fvalue < (float)-0.45591548085)) {
            result[11] += -0.10320672;
          } else {
            result[11] += -0.014406037;
          }
        } else {
          result[11] += -0;
        }
      } else {
        if ( (data[28].missing != -1) && (data[28].fvalue < (float)1.3149677515)) {
          if ( (data[52].missing != -1) && (data[52].fvalue < (float)0.018169729039)) {
            result[11] += 0.15650673;
          } else {
            result[11] += 0.016143784;
          }
        } else {
          result[11] += -0.038519252;
        }
      }
    }
  }
  if ( (data[79].missing != -1) && (data[79].fvalue < (float)6.1137475967)) {
    if ( (data[50].missing != -1) && (data[50].fvalue < (float)1.0147342682)) {
      if ( (data[32].missing != -1) && (data[32].fvalue < (float)5.7825541496)) {
        if ( (data[37].missing != -1) && (data[37].fvalue < (float)4.5415453911)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.57866376638)) {
            result[12] += 0.015448698;
          } else {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.54112535715)) {
              if ( (data[52].missing != -1) && (data[52].fvalue < (float)0.013004858047)) {
                if ( (data[80].missing != -1) && (data[80].fvalue < (float)-0.10689549893)) {
                  result[12] += -0.09570594;
                } else {
                  if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.74638354778)) {
                    result[12] += -0.059782457;
                  } else {
                    result[12] += -0.0053663687;
                  }
                }
              } else {
                result[12] += 0.026006823;
              }
            } else {
              result[12] += -0.0964174;
            }
          }
        } else {
          result[12] += 0.051208593;
        }
      } else {
        if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.4328392446)) {
          if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60396414995)) {
            result[12] += 0.09454753;
          } else {
            result[12] += 0.22713614;
          }
        } else {
          result[12] += -0.092329435;
        }
      }
    } else {
      if ( (data[80].missing != -1) && (data[80].fvalue < (float)-0.10689549893)) {
        if ( (data[72].missing != -1) && (data[72].fvalue < (float)1.8902964592)) {
          result[12] += -0.09110565;
        } else {
          result[12] += -0;
        }
      } else {
        result[12] += 0.12739785;
      }
    }
  } else {
    if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.0699566603)) {
      result[12] += 0.13105737;
    } else {
      result[12] += -0.09387363;
    }
  }
  if ( (data[83].missing != -1) && (data[83].fvalue < (float)1)) {
    if ( (data[78].missing != -1) && (data[78].fvalue < (float)3.4584906101)) {
      if ( (data[55].missing != -1) && (data[55].fvalue < (float)3.4052605629)) {
        if ( (data[50].missing != -1) && (data[50].fvalue < (float)0.17703424394)) {
          if ( (data[81].missing != -1) && (data[81].fvalue < (float)1)) {
            result[0] += -0.09664354;
          } else {
            if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025401910767)) {
              result[0] += -0;
            } else {
              result[0] += -0.08361975;
            }
          }
        } else {
          result[0] += -0;
        }
      } else {
        if ( (data[46].missing != -1) && (data[46].fvalue < (float)2.5188205242)) {
          result[0] += 0.120833546;
        } else {
          result[0] += 0.025159203;
        }
      }
    } else {
      if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025407476351)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.61899483204)) {
          if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.45554211736)) {
            if ( (data[47].missing != -1) && (data[47].fvalue < (float)-0.016165113077)) {
              result[0] += 0.08225151;
            } else {
              result[0] += -0.074274935;
            }
          } else {
            if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025424173102)) {
              if ( (data[47].missing != -1) && (data[47].fvalue < (float)-0.01553606987)) {
                result[0] += 0.11140217;
              } else {
                if ( (data[21].missing != -1) && (data[21].fvalue < (float)-0.26361367106)) {
                  result[0] += 0.10182532;
                } else {
                  result[0] += -0;
                }
              }
            } else {
              if ( (data[69].missing != -1) && (data[69].fvalue < (float)-0.27248257399)) {
                result[0] += 0.09734117;
              } else {
                result[0] += -0;
              }
            }
          }
        } else {
          result[0] += -0.092143565;
        }
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)-0.51567870378)) {
          if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.36591973901)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)1.724832654)) {
              result[0] += 0.005860012;
            } else {
              result[0] += 0.105520196;
            }
          } else {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.15619270504)) {
              result[0] += -0.050531834;
            } else {
              result[0] += 0.033865344;
            }
          }
        } else {
          if ( (data[48].missing != -1) && (data[48].fvalue < (float)0.36222153902)) {
            result[0] += -0.09457163;
          } else {
            if ( (data[42].missing != -1) && (data[42].fvalue < (float)-0.010411580093)) {
              result[0] += 0.021669623;
            } else {
              result[0] += -0.033304017;
            }
          }
        }
      }
    }
  } else {
    if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.024322185665)) {
      if ( (data[37].missing != -1) && (data[37].fvalue < (float)0.44902396202)) {
        result[0] += -0.09803613;
      } else {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.39068439603)) {
          if ( (data[37].missing != -1) && (data[37].fvalue < (float)2.8316562176)) {
            if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.3156131804)) {
              result[0] += -0.033520542;
            } else {
              result[0] += -0.09510454;
            }
          } else {
            if ( (data[37].missing != -1) && (data[37].fvalue < (float)3.7286472321)) {
              result[0] += 0.02005809;
            } else {
              result[0] += 0.092522815;
            }
          }
        } else {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)1.7314175367)) {
            if ( (data[37].missing != -1) && (data[37].fvalue < (float)1.5982936621)) {
              if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.78908890486)) {
                if ( (data[37].missing != -1) && (data[37].fvalue < (float)0.56114780903)) {
                  if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.0274538994)) {
                    result[0] += 0.105513126;
                  } else {
                    result[0] += 0.013201513;
                  }
                } else {
                  result[0] += -0.06464066;
                }
              } else {
                if ( (data[37].missing != -1) && (data[37].fvalue < (float)1.3460149765)) {
                  result[0] += 0.10881001;
                } else {
                  if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.49173647165)) {
                    result[0] += -0.030156167;
                  } else {
                    result[0] += 0.1038698;
                  }
                }
              }
            } else {
              if ( (data[4].missing != -1) && (data[4].fvalue < (float)-0.50166469812)) {
                result[0] += -0.07987958;
              } else {
                result[0] += 0.08806238;
              }
            }
          } else {
            result[0] += -0.08493951;
          }
        }
      }
    } else {
      if ( (data[37].missing != -1) && (data[37].fvalue < (float)0.8134265542)) {
        result[0] += -0.0934035;
      } else {
        if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.54161769152)) {
          if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31466990709)) {
            if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.77628856897)) {
              result[0] += 0.13235138;
            } else {
              result[0] += -0;
            }
          } else {
            if ( (data[71].missing != -1) && (data[71].fvalue < (float)-0.46705591679)) {
              result[0] += 0.016731434;
            } else {
              if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.038621056825)) {
                result[0] += -0.08790507;
              } else {
                result[0] += -0.016654981;
              }
            }
          }
        } else {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.2629079819)) {
            if ( (data[33].missing != -1) && (data[33].fvalue < (float)-0.5635496974)) {
              if ( (data[34].missing != -1) && (data[34].fvalue < (float)-0.20915105939)) {
                if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.75656324625)) {
                  if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.77468854189)) {
                    result[0] += 0.043297697;
                  } else {
                    result[0] += 0.13779287;
                  }
                } else {
                  if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.93369174)) {
                    if ( (data[55].missing != -1) && (data[55].fvalue < (float)4.7785139084)) {
                      result[0] += 0.014396868;
                    } else {
                      result[0] += 0.06649165;
                    }
                  } else {
                    result[0] += -0.026197447;
                  }
                }
              } else {
                result[0] += -0.08923098;
              }
            } else {
              if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.39068439603)) {
                result[0] += -0;
              } else {
                if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.0563672781)) {
                  if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.78268873692)) {
                    result[0] += 0.037669666;
                  } else {
                    if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.91121447086)) {
                      result[0] += 0.19530855;
                    } else {
                      if ( (data[53].missing != -1) && (data[53].fvalue < (float)-0.25918248296)) {
                        if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62012463808)) {
                          result[0] += -0;
                        } else {
                          result[0] += 0.07867739;
                        }
                      } else {
                        result[0] += 0.13330466;
                      }
                    }
                  }
                } else {
                  result[0] += 0.0034331447;
                }
              }
            }
          } else {
            result[0] += -0.08368215;
          }
        }
      }
    }
  }
  if ( (data[53].missing != -1) && (data[53].fvalue < (float)-0.26869207621)) {
    if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.62648659945)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.52890723944)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)1.7314175367)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)2.23818326)) {
            if ( (data[37].missing != -1) && (data[37].fvalue < (float)1.0657052994)) {
              if ( (data[1].missing != -1) && (data[1].fvalue < (float)0.06673399359)) {
                if ( (data[22].missing != -1) && (data[22].fvalue < (float)-0.55805647373)) {
                  if ( (data[32].missing != -1) && (data[32].fvalue < (float)3.9513647556)) {
                    if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.44918376207)) {
                      if ( (data[12].missing != -1) && (data[12].fvalue < (float)-0.0058834324591)) {
                        result[1] += -0.08183168;
                      } else {
                        result[1] += -0.008927674;
                      }
                    } else {
                      result[1] += -0;
                    }
                  } else {
                    result[1] += 0.077181324;
                  }
                } else {
                  result[1] += 0.08634484;
                }
              } else {
                result[1] += -0.09613712;
              }
            } else {
              if ( (data[37].missing != -1) && (data[37].fvalue < (float)1.0937361717)) {
                result[1] += 0.1387827;
              } else {
                if ( (data[1].missing != -1) && (data[1].fvalue < (float)0.27389571071)) {
                  if ( (data[4].missing != -1) && (data[4].fvalue < (float)-0.51474040747)) {
                    result[1] += -0.08279017;
                  } else {
                    result[1] += -0;
                  }
                } else {
                  result[1] += 0.06909338;
                }
              }
            }
          } else {
            result[1] += 0.08795315;
          }
        } else {
          result[1] += -0.09775371;
        }
      } else {
        result[1] += -0.09486405;
      }
    } else {
      if ( (data[27].missing != -1) && (data[27].fvalue < (float)3.7513587475)) {
        result[1] += -0.0964771;
      } else {
        result[1] += 0.07854811;
      }
    }
  } else {
    if ( (data[56].missing != -1) && (data[56].fvalue < (float)0.68352377415)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)-0.43788185716)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)-0.50166469812)) {
          if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60414254665)) {
            if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.76508826017)) {
              if ( (data[80].missing != -1) && (data[80].fvalue < (float)0.23471385241)) {
                if ( (data[90].missing != -1) && (data[90].fvalue < (float)1)) {
                  if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.20401591063)) {
                    if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.77788865566)) {
                      if ( (data[44].missing != -1) && (data[44].fvalue < (float)-0.039031114429)) {
                        if ( (data[32].missing != -1) && (data[32].fvalue < (float)1.9828362465)) {
                          result[1] += 0.12702389;
                        } else {
                          if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31448435783)) {
                            result[1] += -0.11556304;
                          } else {
                            if ( (data[61].missing != -1) && (data[61].fvalue < (float)-0.16704104841)) {
                              result[1] += 0.114258826;
                            } else {
                              if ( (data[32].missing != -1) && (data[32].fvalue < (float)5.5994348526)) {
                                result[1] += -0.09944818;
                              } else {
                                if ( (data[32].missing != -1) && (data[32].fvalue < (float)5.9198932648)) {
                                  result[1] += 0.17462401;
                                } else {
                                  result[1] += -0;
                                }
                              }
                            }
                          }
                        }
                      } else {
                        result[1] += -0.0011656347;
                      }
                    } else {
                      result[1] += -0.09949509;
                    }
                  } else {
                    if ( (data[32].missing != -1) && (data[32].fvalue < (float)2.623752594)) {
                      result[1] += 0.10609383;
                    } else {
                      if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.85705131292)) {
                        result[1] += 0.09458511;
                      } else {
                        if ( (data[52].missing != -1) && (data[52].fvalue < (float)0.23504699767)) {
                          result[1] += 0.024010113;
                        } else {
                          result[1] += -0;
                        }
                      }
                    }
                  }
                } else {
                  result[1] += -0;
                }
              } else {
                result[1] += -0.020005168;
              }
            } else {
              if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.63155788183)) {
                result[1] += -0.086181656;
              } else {
                result[1] += -0;
              }
            }
          } else {
            if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.4328392446)) {
              result[1] += -0.05587409;
            } else {
              if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.61931306124)) {
                if ( (data[32].missing != -1) && (data[32].fvalue < (float)7.5221838951)) {
                  result[1] += 0.10806412;
                } else {
                  result[1] += 0.017094532;
                }
              } else {
                if ( (data[27].missing != -1) && (data[27].fvalue < (float)10.599714279)) {
                  if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60252219439)) {
                    result[1] += 0.05118529;
                  } else {
                    result[1] += -0.0852821;
                  }
                } else {
                  result[1] += 0.104414634;
                }
              }
            }
          }
        } else {
          result[1] += -0.095208526;
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)1.724832654)) {
          if ( (data[83].missing != -1) && (data[83].fvalue < (float)1)) {
            if ( (data[50].missing != -1) && (data[50].fvalue < (float)0.17703424394)) {
              result[1] += 0.109010346;
            } else {
              if ( (data[30].missing != -1) && (data[30].fvalue < (float)-1.0261459351)) {
                result[1] += 0.10833638;
              } else {
                result[1] += -0.0092863925;
              }
            }
          } else {
            result[1] += -0.0755471;
          }
        } else {
          if ( (data[80].missing != -1) && (data[80].fvalue < (float)-0.28877517581)) {
            if ( (data[42].missing != -1) && (data[42].fvalue < (float)-0.010200172663)) {
              result[1] += -0.09180102;
            } else {
              result[1] += 0.0055451505;
            }
          } else {
            result[1] += 0.1078606;
          }
        }
      }
    } else {
      if ( (data[74].missing != -1) && (data[74].fvalue < (float)0.87512880564)) {
        result[1] += 0.04766962;
      } else {
        result[1] += -0.09608867;
      }
    }
  }
  if ( (data[78].missing != -1) && (data[78].fvalue < (float)3.4584906101)) {
    result[2] += -0.09658633;
  } else {
    if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.44930633903)) {
      if ( (data[30].missing != -1) && (data[30].fvalue < (float)-1.0593373775)) {
        result[2] += -0.089815415;
      } else {
        if ( (data[47].missing != -1) && (data[47].fvalue < (float)-0.015924835578)) {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.71015536785)) {
            result[2] += 0.10152128;
          } else {
            result[2] += -0.07927304;
          }
        } else {
          result[2] += 0.1057211;
        }
      }
    } else {
      if ( (data[48].missing != -1) && (data[48].fvalue < (float)-0.29714852571)) {
        result[2] += 0.07625083;
      } else {
        result[2] += -0.09596934;
      }
    }
  }
  if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.17688424885)) {
    if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.7070043087)) {
      result[3] += -0.09282899;
    } else {
      result[3] += 0.109224126;
    }
  } else {
    result[3] += -0.09664673;
  }
  if ( (data[50].missing != -1) && (data[50].fvalue < (float)0.17703424394)) {
    result[4] += -0.096183866;
  } else {
    if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.91407823563)) {
      result[4] += 0.108753264;
    } else {
      result[4] += -0.08619535;
    }
  }
  if ( (data[92].missing != -1) && (data[92].fvalue < (float)1)) {
    if ( (data[37].missing != -1) && (data[37].fvalue < (float)3.6165232658)) {
      result[5] += -0.09633354;
    } else {
      result[5] += -0.00832531;
    }
  } else {
    result[5] += 0.14446205;
  }
  if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31586059928)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.17688424885)) {
      result[6] += 0.07119221;
    } else {
      result[6] += -0.095647335;
    }
  } else {
    result[6] += -0.09645057;
  }
  if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31586059928)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.61777055264)) {
      result[7] += -0.09377092;
    } else {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)-0.53552961349)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.56495398283)) {
          result[7] += 0.10823856;
        } else {
          result[7] += -0.08794315;
        }
      } else {
        result[7] += -0.092092484;
      }
    }
  } else {
    result[7] += -0.096654296;
  }
  if ( (data[80].missing != -1) && (data[80].fvalue < (float)9.5720357895)) {
    result[8] += -0.09639679;
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.11647147685)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)0.06673399359)) {
        result[8] += -0;
      } else {
        result[8] += 0.07747852;
      }
    } else {
      result[8] += 0.108670145;
    }
  }
  if ( (data[4].missing != -1) && (data[4].fvalue < (float)-0.51474040747)) {
    if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.28573852777)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.62796533108)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.082774102688)) {
          result[9] += -0;
        } else {
          result[9] += -0.07981666;
        }
      } else {
        if ( (data[86].missing != -1) && (data[86].fvalue < (float)1)) {
          if ( (data[80].missing != -1) && (data[80].fvalue < (float)-0.43852174282)) {
            if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025413041934)) {
              result[9] += 0.10906171;
            } else {
              result[9] += 0.0675859;
            }
          } else {
            result[9] += -0;
          }
        } else {
          result[9] += -0;
        }
      }
    } else {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)-0.0058834324591)) {
        if ( (data[86].missing != -1) && (data[86].fvalue < (float)1)) {
          if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59280967712)) {
            result[9] += 0.10146456;
          } else {
            result[9] += -0.02820092;
          }
        } else {
          if ( (data[27].missing != -1) && (data[27].fvalue < (float)0.0084628881887)) {
            result[9] += -0.09295595;
          } else {
            result[9] += 0.031121232;
          }
        }
      } else {
        result[9] += -0.09572573;
      }
    }
  } else {
    if ( (data[37].missing != -1) && (data[37].fvalue < (float)1.3460149765)) {
      result[9] += -0.09623092;
    } else {
      if ( (data[27].missing != -1) && (data[27].fvalue < (float)0.0084628881887)) {
        result[9] += 0.062949166;
      } else {
        result[9] += -0.08010465;
      }
    }
  }
  if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31586059928)) {
    if ( (data[20].missing != -1) && (data[20].fvalue < (float)-0.53552961349)) {
      result[10] += -0.09526389;
    } else {
      result[10] += 0.108901195;
    }
  } else {
    result[10] += -0.09644964;
  }
  if ( (data[84].missing != -1) && (data[84].fvalue < (float)1)) {
    if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60396414995)) {
      if ( (data[80].missing != -1) && (data[80].fvalue < (float)-0.37019988894)) {
        if ( (data[37].missing != -1) && (data[37].fvalue < (float)0.7573646307)) {
          if ( (data[51].missing != -1) && (data[51].fvalue < (float)0.029193546623)) {
            if ( (data[33].missing != -1) && (data[33].fvalue < (float)1.4050359726)) {
              if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59852188826)) {
                if ( (data[32].missing != -1) && (data[32].fvalue < (float)1.9828362465)) {
                  result[11] += -0.00647481;
                } else {
                  result[11] += 0.08352158;
                }
              } else {
                if ( (data[79].missing != -1) && (data[79].fvalue < (float)2.4661560059)) {
                  result[11] += 0.10946525;
                } else {
                  result[11] += 0.04250436;
                }
              }
            } else {
              result[11] += -0.0778189;
            }
          } else {
            if ( (data[80].missing != -1) && (data[80].fvalue < (float)-0.3703558743)) {
              if ( (data[80].missing != -1) && (data[80].fvalue < (float)-0.43852174282)) {
                result[11] += -0;
              } else {
                result[11] += 0.12064998;
              }
            } else {
              result[11] += -0.08442604;
            }
          }
        } else {
          if ( (data[86].missing != -1) && (data[86].fvalue < (float)1)) {
            if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.43109288812)) {
              result[11] += 0.11310033;
            } else {
              if ( (data[53].missing != -1) && (data[53].fvalue < (float)-0.2361369431)) {
                result[11] += -0.06765485;
              } else {
                result[11] += 0.07371131;
              }
            }
          } else {
            if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.58880263567)) {
              if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59750467539)) {
                if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31564411521)) {
                  result[11] += -0.08591037;
                } else {
                  result[11] += 0.04803768;
                }
              } else {
                result[11] += -0.09005337;
              }
            } else {
              if ( (data[59].missing != -1) && (data[59].fvalue < (float)-0.46622672677)) {
                if ( (data[27].missing != -1) && (data[27].fvalue < (float)0.9727897644)) {
                  if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62004947662)) {
                    if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.10594877601)) {
                      if ( (data[61].missing != -1) && (data[61].fvalue < (float)-0.16697607934)) {
                        if ( (data[33].missing != -1) && (data[33].fvalue < (float)-0.62329429388)) {
                          result[11] += 0.07100261;
                        } else {
                          result[11] += -0.08801717;
                        }
                      } else {
                        if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.15498234332)) {
                          if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59797418118)) {
                            if ( (data[32].missing != -1) && (data[32].fvalue < (float)5.8283338547)) {
                              result[11] += -0.04283985;
                            } else {
                              result[11] += 0.046892427;
                            }
                          } else {
                            if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62016826868)) {
                              result[11] += 0.017742977;
                            } else {
                              if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.20401591063)) {
                                if ( (data[32].missing != -1) && (data[32].fvalue < (float)5.5994348526)) {
                                  result[11] += 0.16009481;
                                } else {
                                  result[11] += 0.042790774;
                                }
                              } else {
                                result[11] += 0.0346416;
                              }
                            }
                          }
                        } else {
                          result[11] += -0.009528161;
                        }
                      }
                    } else {
                      if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.039009898901)) {
                        result[11] += 0.16436166;
                      } else {
                        if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60423654318)) {
                          if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.085147149861)) {
                            result[11] += 0.16505416;
                          } else {
                            result[11] += 0.052078303;
                          }
                        } else {
                          result[11] += 0.023230908;
                        }
                      }
                    }
                  } else {
                    result[11] += -0.075674824;
                  }
                } else {
                  result[11] += -0.088518366;
                }
              } else {
                if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.89404076338)) {
                  result[11] += 0.0047673755;
                } else {
                  result[11] += -0.055106446;
                }
              }
            }
          }
        }
      } else {
        if ( (data[26].missing != -1) && (data[26].fvalue < (float)40.746994019)) {
          result[11] += -0.09592896;
        } else {
          result[11] += 0.08879606;
        }
      }
    } else {
      if ( (data[33].missing != -1) && (data[33].fvalue < (float)1.4050359726)) {
        if ( (data[40].missing != -1) && (data[40].fvalue < (float)1.5179747343)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.61899483204)) {
            if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.9231749177)) {
              result[11] += -0.008852293;
            } else {
              result[11] += -0.0940807;
            }
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)-0.50166469812)) {
              if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.60102975368)) {
                if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.88865399361)) {
                  result[11] += 0.118307;
                } else {
                  if ( (data[35].missing != -1) && (data[35].fvalue < (float)0.03643072024)) {
                    result[11] += -0.023481673;
                  } else {
                    result[11] += 0.055294923;
                  }
                }
              } else {
                result[11] += -0.053780872;
              }
            } else {
              result[11] += -0.08473113;
            }
          }
        } else {
          result[11] += 0.13245207;
        }
      } else {
        result[11] += -0.0961519;
      }
    }
  } else {
    if ( (data[82].missing != -1) && (data[82].fvalue < (float)1)) {
      if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.18199364841)) {
        if ( (data[45].missing != -1) && (data[45].fvalue < (float)-0.092079631984)) {
          if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.54725086689)) {
            if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.82510781288)) {
              result[11] += -0.08771246;
            } else {
              result[11] += 0.097067125;
            }
          } else {
            result[11] += -0.09096563;
          }
        } else {
          result[11] += 0.048048988;
        }
      } else {
        if ( (data[32].missing != -1) && (data[32].fvalue < (float)0.92990243435)) {
          if ( (data[27].missing != -1) && (data[27].fvalue < (float)1.8553940058)) {
            result[11] += 0.13994719;
          } else {
            result[11] += -0;
          }
        } else {
          result[11] += -0.06420268;
        }
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)1.797724247)) {
        result[11] += -0.09655495;
      } else {
        result[11] += 0.037074525;
      }
    }
  }
  if ( (data[79].missing != -1) && (data[79].fvalue < (float)6.1137475967)) {
    if ( (data[32].missing != -1) && (data[32].fvalue < (float)5.7825541496)) {
      if ( (data[75].missing != -1) && (data[75].fvalue < (float)2.3511066437)) {
        if ( (data[78].missing != -1) && (data[78].fvalue < (float)3.5391829014)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.57866376638)) {
            result[12] += 0.051088512;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)3.2361967564)) {
              if ( (data[48].missing != -1) && (data[48].fvalue < (float)3.0776703358)) {
                if ( (data[37].missing != -1) && (data[37].fvalue < (float)4.5415453911)) {
                  result[12] += -0.0956051;
                } else {
                  result[12] += -0.010929542;
                }
              } else {
                if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.13324643672)) {
                  result[12] += 0.018417314;
                } else {
                  result[12] += -0.08355702;
                }
              }
            } else {
              result[12] += -0;
            }
          }
        } else {
          if ( (data[47].missing != -1) && (data[47].fvalue < (float)-0.0074732503854)) {
            result[12] += -0.006783831;
          } else {
            result[12] += 0.11251964;
          }
        }
      } else {
        result[12] += 0.08384699;
      }
    } else {
      if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.4328392446)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.61998814344)) {
          result[12] += 0.029707273;
        } else {
          result[12] += 0.19030589;
        }
      } else {
        result[12] += -0.09148432;
      }
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.83999991417)) {
      result[12] += 0.12337686;
    } else {
      result[12] += -0.09313369;
    }
  }
  if ( (data[83].missing != -1) && (data[83].fvalue < (float)1)) {
    if ( (data[50].missing != -1) && (data[50].fvalue < (float)0.49784451723)) {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.9851242304)) {
        if ( (data[55].missing != -1) && (data[55].fvalue < (float)7.806274516e-05)) {
          if ( (data[81].missing != -1) && (data[81].fvalue < (float)1)) {
            result[0] += -0.09649286;
          } else {
            if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025401910767)) {
              result[0] += -0;
            } else {
              result[0] += -0.070354424;
            }
          }
        } else {
          result[0] += -0;
        }
      } else {
        if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025413041934)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.61850941181)) {
            if ( (data[58].missing != -1) && (data[58].fvalue < (float)0.14466646314)) {
              if ( (data[93].missing != -1) && (data[93].fvalue < (float)1)) {
                if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.65628534555)) {
                  if ( (data[80].missing != -1) && (data[80].fvalue < (float)-0.37019988894)) {
                    result[0] += 0.12811294;
                  } else {
                    result[0] += 0.05644029;
                  }
                } else {
                  result[0] += -0.0742276;
                }
              } else {
                result[0] += 0.10616547;
              }
            } else {
              if ( (data[20].missing != -1) && (data[20].fvalue < (float)-0.41642415524)) {
                result[0] += -0.09210678;
              } else {
                result[0] += 0.06599857;
              }
            }
          } else {
            result[0] += -0.090946905;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.50391459465)) {
            if ( (data[47].missing != -1) && (data[47].fvalue < (float)-0.015800645575)) {
              if ( (data[14].missing != -1) && (data[14].fvalue < (float)-0.43788185716)) {
                if ( (data[45].missing != -1) && (data[45].fvalue < (float)0.8430133462)) {
                  result[0] += 0.05849673;
                } else {
                  result[0] += -0;
                }
              } else {
                result[0] += -0.02686369;
              }
            } else {
              result[0] += 0.084817365;
            }
          } else {
            result[0] += -0.095471404;
          }
        }
      }
    } else {
      if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025243291631)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1.7383306026)) {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)2.4427080154)) {
            if ( (data[69].missing != -1) && (data[69].fvalue < (float)-0.39549323916)) {
              result[0] += 0.034135357;
            } else {
              result[0] += 0.10704617;
            }
          } else {
            result[0] += 0.030455265;
          }
        } else {
          result[0] += -0;
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)-0.37251877785)) {
          result[0] += -0;
        } else {
          result[0] += -0.086302295;
        }
      }
    }
  } else {
    if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.024578202516)) {
      if ( (data[37].missing != -1) && (data[37].fvalue < (float)0.44902396202)) {
        result[0] += -0.09736297;
      } else {
        if ( (data[37].missing != -1) && (data[37].fvalue < (float)1.5982936621)) {
          if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59523540735)) {
            if ( (data[86].missing != -1) && (data[86].fvalue < (float)1)) {
              result[0] += -0.08486333;
            } else {
              if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.024974752218)) {
                result[0] += 0.0938656;
              } else {
                if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59734815359)) {
                  result[0] += 0.039078474;
                } else {
                  result[0] += -0.023619782;
                }
              }
            }
          } else {
            result[0] += 0.10465782;
          }
        } else {
          if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.7070043087)) {
            result[0] += -0.021463757;
          } else {
            if ( (data[86].missing != -1) && (data[86].fvalue < (float)1)) {
              result[0] += 0.001870033;
            } else {
              if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31392768025)) {
                result[0] += 0.021727089;
              } else {
                result[0] += 0.11552819;
              }
            }
          }
        }
      }
    } else {
      if ( (data[37].missing != -1) && (data[37].fvalue < (float)0.8134265542)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.038397628814)) {
          result[0] += -0.094756946;
        } else {
          result[0] += -0.009882087;
        }
      } else {
        if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31386581063)) {
          if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31466990709)) {
            if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.77628856897)) {
              result[0] += 0.1263103;
            } else {
              result[0] += -0;
            }
          } else {
            if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.54161769152)) {
              if ( (data[69].missing != -1) && (data[69].fvalue < (float)-0.38108387589)) {
                result[0] += -0.08066777;
              } else {
                result[0] += -0.011254637;
              }
            } else {
              if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.74951910973)) {
                if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.6017807126)) {
                  if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.85384505987)) {
                    result[0] += 0.019091258;
                  } else {
                    result[0] += 0.16424334;
                  }
                } else {
                  result[0] += -0;
                }
              } else {
                result[0] += -0.07147387;
              }
            }
          }
        } else {
          if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.35827046633)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62016135454)) {
              result[0] += 0.010984356;
            } else {
              result[0] += 0.15002263;
            }
          } else {
            if ( (data[37].missing != -1) && (data[37].fvalue < (float)0.86948847771)) {
              result[0] += -0.08799511;
            } else {
              if ( (data[35].missing != -1) && (data[35].fvalue < (float)0.13370351493)) {
                if ( (data[71].missing != -1) && (data[71].fvalue < (float)-0.13326488435)) {
                  result[0] += -0.08182965;
                } else {
                  if ( (data[73].missing != -1) && (data[73].fvalue < (float)1.0611419678)) {
                    if ( (data[73].missing != -1) && (data[73].fvalue < (float)0.49424415827)) {
                      result[0] += 0.018927023;
                    } else {
                      result[0] += 0.084776275;
                    }
                  } else {
                    result[0] += -0;
                  }
                }
              } else {
                if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59609615803)) {
                  if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.62869435549)) {
                    if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.77788865566)) {
                      result[0] += 0.09184138;
                    } else {
                      result[0] += -0;
                    }
                  } else {
                    result[0] += 0.10510316;
                  }
                } else {
                  result[0] += -0;
                }
              }
            }
          }
        }
      }
    }
  }
  if ( (data[53].missing != -1) && (data[53].fvalue < (float)-0.26880708337)) {
    if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59609615803)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.39068439603)) {
        if ( (data[86].missing != -1) && (data[86].fvalue < (float)1)) {
          result[1] += -0.0582004;
        } else {
          if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.20401591063)) {
            result[1] += 0.045085333;
          } else {
            result[1] += 0.1194305;
          }
        }
      } else {
        if ( (data[80].missing != -1) && (data[80].fvalue < (float)-0.28237974644)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.58832603693)) {
            result[1] += 0.06696856;
          } else {
            if ( (data[53].missing != -1) && (data[53].fvalue < (float)-0.26881948113)) {
              result[1] += -0.091604434;
            } else {
              result[1] += 0.031526085;
            }
          }
        } else {
          if ( (data[78].missing != -1) && (data[78].fvalue < (float)3.4584906101)) {
            result[1] += 0.095643595;
          } else {
            result[1] += -0.08902289;
          }
        }
      }
    } else {
      if ( (data[27].missing != -1) && (data[27].fvalue < (float)3.7513587475)) {
        result[1] += -0.09625916;
      } else {
        result[1] += 0.06488922;
      }
    }
  } else {
    if ( (data[78].missing != -1) && (data[78].fvalue < (float)3.4584906101)) {
      if ( (data[83].missing != -1) && (data[83].fvalue < (float)1)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.62010931969)) {
          if ( (data[69].missing != -1) && (data[69].fvalue < (float)-0.39758071303)) {
            result[1] += 0.07301152;
          } else {
            if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.35921764374)) {
              result[1] += -0.12220884;
            } else {
              result[1] += -0;
            }
          }
        } else {
          if ( (data[79].missing != -1) && (data[79].fvalue < (float)6.0763492584)) {
            result[1] += 0.10669369;
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.74213886261)) {
              result[1] += -0.104245044;
            } else {
              result[1] += 0.10634822;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)-0.44659695029)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62004947662)) {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.16122038662)) {
              if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31298440695)) {
                if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.61998814344)) {
                  result[1] += 0.110491;
                } else {
                  result[1] += 0.027563723;
                }
              } else {
                result[1] += -0.008327601;
              }
            } else {
              if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.62869435549)) {
                if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.71015536785)) {
                  if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59750467539)) {
                    if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31443795562)) {
                      result[1] += -0.060895942;
                    } else {
                      result[1] += 0.049210515;
                    }
                  } else {
                    if ( (data[34].missing != -1) && (data[34].fvalue < (float)-0.20994369686)) {
                      result[1] += -0;
                    } else {
                      result[1] += 0.11142695;
                    }
                  }
                } else {
                  if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.2322666645)) {
                    if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.23670496047)) {
                      if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.041795373)) {
                        result[1] += 0.005554479;
                      } else {
                        result[1] += -0.016989127;
                      }
                    } else {
                      if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31460806727)) {
                        result[1] += -0;
                      } else {
                        result[1] += -0.107109085;
                      }
                    }
                  } else {
                    result[1] += 0.054905046;
                  }
                }
              } else {
                result[1] += -0.09912865;
              }
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.61950498819)) {
              result[1] += 0.104607694;
            } else {
              if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.40275913477)) {
                if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.61850941181)) {
                  result[1] += 0.09133612;
                } else {
                  if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.039240390062)) {
                    result[1] += 0.06798955;
                  } else {
                    result[1] += -0.056108057;
                  }
                }
              } else {
                result[1] += -0.11128457;
              }
            }
          }
        } else {
          result[1] += -0.095085196;
        }
      }
    } else {
      result[1] += -0.09585636;
    }
  }
  if ( (data[87].missing != -1) && (data[87].fvalue < (float)1)) {
    if ( (data[42].missing != -1) && (data[42].fvalue < (float)0.40617159009)) {
      result[2] += -0.096404456;
    } else {
      result[2] += -0;
    }
  } else {
    if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.57788324356)) {
      if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.64759612083)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.71015536785)) {
          result[2] += 0.10670241;
        } else {
          result[2] += -0.07983269;
        }
      } else {
        result[2] += 0.10560484;
      }
    } else {
      result[2] += -0.09030459;
    }
  }
  if ( (data[27].missing != -1) && (data[27].fvalue < (float)1.0054787397)) {
    result[3] += -0.09646372;
  } else {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)0.3592517674)) {
      result[3] += -0.07656534;
    } else {
      result[3] += 0.10671888;
    }
  }
  if ( (data[89].missing != -1) && (data[89].fvalue < (float)1)) {
    if ( (data[44].missing != -1) && (data[44].fvalue < (float)0.45843374729)) {
      result[4] += -0.09592274;
    } else {
      result[4] += -0.03551842;
    }
  } else {
    result[4] += 0.10656897;
  }
  if ( (data[92].missing != -1) && (data[92].fvalue < (float)1)) {
    if ( (data[27].missing != -1) && (data[27].fvalue < (float)1.3160247803)) {
      result[5] += -0.09609256;
    } else {
      result[5] += -0;
    }
  } else {
    result[5] += 0.13495412;
  }
  if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31586059928)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.17688424885)) {
      result[6] += 0.06499384;
    } else {
      result[6] += -0.0952606;
    }
  } else {
    result[6] += -0.09623451;
  }
  if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31586059928)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.61777055264)) {
      result[7] += -0.093051806;
    } else {
      if ( (data[17].missing != -1) && (data[17].fvalue < (float)1.0286098719)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.56495398283)) {
          result[7] += 0.10589911;
        } else {
          result[7] += -0.08637268;
        }
      } else {
        result[7] += -0.090959765;
      }
    }
  } else {
    result[7] += -0.09647779;
  }
  if ( (data[80].missing != -1) && (data[80].fvalue < (float)9.5720357895)) {
    result[8] += -0.09616818;
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.11647147685)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)0.06673399359)) {
        result[8] += -0;
      } else {
        result[8] += 0.07419376;
      }
    } else {
      result[8] += 0.10594924;
    }
  }
  if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.5824829936)) {
    if ( (data[84].missing != -1) && (data[84].fvalue < (float)1)) {
      if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.75868809223)) {
        if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.83832764626)) {
          result[9] += 0.015328306;
        } else {
          if ( (data[90].missing != -1) && (data[90].fvalue < (float)1)) {
            if ( (data[70].missing != -1) && (data[70].fvalue < (float)-0.14120779932)) {
              result[9] += -0.093475215;
            } else {
              result[9] += -0.035501853;
            }
          } else {
            result[9] += -0;
          }
        }
      } else {
        if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.7070043087)) {
          result[9] += 0.049053833;
        } else {
          result[9] += -0.012729084;
        }
      }
    } else {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.58649593592)) {
        result[9] += -0;
      } else {
        result[9] += 0.10509235;
      }
    }
  } else {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)-0.51474040747)) {
      if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.64668506384)) {
        if ( (data[80].missing != -1) && (data[80].fvalue < (float)1.7549535036)) {
          result[9] += -0.095631234;
        } else {
          result[9] += -0;
        }
      } else {
        if ( (data[31].missing != -1) && (data[31].fvalue < (float)-0.56225395203)) {
          result[9] += -0;
        } else {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.71015536785)) {
            result[9] += -0.006269276;
          } else {
            result[9] += 0.104728386;
          }
        }
      }
    } else {
      result[9] += -0.09602919;
    }
  }
  if ( (data[23].missing != -1) && (data[23].fvalue < (float)10.179190636)) {
    result[10] += -0.096248;
  } else {
    result[10] += 0.106427826;
  }
  if ( (data[84].missing != -1) && (data[84].fvalue < (float)1)) {
    if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60396414995)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.62015712261)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.74213886261)) {
          if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.80237007141)) {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.35428348184)) {
              if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.77468854189)) {
                result[11] += 0.060571812;
              } else {
                result[11] += -0.0786633;
              }
            } else {
              if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.82425731421)) {
                result[11] += -0;
              } else {
                result[11] += -0.08297828;
              }
            }
          } else {
            if ( (data[37].missing != -1) && (data[37].fvalue < (float)3.0278730392)) {
              if ( (data[80].missing != -1) && (data[80].fvalue < (float)-0.3703558743)) {
                if ( (data[52].missing != -1) && (data[52].fvalue < (float)0.10056277364)) {
                  if ( (data[17].missing != -1) && (data[17].fvalue < (float)1.0286098719)) {
                    if ( (data[37].missing != -1) && (data[37].fvalue < (float)2.691501379)) {
                      result[11] += 0.17758557;
                    } else {
                      result[11] += 0.030872844;
                    }
                  } else {
                    result[11] += 0.0011714214;
                  }
                } else {
                  if ( (data[69].missing != -1) && (data[69].fvalue < (float)0.68158894777)) {
                    result[11] += -0;
                  } else {
                    result[11] += 0.042950537;
                  }
                }
              } else {
                result[11] += -0;
              }
            } else {
              if ( (data[37].missing != -1) && (data[37].fvalue < (float)8.0734472275)) {
                result[11] += -0.10124259;
              } else {
                result[11] += 0.057165034;
              }
            }
          }
        } else {
          result[11] += -0.09077912;
        }
      } else {
        if ( (data[80].missing != -1) && (data[80].fvalue < (float)-0.37019988894)) {
          if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025413041934)) {
            result[11] += -0.09139543;
          } else {
            if ( (data[37].missing != -1) && (data[37].fvalue < (float)0.7573646307)) {
              if ( (data[65].missing != -1) && (data[65].fvalue < (float)-0.016915978864)) {
                if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59852188826)) {
                  if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.98034006357)) {
                    result[11] += -0.01810217;
                  } else {
                    result[11] += 0.058985505;
                  }
                } else {
                  result[11] += 0.10671829;
                }
              } else {
                result[11] += -0.06244142;
              }
            } else {
              if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.85705131292)) {
                if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.59801524878)) {
                  result[11] += -0.07213531;
                } else {
                  if ( (data[35].missing != -1) && (data[35].fvalue < (float)0.18494385481)) {
                    if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31392768025)) {
                      if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.88496041298)) {
                        result[11] += -0;
                      } else {
                        result[11] += 0.061872497;
                      }
                    } else {
                      if ( (data[70].missing != -1) && (data[70].fvalue < (float)-0.13969793916)) {
                        result[11] += -0;
                      } else {
                        result[11] += -0.046865236;
                      }
                    }
                  } else {
                    if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60417157412)) {
                      result[11] += 0.10553585;
                    } else {
                      result[11] += 0.012097162;
                    }
                  }
                }
              } else {
                if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.6996152401)) {
                  if ( (data[35].missing != -1) && (data[35].fvalue < (float)-0.30468606949)) {
                    if ( (data[53].missing != -1) && (data[53].fvalue < (float)-0.25699743629)) {
                      result[11] += 0.10922917;
                    } else {
                      result[11] += 0.018834542;
                    }
                  } else {
                    result[11] += -0.059960626;
                  }
                } else {
                  if ( (data[35].missing != -1) && (data[35].fvalue < (float)0.21910408139)) {
                    result[11] += 0.10826437;
                  } else {
                    result[11] += -0;
                  }
                }
              }
            }
          }
        } else {
          if ( (data[35].missing != -1) && (data[35].fvalue < (float)0.65977102518)) {
            result[11] += -0.09283352;
          } else {
            result[11] += 0.008733107;
          }
        }
      }
    } else {
      if ( (data[53].missing != -1) && (data[53].fvalue < (float)-0.26839575171)) {
        if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.024578202516)) {
          result[11] += -0.0926398;
        } else {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.49699115753)) {
            result[11] += -0;
          } else {
            if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59750467539)) {
              result[11] += 0.093041785;
            } else {
              result[11] += 0.00254315;
            }
          }
        }
      } else {
        if ( (data[46].missing != -1) && (data[46].fvalue < (float)-0.14372359216)) {
          if ( (data[36].missing != -1) && (data[36].fvalue < (float)2.079767704)) {
            result[11] += -0.09376442;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.61998140812)) {
              result[11] += -0;
            } else {
              result[11] += -0.074797526;
            }
          }
        } else {
          result[11] += 0.001839522;
        }
      }
    }
  } else {
    if ( (data[82].missing != -1) && (data[82].fvalue < (float)1)) {
      if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.18199364841)) {
        if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.024578202516)) {
          if ( (data[37].missing != -1) && (data[37].fvalue < (float)0.42099300027)) {
            if ( (data[30].missing != -1) && (data[30].fvalue < (float)-1.2213975191)) {
              result[11] += -0.08571651;
            } else {
              result[11] += 0.05906528;
            }
          } else {
            result[11] += -0.090065494;
          }
        } else {
          result[11] += 0.07784425;
        }
      } else {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.62911725044)) {
          result[11] += -0.08200706;
        } else {
          if ( (data[75].missing != -1) && (data[75].fvalue < (float)0.086623676121)) {
            if ( (data[49].missing != -1) && (data[49].fvalue < (float)-0.039304774255)) {
              result[11] += 0.12960619;
            } else {
              result[11] += 0.023831267;
            }
          } else {
            result[11] += -0;
          }
        }
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)1.797724247)) {
        result[11] += -0.09635875;
      } else {
        result[11] += 0.019969456;
      }
    }
  }
  if ( (data[77].missing != -1) && (data[77].fvalue < (float)-0.019809605554)) {
    if ( (data[79].missing != -1) && (data[79].fvalue < (float)6.1137475967)) {
      if ( (data[32].missing != -1) && (data[32].fvalue < (float)5.7825541496)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.57866376638)) {
          result[12] += 0.052215762;
        } else {
          if ( (data[51].missing != -1) && (data[51].fvalue < (float)0.91606855392)) {
            if ( (data[42].missing != -1) && (data[42].fvalue < (float)0.10410173982)) {
              if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.99998575449)) {
                if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.62009978294)) {
                  if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.5824829936)) {
                    result[12] += -0.08903308;
                  } else {
                    result[12] += 0.10078356;
                  }
                } else {
                  result[12] += -0.094752505;
                }
              } else {
                result[12] += -0.09597993;
              }
            } else {
              if ( (data[46].missing != -1) && (data[46].fvalue < (float)-0.16920875013)) {
                result[12] += -0.08014196;
              } else {
                result[12] += -0;
              }
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.74213886261)) {
              result[12] += 0.051697604;
            } else {
              result[12] += -0.07722019;
            }
          }
        }
      } else {
        if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.4328392446)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.61997312307)) {
            result[12] += 0.047225975;
          } else {
            result[12] += 0.18467793;
          }
        } else {
          result[12] += -0.09019576;
        }
      }
    } else {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.0699566603)) {
        result[12] += 0.11984003;
      } else {
        result[12] += -0.09140387;
      }
    }
  } else {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)1.1286532879)) {
      if ( (data[80].missing != -1) && (data[80].fvalue < (float)-0.10689549893)) {
        result[12] += -0.0912138;
      } else {
        result[12] += -0.00450293;
      }
    } else {
      if ( (data[84].missing != -1) && (data[84].fvalue < (float)1)) {
        result[12] += 0.10129343;
      } else {
        result[12] += 0.2098744;
      }
    }
  }
  if ( (data[83].missing != -1) && (data[83].fvalue < (float)1)) {
    if ( (data[78].missing != -1) && (data[78].fvalue < (float)3.4584906101)) {
      if ( (data[75].missing != -1) && (data[75].fvalue < (float)0.33958044648)) {
        if ( (data[50].missing != -1) && (data[50].fvalue < (float)0.17703424394)) {
          if ( (data[81].missing != -1) && (data[81].fvalue < (float)1)) {
            result[0] += -0.09631267;
          } else {
            if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025401910767)) {
              result[0] += -0;
            } else {
              result[0] += -0.06754163;
            }
          }
        } else {
          result[0] += -0;
        }
      } else {
        result[0] += 0.06925501;
      }
    } else {
      if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025323992595)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.61931306124)) {
          if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.45554211736)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)3.7342278957)) {
              result[0] += -0.045572;
            } else {
              result[0] += 0.07892997;
            }
          } else {
            if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025424173102)) {
              result[0] += 0.10239499;
            } else {
              if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.099427320063)) {
                result[0] += 0.09125506;
              } else {
                result[0] += -0.05685293;
              }
            }
          }
        } else {
          result[0] += -0.07418835;
        }
      } else {
        if ( (data[51].missing != -1) && (data[51].fvalue < (float)-0.11487928778)) {
          if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.36591973901)) {
            result[0] += 0.10535193;
          } else {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.6996152401)) {
              result[0] += -0.027864933;
            } else {
              result[0] += 0.052667823;
            }
          }
        } else {
          if ( (data[58].missing != -1) && (data[58].fvalue < (float)-0.52407383919)) {
            result[0] += -0;
          } else {
            result[0] += -0.09558079;
          }
        }
      }
    }
  } else {
    if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.024578202516)) {
      if ( (data[37].missing != -1) && (data[37].fvalue < (float)0.44902396202)) {
        result[0] += -0.096066296;
      } else {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.53519374132)) {
          if ( (data[37].missing != -1) && (data[37].fvalue < (float)2.8316562176)) {
            if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.81487703323)) {
              result[0] += -0.009680757;
            } else {
              result[0] += -0.09370637;
            }
          } else {
            if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.65628534555)) {
              result[0] += 0.0725948;
            } else {
              result[0] += -0;
            }
          }
        } else {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)1.7314175367)) {
            if ( (data[37].missing != -1) && (data[37].fvalue < (float)1.3460149765)) {
              if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.024974752218)) {
                result[0] += 0.10331137;
              } else {
                if ( (data[32].missing != -1) && (data[32].fvalue < (float)2.7153120041)) {
                  result[0] += -0;
                } else {
                  result[0] += 0.08258328;
                }
              }
            } else {
              if ( (data[61].missing != -1) && (data[61].fvalue < (float)-0.16561180353)) {
                result[0] += -0.08260207;
              } else {
                result[0] += 0.09868594;
              }
            }
          } else {
            result[0] += -0.07984739;
          }
        }
      }
    } else {
      if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.54161769152)) {
        if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.79142647982)) {
          if ( (data[32].missing != -1) && (data[32].fvalue < (float)2.4864132404)) {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.11714296788)) {
              result[0] += -0.06708349;
            } else {
              if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.40954250097)) {
                result[0] += -0.041224364;
              } else {
                result[0] += 0.086614855;
              }
            }
          } else {
            result[0] += 0.15370882;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.61924982071)) {
            if ( (data[37].missing != -1) && (data[37].fvalue < (float)0.95358139277)) {
              result[0] += -0.09458233;
            } else {
              if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.62003588676)) {
                result[0] += -0;
              } else {
                result[0] += -0.07264154;
              }
            }
          } else {
            result[0] += -0;
          }
        }
      } else {
        if ( (data[37].missing != -1) && (data[37].fvalue < (float)0.8134265542)) {
          result[0] += -0.06505958;
        } else {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.2629079819)) {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.26570025086)) {
              if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.43870261312)) {
                result[0] += -0.07894218;
              } else {
                if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.62101882696)) {
                  if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.6042920351)) {
                    if ( (data[73].missing != -1) && (data[73].fvalue < (float)1.0611419678)) {
                      result[0] += 0.048843574;
                    } else {
                      result[0] += -0.003414711;
                    }
                  } else {
                    result[0] += -0.014354704;
                  }
                } else {
                  result[0] += 0.1410549;
                }
              }
            } else {
              if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59547013044)) {
                if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.75656324625)) {
                  if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.55792814493)) {
                    result[0] += 0.10459602;
                  } else {
                    if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.81572955847)) {
                      if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60414910316)) {
                        result[0] += -0.005415714;
                      } else {
                        result[0] += 0.034209237;
                      }
                    } else {
                      if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.0080859577283)) {
                        result[0] += 0.018699283;
                      } else {
                        result[0] += 0.08382212;
                      }
                    }
                  }
                } else {
                  result[0] += -0;
                }
              } else {
                result[0] += -0.034635864;
              }
            }
          } else {
            result[0] += -0.082092784;
          }
        }
      }
    }
  }
  if ( (data[55].missing != -1) && (data[55].fvalue < (float)-0.1346296072)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.17688424885)) {
      if ( (data[27].missing != -1) && (data[27].fvalue < (float)0.041151933372)) {
        result[1] += -0.0060077775;
      } else {
        result[1] += -0.09622633;
      }
    } else {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.039243385196)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)1.7314175367)) {
          if ( (data[82].missing != -1) && (data[82].fvalue < (float)1)) {
            if ( (data[37].missing != -1) && (data[37].fvalue < (float)1.0657052994)) {
              result[1] += -0.06648565;
            } else {
              if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.12229329348)) {
                if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.08081638813)) {
                  result[1] += -0.009010483;
                } else {
                  result[1] += 0.064160384;
                }
              } else {
                result[1] += -0.08377202;
              }
            }
          } else {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)0.5904673934)) {
              result[1] += 0.07625769;
            } else {
              result[1] += 0.0015828704;
            }
          }
        } else {
          result[1] += -0.097481936;
        }
      } else {
        result[1] += -0.09194263;
      }
    }
  } else {
    if ( (data[78].missing != -1) && (data[78].fvalue < (float)3.4584906101)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)-0.43788185716)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)-0.50166469812)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.61994504929)) {
            if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.76508826017)) {
              if ( (data[61].missing != -1) && (data[61].fvalue < (float)-0.16615319252)) {
                if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.20401591063)) {
                  if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.77788865566)) {
                    if ( (data[45].missing != -1) && (data[45].fvalue < (float)-0.099566295743)) {
                      if ( (data[32].missing != -1) && (data[32].fvalue < (float)5.5994348526)) {
                        if ( (data[32].missing != -1) && (data[32].fvalue < (float)3.4477875233)) {
                          if ( (data[32].missing != -1) && (data[32].fvalue < (float)1.9828362465)) {
                            result[1] += 0.111657895;
                          } else {
                            if ( (data[61].missing != -1) && (data[61].fvalue < (float)-0.16732256114)) {
                              result[1] += -0.06564684;
                            } else {
                              result[1] += 0.103471614;
                            }
                          }
                        } else {
                          result[1] += -0.09790261;
                        }
                      } else {
                        result[1] += 0.14415278;
                      }
                    } else {
                      result[1] += -0.02630284;
                    }
                  } else {
                    result[1] += -0.1114503;
                  }
                } else {
                  if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.80862355232)) {
                    if ( (data[55].missing != -1) && (data[55].fvalue < (float)7.806274516e-05)) {
                      result[1] += 0.057744306;
                    } else {
                      result[1] += -0.04632644;
                    }
                  } else {
                    result[1] += 0.09122692;
                  }
                }
              } else {
                if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.2248044759)) {
                  result[1] += -0.046074204;
                } else {
                  result[1] += 0.034493975;
                }
              }
            } else {
              if ( (data[27].missing != -1) && (data[27].fvalue < (float)3.7677032948)) {
                result[1] += -0.0986391;
              } else {
                result[1] += 0.1022334;
              }
            }
          } else {
            if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60321289301)) {
              if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.15498234332)) {
                result[1] += 0.10204408;
              } else {
                result[1] += 0.032357223;
              }
            } else {
              if ( (data[32].missing != -1) && (data[32].fvalue < (float)4.82117939)) {
                if ( (data[32].missing != -1) && (data[32].fvalue < (float)3.9971444607)) {
                  if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.20401591063)) {
                    result[1] += -0.10316359;
                  } else {
                    result[1] += 0.04964061;
                  }
                } else {
                  if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.039240390062)) {
                    result[1] += 0.12082191;
                  } else {
                    result[1] += 0.028006615;
                  }
                }
              } else {
                result[1] += -0.04123696;
              }
            }
          }
        } else {
          result[1] += -0.09432475;
        }
      } else {
        if ( (data[83].missing != -1) && (data[83].fvalue < (float)1)) {
          if ( (data[56].missing != -1) && (data[56].fvalue < (float)0.68352377415)) {
            if ( (data[50].missing != -1) && (data[50].fvalue < (float)0.17703424394)) {
              if ( (data[79].missing != -1) && (data[79].fvalue < (float)6.0763492584)) {
                result[1] += 0.10469945;
              } else {
                if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.74213886261)) {
                  result[1] += -0.09860064;
                } else {
                  result[1] += 0.104307875;
                }
              }
            } else {
              if ( (data[30].missing != -1) && (data[30].fvalue < (float)-1.0261459351)) {
                result[1] += 0.100180656;
              } else {
                result[1] += -0.007169123;
              }
            }
          } else {
            result[1] += -0.016623257;
          }
        } else {
          result[1] += -0.07577587;
        }
      }
    } else {
      result[1] += -0.095537044;
    }
  }
  if ( (data[78].missing != -1) && (data[78].fvalue < (float)3.4584906101)) {
    result[2] += -0.09622776;
  } else {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.15619270504)) {
      if ( (data[59].missing != -1) && (data[59].fvalue < (float)-0.40304526687)) {
        if ( (data[17].missing != -1) && (data[17].fvalue < (float)1.0286098719)) {
          if ( (data[69].missing != -1) && (data[69].fvalue < (float)-0.27248257399)) {
            result[2] += 0.09247558;
          } else {
            result[2] += 0.20420131;
          }
        } else {
          if ( (data[46].missing != -1) && (data[46].fvalue < (float)1.9170114994)) {
            if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025413041934)) {
              result[2] += -0;
            } else {
              result[2] += 0.045523044;
            }
          } else {
            result[2] += 0.10041124;
          }
        }
      } else {
        result[2] += -0.09208589;
      }
    } else {
      result[2] += -0.09510907;
    }
  }
  if ( (data[27].missing != -1) && (data[27].fvalue < (float)1.0054787397)) {
    result[3] += -0.09630554;
  } else {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)0.3592517674)) {
      result[3] += -0.07505341;
    } else {
      result[3] += 0.10468707;
    }
  }
  if ( (data[89].missing != -1) && (data[89].fvalue < (float)1)) {
    if ( (data[42].missing != -1) && (data[42].fvalue < (float)0.10410173982)) {
      result[4] += -0.09585172;
    } else {
      result[4] += -0.04495553;
    }
  } else {
    result[4] += 0.10448923;
  }
  if ( (data[92].missing != -1) && (data[92].fvalue < (float)1)) {
    if ( (data[37].missing != -1) && (data[37].fvalue < (float)3.6165232658)) {
      result[5] += -0.09586547;
    } else {
      result[5] += -0.019270811;
    }
  } else {
    result[5] += 0.1252881;
  }
  if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31586059928)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.17688424885)) {
      result[6] += 0.04588847;
    } else {
      result[6] += -0.094850436;
    }
  } else {
    result[6] += -0.096033745;
  }
  if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31586059928)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.61777055264)) {
      result[7] += -0.092190266;
    } else {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)-0.53552961349)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.56495398283)) {
          result[7] += 0.10306171;
        } else {
          result[7] += -0.08418842;
        }
      } else {
        result[7] += -0.08970182;
      }
    }
  } else {
    result[7] += -0.09632602;
  }
  if ( (data[12].missing != -1) && (data[12].fvalue < (float)3.7342278957)) {
    result[8] += -0.09595593;
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.62000608444)) {
      result[8] += -0.07321385;
    } else {
      result[8] += 0.10399146;
    }
  }
  if ( (data[14].missing != -1) && (data[14].fvalue < (float)-0.45095446706)) {
    if ( (data[80].missing != -1) && (data[80].fvalue < (float)-0.43852174282)) {
      if ( (data[86].missing != -1) && (data[86].fvalue < (float)1)) {
        if ( (data[27].missing != -1) && (data[27].fvalue < (float)0.62955474854)) {
          if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025413041934)) {
            result[9] += 0.104243696;
          } else {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.71015536785)) {
              result[9] += -0.07349898;
            } else {
              result[9] += 0.099050105;
            }
          }
        } else {
          result[9] += -0.023930715;
        }
      } else {
        if ( (data[27].missing != -1) && (data[27].fvalue < (float)0.0084628881887)) {
          if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.79868918657)) {
            result[9] += 0.0004713125;
          } else {
            result[9] += -0.0922067;
          }
        } else {
          result[9] += 0.04006553;
        }
      }
    } else {
      if ( (data[78].missing != -1) && (data[78].fvalue < (float)-0.0092252632603)) {
        result[9] += -0.09517561;
      } else {
        result[9] += -0;
      }
    }
  } else {
    if ( (data[37].missing != -1) && (data[37].fvalue < (float)1.3460149765)) {
      result[9] += -0.09571895;
    } else {
      if ( (data[32].missing != -1) && (data[32].fvalue < (float)3.9971444607)) {
        result[9] += 0.08675644;
      } else {
        result[9] += -0.055906273;
      }
    }
  }
  if ( (data[23].missing != -1) && (data[23].fvalue < (float)10.179190636)) {
    result[10] += -0.09605061;
  } else {
    result[10] += 0.104306;
  }
  if ( (data[84].missing != -1) && (data[84].fvalue < (float)1)) {
    if ( (data[33].missing != -1) && (data[33].fvalue < (float)1.4050359726)) {
      if ( (data[36].missing != -1) && (data[36].fvalue < (float)-0.61982524395)) {
        if ( (data[52].missing != -1) && (data[52].fvalue < (float)0.052392564714)) {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.93369174)) {
            if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.77628856897)) {
              result[11] += -0.02132341;
            } else {
              if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.20401591063)) {
                result[11] += 0.08214986;
              } else {
                result[11] += 0.010568707;
              }
            }
          } else {
            if ( (data[32].missing != -1) && (data[32].fvalue < (float)4.9585189819)) {
              if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.2424036264)) {
                if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.61701476574)) {
                  if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.1404579878)) {
                    if ( (data[47].missing != -1) && (data[47].fvalue < (float)0.032373789698)) {
                      result[11] += -0.09231948;
                    } else {
                      result[11] += -0.026361752;
                    }
                  } else {
                    result[11] += -0.03148693;
                  }
                } else {
                  if ( (data[34].missing != -1) && (data[34].fvalue < (float)-0.20938225091)) {
                    result[11] += 0.036565326;
                  } else {
                    result[11] += -0.08543786;
                  }
                }
              } else {
                result[11] += 0.018815544;
              }
            } else {
              if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.61771321297)) {
                result[11] += -0.08190952;
              } else {
                if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.63551598787)) {
                  result[11] += 0.089630276;
                } else {
                  result[11] += 0.007929753;
                }
              }
            }
          }
        } else {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.36532580853)) {
            if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.9311388731)) {
              if ( (data[71].missing != -1) && (data[71].fvalue < (float)-0.13326488435)) {
                if ( (data[54].missing != -1) && (data[54].fvalue < (float)-0.037270721048)) {
                  result[11] += 0.0052593336;
                } else {
                  result[11] += 0.11417798;
                }
              } else {
                if ( (data[53].missing != -1) && (data[53].fvalue < (float)0.14160977304)) {
                  result[11] += 0.011264058;
                } else {
                  result[11] += -0.0029957362;
                }
              }
            } else {
              result[11] += -0.091735005;
            }
          } else {
            if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.18767139316)) {
              if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.77948868275)) {
                if ( (data[54].missing != -1) && (data[54].fvalue < (float)-0.03810730949)) {
                  if ( (data[32].missing != -1) && (data[32].fvalue < (float)5.4163160324)) {
                    result[11] += 0.109332405;
                  } else {
                    if ( (data[32].missing != -1) && (data[32].fvalue < (float)5.9656729698)) {
                      result[11] += -0.03704862;
                    } else {
                      result[11] += 0.08476001;
                    }
                  }
                } else {
                  result[11] += -0;
                }
              } else {
                if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59750467539)) {
                  if ( (data[32].missing != -1) && (data[32].fvalue < (float)4.0887041092)) {
                    result[11] += -0;
                  } else {
                    result[11] += 0.061512258;
                  }
                } else {
                  result[11] += -0.050059814;
                }
              }
            } else {
              if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.62005680799)) {
                if ( (data[53].missing != -1) && (data[53].fvalue < (float)-0.25171658397)) {
                  result[11] += -0.026991712;
                } else {
                  if ( (data[32].missing != -1) && (data[32].fvalue < (float)1.9828362465)) {
                    result[11] += 0.01519053;
                  } else {
                    result[11] += 0.12952556;
                  }
                }
              } else {
                result[11] += 0.102996305;
              }
            }
          }
        }
      } else {
        if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025413041934)) {
          result[11] += -0.087171175;
        } else {
          if ( (data[80].missing != -1) && (data[80].fvalue < (float)-0.37019988894)) {
            if ( (data[70].missing != -1) && (data[70].fvalue < (float)0.041176345199)) {
              result[11] += 0.10376517;
            } else {
              result[11] += 0.021082908;
            }
          } else {
            if ( (data[33].missing != -1) && (data[33].fvalue < (float)0.84343641996)) {
              result[11] += -0.09293653;
            } else {
              result[11] += 0.12715821;
            }
          }
        }
      }
    } else {
      result[11] += -0.095676646;
    }
  } else {
    if ( (data[12].missing != -1) && (data[12].fvalue < (float)-0.0058834324591)) {
      if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.18199364841)) {
        if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.024578202516)) {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)-2.2394132614)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62021207809)) {
              result[11] += 0.10645877;
            } else {
              result[11] += -0.09352224;
            }
          } else {
            result[11] += -0.091966674;
          }
        } else {
          result[11] += 0.0670205;
        }
      } else {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.62646782398)) {
          result[11] += -0.077266835;
        } else {
          if ( (data[71].missing != -1) && (data[71].fvalue < (float)0.9274455905)) {
            if ( (data[48].missing != -1) && (data[48].fvalue < (float)-0.29432326555)) {
              result[11] += 0.12798925;
            } else {
              result[11] += 0.014890893;
            }
          } else {
            result[11] += -0;
          }
        }
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)1.797724247)) {
        result[11] += -0.096055694;
      } else {
        result[11] += 0.019062163;
      }
    }
  }
  if ( (data[55].missing != -1) && (data[55].fvalue < (float)7.806274516e-05)) {
    if ( (data[32].missing != -1) && (data[32].fvalue < (float)6.7439284325)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.57866376638)) {
        result[12] += 0.03931147;
      } else {
        if ( (data[42].missing != -1) && (data[42].fvalue < (float)-0.010385181755)) {
          if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.631049335)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)-0.44659695029)) {
              if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.4838591814)) {
                result[12] += 0.039455123;
              } else {
                if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.7546197772)) {
                  result[12] += -0.01818763;
                } else {
                  result[12] += -0.08599248;
                }
              }
            } else {
              result[12] += -0.09442521;
            }
          } else {
            result[12] += -0.09608647;
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)-0.45612597466)) {
            if ( (data[80].missing != -1) && (data[80].fvalue < (float)0.23471385241)) {
              result[12] += -0.09550487;
            } else {
              result[12] += -0.0015198922;
            }
          } else {
            result[12] += 0.099638425;
          }
        }
      }
    } else {
      if ( (data[32].missing != -1) && (data[32].fvalue < (float)6.9270472527)) {
        result[12] += 0.08934824;
      } else {
        result[12] += -0.019941188;
      }
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.83999991417)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.39758354425)) {
        if ( (data[70].missing != -1) && (data[70].fvalue < (float)0.18326662481)) {
          result[12] += -0.07160673;
        } else {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.61189597845)) {
            result[12] += -0.0036047886;
          } else {
            result[12] += 0.17003241;
          }
        }
      } else {
        if ( (data[80].missing != -1) && (data[80].fvalue < (float)0.23471385241)) {
          result[12] += 0.27280566;
        } else {
          result[12] += 0.11555789;
        }
      }
    } else {
      result[12] += -0.09494175;
    }
  }
  if ( (data[83].missing != -1) && (data[83].fvalue < (float)1)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)1.724832654)) {
      if ( (data[55].missing != -1) && (data[55].fvalue < (float)7.806274516e-05)) {
        if ( (data[80].missing != -1) && (data[80].fvalue < (float)9.5720357895)) {
          if ( (data[82].missing != -1) && (data[82].fvalue < (float)1)) {
            if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025401910767)) {
              result[0] += -0;
            } else {
              result[0] += -0.061494336;
            }
          } else {
            if ( (data[67].missing != -1) && (data[67].fvalue < (float)0.86935961246)) {
              result[0] += -0.09537332;
            } else {
              result[0] += -0.027572727;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62010836601)) {
            result[0] += 0.070781775;
          } else {
            result[0] += -0.08258341;
          }
        }
      } else {
        if ( (data[80].missing != -1) && (data[80].fvalue < (float)-0.28877517581)) {
          if ( (data[80].missing != -1) && (data[80].fvalue < (float)-0.3703558743)) {
            result[0] += -0.00611014;
          } else {
            result[0] += 0.12018971;
          }
        } else {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.73820483685)) {
            result[0] += -0.10277114;
          } else {
            if ( (data[71].missing != -1) && (data[71].fvalue < (float)0.61064589024)) {
              result[0] += -0.0044243615;
            } else {
              result[0] += 0.043732893;
            }
          }
        }
      }
    } else {
      if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025266945362)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.61931306124)) {
          if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025418607518)) {
            if ( (data[47].missing != -1) && (data[47].fvalue < (float)-0.015711553395)) {
              result[0] += 0.10215939;
            } else {
              if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.50445950031)) {
                result[0] += 0.08408749;
              } else {
                if ( (data[72].missing != -1) && (data[72].fvalue < (float)-0.11422163248)) {
                  result[0] += -0.051062033;
                } else {
                  result[0] += -0;
                }
              }
            }
          } else {
            if ( (data[61].missing != -1) && (data[61].fvalue < (float)-0.15772937238)) {
              if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.81572955847)) {
                result[0] += 0.109738976;
              } else {
                result[0] += 0.006505165;
              }
            } else {
              result[0] += -0.06953309;
            }
          }
        } else {
          result[0] += -0.073009014;
        }
      } else {
        if ( (data[58].missing != -1) && (data[58].fvalue < (float)-0.52407383919)) {
          result[0] += -0;
        } else {
          result[0] += -0.09192845;
        }
      }
    }
  } else {
    if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.024322185665)) {
      if ( (data[37].missing != -1) && (data[37].fvalue < (float)0.44902396202)) {
        result[0] += -0.09548006;
      } else {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.39068439603)) {
          if ( (data[37].missing != -1) && (data[37].fvalue < (float)2.8316562176)) {
            if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.81487703323)) {
              result[0] += -0.0027376157;
            } else {
              result[0] += -0.09120604;
            }
          } else {
            if ( (data[37].missing != -1) && (data[37].fvalue < (float)3.7286472321)) {
              result[0] += 0.0031411438;
            } else {
              result[0] += 0.08014745;
            }
          }
        } else {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)1.7314175367)) {
            if ( (data[37].missing != -1) && (data[37].fvalue < (float)1.5982936621)) {
              if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025342080742)) {
                result[0] += 0.10104297;
              } else {
                if ( (data[36].missing != -1) && (data[36].fvalue < (float)-0.63763225079)) {
                  if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.62869435549)) {
                    result[0] += 0.034257762;
                  } else {
                    result[0] += 0.1108833;
                  }
                } else {
                  if ( (data[33].missing != -1) && (data[33].fvalue < (float)-0.60387730598)) {
                    result[0] += -0.090760924;
                  } else {
                    result[0] += 0.077891104;
                  }
                }
              }
            } else {
              result[0] += -0;
            }
          } else {
            result[0] += -0.077148914;
          }
        }
      }
    } else {
      if ( (data[37].missing != -1) && (data[37].fvalue < (float)0.8134265542)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.038397628814)) {
          result[0] += -0.093135305;
        } else {
          result[0] += -0.012839431;
        }
      } else {
        if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.54161769152)) {
          if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.60498034954)) {
            if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.62884157896)) {
              result[0] += 0.10542127;
            } else {
              if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.34159609675)) {
                result[0] += -0.008364461;
              } else {
                result[0] += -0;
              }
            }
          } else {
            if ( (data[32].missing != -1) && (data[32].fvalue < (float)3.3104484081)) {
              if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.033586785197)) {
                result[0] += -0.08007026;
              } else {
                if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.17132686079)) {
                  result[0] += 0.015451227;
                } else {
                  result[0] += -0.029055255;
                }
              }
            } else {
              result[0] += -0.09031683;
            }
          }
        } else {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.0563672781)) {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.26570025086)) {
              if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.43870261312)) {
                result[0] += -0.080571264;
              } else {
                if ( (data[68].missing != -1) && (data[68].fvalue < (float)0.97979635)) {
                  result[0] += 0.11044367;
                } else {
                  if ( (data[73].missing != -1) && (data[73].fvalue < (float)1.0611419678)) {
                    if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62021154165)) {
                      result[0] += 0.08325331;
                    } else {
                      result[0] += 0.0019290175;
                    }
                  } else {
                    result[0] += -0;
                  }
                }
              }
            } else {
              if ( (data[33].missing != -1) && (data[33].fvalue < (float)-0.5635496974)) {
                if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.49173647165)) {
                  result[0] += 0.10225927;
                } else {
                  if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62014764547)) {
                    result[0] += 0.024880426;
                  } else {
                    result[0] += -0.012841806;
                  }
                }
              } else {
                if ( (data[61].missing != -1) && (data[61].fvalue < (float)-0.16561180353)) {
                  if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.22036042809)) {
                    result[0] += 0.14493221;
                  } else {
                    result[0] += 0.047177415;
                  }
                } else {
                  if ( (data[35].missing != -1) && (data[35].fvalue < (float)0.44907012582)) {
                    result[0] += -0;
                  } else {
                    result[0] += 0.09506668;
                  }
                }
              }
            }
          } else {
            if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.089604251087)) {
              if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.22036042809)) {
                result[0] += -0.007332469;
              } else {
                result[0] += 0.038258515;
              }
            } else {
              result[0] += -0.09597179;
            }
          }
        }
      }
    }
  }
  if ( (data[54].missing != -1) && (data[54].fvalue < (float)-0.039249159396)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.17688424885)) {
      if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.79142647982)) {
        result[1] += -0.014148064;
      } else {
        result[1] += -0.09610457;
      }
    } else {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.39068439603)) {
        result[1] += 0.06763772;
      } else {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)0.06673399359)) {
          if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.62869435549)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.62011039257)) {
              if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.62796533108)) {
                result[1] += 0.11227563;
              } else {
                if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.7679245472)) {
                  result[1] += -0.055900194;
                } else {
                  result[1] += 0.07369724;
                }
              }
            } else {
              if ( (data[32].missing != -1) && (data[32].fvalue < (float)2.5779726505)) {
                result[1] += -0.07729927;
              } else {
                if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.62646782398)) {
                  result[1] += -0;
                } else {
                  result[1] += 0.041318007;
                }
              }
            }
          } else {
            if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.62101882696)) {
              result[1] += -0.09551321;
            } else {
              result[1] += 0.009598239;
            }
          }
        } else {
          if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025440869853)) {
            result[1] += -0.09630069;
          } else {
            result[1] += -0.0070810886;
          }
        }
      }
    }
  } else {
    if ( (data[78].missing != -1) && (data[78].fvalue < (float)3.4584906101)) {
      if ( (data[47].missing != -1) && (data[47].fvalue < (float)-0.0052432520315)) {
        if ( (data[52].missing != -1) && (data[52].fvalue < (float)0.10056277364)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.62009978294)) {
            if ( (data[40].missing != -1) && (data[40].fvalue < (float)3.3901019096)) {
              if ( (data[21].missing != -1) && (data[21].fvalue < (float)-0.4460863471)) {
                result[1] += -0.072476126;
              } else {
                result[1] += 0.014913064;
              }
            } else {
              result[1] += 0.09523544;
            }
          } else {
            if ( (data[71].missing != -1) && (data[71].fvalue < (float)-0.46705591679)) {
              if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31386581063)) {
                if ( (data[32].missing != -1) && (data[32].fvalue < (float)2.7153120041)) {
                  result[1] += 0.09063843;
                } else {
                  result[1] += 0.03160177;
                }
              } else {
                result[1] += -0.06567516;
              }
            } else {
              if ( (data[45].missing != -1) && (data[45].fvalue < (float)0.0045417477377)) {
                if ( (data[83].missing != -1) && (data[83].fvalue < (float)1)) {
                  result[1] += 0.10279591;
                } else {
                  if ( (data[54].missing != -1) && (data[54].fvalue < (float)-0.039086114615)) {
                    if ( (data[32].missing != -1) && (data[32].fvalue < (float)2.5321929455)) {
                      if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.052001450211)) {
                        result[1] += 0.081556916;
                      } else {
                        result[1] += 0.0048061423;
                      }
                    } else {
                      result[1] += 0.10047659;
                    }
                  } else {
                    if ( (data[37].missing != -1) && (data[37].fvalue < (float)0.92555040121)) {
                      result[1] += -0.09089851;
                    } else {
                      result[1] += -0;
                    }
                  }
                }
              } else {
                result[1] += 0.025703413;
              }
            }
          }
        } else {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.58649593592)) {
            if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31298440695)) {
              if ( (data[90].missing != -1) && (data[90].fvalue < (float)1)) {
                result[1] += 0.08561306;
              } else {
                result[1] += 0.012671654;
              }
            } else {
              result[1] += -0;
            }
          } else {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.0699566603)) {
              if ( (data[61].missing != -1) && (data[61].fvalue < (float)-0.16615319252)) {
                if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.038386307657)) {
                  if ( (data[32].missing != -1) && (data[32].fvalue < (float)2.623752594)) {
                    result[1] += 0.0403615;
                  } else {
                    if ( (data[32].missing != -1) && (data[32].fvalue < (float)3.3104484081)) {
                      result[1] += -0.057026394;
                    } else {
                      if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.44117793441)) {
                        result[1] += 0.032957334;
                      } else {
                        result[1] += -0;
                      }
                    }
                  }
                } else {
                  result[1] += -0.034020003;
                }
              } else {
                result[1] += -0.054260336;
              }
            } else {
              result[1] += 0.099400625;
            }
          }
        }
      } else {
        if ( (data[78].missing != -1) && (data[78].fvalue < (float)-0.4874599874)) {
          if ( (data[83].missing != -1) && (data[83].fvalue < (float)1)) {
            result[1] += -0;
          } else {
            result[1] += -0.0931925;
          }
        } else {
          result[1] += 0.09654854;
        }
      }
    } else {
      result[1] += -0.095141895;
    }
  }
  if ( (data[79].missing != -1) && (data[79].fvalue < (float)6.0763492584)) {
    if ( (data[78].missing != -1) && (data[78].fvalue < (float)3.4584906101)) {
      result[2] += -0.096077114;
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)-0.51474040747)) {
        result[2] += 0.057076246;
      } else {
        result[2] += -0.09482126;
      }
    }
  } else {
    if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.46908029914)) {
      if ( (data[45].missing != -1) && (data[45].fvalue < (float)1.5625997782)) {
        if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60372674465)) {
          result[2] += -0.00032628322;
        } else {
          result[2] += 0.08987908;
        }
      } else {
        result[2] += 0.1060126;
      }
    } else {
      result[2] += -0.091421776;
    }
  }
  if ( (data[27].missing != -1) && (data[27].fvalue < (float)1.0054787397)) {
    result[3] += -0.09616554;
  } else {
    result[3] += 0.102928095;
  }
  if ( (data[89].missing != -1) && (data[89].fvalue < (float)1)) {
    if ( (data[54].missing != -1) && (data[54].fvalue < (float)0.47731381655)) {
      if ( (data[42].missing != -1) && (data[42].fvalue < (float)0.10410173982)) {
        result[4] += -0.09562347;
      } else {
        result[4] += -0.03648889;
      }
    } else {
      result[4] += -0.019902453;
    }
  } else {
    result[4] += 0.102791876;
  }
  if ( (data[92].missing != -1) && (data[92].fvalue < (float)1)) {
    if ( (data[27].missing != -1) && (data[27].fvalue < (float)1.3160247803)) {
      result[5] += -0.095754914;
    } else {
      result[5] += -0;
    }
  } else {
    result[5] += 0.12047643;
  }
  if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31586059928)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.17688424885)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.68544656038)) {
        result[6] += 0.0029868227;
      } else {
        result[6] += 0.062148076;
      }
    } else {
      result[6] += -0.09442235;
    }
  } else {
    result[6] += -0.09596171;
  }
  if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.99998575449)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.59183168411)) {
      result[7] += -0.09126988;
    } else {
      if ( (data[17].missing != -1) && (data[17].fvalue < (float)1.0286098719)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.56495398283)) {
          result[7] += 0.10098741;
        } else {
          result[7] += -0.082127824;
        }
      } else {
        result[7] += -0.08837941;
      }
    }
  } else {
    result[7] += -0.09619552;
  }
  if ( (data[80].missing != -1) && (data[80].fvalue < (float)9.5720357895)) {
    result[8] += -0.09574917;
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.11638908088)) {
      result[8] += 0.022871371;
    } else {
      result[8] += 0.101875;
    }
  }
  if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.5824829936)) {
    if ( (data[84].missing != -1) && (data[84].fvalue < (float)1)) {
      if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.75656324625)) {
        if ( (data[30].missing != -1) && (data[30].fvalue < (float)-1.0593373775)) {
          result[9] += 0.04123284;
        } else {
          if ( (data[53].missing != -1) && (data[53].fvalue < (float)-0.26342350245)) {
            result[9] += -0.09118013;
          } else {
            result[9] += -0.0156146195;
          }
        }
      } else {
        if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31392768025)) {
          result[9] += 0.052793365;
        } else {
          result[9] += -0.042662453;
        }
      }
    } else {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.15619270504)) {
        result[9] += 0.009195665;
      } else {
        result[9] += 0.100453734;
      }
    }
  } else {
    if ( (data[87].missing != -1) && (data[87].fvalue < (float)1)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)0.53283834457)) {
        if ( (data[80].missing != -1) && (data[80].fvalue < (float)9.5720357895)) {
          result[9] += -0.095703565;
        } else {
          result[9] += -0.03380684;
        }
      } else {
        result[9] += -0.005508182;
      }
    } else {
      if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.57948327065)) {
        result[9] += 0.06343011;
      } else {
        result[9] += -0.09326066;
      }
    }
  }
  if ( (data[23].missing != -1) && (data[23].fvalue < (float)10.179190636)) {
    result[10] += -0.095864505;
  } else {
    result[10] += 0.10256351;
  }
  if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.18199364841)) {
    if ( (data[36].missing != -1) && (data[36].fvalue < (float)-0.61669498682)) {
      if ( (data[52].missing != -1) && (data[52].fvalue < (float)0.052392564714)) {
        if ( (data[37].missing != -1) && (data[37].fvalue < (float)-0.055533468723)) {
          result[11] += -0.09139772;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.61980682611)) {
            if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.024578202516)) {
              if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.039184696972)) {
                if ( (data[1].missing != -1) && (data[1].fvalue < (float)1.7314175367)) {
                  if ( (data[81].missing != -1) && (data[81].fvalue < (float)1)) {
                    if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.76508826017)) {
                      if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.77468854189)) {
                        if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.77628856897)) {
                          if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.79868918657)) {
                            result[11] += -0;
                          } else {
                            result[11] += -0.08524294;
                          }
                        } else {
                          result[11] += 0.040066455;
                        }
                      } else {
                        result[11] += -0.07501303;
                      }
                    } else {
                      result[11] += 0.051024675;
                    }
                  } else {
                    result[11] += 0.07067198;
                  }
                } else {
                  result[11] += -0.079103865;
                }
              } else {
                result[11] += -0.08469522;
              }
            } else {
              if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.55644726753)) {
                result[11] += 0.1279382;
              } else {
                result[11] += 0.033019405;
              }
            }
          } else {
            if ( (data[71].missing != -1) && (data[71].fvalue < (float)-0.46705591679)) {
              if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.024322185665)) {
                result[11] += -0.08852165;
              } else {
                if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31386581063)) {
                  result[11] += -0.002545806;
                } else {
                  result[11] += 0.07937853;
                }
              }
            } else {
              result[11] += -0.09384647;
            }
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.55034649372)) {
          if ( (data[86].missing != -1) && (data[86].fvalue < (float)1)) {
            if ( (data[53].missing != -1) && (data[53].fvalue < (float)-0.2361369431)) {
              if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60426217318)) {
                result[11] += -0.0745704;
              } else {
                result[11] += 0.10271466;
              }
            } else {
              result[11] += 0.1278355;
            }
          } else {
            if ( (data[54].missing != -1) && (data[54].fvalue < (float)-0.039086114615)) {
              result[11] += -0.039568022;
            } else {
              if ( (data[32].missing != -1) && (data[32].fvalue < (float)1.9828362465)) {
                if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.76508826017)) {
                  result[11] += -0.031700354;
                } else {
                  if ( (data[53].missing != -1) && (data[53].fvalue < (float)0.14160977304)) {
                    result[11] += 0.045623172;
                  } else {
                    result[11] += -0;
                  }
                }
              } else {
                if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.78908890486)) {
                  result[11] += 0.08831935;
                } else {
                  if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.85705131292)) {
                    if ( (data[32].missing != -1) && (data[32].fvalue < (float)7.430624485)) {
                      if ( (data[61].missing != -1) && (data[61].fvalue < (float)-0.16697607934)) {
                        if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31448435783)) {
                          result[11] += -0;
                        } else {
                          result[11] += -0.07940735;
                        }
                      } else {
                        if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.7842888236)) {
                          result[11] += -0.020277105;
                        } else {
                          if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.77788865566)) {
                            result[11] += 0.089742094;
                          } else {
                            result[11] += -0;
                          }
                        }
                      }
                    } else {
                      result[11] += 0.08652385;
                    }
                  } else {
                    if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.038106448948)) {
                      if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.62006723881)) {
                        result[11] += -0.052363947;
                      } else {
                        if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60421293974)) {
                          result[11] += 0.1266123;
                        } else {
                          if ( (data[32].missing != -1) && (data[32].fvalue < (float)4.4091620445)) {
                            result[11] += -0;
                          } else {
                            result[11] += 0.040756904;
                          }
                        }
                      }
                    } else {
                      result[11] += 0.119150415;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)-0.53552961349)) {
            result[11] += -0.0047466885;
          } else {
            result[11] += -0.07404982;
          }
        }
      }
    } else {
      if ( (data[80].missing != -1) && (data[80].fvalue < (float)-0.37019988894)) {
        if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025407476351)) {
          if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.13603970408)) {
            result[11] += -0.09053427;
          } else {
            result[11] += -0.01390235;
          }
        } else {
          if ( (data[33].missing != -1) && (data[33].fvalue < (float)1.4050359726)) {
            if ( (data[30].missing != -1) && (data[30].fvalue < (float)-1.0593373775)) {
              result[11] += -0.024389263;
            } else {
              if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60394221544)) {
                if ( (data[53].missing != -1) && (data[53].fvalue < (float)-0.023120842874)) {
                  result[11] += 0.10238574;
                } else {
                  result[11] += 0.03225643;
                }
              } else {
                result[11] += 0.016161589;
              }
            }
          } else {
            result[11] += -0.07275564;
          }
        }
      } else {
        if ( (data[25].missing != -1) && (data[25].fvalue < (float)28.495761871)) {
          result[11] += -0.09449075;
        } else {
          result[11] += 0.078486525;
        }
      }
    }
  } else {
    if ( (data[12].missing != -1) && (data[12].fvalue < (float)-0.0058834324591)) {
      if ( (data[32].missing != -1) && (data[32].fvalue < (float)0.92990243435)) {
        if ( (data[37].missing != -1) && (data[37].fvalue < (float)3.6165232658)) {
          result[11] += 0.13598412;
        } else {
          if ( (data[46].missing != -1) && (data[46].fvalue < (float)-0.1675965786)) {
            if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.57856816053)) {
              result[11] += 0.012227114;
            } else {
              result[11] += 0.099893995;
            }
          } else {
            result[11] += -0.06196995;
          }
        }
      } else {
        result[11] += -0.04091381;
      }
    } else {
      if ( (data[78].missing != -1) && (data[78].fvalue < (float)3.4584906101)) {
        result[11] += -0.09615188;
      } else {
        if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025413041934)) {
          result[11] += -0.07356457;
        } else {
          result[11] += 0.1107304;
        }
      }
    }
  }
  if ( (data[77].missing != -1) && (data[77].fvalue < (float)-0.019809605554)) {
    if ( (data[32].missing != -1) && (data[32].fvalue < (float)5.7825541496)) {
      if ( (data[42].missing != -1) && (data[42].fvalue < (float)-0.010392322205)) {
        if ( (data[58].missing != -1) && (data[58].fvalue < (float)-0.57980215549)) {
          result[12] += -0.007141935;
        } else {
          result[12] += -0.09518996;
        }
      } else {
        if ( (data[80].missing != -1) && (data[80].fvalue < (float)-0.10689549893)) {
          result[12] += -0.09392427;
        } else {
          if ( (data[78].missing != -1) && (data[78].fvalue < (float)-0.22594192624)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.62009418011)) {
              result[12] += 0.34442565;
            } else {
              result[12] += 0.10278448;
            }
          } else {
            result[12] += -0.07794124;
          }
        }
      }
    } else {
      if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.4328392446)) {
        result[12] += 0.11932885;
      } else {
        result[12] += -0.08768098;
      }
    }
  } else {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)1.1286532879)) {
      if ( (data[42].missing != -1) && (data[42].fvalue < (float)-0.010366139933)) {
        result[12] += -0.08660508;
      } else {
        result[12] += -0.012294161;
      }
    } else {
      result[12] += 0.12960292;
    }
  }
  if ( (data[84].missing != -1) && (data[84].fvalue < (float)1)) {
    if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025413041934)) {
      if ( (data[58].missing != -1) && (data[58].fvalue < (float)0.11680228263)) {
        if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.80720156431)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.30081537366)) {
            result[0] += -0.083966516;
          } else {
            result[0] += 0.06615356;
          }
        } else {
          if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.45554211736)) {
            if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.76508826017)) {
              result[0] += 0.08348677;
            } else {
              if ( (data[40].missing != -1) && (data[40].fvalue < (float)0.23602712154)) {
                result[0] += -0.019500706;
              } else {
                result[0] += 0.07273876;
              }
            }
          } else {
            if ( (data[42].missing != -1) && (data[42].fvalue < (float)-0.010200172663)) {
              result[0] += 0.10053782;
            } else {
              result[0] += 0.015158079;
            }
          }
        }
      } else {
        if ( (data[43].missing != -1) && (data[43].fvalue < (float)-0.22548060119)) {
          result[0] += -0.07733442;
        } else {
          result[0] += 0.042417232;
        }
      }
    } else {
      if ( (data[22].missing != -1) && (data[22].fvalue < (float)-0.48621508479)) {
        if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.93103021383)) {
          if ( (data[50].missing != -1) && (data[50].fvalue < (float)-0.0028272988275)) {
            result[0] += -0.086729996;
          } else {
            result[0] += 0.019271402;
          }
        } else {
          if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.024123216048)) {
            if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31457713246)) {
              result[0] += -0;
            } else {
              if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59758293629)) {
                result[0] += 0.006141873;
              } else {
                if ( (data[36].missing != -1) && (data[36].fvalue < (float)-0.63763225079)) {
                  result[0] += 0.103224374;
                } else {
                  if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.8958209753)) {
                    result[0] += -0.03281151;
                  } else {
                    result[0] += 0.09326803;
                  }
                }
              }
            }
          } else {
            if ( (data[52].missing != -1) && (data[52].fvalue < (float)0.10056277364)) {
              if ( (data[55].missing != -1) && (data[55].fvalue < (float)-0.1285303086)) {
                if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31457713246)) {
                  result[0] += -0.010850326;
                } else {
                  result[0] += 0.03772668;
                }
              } else {
                if ( (data[33].missing != -1) && (data[33].fvalue < (float)-0.53069013357)) {
                  if ( (data[52].missing != -1) && (data[52].fvalue < (float)0.018169729039)) {
                    result[0] += -0.08994433;
                  } else {
                    result[0] += -0;
                  }
                } else {
                  result[0] += 0.005291012;
                }
              }
            } else {
              if ( (data[53].missing != -1) && (data[53].fvalue < (float)-0.13125431538)) {
                if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62016886473)) {
                  if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.62007510662)) {
                    if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62018430233)) {
                      if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.76508826017)) {
                        if ( (data[54].missing != -1) && (data[54].fvalue < (float)-0.037270721048)) {
                          result[0] += 0.12469912;
                        } else {
                          result[0] += -0;
                        }
                      } else {
                        result[0] += -0;
                      }
                    } else {
                      result[0] += -0.033887766;
                    }
                  } else {
                    result[0] += 0.119583085;
                  }
                } else {
                  if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.62008029222)) {
                    if ( (data[55].missing != -1) && (data[55].fvalue < (float)-0.074920251966)) {
                      result[0] += -0.057178155;
                    } else {
                      if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.62869435549)) {
                        if ( (data[32].missing != -1) && (data[32].fvalue < (float)5.3705363274)) {
                          result[0] += -0.022124503;
                        } else {
                          result[0] += -0;
                        }
                      } else {
                        result[0] += 0.03957624;
                      }
                    }
                  } else {
                    result[0] += 0.06664533;
                  }
                }
              } else {
                if ( (data[43].missing != -1) && (data[43].fvalue < (float)0.89127284288)) {
                  result[0] += -0.015981596;
                } else {
                  if ( (data[74].missing != -1) && (data[74].fvalue < (float)1.0103553534)) {
                    result[0] += 0.057319272;
                  } else {
                    result[0] += -0.011122715;
                  }
                }
              }
            }
          }
        }
      } else {
        if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.43484681845)) {
          result[0] += 0.01690862;
        } else {
          result[0] += -0.093429215;
        }
      }
    }
  } else {
    if ( (data[82].missing != -1) && (data[82].fvalue < (float)1)) {
      if ( (data[28].missing != -1) && (data[28].fvalue < (float)1.3149677515)) {
        if ( (data[81].missing != -1) && (data[81].fvalue < (float)1)) {
          result[0] += -0.09283182;
        } else {
          result[0] += -0.023306265;
        }
      } else {
        result[0] += 0.09537203;
      }
    } else {
      if ( (data[55].missing != -1) && (data[55].fvalue < (float)7.806274516e-05)) {
        if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31586059928)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.6198925972)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.6201390624)) {
              result[0] += 0.01656047;
            } else {
              result[0] += 0.11162533;
            }
          } else {
            result[0] += -0.092644475;
          }
        } else {
          result[0] += -0.0960312;
        }
      } else {
        if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.023906158283)) {
          result[0] += 0.09222754;
        } else {
          if ( (data[79].missing != -1) && (data[79].fvalue < (float)-0.40983131528)) {
            result[0] += -0;
          } else {
            result[0] += -0.11463322;
          }
        }
      }
    }
  }
  if ( (data[54].missing != -1) && (data[54].fvalue < (float)-0.039249159396)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.17688424885)) {
      result[1] += -0.095594436;
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)-0.44659695029)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)1.7314175367)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)2.23818326)) {
            if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.66160225868)) {
              if ( (data[53].missing != -1) && (data[53].fvalue < (float)-0.26881948113)) {
                if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.44918376207)) {
                  result[1] += -0.113243565;
                } else {
                  if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.22036042809)) {
                    result[1] += 0.0104760965;
                  } else {
                    result[1] += -0.078735426;
                  }
                }
              } else {
                result[1] += -0;
              }
            } else {
              if ( (data[34].missing != -1) && (data[34].fvalue < (float)-0.20938225091)) {
                if ( (data[33].missing != -1) && (data[33].fvalue < (float)-0.60387730598)) {
                  if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.17132686079)) {
                    result[1] += -0.056192312;
                  } else {
                    if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.15498234332)) {
                      result[1] += 0.12712368;
                    } else {
                      if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.08081638813)) {
                        result[1] += -0.08763307;
                      } else {
                        if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.12229329348)) {
                          result[1] += 0.058328293;
                        } else {
                          result[1] += 0.011270319;
                        }
                      }
                    }
                  }
                } else {
                  result[1] += 0.11445757;
                }
              } else {
                result[1] += -0.06044775;
              }
            }
          } else {
            result[1] += 0.06967086;
          }
        } else {
          result[1] += -0.09948561;
        }
      } else {
        if ( (data[53].missing != -1) && (data[53].fvalue < (float)-0.26883611083)) {
          result[1] += 0.042637125;
        } else {
          result[1] += -0.09148934;
        }
      }
    }
  } else {
    if ( (data[78].missing != -1) && (data[78].fvalue < (float)3.4584906101)) {
      if ( (data[47].missing != -1) && (data[47].fvalue < (float)-0.0052432520315)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)-0.43788185716)) {
          if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60406643152)) {
            if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.76508826017)) {
              if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.35111662745)) {
                if ( (data[33].missing != -1) && (data[33].fvalue < (float)-0.66063469648)) {
                  if ( (data[44].missing != -1) && (data[44].fvalue < (float)-0.038927663118)) {
                    result[1] += 0.06304258;
                  } else {
                    result[1] += -0.02758941;
                  }
                } else {
                  result[1] += -0.11091295;
                }
              } else {
                if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.63733571768)) {
                  if ( (data[71].missing != -1) && (data[71].fvalue < (float)-0.43733534217)) {
                    result[1] += -0.09038638;
                  } else {
                    result[1] += 0.05011634;
                  }
                } else {
                  if ( (data[53].missing != -1) && (data[53].fvalue < (float)-0.14542908967)) {
                    if ( (data[53].missing != -1) && (data[53].fvalue < (float)-0.26050439477)) {
                      if ( (data[54].missing != -1) && (data[54].fvalue < (float)-0.038957804441)) {
                        result[1] += 0.083430886;
                      } else {
                        if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.18767139316)) {
                          if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.20401591063)) {
                            if ( (data[35].missing != -1) && (data[35].fvalue < (float)0.13370351493)) {
                              result[1] += -0.019906074;
                            } else {
                              result[1] += 0.094718896;
                            }
                          } else {
                            result[1] += 0.08940446;
                          }
                        } else {
                          result[1] += -0.012491675;
                        }
                      }
                    } else {
                      if ( (data[53].missing != -1) && (data[53].fvalue < (float)-0.25589314103)) {
                        result[1] += -0.031745743;
                      } else {
                        result[1] += -0;
                      }
                    }
                  } else {
                    result[1] += 0.10533539;
                  }
                }
              }
            } else {
              if ( (data[27].missing != -1) && (data[27].fvalue < (float)0.1065300256)) {
                result[1] += -0.095958374;
              } else {
                result[1] += -0.0068223462;
              }
            }
          } else {
            if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60342478752)) {
              if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.62869435549)) {
                if ( (data[35].missing != -1) && (data[35].fvalue < (float)0.17355711758)) {
                  result[1] += 0.09974013;
                } else {
                  result[1] += 0.019844104;
                }
              } else {
                result[1] += 0.01958577;
              }
            } else {
              if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.20401591063)) {
                result[1] += -0.037424047;
              } else {
                if ( (data[42].missing != -1) && (data[42].fvalue < (float)-0.010556774214)) {
                  result[1] += 0.073383674;
                } else {
                  result[1] += 0.0066008307;
                }
              }
            }
          }
        } else {
          if ( (data[50].missing != -1) && (data[50].fvalue < (float)0.17703424394)) {
            if ( (data[79].missing != -1) && (data[79].fvalue < (float)6.0763492584)) {
              result[1] += 0.101604715;
            } else {
              if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.74213886261)) {
                result[1] += -0.09636106;
              } else {
                result[1] += 0.100999825;
              }
            }
          } else {
            result[1] += -0;
          }
        }
      } else {
        if ( (data[79].missing != -1) && (data[79].fvalue < (float)-0.40983131528)) {
          if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.20401591063)) {
            result[1] += -0.09388345;
          } else {
            result[1] += -0.008784846;
          }
        } else {
          result[1] += 0.08892705;
        }
      }
    } else {
      result[1] += -0.094805814;
    }
  }
  if ( (data[79].missing != -1) && (data[79].fvalue < (float)6.0763492584)) {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)3.2361967564)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)-0.45095446706)) {
        if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.60602760315)) {
          result[2] += -0.095138066;
        } else {
          result[2] += 0.045037642;
        }
      } else {
        result[2] += -0.096071646;
      }
    } else {
      result[2] += 0.054898992;
    }
  } else {
    if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.46908029914)) {
      if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025413041934)) {
        result[2] += 0.09496282;
      } else {
        result[2] += -0;
      }
    } else {
      result[2] += -0.09048272;
    }
  }
  if ( (data[27].missing != -1) && (data[27].fvalue < (float)1.0054787397)) {
    result[3] += -0.096040525;
  } else {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)0.3592517674)) {
      result[3] += -0.07402703;
    } else {
      result[3] += 0.101710826;
    }
  }
  if ( (data[45].missing != -1) && (data[45].fvalue < (float)0.0045417477377)) {
    result[4] += -0.09538518;
  } else {
    if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.97013407946)) {
      result[4] += 0.10077441;
    } else {
      result[4] += -0.08158854;
    }
  }
  if ( (data[92].missing != -1) && (data[92].fvalue < (float)1)) {
    if ( (data[27].missing != -1) && (data[27].fvalue < (float)1.3160247803)) {
      result[5] += -0.09541639;
    } else {
      result[5] += -0;
    }
  } else {
    result[5] += 0.112707704;
  }
  if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31586059928)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.17688424885)) {
      result[6] += 0.04351592;
    } else {
      result[6] += -0.0939436;
    }
  } else {
    result[6] += -0.0956599;
  }
  if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31586059928)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.61777055264)) {
      result[7] += -0.09042734;
    } else {
      if ( (data[17].missing != -1) && (data[17].fvalue < (float)1.0286098719)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.56495398283)) {
          result[7] += 0.10011561;
        } else {
          result[7] += -0.07907856;
        }
      } else {
        result[7] += -0.086710505;
      }
    }
  } else {
    result[7] += -0.09608168;
  }
  if ( (data[80].missing != -1) && (data[80].fvalue < (float)9.5720357895)) {
    result[8] += -0.09554609;
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.11647147685)) {
      result[8] += 0.02006539;
    } else {
      result[8] += 0.10025206;
    }
  }
  if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.5824829936)) {
    if ( (data[84].missing != -1) && (data[84].fvalue < (float)1)) {
      if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.56359541416)) {
        result[9] += 0.039103776;
      } else {
        if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.0078816348687)) {
          if ( (data[55].missing != -1) && (data[55].fvalue < (float)-0.074920251966)) {
            result[9] += -0.08806256;
          } else {
            result[9] += -0.030623537;
          }
        } else {
          if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31448435783)) {
            result[9] += -0.036310773;
          } else {
            result[9] += 0.012650023;
          }
        }
      }
    } else {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.58649593592)) {
        result[9] += -0;
      } else {
        result[9] += 0.09833477;
      }
    }
  } else {
    if ( (data[87].missing != -1) && (data[87].fvalue < (float)1)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)0.53283834457)) {
        if ( (data[32].missing != -1) && (data[32].fvalue < (float)2.3948538303)) {
          result[9] += -0.09548671;
        } else {
          if ( (data[42].missing != -1) && (data[42].fvalue < (float)-0.01055396162)) {
            result[9] += -0.0835127;
          } else {
            result[9] += -0;
          }
        }
      } else {
        result[9] += -0;
      }
    } else {
      if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.57948327065)) {
        result[9] += 0.05856494;
      } else {
        result[9] += -0.09260258;
      }
    }
  }
  if ( (data[23].missing != -1) && (data[23].fvalue < (float)10.179190636)) {
    result[10] += -0.09568203;
  } else {
    result[10] += 0.10110255;
  }
  if ( (data[42].missing != -1) && (data[42].fvalue < (float)-0.010511550121)) {
    if ( (data[12].missing != -1) && (data[12].fvalue < (float)-0.0058834324591)) {
      if ( (data[52].missing != -1) && (data[52].fvalue < (float)0.052392564714)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.93369174)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.62016272545)) {
            if ( (data[27].missing != -1) && (data[27].fvalue < (float)0.9727897644)) {
              if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59758293629)) {
                result[11] += 0.0077244956;
              } else {
                if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.15498234332)) {
                  result[11] += 0.07334431;
                } else {
                  if ( (data[27].missing != -1) && (data[27].fvalue < (float)0.92375618219)) {
                    result[11] += -0;
                  } else {
                    result[11] += 0.047219813;
                  }
                }
              }
            } else {
              result[11] += -0;
            }
          } else {
            result[11] += -0.052891586;
          }
        } else {
          if ( (data[27].missing != -1) && (data[27].fvalue < (float)0.28631979227)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.61899483204)) {
              if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.041795373)) {
                result[11] += -0.09114107;
              } else {
                if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.2963138819)) {
                  result[11] += -0;
                } else {
                  result[11] += -0.0843697;
                }
              }
            } else {
              if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.024322185665)) {
                result[11] += -0.08806377;
              } else {
                if ( (data[32].missing != -1) && (data[32].fvalue < (float)6.6523690224)) {
                  if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.20401591063)) {
                    result[11] += 0.10385257;
                  } else {
                    result[11] += -0;
                  }
                } else {
                  result[11] += -0;
                }
              }
            }
          } else {
            result[11] += 0.072055385;
          }
        }
      } else {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.58649593592)) {
          if ( (data[86].missing != -1) && (data[86].fvalue < (float)1)) {
            if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.43484681845)) {
              result[11] += 0.090083376;
            } else {
              result[11] += -0;
            }
          } else {
            result[11] += -0.08668749;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.62005215883)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.62007844448)) {
              if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.22036042809)) {
                result[11] += -0;
              } else {
                result[11] += 0.07647089;
              }
            } else {
              if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.23670496047)) {
                result[11] += 0.041089673;
              } else {
                result[11] += -0.020843672;
              }
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.6200761199)) {
              result[11] += 0.0815091;
            } else {
              if ( (data[32].missing != -1) && (data[32].fvalue < (float)2.4406335354)) {
                result[11] += 0.083981164;
              } else {
                result[11] += -0;
              }
            }
          }
        }
      }
    } else {
      if ( (data[55].missing != -1) && (data[55].fvalue < (float)-0.044618733227)) {
        result[11] += -0.095661186;
      } else {
        if ( (data[51].missing != -1) && (data[51].fvalue < (float)0.021581413224)) {
          result[11] += 0.08773548;
        } else {
          if ( (data[77].missing != -1) && (data[77].fvalue < (float)2.5260186195)) {
            result[11] += -0.087529354;
          } else {
            result[11] += -0;
          }
        }
      }
    }
  } else {
    if ( (data[33].missing != -1) && (data[33].fvalue < (float)-0.64719218016)) {
      if ( (data[59].missing != -1) && (data[59].fvalue < (float)-0.46938577294)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62021172047)) {
          result[11] += -0.041396048;
        } else {
          if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.9231749177)) {
            result[11] += -0.0113468915;
          } else {
            if ( (data[68].missing != -1) && (data[68].fvalue < (float)1.1005766392)) {
              if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.53381425142)) {
                if ( (data[43].missing != -1) && (data[43].fvalue < (float)0.14091680944)) {
                  result[11] += 0.058647547;
                } else {
                  result[11] += -0;
                }
              } else {
                result[11] += 0.11199067;
              }
            } else {
              result[11] += -0;
            }
          }
        }
      } else {
        if ( (data[30].missing != -1) && (data[30].fvalue < (float)-1.2213975191)) {
          result[11] += -0;
        } else {
          result[11] += -0.092741966;
        }
      }
    } else {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.52279245853)) {
        if ( (data[45].missing != -1) && (data[45].fvalue < (float)-0.078706607223)) {
          result[11] += -0;
        } else {
          result[11] += -0.08358482;
        }
      } else {
        if ( (data[33].missing != -1) && (data[33].fvalue < (float)1.4050359726)) {
          if ( (data[44].missing != -1) && (data[44].fvalue < (float)-0.019624406472)) {
            if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.28573852777)) {
              if ( (data[84].missing != -1) && (data[84].fvalue < (float)1)) {
                result[11] += 0.10155647;
              } else {
                result[11] += -0;
              }
            } else {
              result[11] += -0;
            }
          } else {
            if ( (data[73].missing != -1) && (data[73].fvalue < (float)1.0606098175)) {
              result[11] += -0.024217106;
            } else {
              if ( (data[35].missing != -1) && (data[35].fvalue < (float)0.87191838026)) {
                result[11] += 0.0039038719;
              } else {
                result[11] += 0.075050406;
              }
            }
          }
        } else {
          result[11] += -0.080169596;
        }
      }
    }
  }
  if ( (data[52].missing != -1) && (data[52].fvalue < (float)0.018169729039)) {
    if ( (data[50].missing != -1) && (data[50].fvalue < (float)0.49784451723)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.57866376638)) {
        result[12] += 0.017427523;
      } else {
        if ( (data[42].missing != -1) && (data[42].fvalue < (float)-0.010392322205)) {
          if ( (data[32].missing != -1) && (data[32].fvalue < (float)5.3705363274)) {
            result[12] += -0.09514031;
          } else {
            result[12] += -0.025884485;
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)-0.45612597466)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.30081537366)) {
              result[12] += -0.030207725;
            } else {
              result[12] += -0.09511225;
            }
          } else {
            result[12] += 0.11726721;
          }
        }
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.83999991417)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)0.06673399359)) {
          result[12] += -0;
        } else {
          result[12] += 0.12721984;
        }
      } else {
        result[12] += -0.08843957;
      }
    }
  } else {
    if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.7954890728)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.62007719278)) {
        result[12] += 0.025623843;
      } else {
        result[12] += 0.20724918;
      }
    } else {
      if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.57948327065)) {
        result[12] += -0.08505646;
      } else {
        result[12] += 0.119045265;
      }
    }
  }
  if ( (data[84].missing != -1) && (data[84].fvalue < (float)1)) {
    if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025413041934)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.53519374132)) {
        if ( (data[37].missing != -1) && (data[37].fvalue < (float)2.8316562176)) {
          if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.77468854189)) {
            result[0] += -0.005394617;
          } else {
            result[0] += -0.08904027;
          }
        } else {
          if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.65628534555)) {
            result[0] += 0.054344848;
          } else {
            result[0] += -0;
          }
        }
      } else {
        if ( (data[58].missing != -1) && (data[58].fvalue < (float)0.11680228263)) {
          if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.80720156431)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.032312329859)) {
              result[0] += -0.057852373;
            } else {
              result[0] += 0.047221467;
            }
          } else {
            if ( (data[42].missing != -1) && (data[42].fvalue < (float)-0.010268117301)) {
              if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.7954890728)) {
                if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.78405153751)) {
                  result[0] += 0.079728164;
                } else {
                  result[0] += -0;
                }
              } else {
                if ( (data[30].missing != -1) && (data[30].fvalue < (float)-1.0089722872)) {
                  result[0] += 0.019755665;
                } else {
                  result[0] += 0.09860903;
                }
              }
            } else {
              result[0] += 0.0035854739;
            }
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)-0.41642415524)) {
            result[0] += -0.08469696;
          } else {
            result[0] += 0.046892203;
          }
        }
      }
    } else {
      if ( (data[37].missing != -1) && (data[37].fvalue < (float)0.8134265542)) {
        if ( (data[48].missing != -1) && (data[48].fvalue < (float)0.39416208863)) {
          if ( (data[33].missing != -1) && (data[33].fvalue < (float)-0.71141767502)) {
            result[0] += -0;
          } else {
            if ( (data[37].missing != -1) && (data[37].fvalue < (float)0.7573646307)) {
              if ( (data[79].missing != -1) && (data[79].fvalue < (float)6.0763492584)) {
                result[0] += -0.09374612;
              } else {
                result[0] += -0.032968044;
              }
            } else {
              result[0] += -0.016162546;
            }
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.74213886261)) {
            result[0] += -0.049228147;
          } else {
            result[0] += 0.07284331;
          }
        }
      } else {
        if ( (data[36].missing != -1) && (data[36].fvalue < (float)-0.68227016926)) {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.2157365084)) {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.34276419878)) {
              if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.62014013529)) {
                if ( (data[68].missing != -1) && (data[68].fvalue < (float)0.97979635)) {
                  result[0] += 0.06421739;
                } else {
                  if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62021076679)) {
                    result[0] += -0.0006782007;
                  } else {
                    result[0] += 0.026362447;
                  }
                }
              } else {
                result[0] += -0.09083521;
              }
            } else {
              if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.69806528091)) {
                if ( (data[32].missing != -1) && (data[32].fvalue < (float)4.7753996849)) {
                  if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.54161769152)) {
                    if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31466990709)) {
                      if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.42764511704)) {
                        result[0] += 0.1166624;
                      } else {
                        result[0] += 0.008811713;
                      }
                    } else {
                      if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31457713246)) {
                        result[0] += -0.076416835;
                      } else {
                        if ( (data[32].missing != -1) && (data[32].fvalue < (float)3.3104484081)) {
                          result[0] += 0.046290558;
                        } else {
                          result[0] += -0.07665735;
                        }
                      }
                    }
                  } else {
                    if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.016932468861)) {
                      if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.49173647165)) {
                        result[0] += 0.11321427;
                      } else {
                        result[0] += -0.074335046;
                      }
                    } else {
                      if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.85384505987)) {
                        result[0] += 0.0015856002;
                      } else {
                        result[0] += 0.14281672;
                      }
                    }
                  }
                } else {
                  result[0] += -0.07027774;
                }
              } else {
                if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.0563672781)) {
                  if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.78268873692)) {
                    result[0] += 0.015944224;
                  } else {
                    result[0] += 0.088312976;
                  }
                } else {
                  result[0] += -0;
                }
              }
            }
          } else {
            result[0] += -0.07119382;
          }
        } else {
          if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.75656324625)) {
            result[0] += 0.094014294;
          } else {
            result[0] += -0;
          }
        }
      }
    }
  } else {
    if ( (data[80].missing != -1) && (data[80].fvalue < (float)-0.43852174282)) {
      if ( (data[33].missing != -1) && (data[33].fvalue < (float)1.2765849829)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)0.3592517674)) {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.5222806931)) {
            result[0] += -0.017823482;
          } else {
            result[0] += -0.08372782;
          }
        } else {
          result[0] += 0.06484619;
        }
      } else {
        result[0] += 0.08784293;
      }
    } else {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)3.7342278957)) {
        if ( (data[47].missing != -1) && (data[47].fvalue < (float)-0.0088933212683)) {
          if ( (data[75].missing != -1) && (data[75].fvalue < (float)0.10010892153)) {
            result[0] += -0.09609686;
          } else {
            result[0] += -0.028952848;
          }
        } else {
          if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025248857215)) {
            result[0] += 0.088811986;
          } else {
            result[0] += -0;
          }
        }
      } else {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.73820483685)) {
          result[0] += -0.060184374;
        } else {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.78405153751)) {
            result[0] += 0.09079581;
          } else {
            result[0] += -0.0121841915;
          }
        }
      }
    }
  }
  if ( (data[53].missing != -1) && (data[53].fvalue < (float)-0.26880708337)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.17688424885)) {
      if ( (data[27].missing != -1) && (data[27].fvalue < (float)0.56417667866)) {
        result[1] += -0.004523236;
      } else {
        result[1] += -0.09582298;
      }
    } else {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.39068439603)) {
        result[1] += 0.060043592;
      } else {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)0.06673399359)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.60102975368)) {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.62796533108)) {
              if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.23670496047)) {
                result[1] += 0.109018564;
              } else {
                result[1] += -0;
              }
            } else {
              if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.83832764626)) {
                if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.56495398283)) {
                  result[1] += -0.11787503;
                } else {
                  result[1] += 0.011379815;
                }
              } else {
                result[1] += 0.06916637;
              }
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)-0.44659695029)) {
              result[1] += -0;
            } else {
              result[1] += -0.08290308;
            }
          }
        } else {
          result[1] += -0.093685746;
        }
      }
    }
  } else {
    if ( (data[78].missing != -1) && (data[78].fvalue < (float)3.4584906101)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)-0.43788185716)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)-0.50166469812)) {
          if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60406643152)) {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.067782856524)) {
              if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.7070043087)) {
                if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.25304949284)) {
                  result[1] += 0.0015071621;
                } else {
                  result[1] += 0.09168253;
                }
              } else {
                if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59758293629)) {
                  result[1] += 0.045291185;
                } else {
                  result[1] += -0.05824434;
                }
              }
            } else {
              if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.62869435549)) {
                if ( (data[32].missing != -1) && (data[32].fvalue < (float)3.3104484081)) {
                  if ( (data[61].missing != -1) && (data[61].fvalue < (float)-0.16766904294)) {
                    if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.60498034954)) {
                      if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.631049335)) {
                        if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.5637139678)) {
                          result[1] += 0.06816223;
                        } else {
                          result[1] += -0;
                        }
                      } else {
                        if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.42360827327)) {
                          result[1] += -0.09979359;
                        } else {
                          result[1] += -0;
                        }
                      }
                    } else {
                      result[1] += 0.07327818;
                    }
                  } else {
                    result[1] += -0.05956698;
                  }
                } else {
                  if ( (data[61].missing != -1) && (data[61].fvalue < (float)-0.16704104841)) {
                    result[1] += 0.08995877;
                  } else {
                    if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60417157412)) {
                      if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.78900486231)) {
                        result[1] += -0;
                      } else {
                        result[1] += -0.0394655;
                      }
                    } else {
                      result[1] += 0.053880267;
                    }
                  }
                }
              } else {
                result[1] += -0.08565726;
              }
            }
          } else {
            if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60321289301)) {
              if ( (data[52].missing != -1) && (data[52].fvalue < (float)0.018169729039)) {
                result[1] += 0.09840844;
              } else {
                if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.25268346071)) {
                  result[1] += 0.094497874;
                } else {
                  if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.61990123987)) {
                    result[1] += 0.058628857;
                  } else {
                    result[1] += -0;
                  }
                }
              }
            } else {
              if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.20401591063)) {
                if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.61469757557)) {
                  result[1] += -0.09384298;
                } else {
                  result[1] += -0;
                }
              } else {
                if ( (data[32].missing != -1) && (data[32].fvalue < (float)2.7153120041)) {
                  if ( (data[46].missing != -1) && (data[46].fvalue < (float)-0.16895784438)) {
                    result[1] += 0.107038334;
                  } else {
                    result[1] += 0.020265637;
                  }
                } else {
                  if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.18767139316)) {
                    result[1] += 0.06827614;
                  } else {
                    result[1] += -0.020645114;
                  }
                }
              }
            }
          }
        } else {
          result[1] += -0.09254971;
        }
      } else {
        if ( (data[56].missing != -1) && (data[56].fvalue < (float)0.68352377415)) {
          if ( (data[50].missing != -1) && (data[50].fvalue < (float)0.17703424394)) {
            if ( (data[79].missing != -1) && (data[79].fvalue < (float)6.0763492584)) {
              result[1] += 0.10050504;
            } else {
              if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.74213886261)) {
                result[1] += -0.0924607;
              } else {
                result[1] += 0.09968632;
              }
            }
          } else {
            if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.86921608448)) {
              result[1] += 0.090123795;
            } else {
              result[1] += -0.00802516;
            }
          }
        } else {
          result[1] += -0.041494064;
        }
      }
    } else {
      result[1] += -0.09445447;
    }
  }
  if ( (data[87].missing != -1) && (data[87].fvalue < (float)1)) {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)3.2361967564)) {
      result[2] += -0.095829315;
    } else {
      result[2] += 0.027664457;
    }
  } else {
    if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.44750031829)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.62011021376)) {
        result[2] += 0.04499258;
      } else {
        result[2] += 0.091453806;
      }
    } else {
      result[2] += -0.083079875;
    }
  }
  if ( (data[27].missing != -1) && (data[27].fvalue < (float)1.0054787397)) {
    result[3] += -0.09592979;
  } else {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)0.3592517674)) {
      result[3] += -0.073075935;
    } else {
      result[3] += 0.100623645;
    }
  }
  if ( (data[89].missing != -1) && (data[89].fvalue < (float)1)) {
    if ( (data[44].missing != -1) && (data[44].fvalue < (float)0.45843374729)) {
      if ( (data[42].missing != -1) && (data[42].fvalue < (float)0.10410173982)) {
        result[4] += -0.095321916;
      } else {
        result[4] += -0.023892209;
      }
    } else {
      result[4] += -0;
    }
  } else {
    result[4] += 0.10023009;
  }
  if ( (data[27].missing != -1) && (data[27].fvalue < (float)1.3160247803)) {
    if ( (data[79].missing != -1) && (data[79].fvalue < (float)6.0763492584)) {
      result[5] += -0.09515921;
    } else {
      if ( (data[28].missing != -1) && (data[28].fvalue < (float)0.21893824637)) {
        result[5] += -0.08924143;
      } else {
        result[5] += 0.03276271;
      }
    }
  } else {
    result[5] += -0;
  }
  if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.99998575449)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.17688424885)) {
      result[6] += 0.04275624;
    } else {
      result[6] += -0.09342119;
    }
  } else {
    result[6] += -0.09547592;
  }
  if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.99998575449)) {
    if ( (data[19].missing != -1) && (data[19].fvalue < (float)0.5904673934)) {
      result[7] += -0.09481699;
    } else {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)-0.53552961349)) {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.15478906035)) {
          result[7] += 0.09862192;
        } else {
          result[7] += -0.07948564;
        }
      } else {
        result[7] += -0.08484992;
      }
    }
  } else {
    result[7] += -0.09598212;
  }
  if ( (data[12].missing != -1) && (data[12].fvalue < (float)3.7342278957)) {
    result[8] += -0.09533926;
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.11638908088)) {
      result[8] += 0.0059630745;
    } else {
      result[8] += 0.09884672;
    }
  }
  if ( (data[4].missing != -1) && (data[4].fvalue < (float)-0.51474040747)) {
    if ( (data[37].missing != -1) && (data[37].fvalue < (float)0.86948847771)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.62796533108)) {
        result[9] += -0.023361385;
      } else {
        if ( (data[84].missing != -1) && (data[84].fvalue < (float)1)) {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.71015536785)) {
            result[9] += -0.027144417;
          } else {
            result[9] += 0.07547479;
          }
        } else {
          result[9] += 0.09810796;
        }
      }
    } else {
      if ( (data[83].missing != -1) && (data[83].fvalue < (float)1)) {
        result[9] += -0.09511919;
      } else {
        if ( (data[86].missing != -1) && (data[86].fvalue < (float)1)) {
          if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59280967712)) {
            result[9] += 0.092053786;
          } else {
            result[9] += -0.012934569;
          }
        } else {
          if ( (data[37].missing != -1) && (data[37].fvalue < (float)1.3740458488)) {
            result[9] += -0.08758005;
          } else {
            result[9] += 0.012127608;
          }
        }
      }
    }
  } else {
    if ( (data[37].missing != -1) && (data[37].fvalue < (float)1.3460149765)) {
      if ( (data[37].missing != -1) && (data[37].fvalue < (float)0.98161232471)) {
        result[9] += -0.095802285;
      } else {
        if ( (data[53].missing != -1) && (data[53].fvalue < (float)-0.26342350245)) {
          result[9] += -0.08538682;
        } else {
          result[9] += -0;
        }
      }
    } else {
      if ( (data[32].missing != -1) && (data[32].fvalue < (float)3.9971444607)) {
        result[9] += 0.07978264;
      } else {
        result[9] += -0.0530444;
      }
    }
  }
  if ( (data[23].missing != -1) && (data[23].fvalue < (float)10.179190636)) {
    result[10] += -0.09550167;
  } else {
    result[10] += 0.09987457;
  }
  if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.18199364841)) {
    if ( (data[80].missing != -1) && (data[80].fvalue < (float)-0.37019988894)) {
      if ( (data[53].missing != -1) && (data[53].fvalue < (float)-0.26658165455)) {
        if ( (data[71].missing != -1) && (data[71].fvalue < (float)-0.46705591679)) {
          if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.67777997255)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.15619270504)) {
              result[11] += -0;
            } else {
              if ( (data[86].missing != -1) && (data[86].fvalue < (float)1)) {
                result[11] += -0.08754522;
              } else {
                result[11] += -0.024270033;
              }
            }
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)-0.50166469812)) {
              if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.77468854189)) {
                if ( (data[35].missing != -1) && (data[35].fvalue < (float)-0.19651202857)) {
                  result[11] += 0.058856495;
                } else {
                  if ( (data[54].missing != -1) && (data[54].fvalue < (float)-0.039249159396)) {
                    result[11] += -0.019621423;
                  } else {
                    result[11] += 0.04852792;
                  }
                }
              } else {
                if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.76508826017)) {
                  if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.15619270504)) {
                    result[11] += -0;
                  } else {
                    result[11] += -0.084722154;
                  }
                } else {
                  result[11] += 0.047259405;
                }
              }
            } else {
              result[11] += -0.08554215;
            }
          }
        } else {
          if ( (data[35].missing != -1) && (data[35].fvalue < (float)-0.29899272323)) {
            result[11] += 0.02302538;
          } else {
            result[11] += -0.089261115;
          }
        }
      } else {
        if ( (data[45].missing != -1) && (data[45].fvalue < (float)-0.10042212158)) {
          if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59523540735)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.62006938457)) {
              if ( (data[53].missing != -1) && (data[53].fvalue < (float)-0.25613036752)) {
                result[11] += -0.070386484;
              } else {
                if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59758293629)) {
                  if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59805238247)) {
                    result[11] += 0.016133549;
                  } else {
                    result[11] += -0.018752497;
                  }
                } else {
                  if ( (data[53].missing != -1) && (data[53].fvalue < (float)-0.2361369431)) {
                    if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59719163179)) {
                      result[11] += -0;
                    } else {
                      result[11] += 0.060402006;
                    }
                  } else {
                    result[11] += 0.09608776;
                  }
                }
              }
            } else {
              if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60417157412)) {
                if ( (data[35].missing != -1) && (data[35].fvalue < (float)0.03643072024)) {
                  if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.9311388731)) {
                    result[11] += 0.09382576;
                  } else {
                    if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.77948868275)) {
                      result[11] += 0.054072432;
                    } else {
                      if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.77148842812)) {
                        result[11] += -0.02944368;
                      } else {
                        result[11] += 0.01695642;
                      }
                    }
                  }
                } else {
                  result[11] += 0.09408742;
                }
              } else {
                if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62011933327)) {
                  result[11] += -0.024082176;
                } else {
                  result[11] += 0.031729348;
                }
              }
            }
          } else {
            result[11] += -0.084058486;
          }
        } else {
          if ( (data[30].missing != -1) && (data[30].fvalue < (float)-1.0593373775)) {
            if ( (data[54].missing != -1) && (data[54].fvalue < (float)-0.030825061724)) {
              result[11] += -0.06815911;
            } else {
              result[11] += 0.02659206;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)-0.47597688437)) {
              if ( (data[54].missing != -1) && (data[54].fvalue < (float)-0.015999278054)) {
                if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.90621083975)) {
                  result[11] += 0.024852144;
                } else {
                  result[11] += 0.09998166;
                }
              } else {
                if ( (data[56].missing != -1) && (data[56].fvalue < (float)1.0723575354)) {
                  if ( (data[43].missing != -1) && (data[43].fvalue < (float)0.14162181318)) {
                    result[11] += 0.0058330838;
                  } else {
                    result[11] += -0.058717966;
                  }
                } else {
                  result[11] += 0.06234642;
                }
              }
            } else {
              if ( (data[80].missing != -1) && (data[80].fvalue < (float)-0.3703558743)) {
                if ( (data[19].missing != -1) && (data[19].fvalue < (float)2.1549119949)) {
                  result[11] += 0.058610547;
                } else {
                  result[11] += -0.038928185;
                }
              } else {
                result[11] += -0.06457505;
              }
            }
          }
        }
      }
    } else {
      if ( (data[25].missing != -1) && (data[25].fvalue < (float)28.495761871)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62021207809)) {
          result[11] += -0;
        } else {
          result[11] += -0.09432994;
        }
      } else {
        result[11] += 0.092785254;
      }
    }
  } else {
    if ( (data[83].missing != -1) && (data[83].fvalue < (float)1)) {
      if ( (data[79].missing != -1) && (data[79].fvalue < (float)2.4661560059)) {
        result[11] += -0.0958132;
      } else {
        result[11] += 0.03219716;
      }
    } else {
      if ( (data[28].missing != -1) && (data[28].fvalue < (float)1.3149677515)) {
        if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.9311388731)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)1.7314175367)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)1.0963844061)) {
              if ( (data[45].missing != -1) && (data[45].fvalue < (float)-0.1000680849)) {
                result[11] += -0;
              } else {
                result[11] += 0.05026507;
              }
            } else {
              result[11] += -0.08680889;
            }
          } else {
            result[11] += 0.08312625;
          }
        } else {
          result[11] += 0.14401892;
        }
      } else {
        result[11] += -0.03761443;
      }
    }
  }
  if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.024974752218)) {
    if ( (data[42].missing != -1) && (data[42].fvalue < (float)-0.010372631252)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.58832603693)) {
        result[12] += -0;
      } else {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)5.0982265472)) {
          result[12] += -0.09504;
        } else {
          result[12] += -0.042154357;
        }
      }
    } else {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)-0.45612597466)) {
        result[12] += -0.09274071;
      } else {
        result[12] += 0.08408983;
      }
    }
  } else {
    if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.68042695522)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)-1.2706193924)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.62646782398)) {
          result[12] += -0.0387688;
        } else {
          result[12] += 0.18851008;
        }
      } else {
        if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59852188826)) {
          result[12] += -0.0070452597;
        } else {
          result[12] += -0.094889484;
        }
      }
    } else {
      if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.35827046633)) {
        if ( (data[78].missing != -1) && (data[78].fvalue < (float)0.014265876263)) {
          result[12] += 0.24285805;
        } else {
          result[12] += 0.037370786;
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62021154165)) {
          result[12] += 0.10959185;
        } else {
          if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59852188826)) {
            result[12] += 0.058374647;
          } else {
            result[12] += -0.085098915;
          }
        }
      }
    }
  }
  if ( (data[83].missing != -1) && (data[83].fvalue < (float)1)) {
    if ( (data[78].missing != -1) && (data[78].fvalue < (float)3.4584906101)) {
      if ( (data[55].missing != -1) && (data[55].fvalue < (float)3.4052605629)) {
        if ( (data[82].missing != -1) && (data[82].fvalue < (float)1)) {
          result[0] += -0.023628524;
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3.2750649452)) {
            result[0] += -0.095877856;
          } else {
            result[0] += -0.0035078372;
          }
        }
      } else {
        result[0] += 0.059188917;
      }
    } else {
      if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.57856816053)) {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)-0.51567870378)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.61899483204)) {
            if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.42360827327)) {
              if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62021207809)) {
                result[0] += 0.039688606;
              } else {
                result[0] += 0.101126954;
              }
            } else {
              if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.15619270504)) {
                result[0] += -0.025097217;
              } else {
                result[0] += 0.014016996;
              }
            }
          } else {
            result[0] += -0.05707239;
          }
        } else {
          if ( (data[47].missing != -1) && (data[47].fvalue < (float)-0.015988279134)) {
            result[0] += 0.0132796345;
          } else {
            result[0] += -0.08908975;
          }
        }
      } else {
        if ( (data[42].missing != -1) && (data[42].fvalue < (float)-0.01054032892)) {
          result[0] += 0.095750436;
        } else {
          if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.33855709434)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.19583681226)) {
              result[0] += 0.088432685;
            } else {
              result[0] += -0;
            }
          } else {
            result[0] += -0.05797633;
          }
        }
      }
    }
  } else {
    if ( (data[55].missing != -1) && (data[55].fvalue < (float)-0.13342361152)) {
      if ( (data[86].missing != -1) && (data[86].fvalue < (float)1)) {
        if ( (data[37].missing != -1) && (data[37].fvalue < (float)8.1575403214)) {
          result[0] += -0.08919136;
        } else {
          result[0] += 0.025939096;
        }
      } else {
        if ( (data[37].missing != -1) && (data[37].fvalue < (float)1.3460149765)) {
          if ( (data[61].missing != -1) && (data[61].fvalue < (float)-0.16680283844)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.17023339868)) {
              result[0] += -0.008332324;
            } else {
              result[0] += 0.08034964;
            }
          } else {
            result[0] += 0.09976662;
          }
        } else {
          if ( (data[61].missing != -1) && (data[61].fvalue < (float)-0.16561180353)) {
            result[0] += 0.0016470798;
          } else {
            result[0] += 0.07665669;
          }
        }
      }
    } else {
      if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.43720659614)) {
        if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.31842756271)) {
          result[0] += -0.085956804;
        } else {
          if ( (data[61].missing != -1) && (data[61].fvalue < (float)-0.16502712667)) {
            if ( (data[55].missing != -1) && (data[55].fvalue < (float)-0.1285303086)) {
              if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.6017807126)) {
                result[0] += 0.067807235;
              } else {
                result[0] += -0.04112068;
              }
            } else {
              if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62007719278)) {
                if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62013375759)) {
                  result[0] += -0.017655218;
                } else {
                  result[0] += 0.0406571;
                }
              } else {
                if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.90621083975)) {
                  if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60392147303)) {
                    result[0] += 0.05554059;
                  } else {
                    result[0] += -0.063606955;
                  }
                } else {
                  if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.73670840263)) {
                    result[0] += -0.14352262;
                  } else {
                    result[0] += -0.022265783;
                  }
                }
              }
            }
          } else {
            result[0] += 0.06718271;
          }
        }
      } else {
        if ( (data[61].missing != -1) && (data[61].fvalue < (float)-0.16675952077)) {
          if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.69918745756)) {
            if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.92445510626)) {
              if ( (data[54].missing != -1) && (data[54].fvalue < (float)0.079855747521)) {
                result[0] += 0.045608804;
              } else {
                result[0] += -0;
              }
            } else {
              if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.23670496047)) {
                result[0] += -0.07641693;
              } else {
                result[0] += 0.032970354;
              }
            }
          } else {
            result[0] += -0.046535917;
          }
        } else {
          if ( (data[36].missing != -1) && (data[36].fvalue < (float)-0.68227016926)) {
            if ( (data[37].missing != -1) && (data[37].fvalue < (float)1.0937361717)) {
              if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31341737509)) {
                result[0] += 0.04399821;
              } else {
                result[0] += -0.038157597;
              }
            } else {
              if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.63551598787)) {
                result[0] += -0;
              } else {
                result[0] += 0.098609135;
              }
            }
          } else {
            if ( (data[42].missing != -1) && (data[42].fvalue < (float)-0.010022087954)) {
              result[0] += 0.09708489;
            } else {
              result[0] += 0.040844113;
            }
          }
        }
      }
    }
  }
  if ( (data[69].missing != -1) && (data[69].fvalue < (float)-0.39860424399)) {
    if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.62648659945)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.51698690653)) {
        if ( (data[37].missing != -1) && (data[37].fvalue < (float)1.0657052994)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)2.23818326)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.61469757557)) {
              if ( (data[14].missing != -1) && (data[14].fvalue < (float)-0.44659695029)) {
                if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.79868918657)) {
                  result[1] += -0.11165006;
                } else {
                  if ( (data[37].missing != -1) && (data[37].fvalue < (float)0.98161232471)) {
                    result[1] += -0.00059101003;
                  } else {
                    result[1] += -0.09300351;
                  }
                }
              } else {
                result[1] += 0.01676534;
              }
            } else {
              if ( (data[32].missing != -1) && (data[32].fvalue < (float)3.9513647556)) {
                result[1] += -0.016388206;
              } else {
                result[1] += 0.0795864;
              }
            }
          } else {
            result[1] += 0.052730132;
          }
        } else {
          if ( (data[37].missing != -1) && (data[37].fvalue < (float)1.0937361717)) {
            result[1] += 0.093946375;
          } else {
            result[1] += 0.033806104;
          }
        }
      } else {
        result[1] += -0.09064779;
      }
    } else {
      if ( (data[27].missing != -1) && (data[27].fvalue < (float)3.7677032948)) {
        result[1] += -0.095535025;
      } else {
        result[1] += 0.06294032;
      }
    }
  } else {
    if ( (data[78].missing != -1) && (data[78].fvalue < (float)3.4584906101)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)-0.43788185716)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)-0.50166469812)) {
          if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60406643152)) {
            if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.76508826017)) {
              if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31466990709)) {
                if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60426217318)) {
                  if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.038373697549)) {
                    result[1] += 0.10734779;
                  } else {
                    if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.03160687536)) {
                      result[1] += -0.071318984;
                    } else {
                      result[1] += 0.028000288;
                    }
                  }
                } else {
                  if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.41649469733)) {
                    result[1] += 0.008880825;
                  } else {
                    result[1] += -0.100672886;
                  }
                }
              } else {
                if ( (data[32].missing != -1) && (data[32].fvalue < (float)2.623752594)) {
                  result[1] += 0.09311423;
                } else {
                  if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31443795562)) {
                    if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.44117793441)) {
                      result[1] += 0.026174646;
                    } else {
                      result[1] += -0.038021468;
                    }
                  } else {
                    if ( (data[61].missing != -1) && (data[61].fvalue < (float)-0.16704104841)) {
                      result[1] += 0.09209215;
                    } else {
                      if ( (data[32].missing != -1) && (data[32].fvalue < (float)5.7825541496)) {
                        if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.20401591063)) {
                          result[1] += -0.09474226;
                        } else {
                          result[1] += 0.048838492;
                        }
                      } else {
                        if ( (data[32].missing != -1) && (data[32].fvalue < (float)5.9198932648)) {
                          result[1] += 0.0899632;
                        } else {
                          result[1] += -0;
                        }
                      }
                    }
                  }
                }
              }
            } else {
              if ( (data[27].missing != -1) && (data[27].fvalue < (float)0.1065300256)) {
                result[1] += -0.09076726;
              } else {
                result[1] += -0;
              }
            }
          } else {
            if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60342478752)) {
              if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.62869435549)) {
                if ( (data[32].missing != -1) && (data[32].fvalue < (float)5.9198932648)) {
                  result[1] += 0.09684107;
                } else {
                  result[1] += 0.016871205;
                }
              } else {
                result[1] += 0.019344276;
              }
            } else {
              if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.9311388731)) {
                result[1] += 0.074826226;
              } else {
                if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.74951910973)) {
                  result[1] += -0.02638896;
                } else {
                  if ( (data[33].missing != -1) && (data[33].fvalue < (float)-0.5635496974)) {
                    result[1] += 0.045695674;
                  } else {
                    result[1] += -0;
                  }
                }
              }
            }
          }
        } else {
          result[1] += -0.091401026;
        }
      } else {
        if ( (data[50].missing != -1) && (data[50].fvalue < (float)0.17703424394)) {
          result[1] += 0.09925136;
        } else {
          if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59500068426)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.39758354425)) {
              result[1] += 0.078693226;
            } else {
              result[1] += -0;
            }
          } else {
            result[1] += -0.03073914;
          }
        }
      }
    } else {
      result[1] += -0.09398325;
    }
  }
  if ( (data[78].missing != -1) && (data[78].fvalue < (float)3.4584906101)) {
    result[2] += -0.095687255;
  } else {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.15619270504)) {
      if ( (data[33].missing != -1) && (data[33].fvalue < (float)0.056300889701)) {
        if ( (data[55].missing != -1) && (data[55].fvalue < (float)1.9582731724)) {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.71015536785)) {
            result[2] += 0.08557548;
          } else {
            result[2] += -0.078413054;
          }
        } else {
          if ( (data[73].missing != -1) && (data[73].fvalue < (float)0.85972267389)) {
            result[2] += 0.19974023;
          } else {
            result[2] += 0.08981715;
          }
        }
      } else {
        result[2] += -0.08799884;
      }
    } else {
      result[2] += -0.09344542;
    }
  }
  if ( (data[27].missing != -1) && (data[27].fvalue < (float)1.0054787397)) {
    result[3] += -0.09582614;
  } else {
    if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025406084955)) {
      result[3] += 0.0996418;
    } else {
      result[3] += 0.016406069;
    }
  }
  if ( (data[45].missing != -1) && (data[45].fvalue < (float)0.0045417477377)) {
    if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.63134372234)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.61983728409)) {
        if ( (data[83].missing != -1) && (data[83].fvalue < (float)1)) {
          result[4] += 0.063892655;
        } else {
          result[4] += -0.08143679;
        }
      } else {
        result[4] += -0.09089512;
      }
    } else {
      result[4] += -0.095882036;
    }
  } else {
    if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.97013407946)) {
      result[4] += 0.09915252;
    } else {
      result[4] += -0.07682751;
    }
  }
  if ( (data[92].missing != -1) && (data[92].fvalue < (float)1)) {
    if ( (data[27].missing != -1) && (data[27].fvalue < (float)1.3160247803)) {
      result[5] += -0.09512495;
    } else {
      result[5] += -0;
    }
  } else {
    result[5] += 0.106217526;
  }
  if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.99998575449)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.17688424885)) {
      result[6] += 0.03889714;
    } else {
      result[6] += -0.092800595;
    }
  } else {
    result[6] += -0.09528325;
  }
  if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31586059928)) {
    if ( (data[19].missing != -1) && (data[19].fvalue < (float)0.5904673934)) {
      result[7] += -0.094038785;
    } else {
      if ( (data[17].missing != -1) && (data[17].fvalue < (float)1.0286098719)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.56495398283)) {
          result[7] += 0.097704746;
        } else {
          result[7] += -0.07759178;
        }
      } else {
        result[7] += -0.082428485;
      }
    }
  } else {
    result[7] += -0.09589081;
  }
  if ( (data[80].missing != -1) && (data[80].fvalue < (float)9.5720357895)) {
    result[8] += -0.09531451;
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.11647147685)) {
      result[8] += 0.00978287;
    } else {
      result[8] += 0.09750325;
    }
  }
  if ( (data[4].missing != -1) && (data[4].fvalue < (float)-0.51474040747)) {
    if ( (data[80].missing != -1) && (data[80].fvalue < (float)-0.43852174282)) {
      if ( (data[86].missing != -1) && (data[86].fvalue < (float)1)) {
        if ( (data[27].missing != -1) && (data[27].fvalue < (float)0.62955474854)) {
          if ( (data[83].missing != -1) && (data[83].fvalue < (float)1)) {
            if ( (data[56].missing != -1) && (data[56].fvalue < (float)-0.16620278358)) {
              result[9] += -0.014488939;
            } else {
              result[9] += 0.05722905;
            }
          } else {
            result[9] += 0.09892185;
          }
        } else {
          result[9] += -0.004490304;
        }
      } else {
        if ( (data[27].missing != -1) && (data[27].fvalue < (float)0.0084628881887)) {
          if ( (data[37].missing != -1) && (data[37].fvalue < (float)0.98161232471)) {
            result[9] += -0.024061259;
          } else {
            result[9] += -0.08383615;
          }
        } else {
          result[9] += 0.029675497;
        }
      }
    } else {
      if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.79868918657)) {
        result[9] += -0;
      } else {
        result[9] += -0.09325585;
      }
    }
  } else {
    if ( (data[37].missing != -1) && (data[37].fvalue < (float)1.3460149765)) {
      if ( (data[37].missing != -1) && (data[37].fvalue < (float)0.98161232471)) {
        result[9] += -0.09545473;
      } else {
        if ( (data[53].missing != -1) && (data[53].fvalue < (float)-0.26342350245)) {
          result[9] += -0.08339927;
        } else {
          result[9] += -0;
        }
      }
    } else {
      if ( (data[55].missing != -1) && (data[55].fvalue < (float)-0.10537573695)) {
        result[9] += 0.060240354;
      } else {
        result[9] += -0.047623303;
      }
    }
  }
  if ( (data[23].missing != -1) && (data[23].fvalue < (float)10.179190636)) {
    result[10] += -0.095509864;
  } else {
    result[10] += 0.09877908;
  }
  if ( (data[84].missing != -1) && (data[84].fvalue < (float)1)) {
    if ( (data[42].missing != -1) && (data[42].fvalue < (float)-0.010511550121)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.27981966734)) {
        if ( (data[55].missing != -1) && (data[55].fvalue < (float)-0.11971406639)) {
          if ( (data[53].missing != -1) && (data[53].fvalue < (float)-0.26839575171)) {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.93369174)) {
              if ( (data[27].missing != -1) && (data[27].fvalue < (float)0.9727897644)) {
                if ( (data[27].missing != -1) && (data[27].fvalue < (float)0.073840983212)) {
                  if ( (data[37].missing != -1) && (data[37].fvalue < (float)1.0096433163)) {
                    result[11] += 0.040609542;
                  } else {
                    result[11] += -0.005702674;
                  }
                } else {
                  result[11] += 0.07208885;
                }
              } else {
                result[11] += -0.020737477;
              }
            } else {
              if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.17023339868)) {
                if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.071803093)) {
                  if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.88865399361)) {
                    result[11] += 0.053680662;
                  } else {
                    result[11] += -0.026033394;
                  }
                } else {
                  result[11] += 0.09756189;
                }
              } else {
                result[11] += -0.0690096;
              }
            }
          } else {
            result[11] += -0.0909494;
          }
        } else {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.28597417474)) {
            result[11] += -0.03467892;
          } else {
            if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.35921764374)) {
              if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.58649593592)) {
                if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.9311388731)) {
                  result[11] += 0.03563127;
                } else {
                  result[11] += -0.07510024;
                }
              } else {
                if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.62010097504)) {
                  if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.74951910973)) {
                    if ( (data[33].missing != -1) && (data[33].fvalue < (float)-0.64121770859)) {
                      result[11] += -0;
                    } else {
                      result[11] += 0.07606922;
                    }
                  } else {
                    if ( (data[61].missing != -1) && (data[61].fvalue < (float)-0.16615319252)) {
                      result[11] += -0.03373039;
                    } else {
                      result[11] += 0.01638023;
                    }
                  }
                } else {
                  if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.6200761199)) {
                    result[11] += 0.07210854;
                  } else {
                    if ( (data[33].missing != -1) && (data[33].fvalue < (float)-0.65167301893)) {
                      result[11] += 0.0827182;
                    } else {
                      if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.0563672781)) {
                        result[11] += -0.008484225;
                      } else {
                        result[11] += 0.007821174;
                      }
                    }
                  }
                }
              }
            } else {
              result[11] += 0.080731206;
            }
          }
        }
      } else {
        if ( (data[53].missing != -1) && (data[53].fvalue < (float)1.6693469286)) {
          if ( (data[45].missing != -1) && (data[45].fvalue < (float)-0.039107099175)) {
            result[11] += -0.094884574;
          } else {
            result[11] += -0.030143404;
          }
        } else {
          result[11] += -0;
        }
      }
    } else {
      if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60428112745)) {
        if ( (data[30].missing != -1) && (data[30].fvalue < (float)-1.0089722872)) {
          result[11] += -0.09319732;
        } else {
          if ( (data[42].missing != -1) && (data[42].fvalue < (float)-0.0097027048469)) {
            result[11] += 0.061235663;
          } else {
            if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.69918745756)) {
              if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.62016248703)) {
                result[11] += 0.03136921;
              } else {
                result[11] += -0.010431452;
              }
            } else {
              result[11] += -0.045330252;
            }
          }
        }
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.52279245853)) {
          if ( (data[59].missing != -1) && (data[59].fvalue < (float)-0.33670479059)) {
            result[11] += 0.007228499;
          } else {
            result[11] += -0.07922377;
          }
        } else {
          if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.28573852777)) {
            if ( (data[79].missing != -1) && (data[79].fvalue < (float)6.0763492584)) {
              result[11] += 0.098477684;
            } else {
              result[11] += 0.0062726843;
            }
          } else {
            result[11] += -0;
          }
        }
      }
    }
  } else {
    if ( (data[82].missing != -1) && (data[82].fvalue < (float)1)) {
      if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.18199364841)) {
        if ( (data[45].missing != -1) && (data[45].fvalue < (float)-0.036273162812)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62021207809)) {
            if ( (data[81].missing != -1) && (data[81].fvalue < (float)1)) {
              result[11] += -0.08662516;
            } else {
              result[11] += 0.0651373;
            }
          } else {
            result[11] += -0.09294098;
          }
        } else {
          result[11] += 0.01938686;
        }
      } else {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.85385841131)) {
          result[11] += -0.0074486467;
        } else {
          if ( (data[45].missing != -1) && (data[45].fvalue < (float)-0.069441303611)) {
            result[11] += 0.11195238;
          } else {
            result[11] += -0;
          }
        }
      }
    } else {
      if ( (data[55].missing != -1) && (data[55].fvalue < (float)7.806274516e-05)) {
        result[11] += -0.09533112;
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.53573900461)) {
          result[11] += 0.07724715;
        } else {
          result[11] += -0.03457946;
        }
      }
    }
  }
  if ( (data[52].missing != -1) && (data[52].fvalue < (float)0.013004858047)) {
    if ( (data[79].missing != -1) && (data[79].fvalue < (float)6.1137475967)) {
      if ( (data[50].missing != -1) && (data[50].fvalue < (float)1.0147342682)) {
        if ( (data[58].missing != -1) && (data[58].fvalue < (float)-0.57980215549)) {
          result[12] += 0.0017261385;
        } else {
          if ( (data[32].missing != -1) && (data[32].fvalue < (float)5.7825541496)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.62009418011)) {
              if ( (data[78].missing != -1) && (data[78].fvalue < (float)-0.43630290031)) {
                result[12] += -0.09238989;
              } else {
                if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.83999991417)) {
                  result[12] += 0.1277064;
                } else {
                  result[12] += -0.09069253;
                }
              }
            } else {
              result[12] += -0.09586464;
            }
          } else {
            result[12] += -0.007854643;
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.83999991417)) {
          result[12] += 0.077364594;
        } else {
          result[12] += -0.07849603;
        }
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.83999991417)) {
        result[12] += 0.099207245;
      } else {
        result[12] += -0.085523896;
      }
    }
  } else {
    if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59852188826)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.62005853653)) {
        result[12] += 0.010207918;
      } else {
        result[12] += 0.19315404;
      }
    } else {
      if ( (data[70].missing != -1) && (data[70].fvalue < (float)0.14345961809)) {
        result[12] += -0.08344503;
      } else {
        result[12] += 0.0568767;
      }
    }
  }
  if ( (data[82].missing != -1) && (data[82].fvalue < (float)1)) {
    if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025307295844)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.53519374132)) {
        if ( (data[37].missing != -1) && (data[37].fvalue < (float)2.8316562176)) {
          if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.18767139316)) {
            result[0] += -0;
          } else {
            result[0] += -0.09069268;
          }
        } else {
          if ( (data[27].missing != -1) && (data[27].fvalue < (float)0.98913425207)) {
            result[0] += 0.056230146;
          } else {
            result[0] += -0;
          }
        }
      } else {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.2629079819)) {
          if ( (data[37].missing != -1) && (data[37].fvalue < (float)1.3460149765)) {
            if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.79868918657)) {
              if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.61771321297)) {
                result[0] += 0.08021169;
              } else {
                result[0] += -0;
              }
            } else {
              result[0] += 0.09449209;
            }
          } else {
            if ( (data[34].missing != -1) && (data[34].fvalue < (float)-0.20845749974)) {
              result[0] += -0.10186688;
            } else {
              result[0] += 0.085451774;
            }
          }
        } else {
          result[0] += -0.12011263;
        }
      }
    } else {
      if ( (data[37].missing != -1) && (data[37].fvalue < (float)0.8134265542)) {
        if ( (data[43].missing != -1) && (data[43].fvalue < (float)-0.25986525416)) {
          result[0] += -0.09211291;
        } else {
          result[0] += 0.009662732;
        }
      } else {
        if ( (data[75].missing != -1) && (data[75].fvalue < (float)0.69846129417)) {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.35428348184)) {
            if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.73308742046)) {
              result[0] += -0.08859513;
            } else {
              if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.30989176035)) {
                result[0] += 0.04304566;
              } else {
                result[0] += -0.015893515;
              }
            }
          } else {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.2629079819)) {
              if ( (data[53].missing != -1) && (data[53].fvalue < (float)-0.2361369431)) {
                if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.0078816348687)) {
                  if ( (data[32].missing != -1) && (data[32].fvalue < (float)2.5321929455)) {
                    if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.79924333096)) {
                      result[0] += 0.0149217835;
                    } else {
                      if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.61550068855)) {
                        result[0] += 0.16153945;
                      } else {
                        result[0] += 0.043817785;
                      }
                    }
                  } else {
                    if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31457713246)) {
                      result[0] += -0.070963986;
                    } else {
                      if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60426217318)) {
                        result[0] += -0;
                      } else {
                        if ( (data[34].missing != -1) && (data[34].fvalue < (float)-0.20964646339)) {
                          result[0] += 0.13757098;
                        } else {
                          if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.54161769152)) {
                            result[0] += -0.04635784;
                          } else {
                            if ( (data[32].missing != -1) && (data[32].fvalue < (float)3.9513647556)) {
                              result[0] += 0.119477496;
                            } else {
                              if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.40275913477)) {
                                if ( (data[55].missing != -1) && (data[55].fvalue < (float)-0.098413728178)) {
                                  result[0] += -0.036081124;
                                } else {
                                  result[0] += 0.023277022;
                                }
                              } else {
                                if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.0563672781)) {
                                  if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.28573852777)) {
                                    result[0] += 0.0028473383;
                                  } else {
                                    result[0] += 0.09223968;
                                  }
                                } else {
                                  result[0] += -0;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                } else {
                  if ( (data[55].missing != -1) && (data[55].fvalue < (float)-0.09935709089)) {
                    result[0] += -0.050997715;
                  } else {
                    result[0] += 0.043201357;
                  }
                }
              } else {
                result[0] += -0.0364618;
              }
            } else {
              result[0] += -0.082074024;
            }
          }
        } else {
          result[0] += 0.1569941;
        }
      }
    }
  } else {
    if ( (data[78].missing != -1) && (data[78].fvalue < (float)3.4584906101)) {
      if ( (data[50].missing != -1) && (data[50].fvalue < (float)0.17703424394)) {
        result[0] += -0.09578459;
      } else {
        result[0] += 0.030718362;
      }
    } else {
      if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025323992595)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.61931306124)) {
          if ( (data[93].missing != -1) && (data[93].fvalue < (float)1)) {
            if ( (data[71].missing != -1) && (data[71].fvalue < (float)-0.16745822132)) {
              if ( (data[42].missing != -1) && (data[42].fvalue < (float)-0.010555909015)) {
                if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.15619270504)) {
                  result[0] += -0;
                } else {
                  result[0] += 0.062908694;
                }
              } else {
                result[0] += 0.09545405;
              }
            } else {
              if ( (data[50].missing != -1) && (data[50].fvalue < (float)0.17703424394)) {
                result[0] += -0.0870471;
              } else {
                result[0] += -0;
              }
            }
          } else {
            if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025413041934)) {
              result[0] += 0.09639832;
            } else {
              result[0] += -0;
            }
          }
        } else {
          result[0] += -0.060593084;
        }
      } else {
        if ( (data[51].missing != -1) && (data[51].fvalue < (float)-0.11487928778)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.15619270504)) {
            result[0] += -0.011425922;
          } else {
            result[0] += 0.037032224;
          }
        } else {
          if ( (data[72].missing != -1) && (data[72].fvalue < (float)-0.13171011209)) {
            result[0] += -0.09474396;
          } else {
            result[0] += -0.020491235;
          }
        }
      }
    }
  }
  if ( (data[69].missing != -1) && (data[69].fvalue < (float)-0.39860424399)) {
    if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.73670840263)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.39068439603)) {
        if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.66160225868)) {
          result[1] += -0.017348804;
        } else {
          result[1] += 0.095714524;
        }
      } else {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)2.23818326)) {
          if ( (data[32].missing != -1) && (data[32].fvalue < (float)2.5779726505)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.57866376638)) {
              result[1] += 0.016022675;
            } else {
              if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025214072317)) {
                result[1] += -0.08695881;
              } else {
                result[1] += -0.004767174;
              }
            }
          } else {
            if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.49173647165)) {
              result[1] += -0;
            } else {
              result[1] += 0.07113905;
            }
          }
        } else {
          if ( (data[78].missing != -1) && (data[78].fvalue < (float)3.4584906101)) {
            if ( (data[80].missing != -1) && (data[80].fvalue < (float)0.84165537357)) {
              result[1] += 0.017618028;
            } else {
              result[1] += 0.091345936;
            }
          } else {
            result[1] += -0.080183424;
          }
        }
      }
    } else {
      if ( (data[27].missing != -1) && (data[27].fvalue < (float)3.7677032948)) {
        result[1] += -0.09544541;
      } else {
        result[1] += 0.051843233;
      }
    }
  } else {
    if ( (data[78].missing != -1) && (data[78].fvalue < (float)3.4584906101)) {
      if ( (data[83].missing != -1) && (data[83].fvalue < (float)1)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.62010931969)) {
          if ( (data[71].missing != -1) && (data[71].fvalue < (float)0.27915772796)) {
            result[1] += -0.06935936;
          } else {
            result[1] += 0.008660653;
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62019306421)) {
            if ( (data[30].missing != -1) && (data[30].fvalue < (float)-1.0261459351)) {
              result[1] += 0.07623828;
            } else {
              result[1] += -0;
            }
          } else {
            if ( (data[79].missing != -1) && (data[79].fvalue < (float)6.0763492584)) {
              result[1] += 0.09904072;
            } else {
              if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.74213886261)) {
                result[1] += -0.08721961;
              } else {
                result[1] += 0.09755815;
              }
            }
          }
        }
      } else {
        if ( (data[48].missing != -1) && (data[48].fvalue < (float)-0.30148512125)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62004947662)) {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.10418377817)) {
              if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.7070043087)) {
                if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.14555417001)) {
                  result[1] += 0.08980442;
                } else {
                  result[1] += 0.0036159558;
                }
              } else {
                result[1] += -0;
              }
            } else {
              if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.15498234332)) {
                if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59750467539)) {
                  if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.54431396723)) {
                    result[1] += -0.062462088;
                  } else {
                    if ( (data[35].missing != -1) && (data[35].fvalue < (float)0.013004039414)) {
                      result[1] += 0.049552467;
                    } else {
                      result[1] += -0.0137063265;
                    }
                  }
                } else {
                  if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.18767139316)) {
                    result[1] += 0.056268703;
                  } else {
                    if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.6755399704)) {
                      result[1] += 0.031171585;
                    } else {
                      result[1] += -0.045246925;
                    }
                  }
                }
              } else {
                result[1] += -0.08246702;
              }
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.61950498819)) {
              if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.6197001338)) {
                if ( (data[32].missing != -1) && (data[32].fvalue < (float)2.5321929455)) {
                  result[1] += 0.004017934;
                } else {
                  if ( (data[34].missing != -1) && (data[34].fvalue < (float)-0.20895290375)) {
                    result[1] += 0.08714771;
                  } else {
                    result[1] += -0;
                  }
                }
              } else {
                result[1] += 0.0968484;
              }
            } else {
              if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.21960693598)) {
                result[1] += 0.044530313;
              } else {
                result[1] += -0.007476226;
              }
            }
          }
        } else {
          result[1] += -0.09150725;
        }
      }
    } else {
      result[1] += -0.093447044;
    }
  }
  if ( (data[79].missing != -1) && (data[79].fvalue < (float)6.0763492584)) {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)3.2361967564)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)-0.51474040747)) {
        if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.60602760315)) {
          result[2] += -0.09416292;
        } else {
          result[2] += 0.041462746;
        }
      } else {
        result[2] += -0.09579212;
      }
    } else {
      result[2] += 0.033020485;
    }
  } else {
    if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.46908029914)) {
      if ( (data[55].missing != -1) && (data[55].fvalue < (float)1.9582731724)) {
        result[2] += 0.031568523;
      } else {
        result[2] += 0.098979466;
      }
    } else {
      result[2] += -0.086600214;
    }
  }
  if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.17688424885)) {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)0.3592517674)) {
      result[3] += -0.08367188;
    } else {
      result[3] += 0.098986804;
    }
  } else {
    result[3] += -0.09573085;
  }
  if ( (data[89].missing != -1) && (data[89].fvalue < (float)1)) {
    if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.99998575449)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62018883228)) {
        if ( (data[78].missing != -1) && (data[78].fvalue < (float)-0.54036176205)) {
          result[4] += -0.07555054;
        } else {
          result[4] += 0.0959969;
        }
      } else {
        result[4] += -0.09019105;
      }
    } else {
      if ( (data[40].missing != -1) && (data[40].fvalue < (float)3.3901019096)) {
        result[4] += -0.09580912;
      } else {
        result[4] += -0.024251321;
      }
    }
  } else {
    result[4] += 0.09840646;
  }
  if ( (data[37].missing != -1) && (data[37].fvalue < (float)3.6165232658)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)2.1672489643)) {
      result[5] += -0.094811335;
    } else {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.17688424885)) {
        result[5] += 0.09999218;
      } else {
        result[5] += -0.089346446;
      }
    }
  } else {
    result[5] += -0;
  }
  if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.99998575449)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.17688424885)) {
      result[6] += 0.03515586;
    } else {
      result[6] += -0.09217272;
    }
  } else {
    result[6] += -0.09507564;
  }
  if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.83832764626)) {
    if ( (data[19].missing != -1) && (data[19].fvalue < (float)0.5904673934)) {
      result[7] += -0.09337651;
    } else {
      if ( (data[17].missing != -1) && (data[17].fvalue < (float)1.0286098719)) {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.15478906035)) {
          result[7] += 0.095877804;
        } else {
          result[7] += -0.07422371;
        }
      } else {
        result[7] += -0.08001642;
      }
    }
  } else {
    result[7] += -0.095808;
  }
  if ( (data[80].missing != -1) && (data[80].fvalue < (float)9.5720357895)) {
    result[8] += -0.09511353;
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.11638908088)) {
      result[8] += 0.0020876518;
    } else {
      result[8] += 0.09635763;
    }
  }
  if ( (data[4].missing != -1) && (data[4].fvalue < (float)-0.51474040747)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.62796533108)) {
      if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.64668506384)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.93369174)) {
          if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.6194216013)) {
            result[9] += -0;
          } else {
            result[9] += -0.08533273;
          }
        } else {
          result[9] += -0.09475109;
        }
      } else {
        result[9] += 0.10079333;
      }
    } else {
      if ( (data[27].missing != -1) && (data[27].fvalue < (float)0.62955474854)) {
        if ( (data[86].missing != -1) && (data[86].fvalue < (float)1)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)-0.0058834324591)) {
            result[9] += 0.09877735;
          } else {
            result[9] += 0.03728745;
          }
        } else {
          result[9] += -0.005865063;
        }
      } else {
        result[9] += -0.0544393;
      }
    }
  } else {
    if ( (data[37].missing != -1) && (data[37].fvalue < (float)1.3460149765)) {
      if ( (data[52].missing != -1) && (data[52].fvalue < (float)0.10056277364)) {
        result[9] += -0.094780356;
      } else {
        if ( (data[37].missing != -1) && (data[37].fvalue < (float)0.98161232471)) {
          result[9] += -0.074047655;
        } else {
          result[9] += -0;
        }
      }
    } else {
      if ( (data[33].missing != -1) && (data[33].fvalue < (float)-0.60387730598)) {
        result[9] += 0.070976995;
      } else {
        result[9] += -0.080468245;
      }
    }
  }
  if ( (data[23].missing != -1) && (data[23].fvalue < (float)10.179190636)) {
    result[10] += -0.095351;
  } else {
    result[10] += 0.097856045;
  }
  if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.18199364841)) {
    if ( (data[80].missing != -1) && (data[80].fvalue < (float)-0.37019988894)) {
      if ( (data[36].missing != -1) && (data[36].fvalue < (float)-0.61669498682)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.61996525526)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)1.7314175367)) {
            if ( (data[36].missing != -1) && (data[36].fvalue < (float)-0.68227016926)) {
              if ( (data[14].missing != -1) && (data[14].fvalue < (float)-0.44659695029)) {
                if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.15619270504)) {
                  if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31510287523)) {
                    result[11] += 0.10118245;
                  } else {
                    if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.43720659614)) {
                      if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59734815359)) {
                        if ( (data[35].missing != -1) && (data[35].fvalue < (float)-0.057024430484)) {
                          if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.77948868275)) {
                            result[11] += 0.014369418;
                          } else {
                            result[11] += -0.07411891;
                          }
                        } else {
                          if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.7842888236)) {
                            if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59852188826)) {
                              result[11] += 0.013906636;
                            } else {
                              result[11] += -0.0001179872;
                            }
                          } else {
                            result[11] += 0.058959305;
                          }
                        }
                      } else {
                        if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.55644726753)) {
                          result[11] += 0.085671395;
                        } else {
                          result[11] += 0.006756583;
                        }
                      }
                    } else {
                      if ( (data[35].missing != -1) && (data[35].fvalue < (float)0.17355711758)) {
                        if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.74951910973)) {
                          if ( (data[61].missing != -1) && (data[61].fvalue < (float)-0.16766904294)) {
                            if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60426801443)) {
                              result[11] += -0.009585867;
                            } else {
                              result[11] += 0.0075985286;
                            }
                          } else {
                            result[11] += 0.045583624;
                          }
                        } else {
                          result[11] += -0.057382952;
                        }
                      } else {
                        result[11] += 0.026709486;
                      }
                    }
                  }
                } else {
                  if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.73308742046)) {
                    if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59750467539)) {
                      if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.77788865566)) {
                        result[11] += -0.030691778;
                      } else {
                        result[11] += 0.026829546;
                      }
                    } else {
                      result[11] += -0.08445871;
                    }
                  } else {
                    if ( (data[74].missing != -1) && (data[74].fvalue < (float)1.0098451376)) {
                      result[11] += 0.03116083;
                    } else {
                      result[11] += -0;
                    }
                  }
                }
              } else {
                result[11] += 0.09102835;
              }
            } else {
              result[11] += -0.078683175;
            }
          } else {
            result[11] += -0.08004872;
          }
        } else {
          if ( (data[71].missing != -1) && (data[71].fvalue < (float)-0.46705591679)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.60121154785)) {
              if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.40275913477)) {
                if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59750467539)) {
                  result[11] += 0.03363772;
                } else {
                  result[11] += -0.05994468;
                }
              } else {
                if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31324729323)) {
                  result[11] += 0.089382716;
                } else {
                  result[11] += -0;
                }
              }
            } else {
              result[11] += -0.088668756;
            }
          } else {
            result[11] += -0.08312882;
          }
        }
      } else {
        if ( (data[42].missing != -1) && (data[42].fvalue < (float)-0.01054682117)) {
          result[11] += -0.073604554;
        } else {
          if ( (data[30].missing != -1) && (data[30].fvalue < (float)-1.0593373775)) {
            result[11] += -0.03613916;
          } else {
            if ( (data[31].missing != -1) && (data[31].fvalue < (float)0.18281649053)) {
              result[11] += 0.096464925;
            } else {
              result[11] += 0.011608906;
            }
          }
        }
      }
    } else {
      if ( (data[78].missing != -1) && (data[78].fvalue < (float)3.5391829014)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62021207809)) {
          result[11] += -0.004332064;
        } else {
          result[11] += -0.0933688;
        }
      } else {
        result[11] += 0.07002815;
      }
    }
  } else {
    if ( (data[12].missing != -1) && (data[12].fvalue < (float)-0.0058834324591)) {
      if ( (data[42].missing != -1) && (data[42].fvalue < (float)-0.0097027048469)) {
        if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.57856816053)) {
          result[11] += 0.002198647;
        } else {
          if ( (data[28].missing != -1) && (data[28].fvalue < (float)0.21893824637)) {
            result[11] += 0.12600133;
          } else {
            result[11] += 0.0041482053;
          }
        }
      } else {
        result[11] += -0.028114827;
      }
    } else {
      if ( (data[78].missing != -1) && (data[78].fvalue < (float)3.4584906101)) {
        result[11] += -0.09573506;
      } else {
        result[11] += 0.02058214;
      }
    }
  }
  if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025232160464)) {
    if ( (data[79].missing != -1) && (data[79].fvalue < (float)6.1137475967)) {
      if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59867841005)) {
        if ( (data[80].missing != -1) && (data[80].fvalue < (float)-0.10689549893)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.57866376638)) {
            result[12] += -0.009783938;
          } else {
            result[12] += -0.09138274;
          }
        } else {
          result[12] += 0.021095518;
        }
      } else {
        result[12] += -0.09561245;
      }
    } else {
      if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60422873497)) {
        result[12] += 0.009483419;
      } else {
        result[12] += -0.07623455;
      }
    }
  } else {
    if ( (data[80].missing != -1) && (data[80].fvalue < (float)-0.10689549893)) {
      if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.79708915949)) {
        if ( (data[32].missing != -1) && (data[32].fvalue < (float)3.8140254021)) {
          result[12] += -0.01181149;
        } else {
          result[12] += 0.13710074;
        }
      } else {
        if ( (data[69].missing != -1) && (data[69].fvalue < (float)0.74646949768)) {
          result[12] += -0.09346862;
        } else {
          result[12] += 0.05853338;
        }
      }
    } else {
      if ( (data[78].missing != -1) && (data[78].fvalue < (float)-0.22594192624)) {
        if ( (data[42].missing != -1) && (data[42].fvalue < (float)-0.0095211574808)) {
          result[12] += 0.08644323;
        } else {
          result[12] += 0.21738015;
        }
      } else {
        if ( (data[48].missing != -1) && (data[48].fvalue < (float)0.26382514834)) {
          result[12] += -0.08369799;
        } else {
          result[12] += -0;
        }
      }
    }
  }
  if ( (data[84].missing != -1) && (data[84].fvalue < (float)1)) {
    if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.35921764374)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.39068439603)) {
        if ( (data[37].missing != -1) && (data[37].fvalue < (float)2.8316562176)) {
          if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.66160225868)) {
            result[0] += -0;
          } else {
            result[0] += -0.093468495;
          }
        } else {
          if ( (data[30].missing != -1) && (data[30].fvalue < (float)0.053351785988)) {
            if ( (data[37].missing != -1) && (data[37].fvalue < (float)3.0559039116)) {
              result[0] += 0.037935533;
            } else {
              result[0] += -0.016074715;
            }
          } else {
            result[0] += 0.0795455;
          }
        }
      } else {
        if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.78908890486)) {
          if ( (data[37].missing != -1) && (data[37].fvalue < (float)0.56114780903)) {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.0274538994)) {
              result[0] += 0.0497518;
            } else {
              result[0] += -0;
            }
          } else {
            result[0] += -0.09025854;
          }
        } else {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.2629079819)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.15619270504)) {
              if ( (data[36].missing != -1) && (data[36].fvalue < (float)-0.68227016926)) {
                if ( (data[61].missing != -1) && (data[61].fvalue < (float)-0.16838365793)) {
                  result[0] += -0.16510354;
                } else {
                  if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.60498034954)) {
                    if ( (data[35].missing != -1) && (data[35].fvalue < (float)-0.28191259503)) {
                      result[0] += 0.010544739;
                    } else {
                      result[0] += 0.097047046;
                    }
                  } else {
                    if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31457713246)) {
                      result[0] += -0.071218014;
                    } else {
                      if ( (data[34].missing != -1) && (data[34].fvalue < (float)-0.20964646339)) {
                        result[0] += 0.0732644;
                      } else {
                        if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60419660807)) {
                          result[0] += 0.05160587;
                        } else {
                          if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.61703902483)) {
                            if ( (data[35].missing != -1) && (data[35].fvalue < (float)0.19620749354)) {
                              if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31372666359)) {
                                if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.82802081108)) {
                                  result[0] += -0.029329993;
                                } else {
                                  result[0] += -0;
                                }
                              } else {
                                result[0] += -0.088092715;
                              }
                            } else {
                              if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.44117793441)) {
                                result[0] += 0.026485126;
                              } else {
                                result[0] += -0;
                              }
                            }
                          } else {
                            if ( (data[34].missing != -1) && (data[34].fvalue < (float)-0.20938225091)) {
                              result[0] += -0;
                            } else {
                              result[0] += 0.08925626;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              } else {
                if ( (data[37].missing != -1) && (data[37].fvalue < (float)1.3460149765)) {
                  if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.17023339868)) {
                    result[0] += 0.095106035;
                  } else {
                    result[0] += 0.041568127;
                  }
                } else {
                  if ( (data[42].missing != -1) && (data[42].fvalue < (float)-0.010554177687)) {
                    result[0] += 0.08065288;
                  } else {
                    result[0] += -0.027321978;
                  }
                }
              }
            } else {
              if ( (data[80].missing != -1) && (data[80].fvalue < (float)-0.28877517581)) {
                if ( (data[42].missing != -1) && (data[42].fvalue < (float)-0.010551148094)) {
                  result[0] += 0.09833711;
                } else {
                  result[0] += 0.023443976;
                }
              } else {
                result[0] += -0.020672852;
              }
            }
          } else {
            result[0] += -0.08190372;
          }
        }
      }
    } else {
      if ( (data[58].missing != -1) && (data[58].fvalue < (float)0.11680228263)) {
        if ( (data[42].missing != -1) && (data[42].fvalue < (float)-0.010551148094)) {
          if ( (data[50].missing != -1) && (data[50].fvalue < (float)-0.021496159956)) {
            if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.82930922508)) {
              result[0] += -0.03554551;
            } else {
              result[0] += 0.035275348;
            }
          } else {
            result[0] += 0.097266205;
          }
        } else {
          if ( (data[22].missing != -1) && (data[22].fvalue < (float)-0.48621508479)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.030890792608)) {
              result[0] += 0.06713941;
            } else {
              if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.69918745756)) {
                if ( (data[43].missing != -1) && (data[43].fvalue < (float)0.14091680944)) {
                  result[0] += -0.00019687755;
                } else {
                  if ( (data[54].missing != -1) && (data[54].fvalue < (float)0.079855747521)) {
                    result[0] += 0.05708731;
                  } else {
                    result[0] += -0;
                  }
                }
              } else {
                result[0] += -0.06557729;
              }
            }
          } else {
            if ( (data[70].missing != -1) && (data[70].fvalue < (float)0.085055470467)) {
              result[0] += -0.09016332;
            } else {
              result[0] += -0.0057920376;
            }
          }
        }
      } else {
        result[0] += -0.090073176;
      }
    }
  } else {
    if ( (data[80].missing != -1) && (data[80].fvalue < (float)-0.43852174282)) {
      if ( (data[28].missing != -1) && (data[28].fvalue < (float)1.3149677515)) {
        if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.63217777014)) {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.62646782398)) {
            result[0] += 0.15644637;
          } else {
            result[0] += -0.07146709;
          }
        } else {
          if ( (data[37].missing != -1) && (data[37].fvalue < (float)1.3179839849)) {
            result[0] += -0.09128781;
          } else {
            result[0] += -0;
          }
        }
      } else {
        if ( (data[45].missing != -1) && (data[45].fvalue < (float)-0.079142577946)) {
          result[0] += 0.008807264;
        } else {
          result[0] += 0.090856515;
        }
      }
    } else {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.9851242304)) {
        if ( (data[50].missing != -1) && (data[50].fvalue < (float)0.17703424394)) {
          result[0] += -0.09580276;
        } else {
          result[0] += 0.030253045;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.61931306124)) {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.73820483685)) {
            result[0] += -0.017115908;
          } else {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.78405153751)) {
              result[0] += 0.09072938;
            } else {
              result[0] += -0;
            }
          }
        } else {
          result[0] += -0.090766676;
        }
      }
    }
  }
  if ( (data[69].missing != -1) && (data[69].fvalue < (float)-0.39860424399)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.17688424885)) {
      result[1] += -0.094182126;
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.5871013999)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.62796533108)) {
          if ( (data[61].missing != -1) && (data[61].fvalue < (float)-0.16697607934)) {
            if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.76508826017)) {
              if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.7485768795)) {
                result[1] += 0.07825709;
              } else {
                if ( (data[1].missing != -1) && (data[1].fvalue < (float)0.06673399359)) {
                  if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31564411521)) {
                    result[1] += 0.114404865;
                  } else {
                    if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.082774102688)) {
                      result[1] += 0.012131951;
                    } else {
                      result[1] += -0.0016417614;
                    }
                  }
                } else {
                  result[1] += -0.10201;
                }
              }
            } else {
              result[1] += -0;
            }
          } else {
            result[1] += -0.06295562;
          }
        } else {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)0.06673399359)) {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.79971778393)) {
              result[1] += -0.05069799;
            } else {
              if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31556677818)) {
                result[1] += 0.08253225;
              } else {
                result[1] += -0;
              }
            }
          } else {
            result[1] += -0.09534524;
          }
        }
      } else {
        result[1] += -0.0906589;
      }
    }
  } else {
    if ( (data[78].missing != -1) && (data[78].fvalue < (float)3.4584906101)) {
      if ( (data[83].missing != -1) && (data[83].fvalue < (float)1)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.62010931969)) {
          if ( (data[42].missing != -1) && (data[42].fvalue < (float)0.033783238381)) {
            result[1] += -0.05183635;
          } else {
            result[1] += 0.007536995;
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62019306421)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.39758354425)) {
              result[1] += 0.09005896;
            } else {
              result[1] += -0;
            }
          } else {
            if ( (data[79].missing != -1) && (data[79].fvalue < (float)6.0763492584)) {
              result[1] += 0.098367915;
            } else {
              if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.83999991417)) {
                result[1] += -0.08547846;
              } else {
                result[1] += 0.09663275;
              }
            }
          }
        }
      } else {
        if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.62869435549)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62006515265)) {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.10418377817)) {
              if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.62957751751)) {
                result[1] += 0.004998792;
              } else {
                result[1] += 0.09489618;
              }
            } else {
              if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59750467539)) {
                if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.77788865566)) {
                  if ( (data[32].missing != -1) && (data[32].fvalue < (float)3.4477875233)) {
                    result[1] += 0.04222649;
                  } else {
                    result[1] += -0;
                  }
                } else {
                  result[1] += -0.1410041;
                }
              } else {
                if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.85705131292)) {
                  result[1] += 0.064828254;
                } else {
                  result[1] += -0;
                }
              }
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.61899483204)) {
              if ( (data[32].missing != -1) && (data[32].fvalue < (float)2.5321929455)) {
                result[1] += 0.01818454;
              } else {
                if ( (data[32].missing != -1) && (data[32].fvalue < (float)5.9198932648)) {
                  result[1] += 0.094406486;
                } else {
                  result[1] += 0.012649053;
                }
              }
            } else {
              result[1] += -0;
            }
          }
        } else {
          if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.9311388731)) {
            if ( (data[37].missing != -1) && (data[37].fvalue < (float)8.0734472275)) {
              if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.62383723259)) {
                result[1] += 0.06306116;
              } else {
                result[1] += -0.06706242;
              }
            } else {
              result[1] += 0.07680299;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.61979103088)) {
              result[1] += -0.09808416;
            } else {
              result[1] += -0;
            }
          }
        }
      }
    } else {
      result[1] += -0.09288632;
    }
  }
  if ( (data[87].missing != -1) && (data[87].fvalue < (float)1)) {
    if ( (data[42].missing != -1) && (data[42].fvalue < (float)0.40617159009)) {
      result[2] += -0.09545889;
    } else {
      result[2] += 0.0089384215;
    }
  } else {
    if ( (data[59].missing != -1) && (data[59].fvalue < (float)-0.40304526687)) {
      if ( (data[79].missing != -1) && (data[79].fvalue < (float)6.0763492584)) {
        result[2] += 0.023798764;
      } else {
        result[2] += 0.09032137;
      }
    } else {
      result[2] += -0.08831654;
    }
  }
  if ( (data[27].missing != -1) && (data[27].fvalue < (float)1.0054787397)) {
    result[3] += -0.09562188;
  } else {
    result[3] += 0.09817566;
  }
  if ( (data[89].missing != -1) && (data[89].fvalue < (float)1)) {
    if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.63134372234)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.14083126187)) {
        result[4] += 0.0118564;
      } else {
        if ( (data[80].missing != -1) && (data[80].fvalue < (float)1.8474531174)) {
          result[4] += -0.08072017;
        } else {
          result[4] += -0.008227275;
        }
      }
    } else {
      if ( (data[50].missing != -1) && (data[50].fvalue < (float)0.10984566063)) {
        result[4] += -0.0957204;
      } else {
        result[4] += -0.045464523;
      }
    }
  } else {
    result[4] += 0.0976654;
  }
  if ( (data[79].missing != -1) && (data[79].fvalue < (float)6.0763492584)) {
    if ( (data[86].missing != -1) && (data[86].fvalue < (float)1)) {
      result[5] += -0.09543104;
    } else {
      if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59280967712)) {
        result[5] += -0.08236072;
      } else {
        result[5] += 0.048936512;
      }
    }
  } else {
    if ( (data[28].missing != -1) && (data[28].fvalue < (float)0.21893824637)) {
      result[5] += -0.08451549;
    } else {
      result[5] += 0.036823414;
    }
  }
  if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.99998575449)) {
    if ( (data[22].missing != -1) && (data[22].fvalue < (float)-0.55805647373)) {
      if ( (data[78].missing != -1) && (data[78].fvalue < (float)-0.54036176205)) {
        result[6] += -0.076533265;
      } else {
        result[6] += 0.074533015;
      }
    } else {
      result[6] += -0.0911752;
    }
  } else {
    result[6] += -0.09484726;
  }
  if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.99998575449)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.52890723944)) {
      result[7] += -0.07806822;
    } else {
      if ( (data[17].missing != -1) && (data[17].fvalue < (float)1.0286098719)) {
        result[7] += 0.085449666;
      } else {
        result[7] += -0.07685133;
      }
    }
  } else {
    result[7] += -0.09572756;
  }
  if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.99998575449)) {
    if ( (data[78].missing != -1) && (data[78].fvalue < (float)3.4584906101)) {
      result[8] += -0.081437424;
    } else {
      result[8] += 0.09218985;
    }
  } else {
    result[8] += -0.0957304;
  }
  if ( (data[14].missing != -1) && (data[14].fvalue < (float)-0.45095446706)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.62796533108)) {
      if ( (data[27].missing != -1) && (data[27].fvalue < (float)1.0872013569)) {
        if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.53487700224)) {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.93369174)) {
            result[9] += -0;
          } else {
            result[9] += -0.08164301;
          }
        } else {
          result[9] += -0.09024457;
        }
      } else {
        result[9] += 0.04685378;
      }
    } else {
      if ( (data[27].missing != -1) && (data[27].fvalue < (float)0.62955474854)) {
        if ( (data[86].missing != -1) && (data[86].fvalue < (float)1)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.5824829936)) {
            result[9] += 0.09790871;
          } else {
            result[9] += 0.03097174;
          }
        } else {
          result[9] += -0.003413259;
        }
      } else {
        result[9] += -0.048670508;
      }
    }
  } else {
    if ( (data[37].missing != -1) && (data[37].fvalue < (float)0.98161232471)) {
      result[9] += -0.09540627;
    } else {
      if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.86629867554)) {
        result[9] += 0.044849988;
      } else {
        if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.0078816348687)) {
          result[9] += -0.08146624;
        } else {
          result[9] += -0;
        }
      }
    }
  }
  if ( (data[23].missing != -1) && (data[23].fvalue < (float)10.179190636)) {
    result[10] += -0.094887026;
  } else {
    result[10] += 0.09696597;
  }
  if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.18199364841)) {
    if ( (data[30].missing != -1) && (data[30].fvalue < (float)-1.0593373775)) {
      if ( (data[37].missing != -1) && (data[37].fvalue < (float)-0.055533468723)) {
        if ( (data[79].missing != -1) && (data[79].fvalue < (float)2.4900910854)) {
          if ( (data[70].missing != -1) && (data[70].fvalue < (float)-0.13084815443)) {
            result[11] += -0.0900358;
          } else {
            if ( (data[49].missing != -1) && (data[49].fvalue < (float)-0.037738319486)) {
              result[11] += 0.034747437;
            } else {
              result[11] += -0.08962919;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.6404749155)) {
            result[11] += -0.030636605;
          } else {
            result[11] += 0.015989903;
          }
        }
      } else {
        result[11] += 0.02120707;
      }
    } else {
      if ( (data[42].missing != -1) && (data[42].fvalue < (float)-0.010523018427)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.5824829936)) {
          if ( (data[54].missing != -1) && (data[54].fvalue < (float)-0.039114736021)) {
            if ( (data[55].missing != -1) && (data[55].fvalue < (float)-0.13024370372)) {
              if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.80237007141)) {
                if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.81487703323)) {
                  if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.22036042809)) {
                    result[11] += -0.040194392;
                  } else {
                    result[11] += 0.018961042;
                  }
                } else {
                  result[11] += -0.059786648;
                }
              } else {
                if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31466990709)) {
                  result[11] += 0.1111421;
                } else {
                  if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31386581063)) {
                    if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.7070043087)) {
                      result[11] += -0.050206225;
                    } else {
                      result[11] += 0.0074687316;
                    }
                  } else {
                    result[11] += 0.0473499;
                  }
                }
              }
            } else {
              result[11] += -0.07944002;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.62006938457)) {
              if ( (data[71].missing != -1) && (data[71].fvalue < (float)-0.43543016911)) {
                result[11] += -0.044366464;
              } else {
                if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.22036042809)) {
                  result[11] += -0;
                } else {
                  result[11] += 0.039371867;
                }
              }
            } else {
              if ( (data[32].missing != -1) && (data[32].fvalue < (float)2.4864132404)) {
                result[11] += 0.09108101;
              } else {
                if ( (data[32].missing != -1) && (data[32].fvalue < (float)4.0429239273)) {
                  if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.62002831697)) {
                    result[11] += 0.0005003485;
                  } else {
                    result[11] += -0.062853;
                  }
                } else {
                  if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.30208304524)) {
                    result[11] += -0;
                  } else {
                    if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.23670496047)) {
                      result[11] += 0.08697697;
                    } else {
                      if ( (data[32].missing != -1) && (data[32].fvalue < (float)4.82117939)) {
                        result[11] += -0;
                      } else {
                        result[11] += 0.040386677;
                      }
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( (data[42].missing != -1) && (data[42].fvalue < (float)-0.01054682117)) {
            result[11] += -0.09184581;
          } else {
            result[11] += 0.016678855;
          }
        }
      } else {
        if ( (data[55].missing != -1) && (data[55].fvalue < (float)-0.12713503838)) {
          result[11] += -0.056758884;
        } else {
          if ( (data[79].missing != -1) && (data[79].fvalue < (float)2.4661560059)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.016017412767)) {
              if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.30208304524)) {
                result[11] += 0.09625335;
              } else {
                result[11] += 0.041866377;
              }
            } else {
              if ( (data[56].missing != -1) && (data[56].fvalue < (float)1.0723575354)) {
                if ( (data[27].missing != -1) && (data[27].fvalue < (float)0.33535334468)) {
                  result[11] += -0.011260429;
                } else {
                  result[11] += 0.0008182887;
                }
              } else {
                if ( (data[75].missing != -1) && (data[75].fvalue < (float)0.061311610043)) {
                  result[11] += -0;
                } else {
                  result[11] += 0.08234947;
                }
              }
            }
          } else {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.9851242304)) {
              result[11] += 0.071156584;
            } else {
              if ( (data[33].missing != -1) && (data[33].fvalue < (float)1.2765849829)) {
                result[11] += -0.08148059;
              } else {
                result[11] += -0;
              }
            }
          }
        }
      }
    }
  } else {
    if ( (data[83].missing != -1) && (data[83].fvalue < (float)1)) {
      if ( (data[79].missing != -1) && (data[79].fvalue < (float)2.4661560059)) {
        result[11] += -0.09550141;
      } else {
        result[11] += 0.017422201;
      }
    } else {
      if ( (data[42].missing != -1) && (data[42].fvalue < (float)-0.0097027048469)) {
        if ( (data[42].missing != -1) && (data[42].fvalue < (float)-0.010511550121)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62021207809)) {
            result[11] += 0.04518201;
          } else {
            result[11] += -0;
          }
        } else {
          result[11] += 0.08977416;
        }
      } else {
        result[11] += -0.017898047;
      }
    }
  }
  if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.024974752218)) {
    if ( (data[42].missing != -1) && (data[42].fvalue < (float)-0.010372631252)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.57866376638)) {
        result[12] += -0;
      } else {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)5.0982265472)) {
          result[12] += -0.09487028;
        } else {
          result[12] += -0.009716556;
        }
      }
    } else {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)-0.45612597466)) {
        result[12] += -0.09005266;
      } else {
        result[12] += 0.07762512;
      }
    }
  } else {
    if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.75868809223)) {
      if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59852188826)) {
        if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.67777997255)) {
          if ( (data[69].missing != -1) && (data[69].fvalue < (float)-0.32158207893)) {
            result[12] += -0.012323117;
          } else {
            result[12] += 0.0076523507;
          }
        } else {
          result[12] += 0.12988088;
        }
      } else {
        result[12] += -0.09410107;
      }
    } else {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.60239255428)) {
        result[12] += -0.009063388;
      } else {
        result[12] += 0.13534696;
      }
    }
  }
  if ( (data[84].missing != -1) && (data[84].fvalue < (float)1)) {
    if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.35921764374)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.39068439603)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62021207809)) {
          if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31392768025)) {
            if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.54449033737)) {
              if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.86629867554)) {
                result[0] += -0;
              } else {
                result[0] += -0.07933437;
              }
            } else {
              result[0] += -0;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)-2.2499501705)) {
              result[0] += 0.013479876;
            } else {
              result[0] += 0.09687273;
            }
          }
        } else {
          result[0] += -0.08848736;
        }
      } else {
        if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.93103021383)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.62012410164)) {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)2.4384834766)) {
              if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.60239255428)) {
                result[0] += 0.0388245;
              } else {
                result[0] += -0.028145386;
              }
            } else {
              result[0] += 0.06737802;
            }
          } else {
            if ( (data[45].missing != -1) && (data[45].fvalue < (float)-0.10049580783)) {
              result[0] += -0.0007641531;
            } else {
              result[0] += -0.08731509;
            }
          }
        } else {
          if ( (data[55].missing != -1) && (data[55].fvalue < (float)-0.1346296072)) {
            result[0] += 0.09338032;
          } else {
            if ( (data[36].missing != -1) && (data[36].fvalue < (float)-0.68227016926)) {
              if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.37441200018)) {
                if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.93506932259)) {
                  if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.81572955847)) {
                    if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.87554603815)) {
                      if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.45299565792)) {
                        result[0] += -0;
                      } else {
                        if ( (data[55].missing != -1) && (data[55].fvalue < (float)-0.074920251966)) {
                          result[0] += 0.10538114;
                        } else {
                          result[0] += 0.0113813775;
                        }
                      }
                    } else {
                      if ( (data[32].missing != -1) && (data[32].fvalue < (float)5.6452145576)) {
                        if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.74951910973)) {
                          if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.0065003009513)) {
                            result[0] += 0.035545975;
                          } else {
                            if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62014764547)) {
                              result[0] += -0;
                            } else {
                              result[0] += -0.040459312;
                            }
                          }
                        } else {
                          result[0] += -0.09017286;
                        }
                      } else {
                        result[0] += 0.045149643;
                      }
                    }
                  } else {
                    if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62008774281)) {
                      result[0] += 0.11973923;
                    } else {
                      result[0] += 0.02958593;
                    }
                  }
                } else {
                  if ( (data[55].missing != -1) && (data[55].fvalue < (float)-0.13260184228)) {
                    result[0] += 0.02125064;
                  } else {
                    if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62014222145)) {
                      result[0] += 0.001674225;
                    } else {
                      result[0] += -0.07634517;
                    }
                  }
                }
              } else {
                result[0] += 0.07757178;
              }
            } else {
              if ( (data[42].missing != -1) && (data[42].fvalue < (float)-0.010553312488)) {
                result[0] += 0.09664306;
              } else {
                if ( (data[32].missing != -1) && (data[32].fvalue < (float)2.4406335354)) {
                  if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.61998814344)) {
                    result[0] += 0.051057592;
                  } else {
                    result[0] += -0.07644508;
                  }
                } else {
                  result[0] += 0.09368004;
                }
              }
            }
          }
        }
      }
    } else {
      if ( (data[59].missing != -1) && (data[59].fvalue < (float)-0.071342766285)) {
        if ( (data[42].missing != -1) && (data[42].fvalue < (float)-0.010551148094)) {
          if ( (data[56].missing != -1) && (data[56].fvalue < (float)-0.14045402408)) {
            result[0] += -0;
          } else {
            result[0] += 0.094403364;
          }
        } else {
          if ( (data[22].missing != -1) && (data[22].fvalue < (float)-0.48621508479)) {
            if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.69918745756)) {
              if ( (data[74].missing != -1) && (data[74].fvalue < (float)1.0098451376)) {
                result[0] += 0.0057599247;
              } else {
                result[0] += 0.04175155;
              }
            } else {
              result[0] += -0.03596716;
            }
          } else {
            result[0] += -0.081795625;
          }
        }
      } else {
        if ( (data[78].missing != -1) && (data[78].fvalue < (float)3.4584906101)) {
          result[0] += -0.09279511;
        } else {
          result[0] += -0.010045028;
        }
      }
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)-0.04483281076)) {
      if ( (data[38].missing != -1) && (data[38].fvalue < (float)1.2268880606)) {
        if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.63217777014)) {
          if ( (data[78].missing != -1) && (data[78].fvalue < (float)3.4584906101)) {
            result[0] += -0;
          } else {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.15619270504)) {
              result[0] += -0;
            } else {
              result[0] += 0.09422703;
            }
          }
        } else {
          result[0] += -0.08574879;
        }
      } else {
        result[0] += 0.082641035;
      }
    } else {
      if ( (data[50].missing != -1) && (data[50].fvalue < (float)0.17703424394)) {
        if ( (data[78].missing != -1) && (data[78].fvalue < (float)3.4584906101)) {
          result[0] += -0.09553259;
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.61899483204)) {
            result[0] += 0.022320826;
          } else {
            result[0] += -0.06723535;
          }
        }
      } else {
        result[0] += 0.019717833;
      }
    }
  }
  if ( (data[70].missing != -1) && (data[70].fvalue < (float)-0.14455036819)) {
    if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.62648659945)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.41503149271)) {
        if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.77148842812)) {
          if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59758293629)) {
            if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.79868918657)) {
              if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.082774102688)) {
                result[1] += -0.032181643;
              } else {
                result[1] += 0.04727748;
              }
            } else {
              result[1] += 0.07823461;
            }
          } else {
            result[1] += -0.07983739;
          }
        } else {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.39068439603)) {
            result[1] += 0.08884157;
          } else {
            result[1] += -0.027806165;
          }
        }
      } else {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)2.23818326)) {
          if ( (data[84].missing != -1) && (data[84].fvalue < (float)1)) {
            if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.62869435549)) {
              result[1] += -0;
            } else {
              result[1] += -0.07690707;
            }
          } else {
            result[1] += -0.10331584;
          }
        } else {
          result[1] += 0.007466042;
        }
      }
    } else {
      if ( (data[40].missing != -1) && (data[40].fvalue < (float)1.3075006008)) {
        result[1] += -0.09500394;
      } else {
        result[1] += 0.042439934;
      }
    }
  } else {
    if ( (data[78].missing != -1) && (data[78].fvalue < (float)3.4584906101)) {
      if ( (data[83].missing != -1) && (data[83].fvalue < (float)1)) {
        if ( (data[55].missing != -1) && (data[55].fvalue < (float)0.25409945846)) {
          if ( (data[50].missing != -1) && (data[50].fvalue < (float)0.17703424394)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)-1.2706193924)) {
              result[1] += 0.029236827;
            } else {
              result[1] += 0.09738386;
            }
          } else {
            result[1] += 0.008546351;
          }
        } else {
          if ( (data[44].missing != -1) && (data[44].fvalue < (float)-0.0059440932237)) {
            result[1] += 0.038556077;
          } else {
            result[1] += -0.020460803;
          }
        }
      } else {
        if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.62869435549)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62005752325)) {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.14555417001)) {
              if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.6201223731)) {
                result[1] += 0.07308455;
              } else {
                result[1] += 0.0027324937;
              }
            } else {
              if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59750467539)) {
                if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.77788865566)) {
                  if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.82802081108)) {
                    result[1] += 0.038676586;
                  } else {
                    if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62014013529)) {
                      result[1] += -0.034247626;
                    } else {
                      result[1] += -0;
                    }
                  }
                } else {
                  result[1] += -0.12120086;
                }
              } else {
                if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.71015536785)) {
                  result[1] += 0.05106436;
                } else {
                  result[1] += -0;
                }
              }
            }
          } else {
            if ( (data[55].missing != -1) && (data[55].fvalue < (float)-0.1285303086)) {
              result[1] += -0;
            } else {
              if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59852188826)) {
                result[1] += 0.008913396;
              } else {
                result[1] += 0.09255047;
              }
            }
          }
        } else {
          if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.9311388731)) {
            if ( (data[40].missing != -1) && (data[40].fvalue < (float)1.3720816374)) {
              if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.62560343742)) {
                result[1] += 0.059477955;
              } else {
                result[1] += -0.06606154;
              }
            } else {
              result[1] += 0.07520285;
            }
          } else {
            if ( (data[71].missing != -1) && (data[71].fvalue < (float)-0.46566262841)) {
              result[1] += -0.028570466;
            } else {
              result[1] += -0.09722349;
            }
          }
        }
      }
    } else {
      result[1] += -0.09226365;
    }
  }
  if ( (data[78].missing != -1) && (data[78].fvalue < (float)3.4584906101)) {
    result[2] += -0.09529473;
  } else {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.15619270504)) {
      if ( (data[33].missing != -1) && (data[33].fvalue < (float)0.056300889701)) {
        if ( (data[55].missing != -1) && (data[55].fvalue < (float)1.9582731724)) {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.71015536785)) {
            result[2] += 0.08012949;
          } else {
            result[2] += -0.07506093;
          }
        } else {
          if ( (data[42].missing != -1) && (data[42].fvalue < (float)-0.010200172663)) {
            result[2] += 0.07330571;
          } else {
            result[2] += 0.16677037;
          }
        }
      } else {
        result[2] += -0.08288268;
      }
    } else {
      result[2] += -0.091443166;
    }
  }
  if ( (data[27].missing != -1) && (data[27].fvalue < (float)1.0054787397)) {
    result[3] += -0.095517695;
  } else {
    result[3] += 0.09761773;
  }
  if ( (data[89].missing != -1) && (data[89].fvalue < (float)1)) {
    if ( (data[40].missing != -1) && (data[40].fvalue < (float)3.3901019096)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)0.27389571071)) {
        result[4] += -0.09565878;
      } else {
        if ( (data[80].missing != -1) && (data[80].fvalue < (float)-0.43852174282)) {
          result[4] += -0.087645374;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.11638908088)) {
            result[4] += 0.054164875;
          } else {
            result[4] += -0.07101886;
          }
        }
      }
    } else {
      result[4] += -0;
    }
  } else {
    result[4] += 0.09700702;
  }
  if ( (data[37].missing != -1) && (data[37].fvalue < (float)3.6165232658)) {
    if ( (data[79].missing != -1) && (data[79].fvalue < (float)6.0763492584)) {
      result[5] += -0.094280586;
    } else {
      if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.22042307258)) {
        result[5] += -0.082825154;
      } else {
        result[5] += 0.0388222;
      }
    }
  } else {
    result[5] += -0;
  }
  if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.99998575449)) {
    if ( (data[22].missing != -1) && (data[22].fvalue < (float)-0.55805647373)) {
      if ( (data[17].missing != -1) && (data[17].fvalue < (float)1.0286098719)) {
        result[6] += -0.078005105;
      } else {
        result[6] += 0.09791402;
      }
    } else {
      result[6] += -0.08980476;
    }
  } else {
    result[6] += -0.094944924;
  }
  if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.99998575449)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.58758682013)) {
      result[7] += -0.08386846;
    } else {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)-0.53552961349)) {
        result[7] += 0.08260969;
      } else {
        result[7] += -0.0737381;
      }
    }
  } else {
    result[7] += -0.095648885;
  }
  if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31586059928)) {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.56495398283)) {
      result[8] += -0.08883012;
    } else {
      result[8] += 0.08897318;
    }
  } else {
    result[8] += -0.09565076;
  }
  if ( (data[4].missing != -1) && (data[4].fvalue < (float)-0.51474040747)) {
    if ( (data[27].missing != -1) && (data[27].fvalue < (float)0.92375618219)) {
      if ( (data[86].missing != -1) && (data[86].fvalue < (float)1)) {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)-0.3027947247)) {
          if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.18767139316)) {
            result[9] += 0.0968074;
          } else {
            result[9] += 0.032385055;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.54876410961)) {
            result[9] += -0.002951666;
          } else {
            result[9] += 0.03257286;
          }
        }
      } else {
        result[9] += -0.014285251;
      }
    } else {
      if ( (data[27].missing != -1) && (data[27].fvalue < (float)1.3160247803)) {
        result[9] += -0.09232423;
      } else {
        result[9] += 0.00861134;
      }
    }
  } else {
    if ( (data[37].missing != -1) && (data[37].fvalue < (float)0.98161232471)) {
      result[9] += -0.094883166;
    } else {
      if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.20401591063)) {
        result[9] += 0.040981807;
      } else {
        if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.0078816348687)) {
          result[9] += -0.07892283;
        } else {
          result[9] += -0;
        }
      }
    }
  }
  if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31586059928)) {
    if ( (data[20].missing != -1) && (data[20].fvalue < (float)-0.53552961349)) {
      result[10] += -0.08892309;
    } else {
      result[10] += 0.09575206;
    }
  } else {
    result[10] += -0.09458747;
  }
  if ( (data[84].missing != -1) && (data[84].fvalue < (float)1)) {
    if ( (data[33].missing != -1) && (data[33].fvalue < (float)1.4050359726)) {
      if ( (data[36].missing != -1) && (data[36].fvalue < (float)-0.61982524395)) {
        if ( (data[36].missing != -1) && (data[36].fvalue < (float)-0.68227016926)) {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.041795373)) {
            if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.68586885929)) {
              result[11] += -0.07408771;
            } else {
              if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.61983430386)) {
                if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31298440695)) {
                  if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.63733571768)) {
                    if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62017846107)) {
                      if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.10234069079)) {
                        result[11] += 0.03480199;
                      } else {
                        result[11] += -0.033884298;
                      }
                    } else {
                      result[11] += 0.08624796;
                    }
                  } else {
                    if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.58649593592)) {
                      if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.73308742046)) {
                        result[11] += -0.08845343;
                      } else {
                        result[11] += -0;
                      }
                    } else {
                      if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.92445510626)) {
                        result[11] += -0.034490105;
                      } else {
                        if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.40275913477)) {
                          result[11] += 0.082564265;
                        } else {
                          if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.85385841131)) {
                            result[11] += 0.013078372;
                          } else {
                            result[11] += -0.010181059;
                          }
                        }
                      }
                    }
                  }
                } else {
                  if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.30989176035)) {
                    if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.085147149861)) {
                      result[11] += 0.11522381;
                    } else {
                      result[11] += 2.3469694e-05;
                    }
                  } else {
                    if ( (data[71].missing != -1) && (data[71].fvalue < (float)0.9274455905)) {
                      result[11] += -0.038962428;
                    } else {
                      result[11] += 0.04866101;
                    }
                  }
                }
              } else {
                if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.45484149456)) {
                  if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.61550068855)) {
                    result[11] += -0;
                  } else {
                    result[11] += 0.05185839;
                  }
                } else {
                  result[11] += -0.07789129;
                }
              }
            }
          } else {
            if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.10594877601)) {
              if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.77948868275)) {
                if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.69806528091)) {
                  result[11] += 0.101813965;
                } else {
                  result[11] += 0.011666445;
                }
              } else {
                if ( (data[32].missing != -1) && (data[32].fvalue < (float)4.9127392769)) {
                  if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31448435783)) {
                    result[11] += 0.008567744;
                  } else {
                    result[11] += -0.05855395;
                  }
                } else {
                  result[11] += 0.0301737;
                }
              }
            } else {
              result[11] += 0.10019792;
            }
          }
        } else {
          result[11] += -0.09044425;
        }
      } else {
        if ( (data[79].missing != -1) && (data[79].fvalue < (float)2.4661560059)) {
          if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.35111662745)) {
            if ( (data[53].missing != -1) && (data[53].fvalue < (float)-0.1984834224)) {
              result[11] += 0.09652491;
            } else {
              result[11] += -0.02214394;
            }
          } else {
            result[11] += -0.055402126;
          }
        } else {
          if ( (data[17].missing != -1) && (data[17].fvalue < (float)1.0286098719)) {
            result[11] += 0.12400305;
          } else {
            if ( (data[36].missing != -1) && (data[36].fvalue < (float)0.34627193213)) {
              result[11] += -0.07438591;
            } else {
              if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.74213886261)) {
                result[11] += 0.047148544;
              } else {
                result[11] += -0.036985848;
              }
            }
          }
        }
      }
    } else {
      result[11] += -0.09335722;
    }
  } else {
    if ( (data[12].missing != -1) && (data[12].fvalue < (float)-0.0058834324591)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.61993962526)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.54112535715)) {
          result[11] += -0.06453835;
        } else {
          if ( (data[56].missing != -1) && (data[56].fvalue < (float)-0.15530490875)) {
            if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59734815359)) {
              result[11] += -0;
            } else {
              result[11] += 0.07789597;
            }
          } else {
            if ( (data[72].missing != -1) && (data[72].fvalue < (float)0.17223262787)) {
              result[11] += -0.021987455;
            } else {
              result[11] += 0.012162119;
            }
          }
        }
      } else {
        result[11] += -0.07616469;
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)1.797724247)) {
        result[11] += -0.09469022;
      } else {
        result[11] += 0.030726887;
      }
    }
  }
  if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.024974752218)) {
    if ( (data[79].missing != -1) && (data[79].fvalue < (float)6.1137475967)) {
      if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.99998575449)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.039243385196)) {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.62911725044)) {
            result[12] += -0.017203568;
          } else {
            result[12] += 0.08010551;
          }
        } else {
          result[12] += -0.08806236;
        }
      } else {
        if ( (data[50].missing != -1) && (data[50].fvalue < (float)1.0147342682)) {
          result[12] += -0.09565506;
        } else {
          result[12] += -0.013649534;
        }
      }
    } else {
      if ( (data[78].missing != -1) && (data[78].fvalue < (float)-0.22594192624)) {
        result[12] += 0.09105231;
      } else {
        result[12] += -0.07824261;
      }
    }
  } else {
    if ( (data[80].missing != -1) && (data[80].fvalue < (float)-0.10689549893)) {
      if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.79708915949)) {
        result[12] += 0.095646694;
      } else {
        if ( (data[69].missing != -1) && (data[69].fvalue < (float)0.74646949768)) {
          result[12] += -0.088044286;
        } else {
          result[12] += 0.04849446;
        }
      }
    } else {
      if ( (data[80].missing != -1) && (data[80].fvalue < (float)0.33438891172)) {
        result[12] += 0.17474751;
      } else {
        result[12] += -0.00069248845;
      }
    }
  }
  if ( (data[82].missing != -1) && (data[82].fvalue < (float)1)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.2629079819)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.36735785007)) {
        if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.54725086689)) {
          result[0] += 0.11814594;
        } else {
          if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.63155788183)) {
            if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.80862355232)) {
              result[0] += -0;
            } else {
              result[0] += -0.091501;
            }
          } else {
            if ( (data[27].missing != -1) && (data[27].fvalue < (float)1.3814028502)) {
              if ( (data[73].missing != -1) && (data[73].fvalue < (float)0.95465761423)) {
                if ( (data[53].missing != -1) && (data[53].fvalue < (float)-0.13125431538)) {
                  result[0] += -0;
                } else {
                  result[0] += -0.030960279;
                }
              } else {
                if ( (data[73].missing != -1) && (data[73].fvalue < (float)1.0611419678)) {
                  result[0] += 0.06334968;
                } else {
                  result[0] += -0.004564141;
                }
              }
            } else {
              result[0] += 0.07897687;
            }
          }
        }
      } else {
        if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.78908890486)) {
          if ( (data[37].missing != -1) && (data[37].fvalue < (float)0.56114780903)) {
            result[0] += 0.01820343;
          } else {
            result[0] += -0.08129325;
          }
        } else {
          if ( (data[37].missing != -1) && (data[37].fvalue < (float)1.3460149765)) {
            if ( (data[55].missing != -1) && (data[55].fvalue < (float)-0.1346296072)) {
              result[0] += 0.0899397;
            } else {
              if ( (data[36].missing != -1) && (data[36].fvalue < (float)-0.68227016926)) {
                if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.15498234332)) {
                  if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.17132686079)) {
                    if ( (data[32].missing != -1) && (data[32].fvalue < (float)2.5321929455)) {
                      result[0] += 0.097689316;
                    } else {
                      if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.81572955847)) {
                        if ( (data[32].missing != -1) && (data[32].fvalue < (float)3.5393471718)) {
                          result[0] += -0.05371876;
                        } else {
                          if ( (data[61].missing != -1) && (data[61].fvalue < (float)-0.16561180353)) {
                            if ( (data[53].missing != -1) && (data[53].fvalue < (float)-0.26792612672)) {
                              result[0] += -0;
                            } else {
                              result[0] += 0.060034193;
                            }
                          } else {
                            result[0] += -0.018043736;
                          }
                        }
                      } else {
                        if ( (data[32].missing != -1) && (data[32].fvalue < (float)5.5536551476)) {
                          if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.23670496047)) {
                            result[0] += 0.00828938;
                          } else {
                            result[0] += 0.0892371;
                          }
                        } else {
                          result[0] += -0;
                        }
                      }
                    }
                  } else {
                    if ( (data[69].missing != -1) && (data[69].fvalue < (float)-0.35898321867)) {
                      result[0] += -0.08830453;
                    } else {
                      result[0] += 0.0007425225;
                    }
                  }
                } else {
                  if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.7679245472)) {
                    result[0] += 0.11113462;
                  } else {
                    if ( (data[32].missing != -1) && (data[32].fvalue < (float)6.14879179)) {
                      result[0] += -0;
                    } else {
                      result[0] += 0.06905629;
                    }
                  }
                }
              } else {
                result[0] += 0.086030655;
              }
            }
          } else {
            if ( (data[34].missing != -1) && (data[34].fvalue < (float)-0.20845749974)) {
              if ( (data[55].missing != -1) && (data[55].fvalue < (float)-0.10499257594)) {
                result[0] += -0.1670524;
              } else {
                result[0] += -0;
              }
            } else {
              result[0] += 0.06278439;
            }
          }
        }
      }
    } else {
      result[0] += -0.11446299;
    }
  } else {
    if ( (data[78].missing != -1) && (data[78].fvalue < (float)3.4584906101)) {
      if ( (data[50].missing != -1) && (data[50].fvalue < (float)0.17703424394)) {
        result[0] += -0.095531866;
      } else {
        result[0] += 0.025452856;
      }
    } else {
      if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.46908029914)) {
        if ( (data[53].missing != -1) && (data[53].fvalue < (float)1.4609540701)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.62009978294)) {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.73520982265)) {
              result[0] += -0.017971447;
            } else {
              if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.78405153751)) {
                result[0] += 0.090251654;
              } else {
                if ( (data[15].missing != -1) && (data[15].fvalue < (float)0.72947192192)) {
                  result[0] += -0;
                } else {
                  result[0] += 0.065660074;
                }
              }
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.54742503166)) {
              result[0] += -0;
            } else {
              result[0] += -0.083357036;
            }
          }
        } else {
          result[0] += -0.10045478;
        }
      } else {
        if ( (data[42].missing != -1) && (data[42].fvalue < (float)-0.01054682117)) {
          if ( (data[21].missing != -1) && (data[21].fvalue < (float)0.46627700329)) {
            result[0] += 0.0938636;
          } else {
            result[0] += 0.020997742;
          }
        } else {
          if ( (data[59].missing != -1) && (data[59].fvalue < (float)-0.35881829262)) {
            result[0] += 0.07055028;
          } else {
            result[0] += -0.057861738;
          }
        }
      }
    }
  }
  if ( (data[69].missing != -1) && (data[69].fvalue < (float)-0.39860424399)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.17688424885)) {
      result[1] += -0.094184004;
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.59183168411)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)1.7314175367)) {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.62796533108)) {
            if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.80237007141)) {
              if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.53519374132)) {
                result[1] += 0.0742646;
              } else {
                if ( (data[1].missing != -1) && (data[1].fvalue < (float)0.06673399359)) {
                  result[1] += 0.08176958;
                } else {
                  result[1] += -0.08067731;
                }
              }
            } else {
              if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.61550068855)) {
                result[1] += -0.044172272;
              } else {
                if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.84780395031)) {
                  result[1] += -0;
                } else {
                  result[1] += 0.030741615;
                }
              }
            }
          } else {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.81572955847)) {
              result[1] += -0.07735711;
            } else {
              if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.80862355232)) {
                result[1] += 0.029246254;
              } else {
                result[1] += -0.0012166301;
              }
            }
          }
        } else {
          result[1] += -0.104674324;
        }
      } else {
        result[1] += -0.086924665;
      }
    }
  } else {
    if ( (data[78].missing != -1) && (data[78].fvalue < (float)3.4584906101)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)-0.43788185716)) {
        if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60406917334)) {
          if ( (data[58].missing != -1) && (data[58].fvalue < (float)-0.55193799734)) {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.067782856524)) {
              if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.7070043087)) {
                if ( (data[37].missing != -1) && (data[37].fvalue < (float)0.98161232471)) {
                  result[1] += 0.01337198;
                } else {
                  result[1] += 0.0784449;
                }
              } else {
                result[1] += -0;
              }
            } else {
              if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.63001906872)) {
                if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.35111662745)) {
                  result[1] += 0.0010007711;
                } else {
                  result[1] += 0.06149593;
                }
              } else {
                if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.62008029222)) {
                  if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60422873497)) {
                    if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.038106448948)) {
                      result[1] += 0.021150548;
                    } else {
                      result[1] += -0.06275724;
                    }
                  } else {
                    result[1] += -0.07806552;
                  }
                } else {
                  if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.20401591063)) {
                    result[1] += -0;
                  } else {
                    result[1] += 0.011938153;
                  }
                }
              }
            }
          } else {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.029193278402)) {
              result[1] += -0.01795373;
            } else {
              result[1] += -0.092163;
            }
          }
        } else {
          if ( (data[55].missing != -1) && (data[55].fvalue < (float)-0.1285303086)) {
            if ( (data[27].missing != -1) && (data[27].fvalue < (float)10.599714279)) {
              if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.71965879202)) {
                result[1] += -0;
              } else {
                result[1] += -0.052708376;
              }
            } else {
              result[1] += 0.0767695;
            }
          } else {
            if ( (data[55].missing != -1) && (data[55].fvalue < (float)-0.12352977693)) {
              if ( (data[35].missing != -1) && (data[35].fvalue < (float)0.17355711758)) {
                result[1] += 0.093208656;
              } else {
                result[1] += 0.034605123;
              }
            } else {
              if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.40275913477)) {
                result[1] += 0.063511394;
              } else {
                result[1] += -0;
              }
            }
          }
        }
      } else {
        if ( (data[50].missing != -1) && (data[50].fvalue < (float)0.17703424394)) {
          if ( (data[79].missing != -1) && (data[79].fvalue < (float)6.0763492584)) {
            result[1] += 0.09722534;
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.74213886261)) {
              result[1] += -0.08465647;
            } else {
              result[1] += 0.09493619;
            }
          }
        } else {
          if ( (data[30].missing != -1) && (data[30].fvalue < (float)-1.0261459351)) {
            result[1] += 0.059001934;
          } else {
            result[1] += -0.041686833;
          }
        }
      }
    } else {
      result[1] += -0.09134095;
    }
  }
  if ( (data[87].missing != -1) && (data[87].fvalue < (float)1)) {
    if ( (data[42].missing != -1) && (data[42].fvalue < (float)0.40617159009)) {
      result[2] += -0.095173165;
    } else {
      result[2] += -0;
    }
  } else {
    if ( (data[59].missing != -1) && (data[59].fvalue < (float)-0.40304526687)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.71015536785)) {
        result[2] += 0.08671024;
      } else {
        if ( (data[73].missing != -1) && (data[73].fvalue < (float)0.79893708229)) {
          result[2] += -0.03061028;
        } else {
          result[2] += 0.074432075;
        }
      }
    } else {
      result[2] += -0.085331775;
    }
  }
  if ( (data[27].missing != -1) && (data[27].fvalue < (float)1.0054787397)) {
    result[3] += -0.095407516;
  } else {
    result[3] += 0.09710414;
  }
  if ( (data[89].missing != -1) && (data[89].fvalue < (float)1)) {
    if ( (data[30].missing != -1) && (data[30].fvalue < (float)-1.2213975191)) {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.0699566603)) {
        result[4] += -0.0881684;
      } else {
        result[4] += 0.040222004;
      }
    } else {
      result[4] += -0.09556889;
    }
  } else {
    result[4] += 0.096403025;
  }
  if ( (data[79].missing != -1) && (data[79].fvalue < (float)6.0763492584)) {
    if ( (data[86].missing != -1) && (data[86].fvalue < (float)1)) {
      result[5] += -0.095131114;
    } else {
      if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59280967712)) {
        if ( (data[54].missing != -1) && (data[54].fvalue < (float)-0.038898557425)) {
          result[5] += -0.08517567;
        } else {
          result[5] += -0.027312132;
        }
      } else {
        result[5] += 0.056930315;
      }
    }
  } else {
    if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.22042307258)) {
      result[5] += -0.08049607;
    } else {
      result[5] += 0.037806258;
    }
  }
  if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.99998575449)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.17688424885)) {
      result[6] += 0.032390427;
    } else {
      result[6] += -0.08954196;
    }
  } else {
    result[6] += -0.09472111;
  }
  if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.99998575449)) {
    if ( (data[19].missing != -1) && (data[19].fvalue < (float)0.5904673934)) {
      result[7] += -0.0937673;
    } else {
      result[7] += 0.06485427;
    }
  } else {
    result[7] += -0.095568776;
  }
  if ( (data[12].missing != -1) && (data[12].fvalue < (float)3.7342278957)) {
    if ( (data[79].missing != -1) && (data[79].fvalue < (float)6.0763492584)) {
      result[8] += -0.095165975;
    } else {
      result[8] += -0.018473467;
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.11647147685)) {
      result[8] += -0;
    } else {
      result[8] += 0.09331756;
    }
  }
  if ( (data[4].missing != -1) && (data[4].fvalue < (float)-0.51474040747)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.62796533108)) {
      if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.64668506384)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.93369174)) {
          if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31460806727)) {
            result[9] += -0;
          } else {
            result[9] += -0.07981914;
          }
        } else {
          result[9] += -0.0937872;
        }
      } else {
        result[9] += 0.1041341;
      }
    } else {
      if ( (data[27].missing != -1) && (data[27].fvalue < (float)0.62955474854)) {
        if ( (data[84].missing != -1) && (data[84].fvalue < (float)1)) {
          if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.56359541416)) {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.71015536785)) {
              result[9] += -0.016109485;
            } else {
              result[9] += 0.09366358;
            }
          } else {
            result[9] += -0.03648065;
          }
        } else {
          result[9] += 0.09180096;
        }
      } else {
        result[9] += -0.036284767;
      }
    }
  } else {
    if ( (data[37].missing != -1) && (data[37].fvalue < (float)0.98161232471)) {
      result[9] += -0.094641656;
    } else {
      if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.90621083975)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.62002694607)) {
          result[9] += -0.016754232;
        } else {
          result[9] += -0.086624846;
        }
      } else {
        if ( (data[32].missing != -1) && (data[32].fvalue < (float)4.7753996849)) {
          result[9] += 0.09035097;
        } else {
          result[9] += -0.07426014;
        }
      }
    }
  }
  if ( (data[23].missing != -1) && (data[23].fvalue < (float)10.179190636)) {
    result[10] += -0.09435691;
  } else {
    result[10] += 0.095418796;
  }
  if ( (data[84].missing != -1) && (data[84].fvalue < (float)1)) {
    if ( (data[42].missing != -1) && (data[42].fvalue < (float)-0.010511550121)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.27981966734)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.041795373)) {
          if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.68586885929)) {
            result[11] += -0.08147992;
          } else {
            if ( (data[86].missing != -1) && (data[86].fvalue < (float)1)) {
              if ( (data[52].missing != -1) && (data[52].fvalue < (float)0.23504699767)) {
                if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.49173647165)) {
                  result[11] += 0.09583125;
                } else {
                  result[11] += 0.024978148;
                }
              } else {
                if ( (data[54].missing != -1) && (data[54].fvalue < (float)-0.037270721048)) {
                  result[11] += -0.061380323;
                } else {
                  result[11] += 0.06654264;
                }
              }
            } else {
              if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.51605558395)) {
                if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.93369174)) {
                  if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.81487703323)) {
                    result[11] += 0.04137879;
                  } else {
                    result[11] += -0.017537327;
                  }
                } else {
                  result[11] += -0.082739785;
                }
              } else {
                if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.83116543293)) {
                  if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.7679245472)) {
                    if ( (data[32].missing != -1) && (data[32].fvalue < (float)5.1416378021)) {
                      if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.22036042809)) {
                        result[11] += 0.05845635;
                      } else {
                        result[11] += -0;
                      }
                    } else {
                      result[11] += -0;
                    }
                  } else {
                    result[11] += 0.1001668;
                  }
                } else {
                  if ( (data[32].missing != -1) && (data[32].fvalue < (float)4.0887041092)) {
                    result[11] += -0.053104207;
                  } else {
                    if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62014013529)) {
                      result[11] += -0;
                    } else {
                      result[11] += 0.017862542;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( (data[32].missing != -1) && (data[32].fvalue < (float)2.5779726505)) {
            result[11] += 0.07934061;
          } else {
            if ( (data[32].missing != -1) && (data[32].fvalue < (float)5.9656729698)) {
              if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.17132686079)) {
                if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62010717392)) {
                  result[11] += -0.059277825;
                } else {
                  result[11] += 0.0059914393;
                }
              } else {
                result[11] += 0.035544798;
              }
            } else {
              if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.62004899979)) {
                result[11] += -0;
              } else {
                result[11] += 0.06849758;
              }
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.6200851202)) {
          result[11] += -0;
        } else {
          result[11] += -0.0933997;
        }
      }
    } else {
      if ( (data[80].missing != -1) && (data[80].fvalue < (float)-0.37019988894)) {
        if ( (data[43].missing != -1) && (data[43].fvalue < (float)-0.13308440149)) {
          if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.28573852777)) {
            if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025312861428)) {
              if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.0903491974)) {
                result[11] += 0.0074695707;
              } else {
                result[11] += 0.075975426;
              }
            } else {
              result[11] += 0.09623298;
            }
          } else {
            result[11] += 0.011617538;
          }
        } else {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.25796613097)) {
            if ( (data[71].missing != -1) && (data[71].fvalue < (float)0.9274455905)) {
              result[11] += -0.065174185;
            } else {
              if ( (data[44].missing != -1) && (data[44].fvalue < (float)0.071945227683)) {
                result[11] += -0;
              } else {
                result[11] += 0.01266492;
              }
            }
          } else {
            result[11] += 0.03563923;
          }
        }
      } else {
        if ( (data[80].missing != -1) && (data[80].fvalue < (float)-0.10689549893)) {
          result[11] += -0.088288546;
        } else {
          result[11] += -0;
        }
      }
    }
  } else {
    if ( (data[80].missing != -1) && (data[80].fvalue < (float)-0.43852174282)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62010204792)) {
        if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025342080742)) {
          if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.18767139316)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.15619270504)) {
              result[11] += -0;
            } else {
              result[11] += -0.08281647;
            }
          } else {
            result[11] += 0.060840663;
          }
        } else {
          if ( (data[55].missing != -1) && (data[55].fvalue < (float)2.9534919262)) {
            result[11] += 0.08747767;
          } else {
            result[11] += -0;
          }
        }
      } else {
        result[11] += -0.08370437;
      }
    } else {
      if ( (data[78].missing != -1) && (data[78].fvalue < (float)3.4584906101)) {
        result[11] += -0.09493801;
      } else {
        result[11] += 0.004879374;
      }
    }
  }
  if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025232160464)) {
    if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.99998575449)) {
      if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025511831045)) {
        result[12] += 0.016982498;
      } else {
        result[12] += -0.08652008;
      }
    } else {
      result[12] += -0.093879335;
    }
  } else {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)1.1286532879)) {
      if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.79708915949)) {
        if ( (data[15].missing != -1) && (data[15].fvalue < (float)0.17268300056)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.62011039257)) {
            result[12] += -0;
          } else {
            result[12] += 0.13417482;
          }
        } else {
          result[12] += -0.07620394;
        }
      } else {
        if ( (data[17].missing != -1) && (data[17].fvalue < (float)1.0286098719)) {
          result[12] += -0.09089305;
        } else {
          if ( (data[36].missing != -1) && (data[36].fvalue < (float)0.069861337543)) {
            result[12] += 0.1196442;
          } else {
            result[12] += -0.08578394;
          }
        }
      }
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)-0.51474040747)) {
        result[12] += -0;
      } else {
        result[12] += 0.14047553;
      }
    }
  }
  if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.18199364841)) {
    if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025407476351)) {
      if ( (data[30].missing != -1) && (data[30].fvalue < (float)-1.1390959024)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.110132128)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.56495398283)) {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.082774102688)) {
              result[0] += -0;
            } else {
              result[0] += -0.0962731;
            }
          } else {
            result[0] += 0.06399249;
          }
        } else {
          result[0] += -0.076766424;
        }
      } else {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.53519374132)) {
          if ( (data[27].missing != -1) && (data[27].fvalue < (float)0.92375618219)) {
            if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.18767139316)) {
              result[0] += -0;
            } else {
              result[0] += -0.07787346;
            }
          } else {
            result[0] += 0.024333894;
          }
        } else {
          if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.62957751751)) {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.041795373)) {
              if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.82425731421)) {
                result[0] += 0.082348876;
              } else {
                result[0] += 0.0018656685;
              }
            } else {
              result[0] += -0.012904916;
            }
          } else {
            if ( (data[28].missing != -1) && (data[28].fvalue < (float)0.21893824637)) {
              result[0] += 0.089159004;
            } else {
              result[0] += 0.0039763157;
            }
          }
        }
      }
    } else {
      if ( (data[79].missing != -1) && (data[79].fvalue < (float)-0.40983131528)) {
        if ( (data[36].missing != -1) && (data[36].fvalue < (float)-0.61669498682)) {
          if ( (data[36].missing != -1) && (data[36].fvalue < (float)-0.68227016926)) {
            if ( (data[58].missing != -1) && (data[58].fvalue < (float)-0.44744732976)) {
              if ( (data[32].missing != -1) && (data[32].fvalue < (float)2.5321929455)) {
                if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.6202095747)) {
                  if ( (data[27].missing != -1) && (data[27].fvalue < (float)0.31900882721)) {
                    result[0] += -0.06416526;
                  } else {
                    result[0] += 0.01967374;
                  }
                } else {
                  if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.93506932259)) {
                    if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.77148842812)) {
                      if ( (data[55].missing != -1) && (data[55].fvalue < (float)-0.12183056772)) {
                        result[0] += -0;
                      } else {
                        result[0] += 0.11191237;
                      }
                    } else {
                      result[0] += 0.0024379783;
                    }
                  } else {
                    result[0] += -0;
                  }
                }
              } else {
                if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31457713246)) {
                  result[0] += -0.09261838;
                } else {
                  if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.28597417474)) {
                    if ( (data[32].missing != -1) && (data[32].fvalue < (float)5.3705363274)) {
                      result[0] += -0.08173665;
                    } else {
                      result[0] += -0;
                    }
                  } else {
                    if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.0563672781)) {
                      if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.69806528091)) {
                        if ( (data[61].missing != -1) && (data[61].fvalue < (float)-0.16667290032)) {
                          if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.39942288399)) {
                            result[0] += -0.011673489;
                          } else {
                            if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.038947977126)) {
                              result[0] += 0.08362535;
                            } else {
                              result[0] += -0;
                            }
                          }
                        } else {
                          result[0] += -0.075918004;
                        }
                      } else {
                        if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.28573852777)) {
                          result[0] += -0;
                        } else {
                          if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60417157412)) {
                            result[0] += 0.032386523;
                          } else {
                            result[0] += 0.110138334;
                          }
                        }
                      }
                    } else {
                      if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.23670496047)) {
                        result[0] += -0.039538115;
                      } else {
                        if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59719163179)) {
                          result[0] += 0.023159906;
                        } else {
                          result[0] += -0.025971469;
                        }
                      }
                    }
                  }
                }
              }
            } else {
              result[0] += -0.077318594;
            }
          } else {
            result[0] += 0.10550816;
          }
        } else {
          if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.8958209753)) {
            result[0] += -0.109228574;
          } else {
            result[0] += 0.042829722;
          }
        }
      } else {
        if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.43870261312)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)-0.36380371451)) {
            result[0] += -0.02171753;
          } else {
            result[0] += 0.021654759;
          }
        } else {
          if ( (data[72].missing != -1) && (data[72].fvalue < (float)-0.13171011209)) {
            if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.02537686564)) {
              result[0] += -0.02614412;
            } else {
              result[0] += -0.09468036;
            }
          } else {
            result[0] += -0.0061697285;
          }
        }
      }
    }
  } else {
    if ( (data[55].missing != -1) && (data[55].fvalue < (float)-0.048692736775)) {
      if ( (data[32].missing != -1) && (data[32].fvalue < (float)0.92990243435)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)1.0963844061)) {
          result[0] += -0.09435601;
        } else {
          result[0] += -0;
        }
      } else {
        result[0] += 0.052788135;
      }
    } else {
      if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025424173102)) {
        result[0] += 0.08814384;
      } else {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.5295907259)) {
          result[0] += 0.006962189;
        } else {
          result[0] += -0.047337454;
        }
      }
    }
  }
  if ( (data[69].missing != -1) && (data[69].fvalue < (float)-0.39860424399)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.17688424885)) {
      result[1] += -0.09326483;
    } else {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)1.7314175367)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.5871013999)) {
          if ( (data[34].missing != -1) && (data[34].fvalue < (float)-0.20938225091)) {
            if ( (data[32].missing != -1) && (data[32].fvalue < (float)3.9513647556)) {
              if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.17132686079)) {
                if ( (data[1].missing != -1) && (data[1].fvalue < (float)0.06673399359)) {
                  if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31564411521)) {
                    if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.54112535715)) {
                      if ( (data[12].missing != -1) && (data[12].fvalue < (float)2.23818326)) {
                        result[1] += -0;
                      } else {
                        result[1] += 0.03873047;
                      }
                    } else {
                      result[1] += 0.1518768;
                    }
                  } else {
                    result[1] += -0.06465042;
                  }
                } else {
                  result[1] += -0.0949703;
                }
              } else {
                if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.76508826017)) {
                  if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.76828837395)) {
                    result[1] += 0.095938705;
                  } else {
                    result[1] += 0.034150235;
                  }
                } else {
                  result[1] += -0;
                }
              }
            } else {
              result[1] += 0.09364899;
            }
          } else {
            result[1] += -0.06509783;
          }
        } else {
          result[1] += -0.08243808;
        }
      } else {
        result[1] += -0.1013784;
      }
    }
  } else {
    if ( (data[78].missing != -1) && (data[78].fvalue < (float)3.4584906101)) {
      if ( (data[83].missing != -1) && (data[83].fvalue < (float)1)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.62010931969)) {
          result[1] += -0.029635401;
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62019306421)) {
            if ( (data[30].missing != -1) && (data[30].fvalue < (float)-1.0261459351)) {
              result[1] += 0.06225164;
            } else {
              result[1] += -0.015652642;
            }
          } else {
            result[1] += 0.09647322;
          }
        }
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)-0.50166469812)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.6197001338)) {
            if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.18767139316)) {
              if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.60498034954)) {
                result[1] += -0.016574178;
              } else {
                if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.62003952265)) {
                  if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60422873497)) {
                    result[1] += 0.037545893;
                  } else {
                    result[1] += -0.016657753;
                  }
                } else {
                  if ( (data[32].missing != -1) && (data[32].fvalue < (float)4.82117939)) {
                    result[1] += 0.079297684;
                  } else {
                    result[1] += 0.018976837;
                  }
                }
              }
            } else {
              if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.92445510626)) {
                if ( (data[27].missing != -1) && (data[27].fvalue < (float)3.9148039818)) {
                  if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62017846107)) {
                    if ( (data[43].missing != -1) && (data[43].fvalue < (float)-0.13245092332)) {
                      result[1] += 0.040586688;
                    } else {
                      result[1] += -0;
                    }
                  } else {
                    if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.62001913786)) {
                      result[1] += -0.053584892;
                    } else {
                      result[1] += -0;
                    }
                  }
                } else {
                  result[1] += 0.05809924;
                }
              } else {
                result[1] += -0.0901226;
              }
            }
          } else {
            if ( (data[71].missing != -1) && (data[71].fvalue < (float)-0.46705591679)) {
              result[1] += -0;
            } else {
              if ( (data[32].missing != -1) && (data[32].fvalue < (float)5.9198932648)) {
                result[1] += 0.09420222;
              } else {
                result[1] += 0.022875303;
              }
            }
          }
        } else {
          result[1] += -0.08719628;
        }
      }
    } else {
      result[1] += -0.090585686;
    }
  }
  if ( (data[87].missing != -1) && (data[87].fvalue < (float)1)) {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)3.2361967564)) {
      result[2] += -0.09501245;
    } else {
      result[2] += 0.033909064;
    }
  } else {
    if ( (data[59].missing != -1) && (data[59].fvalue < (float)-0.40304526687)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.71015536785)) {
        result[2] += 0.082561;
      } else {
        if ( (data[74].missing != -1) && (data[74].fvalue < (float)1.4468696117)) {
          result[2] += -0.011424127;
        } else {
          result[2] += 0.06568738;
        }
      }
    } else {
      result[2] += -0.083357766;
    }
  }
  if ( (data[27].missing != -1) && (data[27].fvalue < (float)1.0054787397)) {
    result[3] += -0.09528553;
  } else {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)0.3592517674)) {
      result[3] += -0.073943414;
    } else {
      result[3] += 0.09716514;
    }
  }
  if ( (data[89].missing != -1) && (data[89].fvalue < (float)1)) {
    if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.63134372234)) {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.0699566603)) {
        result[4] += -0.08740759;
      } else {
        result[4] += 0.031992257;
      }
    } else {
      result[4] += -0.09548344;
    }
  } else {
    result[4] += 0.09584025;
  }
  if ( (data[27].missing != -1) && (data[27].fvalue < (float)1.3160247803)) {
    if ( (data[79].missing != -1) && (data[79].fvalue < (float)2.4900910854)) {
      result[5] += -0.093988076;
    } else {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)-0.43627506495)) {
        result[5] += -0.08454565;
      } else {
        result[5] += 0.056817994;
      }
    }
  } else {
    result[5] += 0.0056057335;
  }
  if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.54112535715)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.17688424885)) {
      result[6] += 0.023571976;
    } else {
      result[6] += -0.08866442;
    }
  } else {
    result[6] += -0.09446383;
  }
  if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.54112535715)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.42764511704)) {
      result[7] += -0.09321448;
    } else {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.68544656038)) {
        result[7] += 0.08339055;
      } else {
        result[7] += -0.07830834;
      }
    }
  } else {
    result[7] += -0.09548516;
  }
  if ( (data[80].missing != -1) && (data[80].fvalue < (float)9.5720357895)) {
    if ( (data[79].missing != -1) && (data[79].fvalue < (float)6.0763492584)) {
      result[8] += -0.09500072;
    } else {
      result[8] += -0.010276078;
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.11647147685)) {
      result[8] += -0;
    } else {
      result[8] += 0.09232591;
    }
  }
  if ( (data[4].missing != -1) && (data[4].fvalue < (float)-0.51474040747)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.62796533108)) {
      if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.68042695522)) {
        if ( (data[83].missing != -1) && (data[83].fvalue < (float)1)) {
          result[9] += -0.09300625;
        } else {
          if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.7738250494)) {
            result[9] += -0.040879782;
          } else {
            result[9] += -0;
          }
        }
      } else {
        result[9] += 0.083714746;
      }
    } else {
      if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59773939848)) {
        result[9] += 0.08587499;
      } else {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.78900486231)) {
          if ( (data[45].missing != -1) && (data[45].fvalue < (float)-0.10049580783)) {
            result[9] += 0.050360702;
          } else {
            result[9] += -0;
          }
        } else {
          result[9] += -0.04273377;
        }
      }
    }
  } else {
    if ( (data[32].missing != -1) && (data[32].fvalue < (float)2.3948538303)) {
      result[9] += -0.09436681;
    } else {
      if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.85384505987)) {
        if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.44837236404)) {
          result[9] += -0.048249584;
        } else {
          result[9] += 0.104614556;
        }
      } else {
        result[9] += -0.0885701;
      }
    }
  }
  if ( (data[23].missing != -1) && (data[23].fvalue < (float)10.179190636)) {
    if ( (data[32].missing != -1) && (data[32].fvalue < (float)3.8598051071)) {
      result[10] += -0.09499951;
    } else {
      result[10] += -0.030256612;
    }
  } else {
    result[10] += 0.09467595;
  }
  if ( (data[84].missing != -1) && (data[84].fvalue < (float)1)) {
    if ( (data[42].missing != -1) && (data[42].fvalue < (float)-0.010511550121)) {
      if ( (data[33].missing != -1) && (data[33].fvalue < (float)1.3602274656)) {
        if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.6040418148)) {
          if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.99576175213)) {
            if ( (data[30].missing != -1) && (data[30].fvalue < (float)-1.1498845816)) {
              result[11] += -0;
            } else {
              result[11] += 0.10058479;
            }
          } else {
            if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025323992595)) {
              if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.5824829936)) {
                result[11] += -0;
              } else {
                result[11] += -0.05950342;
              }
            } else {
              if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.85705131292)) {
                if ( (data[71].missing != -1) && (data[71].fvalue < (float)-0.42695116997)) {
                  if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59750467539)) {
                    if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62016195059)) {
                      result[11] += 0.070792936;
                    } else {
                      if ( (data[32].missing != -1) && (data[32].fvalue < (float)4.0429239273)) {
                        result[11] += -0.009685796;
                      } else {
                        if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.91121447086)) {
                          result[11] += -0;
                        } else {
                          result[11] += 0.07984787;
                        }
                      }
                    }
                  } else {
                    result[11] += -0.034103643;
                  }
                } else {
                  result[11] += -0.043513246;
                }
              } else {
                if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60426038504)) {
                  if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.38022357225)) {
                    result[11] += -0.019048855;
                  } else {
                    result[11] += 0.044567283;
                  }
                } else {
                  if ( (data[32].missing != -1) && (data[32].fvalue < (float)2.4406335354)) {
                    result[11] += 0.09848958;
                  } else {
                    if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60421293974)) {
                      result[11] += 0.06316468;
                    } else {
                      result[11] += -0;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.6029086709)) {
            result[11] += -0.08613063;
          } else {
            if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.024322185665)) {
              result[11] += -0.07836734;
            } else {
              if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60209196806)) {
                result[11] += -0;
              } else {
                if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.88479340076)) {
                  result[11] += 0.0018984273;
                } else {
                  result[11] += 0.07612214;
                }
              }
            }
          }
        }
      } else {
        result[11] += -0.09211267;
      }
    } else {
      if ( (data[80].missing != -1) && (data[80].fvalue < (float)-0.37019988894)) {
        if ( (data[69].missing != -1) && (data[69].fvalue < (float)0.1317859143)) {
          if ( (data[43].missing != -1) && (data[43].fvalue < (float)-0.26961767673)) {
            result[11] += -0;
          } else {
            if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025312861428)) {
              if ( (data[63].missing != -1) && (data[63].fvalue < (float)-0.14326144755)) {
                result[11] += -0;
              } else {
                result[11] += 0.067200966;
              }
            } else {
              result[11] += 0.09438327;
            }
          }
        } else {
          if ( (data[70].missing != -1) && (data[70].fvalue < (float)0.21682018042)) {
            result[11] += -0.070329934;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.62016224861)) {
              result[11] += 0.054402437;
            } else {
              result[11] += -0;
            }
          }
        }
      } else {
        if ( (data[80].missing != -1) && (data[80].fvalue < (float)-0.10689549893)) {
          result[11] += -0.08670207;
        } else {
          result[11] += -0;
        }
      }
    }
  } else {
    if ( (data[82].missing != -1) && (data[82].fvalue < (float)1)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.61993962526)) {
        if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025342080742)) {
          if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.85705131292)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.15619270504)) {
              result[11] += -0;
            } else {
              result[11] += -0.07245637;
            }
          } else {
            result[11] += 0.015138077;
          }
        } else {
          if ( (data[42].missing != -1) && (data[42].fvalue < (float)0.012993224896)) {
            result[11] += 0.10218796;
          } else {
            result[11] += -0;
          }
        }
      } else {
        result[11] += -0.06920447;
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)1.797724247)) {
        result[11] += -0.09409194;
      } else {
        result[11] += 0.009326613;
      }
    }
  }
  if ( (data[1].missing != -1) && (data[1].fvalue < (float)1.1286532879)) {
    if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59852188826)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)-0.44441816211)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.62005919218)) {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.62911725044)) {
            result[12] += -0.05345729;
          } else {
            result[12] += 0.057629608;
          }
        } else {
          result[12] += 0.14150462;
        }
      } else {
        result[12] += -0.079789504;
      }
    } else {
      if ( (data[93].missing != -1) && (data[93].fvalue < (float)1)) {
        result[12] += -0.09393914;
      } else {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.0699566603)) {
          result[12] += 0.11794624;
        } else {
          result[12] += -0.092677265;
        }
      }
    }
  } else {
    if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.45554211736)) {
      if ( (data[82].missing != -1) && (data[82].fvalue < (float)1)) {
        result[12] += -0.08332781;
      } else {
        result[12] += 0.011223016;
      }
    } else {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.49699115753)) {
        result[12] += 0.012656216;
      } else {
        result[12] += 0.14164802;
      }
    }
  }
  if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.18199364841)) {
    if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.93103021383)) {
      if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60428506136)) {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)0.5904673934)) {
          if ( (data[59].missing != -1) && (data[59].fvalue < (float)-0.46938577294)) {
            if ( (data[78].missing != -1) && (data[78].fvalue < (float)3.4584906101)) {
              if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.86921608448)) {
                result[0] += -0.061066315;
              } else {
                result[0] += 0.016145287;
              }
            } else {
              if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.15619270504)) {
                result[0] += -0.02200259;
              } else {
                result[0] += 0.05180603;
              }
            }
          } else {
            if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.35921764374)) {
              if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.45558679104)) {
                result[0] += -0;
              } else {
                if ( (data[49].missing != -1) && (data[49].fvalue < (float)0.25168430805)) {
                  result[0] += 0.14139682;
                } else {
                  result[0] += 0.03376775;
                }
              }
            } else {
              result[0] += -0;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.54742503166)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.61777055264)) {
              result[0] += 0.053814575;
            } else {
              result[0] += -0.08156411;
            }
          } else {
            result[0] += -0.09469061;
          }
        }
      } else {
        if ( (data[50].missing != -1) && (data[50].fvalue < (float)-0.0028272988275)) {
          result[0] += -0.08889801;
        } else {
          result[0] += -0.015735446;
        }
      }
    } else {
      if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025407476351)) {
        if ( (data[35].missing != -1) && (data[35].fvalue < (float)-0.46837049723)) {
          if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.76508826017)) {
            result[0] += 0.057612013;
          } else {
            result[0] += -0;
          }
        } else {
          if ( (data[28].missing != -1) && (data[28].fvalue < (float)0.21893824637)) {
            result[0] += 0.094673276;
          } else {
            result[0] += -0;
          }
        }
      } else {
        if ( (data[59].missing != -1) && (data[59].fvalue < (float)-0.35881829262)) {
          if ( (data[35].missing != -1) && (data[35].fvalue < (float)-0.25344574451)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.17023339868)) {
              if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.021839931607)) {
                result[0] += 0.02899513;
              } else {
                result[0] += 0.13894016;
              }
            } else {
              if ( (data[75].missing != -1) && (data[75].fvalue < (float)0.061311610043)) {
                if ( (data[56].missing != -1) && (data[56].fvalue < (float)1.5526630878)) {
                  if ( (data[54].missing != -1) && (data[54].fvalue < (float)-0.037270721048)) {
                    result[0] += 0.026311118;
                  } else {
                    result[0] += -0;
                  }
                } else {
                  result[0] += 0.08303881;
                }
              } else {
                result[0] += -0;
              }
            }
          } else {
            if ( (data[35].missing != -1) && (data[35].fvalue < (float)-0.23067225516)) {
              result[0] += -0.07535902;
            } else {
              if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.90621083975)) {
                result[0] += 0.078223065;
              } else {
                if ( (data[35].missing != -1) && (data[35].fvalue < (float)-0.12977306545)) {
                  if ( (data[32].missing != -1) && (data[32].fvalue < (float)3.3104484081)) {
                    result[0] += -0.007944768;
                  } else {
                    result[0] += -0.081737876;
                  }
                } else {
                  if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.75656324625)) {
                    if ( (data[32].missing != -1) && (data[32].fvalue < (float)3.9513647556)) {
                      result[0] += 0.088847436;
                    } else {
                      if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.62869435549)) {
                        if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59773939848)) {
                          if ( (data[32].missing != -1) && (data[32].fvalue < (float)5.4620957375)) {
                            result[0] += 0.11620006;
                          } else {
                            result[0] += -0;
                          }
                        } else {
                          if ( (data[71].missing != -1) && (data[71].fvalue < (float)-0.44573503733)) {
                            if ( (data[32].missing != -1) && (data[32].fvalue < (float)5.3705363274)) {
                              result[0] += -0.059505098;
                            } else {
                              result[0] += -0;
                            }
                          } else {
                            result[0] += 0.010194274;
                          }
                        }
                      } else {
                        if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.76508826017)) {
                          result[0] += 0.06852817;
                        } else {
                          result[0] += 0.0016605506;
                        }
                      }
                    }
                  } else {
                    result[0] += -0.04912557;
                  }
                }
              }
            }
          }
        } else {
          result[0] += -0.07886748;
        }
      }
    }
  } else {
    if ( (data[50].missing != -1) && (data[50].fvalue < (float)0.10984566063)) {
      if ( (data[32].missing != -1) && (data[32].fvalue < (float)0.92990243435)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.5824829936)) {
          result[0] += -0.0027285698;
        } else {
          result[0] += -0.09313049;
        }
      } else {
        result[0] += 0.053830374;
      }
    } else {
      if ( (data[17].missing != -1) && (data[17].fvalue < (float)1.0286098719)) {
        result[0] += -0;
      } else {
        result[0] += 0.08288686;
      }
    }
  }
  if ( (data[69].missing != -1) && (data[69].fvalue < (float)-0.39860424399)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.51698690653)) {
      if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.73670840263)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.41503149271)) {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.7485768795)) {
            if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.15498234332)) {
              result[1] += -0;
            } else {
              result[1] += 0.08535367;
            }
          } else {
            if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.22036042809)) {
              if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.091183178127)) {
                result[1] += -0;
              } else {
                result[1] += 0.07170448;
              }
            } else {
              result[1] += -0.02934344;
            }
          }
        } else {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.0699566603)) {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.81572955847)) {
              result[1] += -0.10824382;
            } else {
              if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.59494549036)) {
                result[1] += -0.017059114;
              } else {
                result[1] += 0.0019522252;
              }
            }
          } else {
            result[1] += 0.016109444;
          }
        }
      } else {
        if ( (data[27].missing != -1) && (data[27].fvalue < (float)3.7677032948)) {
          result[1] += -0.08711561;
        } else {
          result[1] += 0.04096317;
        }
      }
    } else {
      result[1] += -0.094819136;
    }
  } else {
    if ( (data[78].missing != -1) && (data[78].fvalue < (float)3.4584906101)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)-0.44441816211)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.6197001338)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)-0.27981966734)) {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.14555417001)) {
              if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.5637139678)) {
                result[1] += 0.06833976;
              } else {
                if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31298440695)) {
                  result[1] += 0.02006661;
                } else {
                  result[1] += -0.028055467;
                }
              }
            } else {
              if ( (data[32].missing != -1) && (data[32].fvalue < (float)1.9828362465)) {
                if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.038386307657)) {
                  if ( (data[69].missing != -1) && (data[69].fvalue < (float)-0.39336627722)) {
                    result[1] += 0.009697183;
                  } else {
                    result[1] += 0.081833385;
                  }
                } else {
                  result[1] += -0.019662071;
                }
              } else {
                if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59750467539)) {
                  if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31443795562)) {
                    result[1] += -0.15008965;
                  } else {
                    if ( (data[32].missing != -1) && (data[32].fvalue < (float)3.4477875233)) {
                      result[1] += 0.07958808;
                    } else {
                      if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31372666359)) {
                        result[1] += -0.1094031;
                      } else {
                        result[1] += 0.0086770905;
                      }
                    }
                  }
                } else {
                  if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31457713246)) {
                    result[1] += 0.038704216;
                  } else {
                    if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.18767139316)) {
                      result[1] += 0.038792197;
                    } else {
                      result[1] += -0.08865775;
                    }
                  }
                }
              }
            }
          } else {
            result[1] += -0.08135125;
          }
        } else {
          if ( (data[55].missing != -1) && (data[55].fvalue < (float)-0.1285303086)) {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.71965879202)) {
              result[1] += -0;
            } else {
              result[1] += -0.024322208;
            }
          } else {
            result[1] += 0.091793455;
          }
        }
      } else {
        if ( (data[50].missing != -1) && (data[50].fvalue < (float)0.17703424394)) {
          if ( (data[79].missing != -1) && (data[79].fvalue < (float)6.0763492584)) {
            result[1] += 0.096474476;
          } else {
            if ( (data[78].missing != -1) && (data[78].fvalue < (float)-0.22594192624)) {
              result[1] += -0.076289274;
            } else {
              result[1] += 0.09314404;
            }
          }
        } else {
          if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.35921764374)) {
            result[1] += -0.032215014;
          } else {
            result[1] += 0.024847519;
          }
        }
      }
    } else {
      result[1] += -0.089673854;
    }
  }
  if ( (data[87].missing != -1) && (data[87].fvalue < (float)1)) {
    if ( (data[80].missing != -1) && (data[80].fvalue < (float)9.5720357895)) {
      result[2] += -0.09483333;
    } else {
      result[2] += 0.009037127;
    }
  } else {
    if ( (data[59].missing != -1) && (data[59].fvalue < (float)-0.40304526687)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.71015536785)) {
        result[2] += 0.079171;
      } else {
        if ( (data[73].missing != -1) && (data[73].fvalue < (float)0.87622565031)) {
          result[2] += -0.01849148;
        } else {
          result[2] += 0.06851968;
        }
      }
    } else {
      result[2] += -0.08105785;
    }
  }
  if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.17688424885)) {
    if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025407476351)) {
      result[3] += 0.09676962;
    } else {
      result[3] += -0.017455464;
    }
  } else {
    result[3] += -0.095201164;
  }
  if ( (data[89].missing != -1) && (data[89].fvalue < (float)1)) {
    if ( (data[79].missing != -1) && (data[79].fvalue < (float)6.0763492584)) {
      if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.99998575449)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.6202095747)) {
          result[4] += 0.035546094;
        } else {
          result[4] += -0.08496794;
        }
      } else {
        result[4] += -0.09538332;
      }
    } else {
      result[4] += -0;
    }
  } else {
    result[4] += 0.09526944;
  }
  if ( (data[37].missing != -1) && (data[37].fvalue < (float)3.6165232658)) {
    if ( (data[79].missing != -1) && (data[79].fvalue < (float)6.0763492584)) {
      result[5] += -0.09422301;
    } else {
      if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.22042307258)) {
        result[5] += -0.07550504;
      } else {
        result[5] += 0.031743858;
      }
    }
  } else {
    result[5] += 0.004880645;
  }
  if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.99998575449)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.17688424885)) {
      result[6] += 0.021603795;
    } else {
      result[6] += -0.0873854;
    }
  } else {
    if ( (data[32].missing != -1) && (data[32].fvalue < (float)3.8598051071)) {
      result[6] += -0.094755046;
    } else {
      result[6] += -0.019510811;
    }
  }
  if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.99998575449)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.42764511704)) {
      result[7] += -0.09203514;
    } else {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.68544656038)) {
        result[7] += 0.08092634;
      } else {
        result[7] += -0.07594536;
      }
    }
  } else {
    result[7] += -0.09539168;
  }
  if ( (data[12].missing != -1) && (data[12].fvalue < (float)3.7342278957)) {
    if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31586059928)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)-1.2706193924)) {
        result[8] += 0.024708109;
      } else {
        result[8] += -0.0783264;
      }
    } else {
      result[8] += -0.09539805;
    }
  } else {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)0.06673399359)) {
      result[8] += -0;
    } else {
      result[8] += 0.09016738;
    }
  }
  if ( (data[14].missing != -1) && (data[14].fvalue < (float)-0.45095446706)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.62796533108)) {
      if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.64668506384)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.93369174)) {
          if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31460806727)) {
            result[9] += -0;
          } else {
            result[9] += -0.07458283;
          }
        } else {
          result[9] += -0.09224848;
        }
      } else {
        result[9] += 0.07395837;
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.5824829936)) {
        if ( (data[84].missing != -1) && (data[84].fvalue < (float)1)) {
          result[9] += 0.005501191;
        } else {
          result[9] += 0.089549355;
        }
      } else {
        if ( (data[78].missing != -1) && (data[78].fvalue < (float)3.4584906101)) {
          result[9] += -0.07921491;
        } else {
          result[9] += 0.04407909;
        }
      }
    }
  } else {
    if ( (data[47].missing != -1) && (data[47].fvalue < (float)0.091625325382)) {
      if ( (data[52].missing != -1) && (data[52].fvalue < (float)0.052392564714)) {
        if ( (data[87].missing != -1) && (data[87].fvalue < (float)1)) {
          result[9] += -0.09506132;
        } else {
          result[9] += -0.041619115;
        }
      } else {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.39942288399)) {
          result[9] += 0.013735912;
        } else {
          result[9] += -0.08022112;
        }
      }
    } else {
      result[9] += -0;
    }
  }
  if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31586059928)) {
    if ( (data[20].missing != -1) && (data[20].fvalue < (float)-0.53552961349)) {
      result[10] += -0.08469731;
    } else {
      result[10] += 0.09313579;
    }
  } else {
    if ( (data[32].missing != -1) && (data[32].fvalue < (float)3.8598051071)) {
      result[10] += -0.094751984;
    } else {
      result[10] += -0.02475717;
    }
  }
  if ( (data[84].missing != -1) && (data[84].fvalue < (float)1)) {
    if ( (data[38].missing != -1) && (data[38].fvalue < (float)1.3613381386)) {
      if ( (data[37].missing != -1) && (data[37].fvalue < (float)0.7573646307)) {
        if ( (data[51].missing != -1) && (data[51].fvalue < (float)0.023384498432)) {
          if ( (data[79].missing != -1) && (data[79].fvalue < (float)2.4661560059)) {
            if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59852188826)) {
              result[11] += -0;
            } else {
              result[11] += 0.092747666;
            }
          } else {
            if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.045697547495)) {
              result[11] += -0.059488565;
            } else {
              result[11] += 0.06797789;
            }
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.74213886261)) {
            result[11] += 0.03181518;
          } else {
            result[11] += -0.082230434;
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.61980682611)) {
          if ( (data[37].missing != -1) && (data[37].fvalue < (float)1.0376743078)) {
            if ( (data[32].missing != -1) && (data[32].fvalue < (float)7.7510824203)) {
              if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59750467539)) {
                if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.77628856897)) {
                  if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62018883228)) {
                    result[11] += -0.07141812;
                  } else {
                    if ( (data[32].missing != -1) && (data[32].fvalue < (float)5.4163160324)) {
                      result[11] += 0.020757629;
                    } else {
                      result[11] += -0.03187109;
                    }
                  }
                } else {
                  result[11] += 0.032289032;
                }
              } else {
                result[11] += -0.038799483;
              }
            } else {
              result[11] += 0.061372228;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62007719278)) {
              if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.099427320063)) {
                if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.58880263567)) {
                  if ( (data[54].missing != -1) && (data[54].fvalue < (float)-0.037270721048)) {
                    if ( (data[55].missing != -1) && (data[55].fvalue < (float)-0.071939013898)) {
                      result[11] += -0;
                    } else {
                      result[11] += -0.03714916;
                    }
                  } else {
                    result[11] += 0.032529835;
                  }
                } else {
                  if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60421293974)) {
                    if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.62383723259)) {
                      result[11] += 0.07966075;
                    } else {
                      if ( (data[73].missing != -1) && (data[73].fvalue < (float)1.0606098175)) {
                        result[11] += 0.020583676;
                      } else {
                        result[11] += -0;
                      }
                    }
                  } else {
                    result[11] += -0;
                  }
                }
              } else {
                if ( (data[37].missing != -1) && (data[37].fvalue < (float)8.0734472275)) {
                  result[11] += -0.06536845;
                } else {
                  result[11] += 0.04355;
                }
              }
            } else {
              result[11] += 0.10489108;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.61899483204)) {
            result[11] += -0.08281994;
          } else {
            if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59750467539)) {
              result[11] += 0.040247314;
            } else {
              if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.61701476574)) {
                result[11] += -0;
              } else {
                result[11] += -0.04171663;
              }
            }
          }
        }
      }
    } else {
      result[11] += -0.091429405;
    }
  } else {
    if ( (data[82].missing != -1) && (data[82].fvalue < (float)1)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.61993962526)) {
        if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59734815359)) {
          result[11] += -0.010368496;
        } else {
          if ( (data[54].missing != -1) && (data[54].fvalue < (float)-0.0026501186658)) {
            result[11] += 0.06685168;
          } else {
            result[11] += -0.011567792;
          }
        }
      } else {
        result[11] += -0.066140644;
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)1.797724247)) {
        result[11] += -0.094511285;
      } else {
        result[11] += 0.009528064;
      }
    }
  }
  if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.25832360983)) {
    if ( (data[80].missing != -1) && (data[80].fvalue < (float)-0.10689549893)) {
      if ( (data[32].missing != -1) && (data[32].fvalue < (float)5.7825541496)) {
        result[12] += -0.08186751;
      } else {
        if ( (data[35].missing != -1) && (data[35].fvalue < (float)0.29399675131)) {
          result[12] += 0.06857224;
        } else {
          result[12] += -0.030356696;
        }
      }
    } else {
      if ( (data[78].missing != -1) && (data[78].fvalue < (float)-0.22594192624)) {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)2.1549119949)) {
          result[12] += 0.22629626;
        } else {
          result[12] += 0.09305504;
        }
      } else {
        if ( (data[45].missing != -1) && (data[45].fvalue < (float)-0.037582363933)) {
          result[12] += -0.08399789;
        } else {
          result[12] += -0;
        }
      }
    }
  } else {
    if ( (data[83].missing != -1) && (data[83].fvalue < (float)1)) {
      result[12] += -0.09525024;
    } else {
      result[12] += -0;
    }
  }
  if ( (data[82].missing != -1) && (data[82].fvalue < (float)1)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.2629079819)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.35428348184)) {
        if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.6042920351)) {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)-2.2394132614)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.57866376638)) {
              result[0] += 0.016195659;
            } else {
              result[0] += 0.1534828;
            }
          } else {
            if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31460806727)) {
              if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59734815359)) {
                result[0] += -0;
              } else {
                result[0] += -0.071108535;
              }
            } else {
              if ( (data[69].missing != -1) && (data[69].fvalue < (float)0.66162455082)) {
                if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31392768025)) {
                  result[0] += 0.0010829603;
                } else {
                  result[0] += 0.10151481;
                }
              } else {
                if ( (data[74].missing != -1) && (data[74].fvalue < (float)1.0103553534)) {
                  result[0] += 0.0064191115;
                } else {
                  result[0] += -0.010142681;
                }
              }
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)-1.2706193924)) {
            result[0] += -0;
          } else {
            result[0] += -0.07991775;
          }
        }
      } else {
        if ( (data[37].missing != -1) && (data[37].fvalue < (float)1.3460149765)) {
          if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.93103021383)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)1.1286532879)) {
              result[0] += -0.051512774;
            } else {
              result[0] += 0.021084985;
            }
          } else {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.15619270504)) {
              if ( (data[36].missing != -1) && (data[36].fvalue < (float)-0.68227016926)) {
                if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.9311388731)) {
                  result[0] += -0.012548039;
                } else {
                  if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60426038504)) {
                    result[0] += -0.010525016;
                  } else {
                    if ( (data[37].missing != -1) && (data[37].fvalue < (float)1.0937361717)) {
                      if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60414606333)) {
                        if ( (data[32].missing != -1) && (data[32].fvalue < (float)4.2718229294)) {
                          result[0] += 0.07938266;
                        } else {
                          if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62015038729)) {
                            result[0] += 0.020682236;
                          } else {
                            result[0] += -0.010248711;
                          }
                        }
                      } else {
                        if ( (data[55].missing != -1) && (data[55].fvalue < (float)-0.1285303086)) {
                          if ( (data[32].missing != -1) && (data[32].fvalue < (float)2.7153120041)) {
                            result[0] += -0;
                          } else {
                            result[0] += 0.03264665;
                          }
                        } else {
                          result[0] += -0.034276154;
                        }
                      }
                    } else {
                      if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.99036180973)) {
                        result[0] += 0.095015176;
                      } else {
                        result[0] += -0;
                      }
                    }
                  }
                }
              } else {
                result[0] += 0.086652465;
              }
            } else {
              result[0] += 0.08844031;
            }
          }
        } else {
          if ( (data[61].missing != -1) && (data[61].fvalue < (float)-0.16561180353)) {
            if ( (data[55].missing != -1) && (data[55].fvalue < (float)-0.10499257594)) {
              result[0] += -0.1577333;
            } else {
              result[0] += 0.0028482927;
            }
          } else {
            result[0] += 0.051714554;
          }
        }
      }
    } else {
      result[0] += -0.11637338;
    }
  } else {
    if ( (data[78].missing != -1) && (data[78].fvalue < (float)3.4584906101)) {
      if ( (data[50].missing != -1) && (data[50].fvalue < (float)0.17703424394)) {
        result[0] += -0.095238;
      } else {
        result[0] += 0.0059918873;
      }
    } else {
      if ( (data[31].missing != -1) && (data[31].fvalue < (float)-0.085173599422)) {
        if ( (data[74].missing != -1) && (data[74].fvalue < (float)1.5942275524)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62018990517)) {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.73520982265)) {
              result[0] += -0.014058992;
            } else {
              if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.45554211736)) {
                result[0] += 0.008562832;
              } else {
                result[0] += 0.07456977;
              }
            }
          } else {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.08081638813)) {
              result[0] += -0.07463134;
            } else {
              result[0] += 0.0063677044;
            }
          }
        } else {
          result[0] += -0.10074156;
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.55058819056)) {
          if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.085147149861)) {
            result[0] += 0.08958443;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.16896049678)) {
              result[0] += 0.06653205;
            } else {
              result[0] += -0.0019224266;
            }
          }
        } else {
          result[0] += -0;
        }
      }
    }
  }
  if ( (data[71].missing != -1) && (data[71].fvalue < (float)-0.46705591679)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.17688424885)) {
      result[1] += -0.09207125;
    } else {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.62796533108)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)-1.0887905359)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)0.45149809122)) {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.082774102688)) {
              result[1] += 0.014611487;
            } else {
              result[1] += 0.09478478;
            }
          } else {
            if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.17132686079)) {
              result[1] += -0.10032361;
            } else {
              result[1] += 0.033180047;
            }
          }
        } else {
          if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025323992595)) {
            result[1] += -0.07260747;
          } else {
            if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60252219439)) {
              result[1] += 0.05052012;
            } else {
              result[1] += -0.0055891545;
            }
          }
        }
      } else {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)0.06673399359)) {
          if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.62869435549)) {
            if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31586059928)) {
              result[1] += -0.038531866;
            } else {
              if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31457713246)) {
                result[1] += 0.09909653;
              } else {
                result[1] += -0.012410843;
              }
            }
          } else {
            result[1] += -0.06425335;
          }
        } else {
          result[1] += -0.10024631;
        }
      }
    }
  } else {
    if ( (data[78].missing != -1) && (data[78].fvalue < (float)3.4584906101)) {
      if ( (data[78].missing != -1) && (data[78].fvalue < (float)-0.4874599874)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.61979103088)) {
          if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.35111662745)) {
            if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.90166765451)) {
              result[1] += -0;
            } else {
              result[1] += -0.1108728;
            }
          } else {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.25268346071)) {
              if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.54449033737)) {
                result[1] += 0.084990054;
              } else {
                result[1] += -0;
              }
            } else {
              if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.62869435549)) {
                if ( (data[33].missing != -1) && (data[33].fvalue < (float)-0.62329429388)) {
                  if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.62009710073)) {
                    result[1] += 0.0050691552;
                  } else {
                    result[1] += -0.05385129;
                  }
                } else {
                  if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62014120817)) {
                    result[1] += -0;
                  } else {
                    result[1] += 0.053157598;
                  }
                }
              } else {
                result[1] += -0.09318202;
              }
            }
          }
        } else {
          if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.54161769152)) {
            result[1] += 0.09489083;
          } else {
            result[1] += 0.051089652;
          }
        }
      } else {
        if ( (data[59].missing != -1) && (data[59].fvalue < (float)-0.46938577294)) {
          result[1] += -0;
        } else {
          if ( (data[45].missing != -1) && (data[45].fvalue < (float)0.0045417477377)) {
            result[1] += 0.09577961;
          } else {
            result[1] += 0.038729914;
          }
        }
      }
    } else {
      result[1] += -0.088328615;
    }
  }
  if ( (data[78].missing != -1) && (data[78].fvalue < (float)3.4584906101)) {
    result[2] += -0.09454283;
  } else {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.15619270504)) {
      if ( (data[33].missing != -1) && (data[33].fvalue < (float)0.056300889701)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.71015536785)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.62011021376)) {
            result[2] += 0.12684354;
          } else {
            result[2] += 0.02376323;
          }
        } else {
          if ( (data[46].missing != -1) && (data[46].fvalue < (float)1.9170114994)) {
            result[2] += -0.048060015;
          } else {
            result[2] += 0.07699754;
          }
        }
      } else {
        result[2] += -0.072856896;
      }
    } else {
      result[2] += -0.08679449;
    }
  }
  if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.17688424885)) {
    result[3] += 0.09598392;
  } else {
    result[3] += -0.095044695;
  }
  if ( (data[89].missing != -1) && (data[89].fvalue < (float)1)) {
    if ( (data[30].missing != -1) && (data[30].fvalue < (float)-1.2213975191)) {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.0699566603)) {
        result[4] += -0.08379931;
      } else {
        result[4] += 0.073330075;
      }
    } else {
      result[4] += -0.0945351;
    }
  } else {
    result[4] += 0.09470173;
  }
  if ( (data[27].missing != -1) && (data[27].fvalue < (float)1.3160247803)) {
    if ( (data[47].missing != -1) && (data[47].fvalue < (float)-0.015711553395)) {
      if ( (data[32].missing != -1) && (data[32].fvalue < (float)3.2646687031)) {
        result[5] += -0.09528692;
      } else {
        result[5] += -0.029838407;
      }
    } else {
      if ( (data[79].missing != -1) && (data[79].fvalue < (float)2.4900910854)) {
        if ( (data[33].missing != -1) && (data[33].fvalue < (float)-0.62777519226)) {
          result[5] += -0.084379576;
        } else {
          result[5] += -0;
        }
      } else {
        result[5] += 0.059777856;
      }
    }
  } else {
    result[5] += 0.0065564015;
  }
  if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.99998575449)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.17688424885)) {
      result[6] += 0.013979536;
    } else {
      result[6] += -0.08597159;
    }
  } else {
    if ( (data[32].missing != -1) && (data[32].fvalue < (float)3.8598051071)) {
      result[6] += -0.094523184;
    } else {
      result[6] += -0.014633807;
    }
  }
  if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.99998575449)) {
    if ( (data[19].missing != -1) && (data[19].fvalue < (float)0.5904673934)) {
      result[7] += -0.0903629;
    } else {
      result[7] += 0.056929834;
    }
  } else {
    result[7] += -0.09528956;
  }
  if ( (data[80].missing != -1) && (data[80].fvalue < (float)9.5720357895)) {
    if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.99998575449)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.050166197121)) {
        result[8] += 0.021202996;
      } else {
        result[8] += -0.07420156;
      }
    } else {
      result[8] += -0.09529615;
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.11647147685)) {
      result[8] += -0;
    } else {
      result[8] += 0.0899618;
    }
  }
  if ( (data[14].missing != -1) && (data[14].fvalue < (float)-0.45095446706)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.62796533108)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.93369174)) {
        if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.64668506384)) {
          if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31460806727)) {
            result[9] += -0;
          } else {
            result[9] += -0.07292259;
          }
        } else {
          result[9] += 0.10182415;
        }
      } else {
        result[9] += -0.09203697;
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.5824829936)) {
        if ( (data[84].missing != -1) && (data[84].fvalue < (float)1)) {
          result[9] += 0.0031971296;
        } else {
          result[9] += 0.087945655;
        }
      } else {
        if ( (data[78].missing != -1) && (data[78].fvalue < (float)3.4584906101)) {
          result[9] += -0.078943126;
        } else {
          result[9] += 0.043830786;
        }
      }
    }
  } else {
    if ( (data[32].missing != -1) && (data[32].fvalue < (float)1.7997173071)) {
      result[9] += -0.09360518;
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.61980682611)) {
        if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.85384505987)) {
          result[9] += 0.0465666;
        } else {
          result[9] += -0.07688183;
        }
      } else {
        result[9] += -0.06803211;
      }
    }
  }
  if ( (data[23].missing != -1) && (data[23].fvalue < (float)10.179190636)) {
    if ( (data[32].missing != -1) && (data[32].fvalue < (float)3.8598051071)) {
      result[10] += -0.09458195;
    } else {
      result[10] += -0.020431576;
    }
  } else {
    result[10] += 0.09296639;
  }
  if ( (data[84].missing != -1) && (data[84].fvalue < (float)1)) {
    if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60401982069)) {
      if ( (data[36].missing != -1) && (data[36].fvalue < (float)-0.61982524395)) {
        if ( (data[36].missing != -1) && (data[36].fvalue < (float)-0.68227016926)) {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.71015536785)) {
            if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31298440695)) {
              if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31466990709)) {
                if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.22036042809)) {
                  result[11] += -0.04281575;
                } else {
                  if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.10234069079)) {
                    result[11] += 0.029747276;
                  } else {
                    result[11] += -8.903862e-05;
                  }
                }
              } else {
                if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.58649593592)) {
                  if ( (data[27].missing != -1) && (data[27].fvalue < (float)0.92375618219)) {
                    result[11] += -0.08978392;
                  } else {
                    result[11] += -0.0123007735;
                  }
                } else {
                  result[11] += -0;
                }
              }
            } else {
              if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31154632568)) {
                result[11] += 0.07366417;
              } else {
                if ( (data[37].missing != -1) && (data[37].fvalue < (float)3.0278730392)) {
                  if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.48612654209)) {
                    result[11] += -0;
                  } else {
                    result[11] += 0.03051043;
                  }
                } else {
                  result[11] += -0.05539916;
                }
              }
            }
          } else {
            if ( (data[55].missing != -1) && (data[55].fvalue < (float)-0.066392295063)) {
              if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59734815359)) {
                if ( (data[37].missing != -1) && (data[37].fvalue < (float)0.95358139277)) {
                  if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.041795373)) {
                    result[11] += -0;
                  } else {
                    result[11] += 0.07788593;
                  }
                } else {
                  result[11] += -0.0065066502;
                }
              } else {
                result[11] += 0.08604016;
              }
            } else {
              if ( (data[32].missing != -1) && (data[32].fvalue < (float)1.9828362465)) {
                result[11] += -0.0077871024;
              } else {
                if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.85384505987)) {
                  result[11] += 0.07163355;
                } else {
                  if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.35827046633)) {
                    result[11] += -0.021567557;
                  } else {
                    if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62017637491)) {
                      result[11] += 0.044124044;
                    } else {
                      result[11] += -0;
                    }
                  }
                }
              }
            }
          }
        } else {
          result[11] += -0.082340516;
        }
      } else {
        if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025296164677)) {
          if ( (data[59].missing != -1) && (data[59].fvalue < (float)-0.27036428452)) {
            result[11] += -0.070368886;
          } else {
            result[11] += 0.04749929;
          }
        } else {
          if ( (data[44].missing != -1) && (data[44].fvalue < (float)-0.014357995242)) {
            result[11] += 0.09090517;
          } else {
            result[11] += -0;
          }
        }
      }
    } else {
      if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.02519598417)) {
        if ( (data[34].missing != -1) && (data[34].fvalue < (float)-0.084822289646)) {
          result[11] += -0.089489736;
        } else {
          result[11] += -0.008108176;
        }
      } else {
        if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.6029086709)) {
          result[11] += -0.059954226;
        } else {
          if ( (data[32].missing != -1) && (data[32].fvalue < (float)2.5779726505)) {
            result[11] += 0.0606647;
          } else {
            if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.40275913477)) {
              result[11] += -0.02408218;
            } else {
              result[11] += 0.035467144;
            }
          }
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.62014216185)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.63977259398)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)-2.2002477646)) {
          result[11] += 0.02444643;
        } else {
          result[11] += -0.08910568;
        }
      } else {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.90419763327)) {
          result[11] += 0.09965048;
        } else {
          if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.64668506384)) {
            result[11] += -0.07588588;
          } else {
            result[11] += 0.022563787;
          }
        }
      }
    } else {
      if ( (data[83].missing != -1) && (data[83].fvalue < (float)1)) {
        result[11] += -0.094171226;
      } else {
        result[11] += 0.0038177397;
      }
    }
  }
  if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59852188826)) {
    if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.88865399361)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)-1.2706193924)) {
        if ( (data[80].missing != -1) && (data[80].fvalue < (float)-0.10689549893)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)-0.44659695029)) {
            result[12] += -0.07945777;
          } else {
            result[12] += 0.01131484;
          }
        } else {
          result[12] += 0.117842354;
        }
      } else {
        result[12] += -0.086997285;
      }
    } else {
      result[12] += 0.10979251;
    }
  } else {
    if ( (data[42].missing != -1) && (data[42].fvalue < (float)-0.010471519083)) {
      result[12] += -0.094670795;
    } else {
      if ( (data[80].missing != -1) && (data[80].fvalue < (float)-0.10689549893)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)-0.44659695029)) {
          result[12] += 0.011315409;
        } else {
          result[12] += -0.088411465;
        }
      } else {
        result[12] += 0.0981154;
      }
    }
  }
  if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.18199364841)) {
    if ( (data[80].missing != -1) && (data[80].fvalue < (float)-0.37019988894)) {
      if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025407476351)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.53519374132)) {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)-2.2394132614)) {
            result[0] += 0.07223762;
          } else {
            if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.25832360983)) {
              result[0] += -0.03993667;
            } else {
              result[0] += 0.032427955;
            }
          }
        } else {
          if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.95877230167)) {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.62646782398)) {
              result[0] += 0.06865114;
            } else {
              if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.039231427014)) {
                result[0] += -0.06097427;
              } else {
                result[0] += 0.009586488;
              }
            }
          } else {
            if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.22042307258)) {
              if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59773939848)) {
                result[0] += 0.026842035;
              } else {
                result[0] += 0.09076743;
              }
            } else {
              result[0] += 0.017158821;
            }
          }
        }
      } else {
        if ( (data[58].missing != -1) && (data[58].fvalue < (float)-0.44744732976)) {
          if ( (data[80].missing != -1) && (data[80].fvalue < (float)-0.3703558743)) {
            if ( (data[37].missing != -1) && (data[37].fvalue < (float)0.8134265542)) {
              if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.9311388731)) {
                result[0] += 0.008922347;
              } else {
                result[0] += -0.06803022;
              }
            } else {
              if ( (data[34].missing != -1) && (data[34].fvalue < (float)-0.20782999694)) {
                if ( (data[47].missing != -1) && (data[47].fvalue < (float)-0.0082885762677)) {
                  if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.1560666561)) {
                    if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.35827046633)) {
                      if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31386581063)) {
                        if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.34276419878)) {
                          result[0] += -0.07667074;
                        } else {
                          if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.83116543293)) {
                            if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.17802235484)) {
                              if ( (data[32].missing != -1) && (data[32].fvalue < (float)3.0815498829)) {
                                result[0] += 0.055651147;
                              } else {
                                result[0] += -0;
                              }
                            } else {
                              if ( (data[70].missing != -1) && (data[70].fvalue < (float)-0.14043554664)) {
                                if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59758293629)) {
                                  result[0] += -0;
                                } else {
                                  result[0] += -0.047563434;
                                }
                              } else {
                                result[0] += -0;
                              }
                            }
                          } else {
                            if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.62001216412)) {
                              result[0] += 0.07986188;
                            } else {
                              result[0] += 0.012368513;
                            }
                          }
                        }
                      } else {
                        result[0] += 0.10162845;
                      }
                    } else {
                      if ( (data[32].missing != -1) && (data[32].fvalue < (float)6.14879179)) {
                        if ( (data[44].missing != -1) && (data[44].fvalue < (float)-0.029784545302)) {
                          result[0] += -0.081050605;
                        } else {
                          if ( (data[54].missing != -1) && (data[54].fvalue < (float)0.079855747521)) {
                            result[0] += 0.029663464;
                          } else {
                            result[0] += -0.004328068;
                          }
                        }
                      } else {
                        result[0] += 0.030601772;
                      }
                    }
                  } else {
                    result[0] += -0.038637754;
                  }
                } else {
                  result[0] += -0.052177995;
                }
              } else {
                if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.0680017471)) {
                  result[0] += 0.06291575;
                } else {
                  result[0] += -0;
                }
              }
            }
          } else {
            result[0] += 0.09880671;
          }
        } else {
          result[0] += -0.08143592;
        }
      }
    } else {
      if ( (data[78].missing != -1) && (data[78].fvalue < (float)3.4584906101)) {
        result[0] += -0.09059372;
      } else {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)0.06673399359)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.08081638813)) {
            if ( (data[45].missing != -1) && (data[45].fvalue < (float)0.8430133462)) {
              result[0] += -0.06037509;
            } else {
              result[0] += 0.012075385;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.39758354425)) {
              result[0] += 0.07081673;
            } else {
              result[0] += 0.002769029;
            }
          }
        } else {
          result[0] += -0.09415845;
        }
      }
    }
  } else {
    if ( (data[45].missing != -1) && (data[45].fvalue < (float)-0.026879794896)) {
      if ( (data[32].missing != -1) && (data[32].fvalue < (float)0.92990243435)) {
        result[0] += -0.09187421;
      } else {
        result[0] += 0.03602361;
      }
    } else {
      if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025424173102)) {
        result[0] += 0.08159995;
      } else {
        if ( (data[71].missing != -1) && (data[71].fvalue < (float)0.87892109156)) {
          result[0] += 0.006635858;
        } else {
          result[0] += -0.056547653;
        }
      }
    }
  }
  if ( (data[71].missing != -1) && (data[71].fvalue < (float)-0.46705591679)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.17688424885)) {
      result[1] += -0.09037234;
    } else {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)1.7314175367)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.62796533108)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.61850941181)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)0.45149809122)) {
              if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59719163179)) {
                if ( (data[37].missing != -1) && (data[37].fvalue < (float)0.61720979214)) {
                  result[1] += 0.043368224;
                } else {
                  result[1] += 0.1203616;
                }
              } else {
                result[1] += 0.008097287;
              }
            } else {
              result[1] += 0.0018424306;
            }
          } else {
            if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.77788865566)) {
              result[1] += -0;
            } else {
              result[1] += -0.029518265;
            }
          }
        } else {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)0.06673399359)) {
            if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.62869435549)) {
              if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31586059928)) {
                result[1] += -0.030572917;
              } else {
                result[1] += 0.0347186;
              }
            } else {
              result[1] += -0.05107287;
            }
          } else {
            result[1] += -0.09909507;
          }
        }
      } else {
        result[1] += -0.10139632;
      }
    }
  } else {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)-0.43788185716)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.6197001338)) {
        if ( (data[58].missing != -1) && (data[58].fvalue < (float)-0.55193799734)) {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.36735785007)) {
            if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.6042920351)) {
              result[1] += -0;
            } else {
              result[1] += 0.07265426;
            }
          } else {
            if ( (data[37].missing != -1) && (data[37].fvalue < (float)1.0937361717)) {
              if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59750467539)) {
                if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.23670496047)) {
                  if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.62006014585)) {
                    result[1] += -0.023366883;
                  } else {
                    if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.041795373)) {
                      if ( (data[35].missing != -1) && (data[35].fvalue < (float)-0.12977306545)) {
                        result[1] += 0.06973211;
                      } else {
                        result[1] += 0.0019855525;
                      }
                    } else {
                      result[1] += -0.0018015736;
                    }
                  }
                } else {
                  result[1] += -0.13287456;
                }
              } else {
                if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60428112745)) {
                  result[1] += -0.014852955;
                } else {
                  if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.71015536785)) {
                    if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.62005096674)) {
                      result[1] += 0.10514729;
                    } else {
                      result[1] += 0.028301492;
                    }
                  } else {
                    result[1] += -0;
                  }
                }
              }
            } else {
              result[1] += -0.08918203;
            }
          }
        } else {
          if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.9311388731)) {
            result[1] += -0;
          } else {
            result[1] += -0.09247791;
          }
        }
      } else {
        if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31361842155)) {
          result[1] += 0.090497285;
        } else {
          result[1] += 0.0014110656;
        }
      }
    } else {
      if ( (data[78].missing != -1) && (data[78].fvalue < (float)3.4584906101)) {
        if ( (data[55].missing != -1) && (data[55].fvalue < (float)7.806274516e-05)) {
          if ( (data[79].missing != -1) && (data[79].fvalue < (float)6.0763492584)) {
            result[1] += 0.095941365;
          } else {
            if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.18107253313)) {
              result[1] += -0.053300004;
            } else {
              result[1] += 0.09084225;
            }
          }
        } else {
          if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.86625015736)) {
            result[1] += 0.05282037;
          } else {
            result[1] += -0.03093117;
          }
        }
      } else {
        result[1] += -0.0868561;
      }
    }
  }
  if ( (data[55].missing != -1) && (data[55].fvalue < (float)1.9582731724)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)-0.44429585338)) {
      if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60363996029)) {
        result[2] += -0.084612906;
      } else {
        result[2] += 0.02669644;
      }
    } else {
      result[2] += -0.09510816;
    }
  } else {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.15619270504)) {
      if ( (data[72].missing != -1) && (data[72].fvalue < (float)-0.11422163248)) {
        result[2] += 0.12342071;
      } else {
        result[2] += 0.017216356;
      }
    } else {
      result[2] += -0.07760999;
    }
  }
  if ( (data[27].missing != -1) && (data[27].fvalue < (float)1.0054787397)) {
    result[3] += -0.09483821;
  } else {
    result[3] += 0.095795795;
  }
  if ( (data[45].missing != -1) && (data[45].fvalue < (float)0.0045417477377)) {
    if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.63134372234)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)2.23818326)) {
        result[4] += -0.08325657;
      } else {
        result[4] += 0.047569964;
      }
    } else {
      result[4] += -0.0951468;
    }
  } else {
    if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.97013407946)) {
      result[4] += 0.09487471;
    } else {
      result[4] += -0.011684251;
    }
  }
  if ( (data[27].missing != -1) && (data[27].fvalue < (float)1.3160247803)) {
    if ( (data[47].missing != -1) && (data[47].fvalue < (float)-0.015711553395)) {
      result[5] += -0.09429319;
    } else {
      if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.62265974283)) {
        result[5] += -0.08276098;
      } else {
        result[5] += 0.02286871;
      }
    }
  } else {
    result[5] += 0.005482049;
  }
  if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.99998575449)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.17688424885)) {
      result[6] += 0.016872594;
    } else {
      result[6] += -0.08397352;
    }
  } else {
    if ( (data[32].missing != -1) && (data[32].fvalue < (float)3.8598051071)) {
      result[6] += -0.09516157;
    } else {
      result[6] += -0.0116209695;
    }
  }
  if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.99998575449)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.42764511704)) {
      result[7] += -0.089192204;
    } else {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.68544656038)) {
        result[7] += 0.07604688;
      } else {
        result[7] += -0.07125742;
      }
    }
  } else {
    result[7] += -0.095173754;
  }
  if ( (data[80].missing != -1) && (data[80].fvalue < (float)9.5720357895)) {
    if ( (data[79].missing != -1) && (data[79].fvalue < (float)6.0763492584)) {
      result[8] += -0.0943455;
    } else {
      result[8] += -0;
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.11647147685)) {
      result[8] += -0;
    } else {
      result[8] += 0.08883086;
    }
  }
  if ( (data[14].missing != -1) && (data[14].fvalue < (float)-0.44441816211)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)3.6675543785)) {
      if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.48187279701)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)-0.0058834324591)) {
          result[9] += 0.07188039;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.50391459465)) {
            result[9] += -0.013653013;
          } else {
            result[9] += 0.01374021;
          }
        }
      } else {
        if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.22036042809)) {
          result[9] += -0.08063571;
        } else {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.17688424885)) {
            result[9] += -0.08459146;
          } else {
            if ( (data[56].missing != -1) && (data[56].fvalue < (float)-0.16032426059)) {
              if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31392768025)) {
                if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31448435783)) {
                  if ( (data[86].missing != -1) && (data[86].fvalue < (float)1)) {
                    result[9] += 0.03496681;
                  } else {
                    result[9] += -0.047287192;
                  }
                } else {
                  result[9] += 0.12368182;
                }
              } else {
                result[9] += -0.05657111;
              }
            } else {
              result[9] += 0.100456096;
            }
          }
        }
      }
    } else {
      result[9] += 0.081557356;
    }
  } else {
    if ( (data[79].missing != -1) && (data[79].fvalue < (float)2.4900910854)) {
      result[9] += -0.09507485;
    } else {
      result[9] += -0.036679704;
    }
  }
  if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.99998575449)) {
    if ( (data[20].missing != -1) && (data[20].fvalue < (float)-0.53552961349)) {
      result[10] += -0.079839416;
    } else {
      result[10] += 0.08859595;
    }
  } else {
    if ( (data[32].missing != -1) && (data[32].fvalue < (float)3.8598051071)) {
      result[10] += -0.09425298;
    } else {
      result[10] += -0.016163642;
    }
  }
  if ( (data[84].missing != -1) && (data[84].fvalue < (float)1)) {
    if ( (data[42].missing != -1) && (data[42].fvalue < (float)-0.010497917421)) {
      if ( (data[38].missing != -1) && (data[38].fvalue < (float)1.2894229889)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.071803093)) {
          if ( (data[86].missing != -1) && (data[86].fvalue < (float)1)) {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.61771321297)) {
              if ( (data[61].missing != -1) && (data[61].fvalue < (float)-0.15738289058)) {
                if ( (data[69].missing != -1) && (data[69].fvalue < (float)-0.38432779908)) {
                  result[11] += 0.11538018;
                } else {
                  result[11] += 0.00012707597;
                }
              } else {
                result[11] += -0.003618664;
              }
            } else {
              result[11] += -0.03656579;
            }
          } else {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.51605558395)) {
              if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.93369174)) {
                if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.81487703323)) {
                  result[11] += 0.022734897;
                } else {
                  result[11] += -0.013716709;
                }
              } else {
                result[11] += -0.08322858;
              }
            } else {
              if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.83116543293)) {
                if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.62005215883)) {
                  result[11] += 0.0016744608;
                } else {
                  result[11] += 0.05578098;
                }
              } else {
                if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.44837236404)) {
                  result[11] += -0.0469506;
                } else {
                  if ( (data[32].missing != -1) && (data[32].fvalue < (float)5.1416378021)) {
                    result[11] += 0.014099825;
                  } else {
                    result[11] += -0.015227456;
                  }
                }
              }
            }
          }
        } else {
          if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.76508826017)) {
            if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59750467539)) {
              if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.62007111311)) {
                result[11] += -0;
              } else {
                if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.62002635002)) {
                  result[11] += 0.08152001;
                } else {
                  result[11] += 0.00067244255;
                }
              }
            } else {
              if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31386581063)) {
                result[11] += -0.052617744;
              } else {
                result[11] += 0.0008827151;
              }
            }
          } else {
            result[11] += 0.12800613;
          }
        }
      } else {
        result[11] += -0.087338194;
      }
    } else {
      if ( (data[80].missing != -1) && (data[80].fvalue < (float)-0.37019988894)) {
        if ( (data[43].missing != -1) && (data[43].fvalue < (float)-0.13308440149)) {
          if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.30208304524)) {
            if ( (data[55].missing != -1) && (data[55].fvalue < (float)-0.018760954961)) {
              result[11] += 0.09363326;
            } else {
              result[11] += 0.03302047;
            }
          } else {
            result[11] += 0.0049093887;
          }
        } else {
          if ( (data[86].missing != -1) && (data[86].fvalue < (float)1)) {
            result[11] += -0;
          } else {
            if ( (data[43].missing != -1) && (data[43].fvalue < (float)0.31898909807)) {
              result[11] += -0;
            } else {
              if ( (data[73].missing != -1) && (data[73].fvalue < (float)1.0606098175)) {
                result[11] += 0.06604894;
              } else {
                result[11] += -0;
              }
            }
          }
        }
      } else {
        if ( (data[61].missing != -1) && (data[61].fvalue < (float)-0.15058320761)) {
          result[11] += -0.08126462;
        } else {
          result[11] += -0;
        }
      }
    }
  } else {
    if ( (data[80].missing != -1) && (data[80].fvalue < (float)-0.43852174282)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.63977259398)) {
        if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31466990709)) {
          if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.82510781288)) {
            result[11] += -0.031435706;
          } else {
            result[11] += 0.02064334;
          }
        } else {
          result[11] += -0.07388227;
        }
      } else {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.1678738594)) {
          result[11] += 0.07434833;
        } else {
          result[11] += -0;
        }
      }
    } else {
      if ( (data[78].missing != -1) && (data[78].fvalue < (float)3.4584906101)) {
        result[11] += -0.093826644;
      } else {
        result[11] += 0.0051865615;
      }
    }
  }
  if ( (data[1].missing != -1) && (data[1].fvalue < (float)1.1286532879)) {
    if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.7954890728)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)-0.44441816211)) {
        if ( (data[32].missing != -1) && (data[32].fvalue < (float)2.669532299)) {
          if ( (data[80].missing != -1) && (data[80].fvalue < (float)0.23471385241)) {
            result[12] += -0.072085634;
          } else {
            result[12] += 0.05197569;
          }
        } else {
          result[12] += 0.09389079;
        }
      } else {
        result[12] += -0.0710225;
      }
    } else {
      if ( (data[79].missing != -1) && (data[79].fvalue < (float)6.1137475967)) {
        if ( (data[42].missing != -1) && (data[42].fvalue < (float)-0.0095211574808)) {
          result[12] += -0.0942065;
        } else {
          if ( (data[32].missing != -1) && (data[32].fvalue < (float)0.8841226697)) {
            result[12] += 0.039641723;
          } else {
            result[12] += -0.08251611;
          }
        }
      } else {
        result[12] += 0.013721525;
      }
    }
  } else {
    if ( (data[79].missing != -1) && (data[79].fvalue < (float)-0.40983131528)) {
      if ( (data[84].missing != -1) && (data[84].fvalue < (float)1)) {
        result[12] += -0.07643094;
      } else {
        result[12] += 0.012898361;
      }
    } else {
      result[12] += 0.14552473;
    }
  }
  if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.18199364841)) {
    if ( (data[80].missing != -1) && (data[80].fvalue < (float)-0.37019988894)) {
      if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025418607518)) {
        if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.4555876255)) {
          if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.56359541416)) {
            result[0] += -0.018652763;
          } else {
            if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.12229329348)) {
              result[0] += 0.046187244;
            } else {
              result[0] += -0;
            }
          }
        } else {
          if ( (data[71].missing != -1) && (data[71].fvalue < (float)-0.046441379935)) {
            result[0] += 0.09613435;
          } else {
            result[0] += -0;
          }
        }
      } else {
        if ( (data[58].missing != -1) && (data[58].fvalue < (float)-0.44744732976)) {
          if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.024123216048)) {
            if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.0078816348687)) {
              if ( (data[31].missing != -1) && (data[31].fvalue < (float)-0.54701089859)) {
                if ( (data[33].missing != -1) && (data[33].fvalue < (float)-0.65017938614)) {
                  result[0] += 0.113512315;
                } else {
                  if ( (data[61].missing != -1) && (data[61].fvalue < (float)-0.16623981297)) {
                    result[0] += -0.020981811;
                  } else {
                    result[0] += 0.08777647;
                  }
                }
              } else {
                result[0] += -0;
              }
            } else {
              result[0] += -0;
            }
          } else {
            if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.93103021383)) {
              if ( (data[47].missing != -1) && (data[47].fvalue < (float)-0.016198860481)) {
                result[0] += -0.10439924;
              } else {
                result[0] += -0;
              }
            } else {
              if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.6200453043)) {
                if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60422152281)) {
                  if ( (data[32].missing != -1) && (data[32].fvalue < (float)5.8283338547)) {
                    if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60426217318)) {
                      if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60427820683)) {
                        if ( (data[71].missing != -1) && (data[71].fvalue < (float)-0.38767385483)) {
                          result[0] += 0.07221533;
                        } else {
                          if ( (data[43].missing != -1) && (data[43].fvalue < (float)0.14091680944)) {
                            result[0] += -0;
                          } else {
                            if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62021076679)) {
                              result[0] += -0;
                            } else {
                              result[0] += 0.025163667;
                            }
                          }
                        }
                      } else {
                        result[0] += -0.046762194;
                      }
                    } else {
                      result[0] += 0.055960234;
                    }
                  } else {
                    result[0] += -0.010121335;
                  }
                } else {
                  result[0] += 0.089434445;
                }
              } else {
                if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.75656324625)) {
                  if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.15498234332)) {
                    if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59758293629)) {
                      if ( (data[32].missing != -1) && (data[32].fvalue < (float)3.2646687031)) {
                        result[0] += 0.04832967;
                      } else {
                        if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60363996029)) {
                          result[0] += -0.026912067;
                        } else {
                          result[0] += 0.02971509;
                        }
                      }
                    } else {
                      if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60252219439)) {
                        result[0] += -0.061900288;
                      } else {
                        result[0] += -0;
                      }
                    }
                  } else {
                    result[0] += 0.03765979;
                  }
                } else {
                  result[0] += -0.05736792;
                }
              }
            }
          }
        } else {
          result[0] += -0.079031795;
        }
      }
    } else {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)3.7342278957)) {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)-0.43627506495)) {
          if ( (data[45].missing != -1) && (data[45].fvalue < (float)0.55523556471)) {
            result[0] += -0.09392178;
          } else {
            result[0] += -0.024206694;
          }
        } else {
          result[0] += -0;
        }
      } else {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.039243385196)) {
          result[0] += 0.0138574075;
        } else {
          if ( (data[71].missing != -1) && (data[71].fvalue < (float)0.61064589024)) {
            result[0] += -0.012102544;
          } else {
            result[0] += -0;
          }
        }
      }
    }
  } else {
    if ( (data[50].missing != -1) && (data[50].fvalue < (float)0.10984566063)) {
      if ( (data[27].missing != -1) && (data[27].fvalue < (float)1.3814028502)) {
        if ( (data[32].missing != -1) && (data[32].fvalue < (float)0.92990243435)) {
          if ( (data[82].missing != -1) && (data[82].fvalue < (float)1)) {
            result[0] += -0.16269138;
          } else {
            result[0] += -0.09211299;
          }
        } else {
          result[0] += 0.049079053;
        }
      } else {
        result[0] += 0.042917717;
      }
    } else {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)0.74213886261)) {
        result[0] += -0;
      } else {
        result[0] += 0.07821676;
      }
    }
  }
  if ( (data[14].missing != -1) && (data[14].fvalue < (float)-0.43788185716)) {
    if ( (data[37].missing != -1) && (data[37].fvalue < (float)0.61720979214)) {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.0699566603)) {
        if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.8352009058)) {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.58649593592)) {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.082774102688)) {
              result[1] += -0.0519835;
            } else {
              result[1] += 0.016694129;
            }
          } else {
            result[1] += -0.11254401;
          }
        } else {
          result[1] += -0.09864311;
        }
      } else {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.6996152401)) {
          result[1] += 0.026652168;
        } else {
          result[1] += -0;
        }
      }
    } else {
      if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59719163179)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.17023339868)) {
          if ( (data[55].missing != -1) && (data[55].fvalue < (float)-0.1031159237)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.61960500479)) {
              if ( (data[32].missing != -1) && (data[32].fvalue < (float)2.4864132404)) {
                result[1] += 0.19393347;
              } else {
                result[1] += 0.081870735;
              }
            } else {
              if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.20401591063)) {
                if ( (data[69].missing != -1) && (data[69].fvalue < (float)-0.39887568355)) {
                  result[1] += 0.009584972;
                } else {
                  result[1] += -0.09793445;
                }
              } else {
                result[1] += 0.048013516;
              }
            }
          } else {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.16122038662)) {
              result[1] += 0.05640737;
            } else {
              if ( (data[32].missing != -1) && (data[32].fvalue < (float)2.7153120041)) {
                result[1] += 0.015884373;
              } else {
                if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.23670496047)) {
                  if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.63551598787)) {
                    result[1] += -0.00963891;
                  } else {
                    result[1] += 0.02077376;
                  }
                } else {
                  result[1] += -0.059839446;
                }
              }
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62019306421)) {
            result[1] += -0.06621037;
          } else {
            result[1] += 0.012131838;
          }
        }
      } else {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.08081638813)) {
          if ( (data[52].missing != -1) && (data[52].fvalue < (float)0.0052853799425)) {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.5222806931)) {
              result[1] += -0.015814884;
            } else {
              result[1] += -0.09106914;
            }
          } else {
            result[1] += 0.009285204;
          }
        } else {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)0.45149809122)) {
            result[1] += 0.075162396;
          } else {
            if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.76508826017)) {
              result[1] += 0.046223164;
            } else {
              result[1] += -0.0798973;
            }
          }
        }
      }
    }
  } else {
    if ( (data[78].missing != -1) && (data[78].fvalue < (float)3.4584906101)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62019306421)) {
        if ( (data[30].missing != -1) && (data[30].fvalue < (float)-1.0261459351)) {
          result[1] += 0.032241844;
        } else {
          result[1] += -0.028738515;
        }
      } else {
        if ( (data[79].missing != -1) && (data[79].fvalue < (float)6.0763492584)) {
          result[1] += 0.095645085;
        } else {
          if ( (data[45].missing != -1) && (data[45].fvalue < (float)-0.079303629696)) {
            result[1] += 0.08967059;
          } else {
            result[1] += -0.046452425;
          }
        }
      }
    } else {
      result[1] += -0.08556958;
    }
  }
  if ( (data[78].missing != -1) && (data[78].fvalue < (float)3.4584906101)) {
    result[2] += -0.093976595;
  } else {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.15619270504)) {
      if ( (data[17].missing != -1) && (data[17].fvalue < (float)1.0286098719)) {
        result[2] += 0.09990024;
      } else {
        if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.45484149456)) {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.71015536785)) {
            result[2] += 0.062564075;
          } else {
            result[2] += -0;
          }
        } else {
          result[2] += -0.074408986;
        }
      }
    } else {
      result[2] += -0.08374677;
    }
  }
  if ( (data[27].missing != -1) && (data[27].fvalue < (float)1.0054787397)) {
    result[3] += -0.094642244;
  } else {
    result[3] += 0.095385134;
  }
  if ( (data[89].missing != -1) && (data[89].fvalue < (float)1)) {
    if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.63134372234)) {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.0699566603)) {
        result[4] += -0.08107084;
      } else {
        result[4] += 0.0538848;
      }
    } else {
      if ( (data[87].missing != -1) && (data[87].fvalue < (float)1)) {
        result[4] += -0.095013596;
      } else {
        result[4] += -0.012196205;
      }
    }
  } else {
    result[4] += 0.09343501;
  }
  if ( (data[86].missing != -1) && (data[86].fvalue < (float)1)) {
    if ( (data[79].missing != -1) && (data[79].fvalue < (float)2.4900910854)) {
      result[5] += -0.09506212;
    } else {
      if ( (data[71].missing != -1) && (data[71].fvalue < (float)-0.27132934332)) {
        result[5] += -0.071062356;
      } else {
        result[5] += 0.029392274;
      }
    }
  } else {
    if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.22036042809)) {
      result[5] += -0.08416802;
    } else {
      if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025336515158)) {
        result[5] += -0.03902535;
      } else {
        result[5] += 0.07641307;
      }
    }
  }
  if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.99998575449)) {
    if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025511831045)) {
      result[6] += 0.010132221;
    } else {
      result[6] += -0.08327877;
    }
  } else {
    result[6] += -0.09188114;
  }
  if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.99998575449)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.52890723944)) {
      result[7] += -0.07307838;
    } else {
      result[7] += 0.053623848;
    }
  } else {
    result[7] += -0.09504196;
  }
  if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.83832764626)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.61931306124)) {
      result[8] += -0.08103059;
    } else {
      result[8] += 0.08438395;
    }
  } else {
    result[8] += -0.095053;
  }
  if ( (data[14].missing != -1) && (data[14].fvalue < (float)-0.44441816211)) {
    if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.81956714392)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.1565849781)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.5824829936)) {
          if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.82510781288)) {
            result[9] += 0.07506498;
          } else {
            result[9] += 0.016189242;
          }
        } else {
          result[9] += -0.07619113;
        }
      } else {
        result[9] += 0.108424835;
      }
    } else {
      if ( (data[80].missing != -1) && (data[80].fvalue < (float)-0.43852174282)) {
        if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.77628856897)) {
          result[9] += -0.071314394;
        } else {
          if ( (data[56].missing != -1) && (data[56].fvalue < (float)-0.16032426059)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.62003540993)) {
              if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.64759612083)) {
                if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.55644726753)) {
                  if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.71015536785)) {
                    result[9] += -0.039946318;
                  } else {
                    result[9] += 0.060353275;
                  }
                } else {
                  result[9] += 0.06288314;
                }
              } else {
                result[9] += -0.027284222;
              }
            } else {
              result[9] += -0.03547335;
            }
          } else {
            result[9] += 0.08698996;
          }
        }
      } else {
        result[9] += -0.082394555;
      }
    }
  } else {
    if ( (data[87].missing != -1) && (data[87].fvalue < (float)1)) {
      result[9] += -0.0949265;
    } else {
      result[9] += -0.019477557;
    }
  }
  if ( (data[23].missing != -1) && (data[23].fvalue < (float)10.179190636)) {
    if ( (data[32].missing != -1) && (data[32].fvalue < (float)3.8598051071)) {
      result[10] += -0.09404188;
    } else {
      result[10] += -0.010184127;
    }
  } else {
    result[10] += 0.09112441;
  }
  if ( (data[84].missing != -1) && (data[84].fvalue < (float)1)) {
    if ( (data[42].missing != -1) && (data[42].fvalue < (float)-0.010497917421)) {
      if ( (data[33].missing != -1) && (data[33].fvalue < (float)1.3602274656)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.58649593592)) {
          if ( (data[86].missing != -1) && (data[86].fvalue < (float)1)) {
            if ( (data[61].missing != -1) && (data[61].fvalue < (float)-0.15738289058)) {
              if ( (data[69].missing != -1) && (data[69].fvalue < (float)-0.38432779908)) {
                result[11] += 0.09973208;
              } else {
                result[11] += -0;
              }
            } else {
              result[11] += -0.024320563;
            }
          } else {
            if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.9311388731)) {
              if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59280967712)) {
                result[11] += -0;
              } else {
                result[11] += -0.02707594;
              }
            } else {
              result[11] += -0.08952134;
            }
          }
        } else {
          if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.35827046633)) {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.68544656038)) {
              result[11] += -0.027118022;
            } else {
              if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.83116543293)) {
                if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.7546197772)) {
                  result[11] += -0;
                } else {
                  result[11] += 0.07315961;
                }
              } else {
                if ( (data[53].missing != -1) && (data[53].fvalue < (float)-0.26050439477)) {
                  if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59773939848)) {
                    result[11] += 0.08129887;
                  } else {
                    if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62013185024)) {
                      result[11] += 0.027291048;
                    } else {
                      result[11] += -0.04071319;
                    }
                  }
                } else {
                  result[11] += -0.034650262;
                }
              }
            }
          } else {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.0563672781)) {
              if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.85385841131)) {
                if ( (data[33].missing != -1) && (data[33].fvalue < (float)-0.48886889219)) {
                  result[11] += -0;
                } else {
                  result[11] += 0.07745807;
                }
              } else {
                result[11] += -0.029528966;
              }
            } else {
              if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.1251373291)) {
                result[11] += 0.10002942;
              } else {
                result[11] += 0.017858159;
              }
            }
          }
        }
      } else {
        result[11] += -0.0853831;
      }
    } else {
      if ( (data[43].missing != -1) && (data[43].fvalue < (float)-0.13308440149)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.52279245853)) {
          result[11] += -0.03444529;
        } else {
          if ( (data[37].missing != -1) && (data[37].fvalue < (float)0.7573646307)) {
            result[11] += 0.09099463;
          } else {
            result[11] += 0.016346589;
          }
        }
      } else {
        if ( (data[80].missing != -1) && (data[80].fvalue < (float)-0.3703558743)) {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.5222806931)) {
            result[11] += -0.0030895919;
          } else {
            result[11] += 0.06421084;
          }
        } else {
          result[11] += -0.07195343;
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.62014216185)) {
      if ( (data[15].missing != -1) && (data[15].fvalue < (float)1.8430496454)) {
        if ( (data[82].missing != -1) && (data[82].fvalue < (float)1)) {
          if ( (data[37].missing != -1) && (data[37].fvalue < (float)1.0376743078)) {
            if ( (data[83].missing != -1) && (data[83].fvalue < (float)1)) {
              result[11] += 0.011526107;
            } else {
              result[11] += -0.03588667;
            }
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.016017412767)) {
              result[11] += 0.07459114;
            } else {
              result[11] += -0;
            }
          }
        } else {
          result[11] += -0.07532489;
        }
      } else {
        result[11] += 0.08881417;
      }
    } else {
      if ( (data[40].missing != -1) && (data[40].fvalue < (float)1.5676244497)) {
        result[11] += -0.092747234;
      } else {
        result[11] += -0.005572595;
      }
    }
  }
  if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.024974752218)) {
    if ( (data[79].missing != -1) && (data[79].fvalue < (float)6.1137475967)) {
      if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.83832764626)) {
        if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025511831045)) {
          result[12] += 0.033250198;
        } else {
          result[12] += -0.07631826;
        }
      } else {
        if ( (data[75].missing != -1) && (data[75].fvalue < (float)0.10010892153)) {
          result[12] += -0.094998226;
        } else {
          result[12] += -0.023477254;
        }
      }
    } else {
      result[12] += 0.011740328;
    }
  } else {
    if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.68042695522)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)-1.2706193924)) {
        result[12] += 0.014743763;
      } else {
        if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.631049335)) {
          result[12] += -0.0022847427;
        } else {
          result[12] += -0.08783036;
        }
      }
    } else {
      if ( (data[37].missing != -1) && (data[37].fvalue < (float)0.61720979214)) {
        result[12] += 0.112483494;
      } else {
        result[12] += -0;
      }
    }
  }
  if ( (data[12].missing != -1) && (data[12].fvalue < (float)-0.0058834324591)) {
    if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.02535321191)) {
      if ( (data[36].missing != -1) && (data[36].fvalue < (float)-0.68227016926)) {
        if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.80237007141)) {
          if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59852188826)) {
            result[0] += 0.0006995936;
          } else {
            result[0] += 0.045093592;
          }
        } else {
          if ( (data[40].missing != -1) && (data[40].fvalue < (float)0.11706339568)) {
            result[0] += -0.032952942;
          } else {
            result[0] += 0.028671274;
          }
        }
      } else {
        result[0] += 0.09288154;
      }
    } else {
      if ( (data[36].missing != -1) && (data[36].fvalue < (float)-0.63763225079)) {
        if ( (data[36].missing != -1) && (data[36].fvalue < (float)-0.68227016926)) {
          if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.29869630933)) {
            if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.69806528091)) {
              if ( (data[61].missing != -1) && (data[61].fvalue < (float)-0.16675952077)) {
                if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62012988329)) {
                  if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.49173647165)) {
                    if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.79142647982)) {
                      if ( (data[90].missing != -1) && (data[90].fvalue < (float)1)) {
                        result[0] += 0.007113416;
                      } else {
                        result[0] += -0.018776882;
                      }
                    } else {
                      result[0] += -0.06526318;
                    }
                  } else {
                    if ( (data[53].missing != -1) && (data[53].fvalue < (float)-0.13125431538)) {
                      result[0] += 0.03627783;
                    } else {
                      if ( (data[46].missing != -1) && (data[46].fvalue < (float)1.0866270065)) {
                        result[0] += -0.018540092;
                      } else {
                        if ( (data[73].missing != -1) && (data[73].fvalue < (float)1.0611419678)) {
                          result[0] += 0.02529119;
                        } else {
                          result[0] += -0.0021237384;
                        }
                      }
                    }
                  }
                } else {
                  if ( (data[52].missing != -1) && (data[52].fvalue < (float)0.018169729039)) {
                    if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.85384505987)) {
                      if ( (data[37].missing != -1) && (data[37].fvalue < (float)1.0096433163)) {
                        result[0] += 0.027114375;
                      } else {
                        result[0] += -0;
                      }
                    } else {
                      result[0] += -0;
                    }
                  } else {
                    result[0] += 0.07574146;
                  }
                }
              } else {
                result[0] += -0.084233806;
              }
            } else {
              if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.28573852777)) {
                result[0] += -0.00582154;
              } else {
                if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.63551598787)) {
                  result[0] += -0;
                } else {
                  if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62016659975)) {
                    result[0] += 0.0042709447;
                  } else {
                    result[0] += 0.06344709;
                  }
                }
              }
            }
          } else {
            result[0] += 0.08774199;
          }
        } else {
          result[0] += 0.08451311;
        }
      } else {
        if ( (data[55].missing != -1) && (data[55].fvalue < (float)-0.11085164547)) {
          result[0] += -0.13893168;
        } else {
          result[0] += 0.014157939;
        }
      }
    }
  } else {
    if ( (data[78].missing != -1) && (data[78].fvalue < (float)3.4584906101)) {
      if ( (data[50].missing != -1) && (data[50].fvalue < (float)0.032075706869)) {
        result[0] += -0.09476883;
      } else {
        result[0] += -0;
      }
    } else {
      if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025453392416)) {
        if ( (data[93].missing != -1) && (data[93].fvalue < (float)1)) {
          if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59171414375)) {
            result[0] += 0.02868408;
          } else {
            result[0] += -0.01197443;
          }
        } else {
          result[0] += 0.08220709;
        }
      } else {
        if ( (data[76].missing != -1) && (data[76].fvalue < (float)1.2036006451)) {
          if ( (data[49].missing != -1) && (data[49].fvalue < (float)-0.0010379530722)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.39758354425)) {
              result[0] += -0;
            } else {
              if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62017637491)) {
                result[0] += -0.078984514;
              } else {
                result[0] += -0;
              }
            }
          } else {
            result[0] += 0.049416225;
          }
        } else {
          result[0] += -0.09436048;
        }
      }
    }
  }
  if ( (data[44].missing != -1) && (data[44].fvalue < (float)-0.038927663118)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.51698690653)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.6197001338)) {
        if ( (data[86].missing != -1) && (data[86].fvalue < (float)1)) {
          if ( (data[80].missing != -1) && (data[80].fvalue < (float)0.33438891172)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62019306421)) {
              if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.57866376638)) {
                result[1] += -0;
              } else {
                result[1] += -0.09507131;
              }
            } else {
              if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.6755399704)) {
                if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.16375462711)) {
                  result[1] += -0;
                } else {
                  result[1] += 0.07413428;
                }
              } else {
                result[1] += -0.05053597;
              }
            }
          } else {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.74638354778)) {
              result[1] += 0.07190035;
            } else {
              result[1] += -0;
            }
          }
        } else {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.18137912452)) {
            if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.54161769152)) {
              result[1] += 0.06403766;
            } else {
              result[1] += 0.0036535405;
            }
          } else {
            if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.15498234332)) {
              if ( (data[54].missing != -1) && (data[54].fvalue < (float)-0.039086114615)) {
                result[1] += 0.049909946;
              } else {
                if ( (data[32].missing != -1) && (data[32].fvalue < (float)4.7753996849)) {
                  if ( (data[34].missing != -1) && (data[34].fvalue < (float)-0.20948132873)) {
                    if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.23670496047)) {
                      result[1] += 0.013935341;
                    } else {
                      result[1] += -0.016324777;
                    }
                  } else {
                    result[1] += -0.08633627;
                  }
                } else {
                  if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60417157412)) {
                    result[1] += -0;
                  } else {
                    result[1] += 0.039378125;
                  }
                }
              }
            } else {
              result[1] += -0.08777791;
            }
          }
        }
      } else {
        if ( (data[69].missing != -1) && (data[69].fvalue < (float)-0.39758071303)) {
          if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31386581063)) {
            if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60252219439)) {
              result[1] += 0.043009233;
            } else {
              if ( (data[69].missing != -1) && (data[69].fvalue < (float)-0.39887568355)) {
                if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.82802081108)) {
                  result[1] += -0;
                } else {
                  result[1] += 0.035594027;
                }
              } else {
                result[1] += -0.04410004;
              }
            }
          } else {
            result[1] += -0.08437875;
          }
        } else {
          if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.63551598787)) {
            result[1] += 0.09200358;
          } else {
            result[1] += 0.015567757;
          }
        }
      }
    } else {
      result[1] += -0.09369811;
    }
  } else {
    if ( (data[78].missing != -1) && (data[78].fvalue < (float)3.4584906101)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.62009418011)) {
        if ( (data[75].missing != -1) && (data[75].fvalue < (float)0.058391608298)) {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.62646782398)) {
            result[1] += 0.044655394;
          } else {
            result[1] += -0;
          }
        } else {
          result[1] += -0.03566235;
        }
      } else {
        result[1] += 0.09415798;
      }
    } else {
      result[1] += -0.083753265;
    }
  }
  if ( (data[87].missing != -1) && (data[87].fvalue < (float)1)) {
    if ( (data[80].missing != -1) && (data[80].fvalue < (float)9.5720357895)) {
      result[2] += -0.09498076;
    } else {
      result[2] += -0;
    }
  } else {
    if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.02535321191)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.71015536785)) {
        result[2] += 0.076251335;
      } else {
        result[2] += -0;
      }
    } else {
      result[2] += -0.07147627;
    }
  }
  if ( (data[27].missing != -1) && (data[27].fvalue < (float)1.0054787397)) {
    result[3] += -0.094408505;
  } else {
    result[3] += 0.09498064;
  }
  if ( (data[89].missing != -1) && (data[89].fvalue < (float)1)) {
    if ( (data[30].missing != -1) && (data[30].fvalue < (float)-1.2213975191)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.61983728409)) {
        result[4] += 0.06832757;
      } else {
        result[4] += -0.07895755;
      }
    } else {
      result[4] += -0.09360428;
    }
  } else {
    result[4] += 0.09274143;
  }
  if ( (data[27].missing != -1) && (data[27].fvalue < (float)1.3160247803)) {
    if ( (data[79].missing != -1) && (data[79].fvalue < (float)2.4900910854)) {
      if ( (data[32].missing != -1) && (data[32].fvalue < (float)3.2646687031)) {
        result[5] += -0.09358761;
      } else {
        result[5] += -0.025867494;
      }
    } else {
      if ( (data[54].missing != -1) && (data[54].fvalue < (float)-0.027970723808)) {
        result[5] += -0.04139664;
      } else {
        result[5] += 0.005971148;
      }
    }
  } else {
    result[5] += -0;
  }
  if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.99998575449)) {
    if ( (data[22].missing != -1) && (data[22].fvalue < (float)-0.55805647373)) {
      result[6] += 0.011990834;
    } else {
      result[6] += -0.080719694;
    }
  } else {
    if ( (data[32].missing != -1) && (data[32].fvalue < (float)2.4406335354)) {
      result[6] += -0.093494736;
    } else {
      result[6] += -0.041193426;
    }
  }
  if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.99998575449)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.61777055264)) {
      result[7] += -0.07412969;
    } else {
      result[7] += 0.05154179;
    }
  } else {
    result[7] += -0.094886646;
  }
  if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.99998575449)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.61931306124)) {
      result[8] += -0.07851798;
    } else {
      result[8] += 0.08096281;
    }
  } else {
    result[8] += -0.09490424;
  }
  if ( (data[14].missing != -1) && (data[14].fvalue < (float)-0.44441816211)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)3.6675543785)) {
      if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.48187279701)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.0517596006)) {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)-0.3027947247)) {
            result[9] += 0.048889905;
          } else {
            result[9] += -0.0075371037;
          }
        } else {
          result[9] += 0.14571488;
        }
      } else {
        if ( (data[53].missing != -1) && (data[53].fvalue < (float)-0.26605242491)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.17023339868)) {
            result[9] += -0.07952783;
          } else {
            if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.12229329348)) {
              result[9] += -0.0497919;
            } else {
              if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.6194216013)) {
                result[9] += 0.07605937;
              } else {
                result[9] += -0.0027508168;
              }
            }
          }
        } else {
          if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.43870261312)) {
            result[9] += 0.11289757;
          } else {
            if ( (data[53].missing != -1) && (data[53].fvalue < (float)-0.23778165877)) {
              result[9] += -0.07838346;
            } else {
              result[9] += -0;
            }
          }
        }
      }
    } else {
      result[9] += 0.07930564;
    }
  } else {
    if ( (data[87].missing != -1) && (data[87].fvalue < (float)1)) {
      result[9] += -0.094745964;
    } else {
      result[9] += -0.01281357;
    }
  }
  if ( (data[23].missing != -1) && (data[23].fvalue < (float)10.179190636)) {
    if ( (data[32].missing != -1) && (data[32].fvalue < (float)3.8598051071)) {
      result[10] += -0.09368494;
    } else {
      result[10] += -0.006566255;
    }
  } else {
    result[10] += 0.09027566;
  }
  if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.18199364841)) {
    if ( (data[36].missing != -1) && (data[36].fvalue < (float)-0.61669498682)) {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)-0.53552961349)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.60121154785)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.53573900461)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.03723815456)) {
              if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.7546197772)) {
                if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.93369174)) {
                  if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.17023339868)) {
                    result[11] += -0.01613357;
                  } else {
                    result[11] += 0.034407362;
                  }
                } else {
                  if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.51605558395)) {
                    if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.77148842812)) {
                      result[11] += -0.083087474;
                    } else {
                      result[11] += -0;
                    }
                  } else {
                    if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.9311388731)) {
                      result[11] += -0.05915611;
                    } else {
                      if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60419660807)) {
                        result[11] += -0;
                      } else {
                        result[11] += 0.0478189;
                      }
                    }
                  }
                }
              } else {
                if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.55644726753)) {
                  if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.80237007141)) {
                    if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.63046061993)) {
                      result[11] += 0.053894233;
                    } else {
                      result[11] += -0.0070427377;
                    }
                  } else {
                    if ( (data[34].missing != -1) && (data[34].fvalue < (float)-0.20994369686)) {
                      result[11] += 0.09995121;
                    } else {
                      result[11] += 0.012138968;
                    }
                  }
                } else {
                  if ( (data[32].missing != -1) && (data[32].fvalue < (float)4.3176026344)) {
                    result[11] += -0.033821143;
                  } else {
                    if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.63551598787)) {
                      if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.62010025978)) {
                        result[11] += -0;
                      } else {
                        result[11] += 0.072285414;
                      }
                    } else {
                      if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60414910316)) {
                        if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60421293974)) {
                          result[11] += -0;
                        } else {
                          result[11] += -0.04520145;
                        }
                      } else {
                        result[11] += 0.021288434;
                      }
                    }
                  }
                }
              }
            } else {
              if ( (data[71].missing != -1) && (data[71].fvalue < (float)-0.13326488435)) {
                result[11] += 0.07462245;
              } else {
                if ( (data[74].missing != -1) && (data[74].fvalue < (float)1.0098451376)) {
                  if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31154632568)) {
                    result[11] += -0;
                  } else {
                    result[11] += 0.03472758;
                  }
                } else {
                  result[11] += -0;
                }
              }
            }
          } else {
            result[11] += -0.07331844;
          }
        } else {
          result[11] += -0.08089311;
        }
      } else {
        result[11] += -0.07286694;
      }
    } else {
      if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025296164677)) {
        if ( (data[71].missing != -1) && (data[71].fvalue < (float)-0.13326488435)) {
          result[11] += -0.08139891;
        } else {
          result[11] += 0.017082063;
        }
      } else {
        if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.93103021383)) {
          result[11] += 0.08948592;
        } else {
          if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.021068219095)) {
            result[11] += -0.034022577;
          } else {
            result[11] += 0.06732384;
          }
        }
      }
    }
  } else {
    if ( (data[13].missing != -1) && (data[13].fvalue < (float)-0.3027947247)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.62911725044)) {
        result[11] += -0.03321611;
      } else {
        if ( (data[56].missing != -1) && (data[56].fvalue < (float)-0.15530490875)) {
          result[11] += 0.082980655;
        } else {
          result[11] += -0;
        }
      }
    } else {
      if ( (data[42].missing != -1) && (data[42].fvalue < (float)-0.010524965823)) {
        result[11] += -0.092497416;
      } else {
        result[11] += -0.0037583148;
      }
    }
  }
  if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025232160464)) {
    if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.83832764626)) {
      if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025511831045)) {
        result[12] += 0.029407239;
      } else {
        result[12] += -0.07344589;
      }
    } else {
      if ( (data[42].missing != -1) && (data[42].fvalue < (float)-0.010372631252)) {
        result[12] += -0.093296915;
      } else {
        result[12] += -0.006982773;
      }
    }
  } else {
    if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.0699566603)) {
      if ( (data[37].missing != -1) && (data[37].fvalue < (float)0.61720979214)) {
        result[12] += 0.09736301;
      } else {
        if ( (data[86].missing != -1) && (data[86].fvalue < (float)1)) {
          result[12] += 0.039731763;
        } else {
          result[12] += -0.073529;
        }
      }
    } else {
      if ( (data[44].missing != -1) && (data[44].fvalue < (float)0.065898813307)) {
        result[12] += -0.088003896;
      } else {
        result[12] += -0.012572713;
      }
    }
  }
  if ( (data[82].missing != -1) && (data[82].fvalue < (float)1)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.2629079819)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.59183168411)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.35428348184)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)-1.2706193924)) {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)-2.2394132614)) {
              result[0] += 0.05521935;
            } else {
              if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31460806727)) {
                if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59734815359)) {
                  result[0] += -0.0022566;
                } else {
                  result[0] += -0.06657337;
                }
              } else {
                if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62021189928)) {
                  result[0] += 0.04014103;
                } else {
                  if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.61824411154)) {
                    result[0] += -0;
                  } else {
                    result[0] += -0.016103404;
                  }
                }
              }
            }
          } else {
            result[0] += -0.075448826;
          }
        } else {
          if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.0078816348687)) {
            if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.62869435549)) {
              if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59734815359)) {
                if ( (data[32].missing != -1) && (data[32].fvalue < (float)2.5321929455)) {
                  if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.77948868275)) {
                    if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.60239255428)) {
                      result[0] += 0.028994026;
                    } else {
                      result[0] += -0;
                    }
                  } else {
                    result[0] += 0.08625679;
                  }
                } else {
                  if ( (data[32].missing != -1) && (data[32].fvalue < (float)3.5393471718)) {
                    result[0] += -0.035011683;
                  } else {
                    if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.28573852777)) {
                      result[0] += -0.0037082094;
                    } else {
                      if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.25304949284)) {
                        result[0] += 0.0824333;
                      } else {
                        if ( (data[34].missing != -1) && (data[34].fvalue < (float)-0.20921711624)) {
                          result[0] += 0.028496308;
                        } else {
                          result[0] += -0.010835747;
                        }
                      }
                    }
                  }
                }
              } else {
                if ( (data[69].missing != -1) && (data[69].fvalue < (float)-0.35898321867)) {
                  result[0] += -0.11232612;
                } else {
                  result[0] += 0.012721026;
                }
              }
            } else {
              if ( (data[42].missing != -1) && (data[42].fvalue < (float)-0.010385181755)) {
                if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.54537212849)) {
                  result[0] += 0.094616935;
                } else {
                  if ( (data[42].missing != -1) && (data[42].fvalue < (float)-0.010553312488)) {
                    if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.10594877601)) {
                      result[0] += 0.079220966;
                    } else {
                      result[0] += 0.0057210242;
                    }
                  } else {
                    result[0] += -0;
                  }
                }
              } else {
                if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.62007504702)) {
                  result[0] += 0.01945133;
                } else {
                  result[0] += -0.03914269;
                }
              }
            }
          } else {
            if ( (data[27].missing != -1) && (data[27].fvalue < (float)0.0084628881887)) {
              result[0] += -0.08964764;
            } else {
              result[0] += 0.016618691;
            }
          }
        }
      } else {
        result[0] += 0.11924515;
      }
    } else {
      result[0] += -0.11894283;
    }
  } else {
    if ( (data[78].missing != -1) && (data[78].fvalue < (float)3.4584906101)) {
      if ( (data[50].missing != -1) && (data[50].fvalue < (float)0.17703424394)) {
        result[0] += -0.09458098;
      } else {
        result[0] += 0.0071729845;
      }
    } else {
      if ( (data[31].missing != -1) && (data[31].fvalue < (float)-0.085173599422)) {
        if ( (data[71].missing != -1) && (data[71].fvalue < (float)-0.16745822132)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62018990517)) {
            result[0] += 0.03937251;
          } else {
            result[0] += -0.022618527;
          }
        } else {
          if ( (data[51].missing != -1) && (data[51].fvalue < (float)-0.01244112663)) {
            if ( (data[46].missing != -1) && (data[46].fvalue < (float)0.11440932006)) {
              result[0] += 0.019859454;
            } else {
              result[0] += -0.048200887;
            }
          } else {
            result[0] += -0.09912331;
          }
        }
      } else {
        if ( (data[42].missing != -1) && (data[42].fvalue < (float)-0.01054682117)) {
          result[0] += 0.07726605;
        } else {
          if ( (data[21].missing != -1) && (data[21].fvalue < (float)-0.26361367106)) {
            result[0] += 0.06314094;
          } else {
            result[0] += -0.040366616;
          }
        }
      }
    }
  }
  if ( (data[14].missing != -1) && (data[14].fvalue < (float)-0.43788185716)) {
    if ( (data[37].missing != -1) && (data[37].fvalue < (float)0.61720979214)) {
      if ( (data[80].missing != -1) && (data[80].fvalue < (float)0.33438891172)) {
        if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31535029411)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)-0.44659695029)) {
            if ( (data[43].missing != -1) && (data[43].fvalue < (float)-0.2696479857)) {
              result[1] += -0.12071744;
            } else {
              result[1] += -0.020114161;
            }
          } else {
            result[1] += -0;
          }
        } else {
          result[1] += -0.09808177;
        }
      } else {
        result[1] += 0.030071115;
      }
    } else {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.36735785007)) {
        if ( (data[37].missing != -1) && (data[37].fvalue < (float)1.430107832)) {
          if ( (data[42].missing != -1) && (data[42].fvalue < (float)-0.010497917421)) {
            result[1] += 0.08821441;
          } else {
            result[1] += 0.0023236014;
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62021076679)) {
            result[1] += -0.08721381;
          } else {
            result[1] += 0.022313038;
          }
        }
      } else {
        if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.62869435549)) {
          if ( (data[32].missing != -1) && (data[32].fvalue < (float)2.5779726505)) {
            if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.95877230167)) {
              result[1] += 0.06733569;
            } else {
              if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.42360827327)) {
                result[1] += -0.09933374;
              } else {
                result[1] += 0.025856981;
              }
            }
          } else {
            if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.92445510626)) {
              result[1] += 0.08265596;
            } else {
              if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62014120817)) {
                result[1] += -0.028131686;
              } else {
                if ( (data[71].missing != -1) && (data[71].fvalue < (float)-0.46705591679)) {
                  if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.039240390062)) {
                    result[1] += -0;
                  } else {
                    result[1] += -0.05257879;
                  }
                } else {
                  if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62007719278)) {
                    if ( (data[32].missing != -1) && (data[32].fvalue < (float)5.7825541496)) {
                      result[1] += -0.015547547;
                    } else {
                      result[1] += 0.039794985;
                    }
                  } else {
                    result[1] += 0.07407785;
                  }
                }
              }
            }
          }
        } else {
          if ( (data[27].missing != -1) && (data[27].fvalue < (float)10.599714279)) {
            if ( (data[27].missing != -1) && (data[27].fvalue < (float)0.1065300256)) {
              result[1] += -0.08904228;
            } else {
              result[1] += -0.017322147;
            }
          } else {
            result[1] += 0.07743737;
          }
        }
      }
    }
  } else {
    if ( (data[50].missing != -1) && (data[50].fvalue < (float)0.17703424394)) {
      if ( (data[79].missing != -1) && (data[79].fvalue < (float)2.2252106667)) {
        result[1] += 0.09489838;
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62015110254)) {
          result[1] += -0.07847733;
        } else {
          result[1] += 0.083168276;
        }
      }
    } else {
      if ( (data[80].missing != -1) && (data[80].fvalue < (float)-0.23496000469)) {
        result[1] += -0.08344621;
      } else {
        result[1] += 0.011451858;
      }
    }
  }
  if ( (data[78].missing != -1) && (data[78].fvalue < (float)3.4584906101)) {
    result[2] += -0.09317314;
  } else {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.15619270504)) {
      if ( (data[55].missing != -1) && (data[55].fvalue < (float)1.9582731724)) {
        if ( (data[80].missing != -1) && (data[80].fvalue < (float)-0.43852174282)) {
          result[2] += 0.0050873673;
        } else {
          result[2] += -0.020776596;
        }
      } else {
        result[2] += 0.08655658;
      }
    } else {
      result[2] += -0.07975318;
    }
  }
  if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.17688424885)) {
    result[3] += 0.094986334;
  } else {
    result[3] += -0.09432071;
  }
  if ( (data[45].missing != -1) && (data[45].fvalue < (float)0.0045417477377)) {
    if ( (data[30].missing != -1) && (data[30].fvalue < (float)-1.2213975191)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)2.23818326)) {
        result[4] += -0.07725591;
      } else {
        result[4] += 0.031185668;
      }
    } else {
      result[4] += -0.094663136;
    }
  } else {
    if ( (data[89].missing != -1) && (data[89].fvalue < (float)1)) {
      result[4] += -0;
    } else {
      result[4] += 0.091973044;
    }
  }
  if ( (data[86].missing != -1) && (data[86].fvalue < (float)1)) {
    if ( (data[47].missing != -1) && (data[47].fvalue < (float)-0.015711553395)) {
      result[5] += -0.094733894;
    } else {
      result[5] += -0;
    }
  } else {
    if ( (data[37].missing != -1) && (data[37].fvalue < (float)0.95358139277)) {
      result[5] += -0.07918507;
    } else {
      if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.018215337768)) {
        result[5] += 0.04646043;
      } else {
        result[5] += -0;
      }
    }
  }
  if ( (data[30].missing != -1) && (data[30].fvalue < (float)-1.1498845816)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.15619270504)) {
      result[6] += 0.023271807;
    } else {
      result[6] += -0.084941454;
    }
  } else {
    result[6] += -0.09155641;
  }
  if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.99998575449)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.61777055264)) {
      result[7] += -0.072127245;
    } else {
      if ( (data[53].missing != -1) && (data[53].fvalue < (float)-0.26883500814)) {
        result[7] += 0.051140755;
      } else {
        result[7] += -0;
      }
    }
  } else {
    result[7] += -0.094709486;
  }
  if ( (data[80].missing != -1) && (data[80].fvalue < (float)9.5720357895)) {
    if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.99998575449)) {
      result[8] += -0.014136965;
    } else {
      result[8] += -0.09472299;
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.11647147685)) {
      result[8] += -0;
    } else {
      result[8] += 0.08511114;
    }
  }
  if ( (data[15].missing != -1) && (data[15].fvalue < (float)0.17268300056)) {
    if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.81956714392)) {
      if ( (data[83].missing != -1) && (data[83].fvalue < (float)1)) {
        result[9] += -0.010975413;
      } else {
        result[9] += 0.07643808;
      }
    } else {
      if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.90621083975)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.08081638813)) {
          result[9] += -0.06872321;
        } else {
          if ( (data[27].missing != -1) && (data[27].fvalue < (float)1.3814028502)) {
            result[9] += 0.013602032;
          } else {
            result[9] += -0.04159197;
          }
        }
      } else {
        if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.77628856897)) {
          result[9] += -0.07747705;
        } else {
          if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.84881222248)) {
            result[9] += 0.16125537;
          } else {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)0.15478906035)) {
              result[9] += -0.03528609;
            } else {
              result[9] += 0.012497489;
            }
          }
        }
      }
    }
  } else {
    if ( (data[79].missing != -1) && (data[79].fvalue < (float)2.4900910854)) {
      result[9] += -0.094469965;
    } else {
      result[9] += -0.017693372;
    }
  }
  if ( (data[23].missing != -1) && (data[23].fvalue < (float)10.179190636)) {
    if ( (data[32].missing != -1) && (data[32].fvalue < (float)3.8598051071)) {
      result[10] += -0.09327208;
    } else {
      result[10] += -0.0033515482;
    }
  } else {
    result[10] += 0.089286745;
  }
  if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025296164677)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62017846107)) {
      if ( (data[80].missing != -1) && (data[80].fvalue < (float)-0.43852174282)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.99036180973)) {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.016826236621)) {
            if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31466990709)) {
              if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.22036042809)) {
                result[11] += -0;
              } else {
                result[11] += 0.029597979;
              }
            } else {
              if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31227308512)) {
                result[11] += -0.030186439;
              } else {
                result[11] += -0;
              }
            }
          } else {
            result[11] += -0.058603063;
          }
        } else {
          result[11] += 0.074898675;
        }
      } else {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.15619270504)) {
          result[11] += -0.086850725;
        } else {
          result[11] += -0.00089715485;
        }
      }
    } else {
      result[11] += -0.092419304;
    }
  } else {
    if ( (data[80].missing != -1) && (data[80].fvalue < (float)-0.37019988894)) {
      if ( (data[37].missing != -1) && (data[37].fvalue < (float)0.7573646307)) {
        if ( (data[65].missing != -1) && (data[65].fvalue < (float)-0.016915978864)) {
          if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.631049335)) {
            result[11] += -0;
          } else {
            result[11] += 0.092492305;
          }
        } else {
          result[11] += -0.057249;
        }
      } else {
        if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.024322185665)) {
          result[11] += -0.06240729;
        } else {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.067782856524)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.03723815456)) {
              result[11] += -0.055806614;
            } else {
              if ( (data[43].missing != -1) && (data[43].fvalue < (float)0.14162181318)) {
                result[11] += 0.040013745;
              } else {
                if ( (data[75].missing != -1) && (data[75].fvalue < (float)0.061311610043)) {
                  result[11] += -0.039763443;
                } else {
                  result[11] += 0.002209663;
                }
              }
            }
          } else {
            if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.63551598787)) {
              if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31372666359)) {
                if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.55644726753)) {
                  if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.83116543293)) {
                    if ( (data[71].missing != -1) && (data[71].fvalue < (float)-0.45259317756)) {
                      result[11] += 0.08827663;
                    } else {
                      result[11] += 0.009820185;
                    }
                  } else {
                    if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.0903491974)) {
                      result[11] += -0.007414398;
                    } else {
                      result[11] += 0.0052982545;
                    }
                  }
                } else {
                  if ( (data[61].missing != -1) && (data[61].fvalue < (float)-0.16697607934)) {
                    result[11] += -0.028984603;
                  } else {
                    if ( (data[37].missing != -1) && (data[37].fvalue < (float)0.95358139277)) {
                      result[11] += 0.035613757;
                    } else {
                      result[11] += -0;
                    }
                  }
                }
              } else {
                if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.4199834168)) {
                  result[11] += 0.09745918;
                } else {
                  result[11] += -0;
                }
              }
            } else {
              if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31298440695)) {
                result[11] += -0.03340669;
              } else {
                result[11] += 0.024231816;
              }
            }
          }
        }
      }
    } else {
      if ( (data[56].missing != -1) && (data[56].fvalue < (float)-0.14431166649)) {
        result[11] += -0;
      } else {
        result[11] += -0.07675473;
      }
    }
  }
  if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.25832360983)) {
    if ( (data[80].missing != -1) && (data[80].fvalue < (float)-0.10689549893)) {
      if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.7954890728)) {
        if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60419660807)) {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.62911725044)) {
            result[12] += -0.06951249;
          } else {
            result[12] += -0;
          }
        } else {
          result[12] += 0.09752521;
        }
      } else {
        result[12] += -0.08331344;
      }
    } else {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.0699566603)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.050166197121)) {
          result[12] += 0.23109707;
        } else {
          result[12] += 0.07921756;
        }
      } else {
        result[12] += -0.055905096;
      }
    }
  } else {
    if ( (data[42].missing != -1) && (data[42].fvalue < (float)-0.010369817726)) {
      result[12] += -0.094355725;
    } else {
      result[12] += -0;
    }
  }
  if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.18199364841)) {
    if ( (data[78].missing != -1) && (data[78].fvalue < (float)-0.4874599874)) {
      if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.62383723259)) {
        if ( (data[83].missing != -1) && (data[83].fvalue < (float)1)) {
          result[0] += 0.108250245;
        } else {
          if ( (data[37].missing != -1) && (data[37].fvalue < (float)0.8134265542)) {
            result[0] += -0.028417967;
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62015038729)) {
              if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.03723815456)) {
                if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.76508826017)) {
                  if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62018430233)) {
                    if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.038947977126)) {
                      result[0] += 0.033091243;
                    } else {
                      result[0] += 0.077848695;
                    }
                  } else {
                    if ( (data[32].missing != -1) && (data[32].fvalue < (float)4.82117939)) {
                      result[0] += -0.0005344204;
                    } else {
                      result[0] += 0.014702769;
                    }
                  }
                } else {
                  result[0] += -0;
                }
              } else {
                result[0] += -0;
              }
            } else {
              if ( (data[32].missing != -1) && (data[32].fvalue < (float)2.5321929455)) {
                result[0] += 0.02736272;
              } else {
                if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.54161769152)) {
                  result[0] += -0.03085825;
                } else {
                  if ( (data[32].missing != -1) && (data[32].fvalue < (float)3.9971444607)) {
                    result[0] += 0.05162629;
                  } else {
                    if ( (data[34].missing != -1) && (data[34].fvalue < (float)-0.20878776908)) {
                      if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60372674465)) {
                        result[0] += -0;
                      } else {
                        result[0] += -0.047543004;
                      }
                    } else {
                      if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.61979103088)) {
                        result[0] += -0;
                      } else {
                        result[0] += 0.03082755;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      } else {
        if ( (data[54].missing != -1) && (data[54].fvalue < (float)0.079855747521)) {
          if ( (data[49].missing != -1) && (data[49].fvalue < (float)-0.040186408907)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.52279245853)) {
              result[0] += 0.022617385;
            } else {
              result[0] += 0.089782916;
            }
          } else {
            if ( (data[56].missing != -1) && (data[56].fvalue < (float)-0.15457670391)) {
              result[0] += -0.061815694;
            } else {
              result[0] += 0.0703465;
            }
          }
        } else {
          result[0] += -0.0051848004;
        }
      }
    } else {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.9851242304)) {
        result[0] += -0.09510243;
      } else {
        if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.36591973901)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.61938333511)) {
            if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.45554211736)) {
              result[0] += -0;
            } else {
              result[0] += 0.07829259;
            }
          } else {
            result[0] += -0.021819144;
          }
        } else {
          if ( (data[33].missing != -1) && (data[33].fvalue < (float)1.2945084572)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)3.2361967564)) {
              if ( (data[30].missing != -1) && (data[30].fvalue < (float)-1.1390959024)) {
                result[0] += -0.11083798;
              } else {
                result[0] += -0.023735335;
              }
            } else {
              result[0] += -0;
            }
          } else {
            result[0] += 0.006144984;
          }
        }
      }
    }
  } else {
    if ( (data[45].missing != -1) && (data[45].fvalue < (float)-0.039107099175)) {
      if ( (data[83].missing != -1) && (data[83].fvalue < (float)1)) {
        result[0] += -0.09125182;
      } else {
        if ( (data[32].missing != -1) && (data[32].fvalue < (float)0.92990243435)) {
          result[0] += -0.017845316;
        } else {
          result[0] += 0.020294867;
        }
      }
    } else {
      if ( (data[71].missing != -1) && (data[71].fvalue < (float)0.87892109156)) {
        if ( (data[49].missing != -1) && (data[49].fvalue < (float)0.10463186353)) {
          result[0] += 0.07043137;
        } else {
          result[0] += 0.0009583512;
        }
      } else {
        result[0] += -0.03947808;
      }
    }
  }
  if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.56495398283)) {
    if ( (data[37].missing != -1) && (data[37].fvalue < (float)0.61720979214)) {
      if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.024123216048)) {
        if ( (data[78].missing != -1) && (data[78].fvalue < (float)-0.54036176205)) {
          result[1] += -0.018716864;
        } else {
          result[1] += -0.09879309;
        }
      } else {
        result[1] += -0.0121512385;
      }
    } else {
      if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.62560343742)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.36735785007)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.62016272545)) {
            result[1] += 0.032078434;
          } else {
            result[1] += 0.085405305;
          }
        } else {
          if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.62869435549)) {
            if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.631049335)) {
              result[1] += 0.099652015;
            } else {
              if ( (data[32].missing != -1) && (data[32].fvalue < (float)2.5779726505)) {
                if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.62007713318)) {
                  if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.038397628814)) {
                    result[1] += 0.020966094;
                  } else {
                    result[1] += -0;
                  }
                } else {
                  result[1] += -0.099674284;
                }
              } else {
                if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.62002420425)) {
                  if ( (data[61].missing != -1) && (data[61].fvalue < (float)-0.16619649529)) {
                    if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.20401591063)) {
                      result[1] += -0.06574739;
                    } else {
                      result[1] += -0;
                    }
                  } else {
                    result[1] += 0.004324347;
                  }
                } else {
                  if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60342478752)) {
                    result[1] += 0.071331;
                  } else {
                    if ( (data[32].missing != -1) && (data[32].fvalue < (float)4.0429239273)) {
                      result[1] += 0.03431481;
                    } else {
                      result[1] += -0.039815847;
                    }
                  }
                }
              }
            }
          } else {
            result[1] += -0.06987325;
          }
        }
      } else {
        if ( (data[27].missing != -1) && (data[27].fvalue < (float)3.6532914639)) {
          result[1] += -0.07887554;
        } else {
          result[1] += 0.021269856;
        }
      }
    }
  } else {
    if ( (data[78].missing != -1) && (data[78].fvalue < (float)3.4584906101)) {
      if ( (data[45].missing != -1) && (data[45].fvalue < (float)0.0045417477377)) {
        if ( (data[83].missing != -1) && (data[83].fvalue < (float)1)) {
          if ( (data[79].missing != -1) && (data[79].fvalue < (float)6.0763492584)) {
            result[1] += 0.094778486;
          } else {
            if ( (data[45].missing != -1) && (data[45].fvalue < (float)-0.0832099244)) {
              result[1] += 0.08386556;
            } else {
              result[1] += -0.026293822;
            }
          }
        } else {
          result[1] += 0.0025381388;
        }
      } else {
        if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.95877230167)) {
          result[1] += 0.052304506;
        } else {
          result[1] += -0.025735784;
        }
      }
    } else {
      result[1] += -0.08667861;
    }
  }
  if ( (data[87].missing != -1) && (data[87].fvalue < (float)1)) {
    if ( (data[80].missing != -1) && (data[80].fvalue < (float)9.5720357895)) {
      result[2] += -0.09284514;
    } else {
      result[2] += 0.023072422;
    }
  } else {
    if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025418607518)) {
      result[2] += 0.0601311;
    } else {
      if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31298440695)) {
        result[2] += 0.013942971;
      } else {
        result[2] += -0.07382142;
      }
    }
  }
  if ( (data[27].missing != -1) && (data[27].fvalue < (float)1.0054787397)) {
    result[3] += -0.09383776;
  } else {
    result[3] += 0.09421305;
  }
  if ( (data[45].missing != -1) && (data[45].fvalue < (float)0.0045417477377)) {
    if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.63134372234)) {
      if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025511831045)) {
        result[4] += 0.042504434;
      } else {
        result[4] += -0.07659174;
      }
    } else {
      result[4] += -0.09444305;
    }
  } else {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)0.06673399359)) {
      result[4] += -0;
    } else {
      result[4] += 0.090155445;
    }
  }
  if ( (data[47].missing != -1) && (data[47].fvalue < (float)-0.015711553395)) {
    if ( (data[32].missing != -1) && (data[32].fvalue < (float)3.2646687031)) {
      result[5] += -0.09110379;
    } else {
      result[5] += -0;
    }
  } else {
    if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025155633688)) {
      result[5] += 0.045067087;
    } else {
      result[5] += -0.07208625;
    }
  }
  if ( (data[30].missing != -1) && (data[30].fvalue < (float)-1.1498845816)) {
    if ( (data[19].missing != -1) && (data[19].fvalue < (float)0.5904673934)) {
      result[6] += -0;
    } else {
      result[6] += -0.081054315;
    }
  } else {
    if ( (data[37].missing != -1) && (data[37].fvalue < (float)1.3460149765)) {
      result[6] += -0.0943839;
    } else {
      result[6] += -0.019701844;
    }
  }
  if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.99998575449)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)0.06673399359)) {
      result[7] += -0.006748809;
    } else {
      result[7] += 0.03333223;
    }
  } else {
    result[7] += -0.0944936;
  }
  if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.99998575449)) {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.56495398283)) {
      result[8] += -0.07565642;
    } else {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)0.06673399359)) {
        result[8] += 0.01985257;
      } else {
        result[8] += 0.10930401;
      }
    }
  } else {
    result[8] += -0.0945153;
  }
  if ( (data[14].missing != -1) && (data[14].fvalue < (float)-0.44441816211)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.17023339868)) {
      if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31324729323)) {
        if ( (data[69].missing != -1) && (data[69].fvalue < (float)-0.38874548674)) {
          result[9] += -0.078288615;
        } else {
          result[9] += -0.011818211;
        }
      } else {
        if ( (data[56].missing != -1) && (data[56].fvalue < (float)-0.16032426059)) {
          result[9] += -0.008507573;
        } else {
          result[9] += 0.12482324;
        }
      }
    } else {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.1328552961)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.72576403618)) {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.62796533108)) {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.93369174)) {
              if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59280967712)) {
                result[9] += -0.0022385174;
              } else {
                result[9] += 0.033024233;
              }
            } else {
              result[9] += -0.082779795;
            }
          } else {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.62911725044)) {
              result[9] += 0.09666429;
            } else {
              result[9] += -0;
            }
          }
        } else {
          result[9] += -0.07391162;
        }
      } else {
        if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.56359541416)) {
          result[9] += 0.14556803;
        } else {
          result[9] += 0.031211128;
        }
      }
    }
  } else {
    if ( (data[79].missing != -1) && (data[79].fvalue < (float)2.4900910854)) {
      result[9] += -0.09425843;
    } else {
      result[9] += -0.012423084;
    }
  }
  if ( (data[23].missing != -1) && (data[23].fvalue < (float)10.179190636)) {
    if ( (data[32].missing != -1) && (data[32].fvalue < (float)3.8598051071)) {
      result[10] += -0.09277688;
    } else {
      result[10] += -0;
    }
  } else {
    result[10] += 0.0880912;
  }
  if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.18199364841)) {
    if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025307295844)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.6201159358)) {
        if ( (data[50].missing != -1) && (data[50].fvalue < (float)0.066599451005)) {
          if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.49173647165)) {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.016826236621)) {
              if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.67777997255)) {
                result[11] += -0.014340983;
              } else {
                result[11] += 0.014676358;
              }
            } else {
              result[11] += -0.039410513;
            }
          } else {
            if ( (data[37].missing != -1) && (data[37].fvalue < (float)2.691501379)) {
              result[11] += 0.07984312;
            } else {
              result[11] += -0;
            }
          }
        } else {
          result[11] += -0.072795175;
        }
      } else {
        result[11] += -0.08252512;
      }
    } else {
      if ( (data[36].missing != -1) && (data[36].fvalue < (float)-0.63763225079)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)-0.53573900461)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.03723815456)) {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.51605558395)) {
              result[11] += -0.04922174;
            } else {
              if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.62010097504)) {
                if ( (data[32].missing != -1) && (data[32].fvalue < (float)2.5321929455)) {
                  result[11] += -0.021554638;
                } else {
                  if ( (data[32].missing != -1) && (data[32].fvalue < (float)4.2718229294)) {
                    result[11] += 0.04658658;
                  } else {
                    if ( (data[32].missing != -1) && (data[32].fvalue < (float)5.9656729698)) {
                      result[11] += -0.041556943;
                    } else {
                      result[11] += 0.011901794;
                    }
                  }
                }
              } else {
                if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.83116543293)) {
                  if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60414606333)) {
                    result[11] += 0.01644866;
                  } else {
                    result[11] += 0.08242979;
                  }
                } else {
                  if ( (data[34].missing != -1) && (data[34].fvalue < (float)-0.20938225091)) {
                    if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31466990709)) {
                      result[11] += 0.010074847;
                    } else {
                      result[11] += -0.024732536;
                    }
                  } else {
                    if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.26939401031)) {
                      result[11] += -0;
                    } else {
                      result[11] += 0.05272023;
                    }
                  }
                }
              }
            }
          } else {
            if ( (data[69].missing != -1) && (data[69].fvalue < (float)-0.27248257399)) {
              result[11] += 0.08013078;
            } else {
              if ( (data[69].missing != -1) && (data[69].fvalue < (float)0.66162455082)) {
                result[11] += -0;
              } else {
                result[11] += 0.04123735;
              }
            }
          }
        } else {
          result[11] += -0.06889795;
        }
      } else {
        if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.93103021383)) {
          result[11] += 0.08681922;
        } else {
          if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.021068219095)) {
            result[11] += -0.05581132;
          } else {
            result[11] += 0.06216227;
          }
        }
      }
    }
  } else {
    if ( (data[83].missing != -1) && (data[83].fvalue < (float)1)) {
      if ( (data[51].missing != -1) && (data[51].fvalue < (float)0.30323809385)) {
        result[11] += -0.09209324;
      } else {
        result[11] += -1.7224766e-05;
      }
    } else {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.62911725044)) {
        if ( (data[85].missing != -1) && (data[85].fvalue < (float)1)) {
          result[11] += -0.0480599;
        } else {
          result[11] += -0;
        }
      } else {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.036320734769)) {
          result[11] += 0.09416055;
        } else {
          result[11] += -0;
        }
      }
    }
  }
  if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.25832360983)) {
    if ( (data[80].missing != -1) && (data[80].fvalue < (float)-0.10689549893)) {
      if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.7954890728)) {
        if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.88865399361)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.57866376638)) {
            result[12] += -0;
          } else {
            result[12] += -0.06693385;
          }
        } else {
          result[12] += 0.103644654;
        }
      } else {
        result[12] += -0.081032544;
      }
    } else {
      if ( (data[78].missing != -1) && (data[78].fvalue < (float)-0.22594192624)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)0.050166197121)) {
          result[12] += 0.20241201;
        } else {
          result[12] += 0.08261168;
        }
      } else {
        result[12] += -0.054425117;
      }
    }
  } else {
    if ( (data[42].missing != -1) && (data[42].fvalue < (float)-0.010369817726)) {
      result[12] += -0.09407618;
    } else {
      result[12] += -0;
    }
  }
  if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.18199364841)) {
    if ( (data[80].missing != -1) && (data[80].fvalue < (float)-0.37019988894)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.2629079819)) {
        if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.02535321191)) {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.53519374132)) {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)-2.2394132614)) {
              result[0] += 0.0352138;
            } else {
              if ( (data[27].missing != -1) && (data[27].fvalue < (float)0.92375618219)) {
                result[0] += -0.022911139;
              } else {
                result[0] += 0.020615831;
              }
            }
          } else {
            if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.12656737864)) {
              if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.4555876255)) {
                if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.62646782398)) {
                  result[0] += 0.06538525;
                } else {
                  if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.83116543293)) {
                    result[0] += -0.002484611;
                  } else {
                    result[0] += 0.035424568;
                  }
                }
              } else {
                result[0] += 0.08408314;
              }
            } else {
              result[0] += -0.012589707;
            }
          }
        } else {
          if ( (data[58].missing != -1) && (data[58].fvalue < (float)-0.55193799734)) {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.81572955847)) {
              if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60427820683)) {
                if ( (data[70].missing != -1) && (data[70].fvalue < (float)0.21682018042)) {
                  if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.1259713918)) {
                    result[0] += 0.073208064;
                  } else {
                    result[0] += -0;
                  }
                } else {
                  if ( (data[43].missing != -1) && (data[43].fvalue < (float)0.15449461341)) {
                    result[0] += 0.0028900101;
                  } else {
                    result[0] += -0.016903305;
                  }
                }
              } else {
                if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.25268346071)) {
                  result[0] += -0.061787713;
                } else {
                  if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.1340187043)) {
                    result[0] += 0.043280352;
                  } else {
                    if ( (data[33].missing != -1) && (data[33].fvalue < (float)-0.53069013357)) {
                      if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.22036042809)) {
                        result[0] += -0;
                      } else {
                        result[0] += -0.054931935;
                      }
                    } else {
                      result[0] += -0;
                    }
                  }
                }
              }
            } else {
              if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.96582579613)) {
                if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60415321589)) {
                  result[0] += 0.075584315;
                } else {
                  result[0] += 0.004805398;
                }
              } else {
                if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.1328552961)) {
                  if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60417157412)) {
                    result[0] += -0.018453313;
                  } else {
                    result[0] += -0;
                  }
                } else {
                  result[0] += 0.032178644;
                }
              }
            }
          } else {
            if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.45147165656)) {
              result[0] += 0.041517753;
            } else {
              if ( (data[55].missing != -1) && (data[55].fvalue < (float)-0.11353146285)) {
                result[0] += -0.15302892;
              } else {
                if ( (data[45].missing != -1) && (data[45].fvalue < (float)-0.1000680849)) {
                  result[0] += 0.05920196;
                } else {
                  result[0] += -0.06908232;
                }
              }
            }
          }
        }
      } else {
        result[0] += -0.11913733;
      }
    } else {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)3.7342278957)) {
        if ( (data[17].missing != -1) && (data[17].fvalue < (float)2.4384834766)) {
          result[0] += -0.09226573;
        } else {
          result[0] += -0;
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.6202095747)) {
          result[0] += -0;
        } else {
          result[0] += 0.007542284;
        }
      }
    }
  } else {
    if ( (data[45].missing != -1) && (data[45].fvalue < (float)-0.039107099175)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)-0.0058834324591)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.038821898401)) {
          result[0] += -0.034648944;
        } else {
          result[0] += 0.011337921;
        }
      } else {
        result[0] += -0.090834476;
      }
    } else {
      if ( (data[71].missing != -1) && (data[71].fvalue < (float)0.87892109156)) {
        if ( (data[49].missing != -1) && (data[49].fvalue < (float)0.10463186353)) {
          result[0] += 0.066023074;
        } else {
          result[0] += -0;
        }
      } else {
        result[0] += -0.03959979;
      }
    }
  }
  if ( (data[14].missing != -1) && (data[14].fvalue < (float)-0.43788185716)) {
    if ( (data[37].missing != -1) && (data[37].fvalue < (float)0.61720979214)) {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.0699566603)) {
        result[1] += -0.08766244;
      } else {
        result[1] += 0.0029017536;
      }
    } else {
      if ( (data[60].missing != -1) && (data[60].fvalue < (float)-0.62869435549)) {
        if ( (data[54].missing != -1) && (data[54].fvalue < (float)-0.039086114615)) {
          if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60342478752)) {
            if ( (data[32].missing != -1) && (data[32].fvalue < (float)2.5321929455)) {
              result[1] += 0.010215695;
            } else {
              result[1] += 0.0819288;
            }
          } else {
            if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.20401591063)) {
              if ( (data[70].missing != -1) && (data[70].fvalue < (float)-0.14464202523)) {
                result[1] += -0;
              } else {
                result[1] += -0.067197055;
              }
            } else {
              result[1] += 0.037285443;
            }
          }
        } else {
          if ( (data[71].missing != -1) && (data[71].fvalue < (float)-0.43733534217)) {
            if ( (data[32].missing != -1) && (data[32].fvalue < (float)4.7753996849)) {
              if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.92445510626)) {
                if ( (data[32].missing != -1) && (data[32].fvalue < (float)2.5779726505)) {
                  result[1] += -0.0104646925;
                } else {
                  result[1] += 0.014789433;
                }
              } else {
                result[1] += -0.064471446;
              }
            } else {
              if ( (data[32].missing != -1) && (data[32].fvalue < (float)5.9198932648)) {
                result[1] += 0.034580577;
              } else {
                result[1] += -0;
              }
            }
          } else {
            if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60427242517)) {
              result[1] += -0;
            } else {
              result[1] += 0.07097199;
            }
          }
        }
      } else {
        if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.9311388731)) {
          if ( (data[27].missing != -1) && (data[27].fvalue < (float)3.9638373852)) {
            if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.54431396723)) {
              result[1] += 0.04000554;
            } else {
              result[1] += -0.06960602;
            }
          } else {
            result[1] += 0.07389425;
          }
        } else {
          if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.35827046633)) {
            result[1] += -0.094187945;
          } else {
            result[1] += -0.01881004;
          }
        }
      }
    }
  } else {
    if ( (data[50].missing != -1) && (data[50].fvalue < (float)0.17703424394)) {
      if ( (data[79].missing != -1) && (data[79].fvalue < (float)2.2252106667)) {
        result[1] += 0.09384806;
      } else {
        if ( (data[50].missing != -1) && (data[50].fvalue < (float)-0.014389973134)) {
          result[1] += 0.07830402;
        } else {
          result[1] += -0.07560173;
        }
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)0.3592517674)) {
        result[1] += 0.019394243;
      } else {
        result[1] += -0.06969556;
      }
    }
  }
  if ( (data[78].missing != -1) && (data[78].fvalue < (float)3.4584906101)) {
    result[2] += -0.09205459;
  } else {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.15619270504)) {
      if ( (data[55].missing != -1) && (data[55].fvalue < (float)1.9582731724)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.62011039257)) {
          result[2] += -0;
        } else {
          result[2] += -0.015917256;
        }
      } else {
        result[2] += 0.05830312;
      }
    } else {
      result[2] += -0.07549387;
    }
  }
  if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.17688424885)) {
    result[3] += 0.09438215;
  } else {
    result[3] += -0.09376357;
  }
  if ( (data[30].missing != -1) && (data[30].fvalue < (float)-1.196121335)) {
    if ( (data[43].missing != -1) && (data[43].fvalue < (float)-0.235338673)) {
      if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025511831045)) {
        result[4] += -0;
      } else {
        result[4] += -0.07621608;
      }
    } else {
      result[4] += 0.10223678;
    }
  } else {
    result[4] += -0.09421119;
  }
  if ( (data[86].missing != -1) && (data[86].fvalue < (float)1)) {
    if ( (data[47].missing != -1) && (data[47].fvalue < (float)-0.015711553395)) {
      result[5] += -0.09427146;
    } else {
      result[5] += -0;
    }
  } else {
    if ( (data[37].missing != -1) && (data[37].fvalue < (float)0.95358139277)) {
      result[5] += -0.07497868;
    } else {
      result[5] += 0.023979573;
    }
  }
  if ( (data[14].missing != -1) && (data[14].fvalue < (float)-0.44659695029)) {
    if ( (data[80].missing != -1) && (data[80].fvalue < (float)-0.28877517581)) {
      if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31443795562)) {
        result[6] += -0.08537773;
      } else {
        result[6] += -0;
      }
    } else {
      result[6] += 0.031053182;
    }
  } else {
    result[6] += -0.09187689;
  }
  if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.54112535715)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.51698690653)) {
      result[7] += -0.062060833;
    } else {
      result[7] += 0.03939325;
    }
  } else {
    result[7] += -0.094248116;
  }
  if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.99998575449)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.61899483204)) {
      result[8] += -0.074762374;
    } else {
      result[8] += 0.08206711;
    }
  } else {
    result[8] += -0.09427192;
  }
  if ( (data[14].missing != -1) && (data[14].fvalue < (float)-0.44441816211)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)3.6675543785)) {
      if ( (data[37].missing != -1) && (data[37].fvalue < (float)0.53311687708)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.71015536785)) {
          result[9] += -0;
        } else {
          result[9] += 0.065043464;
        }
      } else {
        if ( (data[37].missing != -1) && (data[37].fvalue < (float)1.3460149765)) {
          if ( (data[33].missing != -1) && (data[33].fvalue < (float)-0.62777519226)) {
            result[9] += -0.07098924;
          } else {
            result[9] += -0;
          }
        } else {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.17688424885)) {
            result[9] += -0.07498269;
          } else {
            if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025323992595)) {
              if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.25832360983)) {
                result[9] += 0.08424163;
              } else {
                result[9] += -0;
              }
            } else {
              if ( (data[55].missing != -1) && (data[55].fvalue < (float)-0.078519709408)) {
                result[9] += -0.033481013;
              } else {
                result[9] += -0;
              }
            }
          }
        }
      }
    } else {
      result[9] += 0.0718412;
    }
  } else {
    if ( (data[79].missing != -1) && (data[79].fvalue < (float)2.4900910854)) {
      result[9] += -0.09394636;
    } else {
      result[9] += -0.007110058;
    }
  }
  if ( (data[23].missing != -1) && (data[23].fvalue < (float)10.179190636)) {
    if ( (data[37].missing != -1) && (data[37].fvalue < (float)1.3460149765)) {
      result[10] += -0.09216343;
    } else {
      result[10] += -0.011733982;
    }
  } else {
    result[10] += 0.08675208;
  }
  if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.18199364841)) {
    if ( (data[80].missing != -1) && (data[80].fvalue < (float)-0.37019988894)) {
      if ( (data[37].missing != -1) && (data[37].fvalue < (float)0.7573646307)) {
        if ( (data[42].missing != -1) && (data[42].fvalue < (float)-0.010497917421)) {
          if ( (data[32].missing != -1) && (data[32].fvalue < (float)1.9828362465)) {
            if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.99576175213)) {
              if ( (data[84].missing != -1) && (data[84].fvalue < (float)1)) {
                result[11] += 0.03520974;
              } else {
                result[11] += -0;
              }
            } else {
              result[11] += -0.07744164;
            }
          } else {
            result[11] += 0.046063893;
          }
        } else {
          if ( (data[30].missing != -1) && (data[30].fvalue < (float)-1.0593373775)) {
            result[11] += -0.0055625956;
          } else {
            if ( (data[55].missing != -1) && (data[55].fvalue < (float)7.806274516e-05)) {
              result[11] += 0.08948646;
            } else {
              result[11] += 0.01591621;
            }
          }
        }
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)-0.50166469812)) {
          if ( (data[32].missing != -1) && (data[32].fvalue < (float)2.5779726505)) {
            if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.66160225868)) {
              result[11] += -0;
            } else {
              if ( (data[53].missing != -1) && (data[53].fvalue < (float)-0.26050439477)) {
                if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.63733571768)) {
                  result[11] += 0.106191486;
                } else {
                  if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.60239255428)) {
                    if ( (data[27].missing != -1) && (data[27].fvalue < (float)0.92375618219)) {
                      result[11] += -0.011370018;
                    } else {
                      result[11] += 0.023020642;
                    }
                  } else {
                    result[11] += 0.042058516;
                  }
                }
              } else {
                if ( (data[74].missing != -1) && (data[74].fvalue < (float)1.0103553534)) {
                  if ( (data[53].missing != -1) && (data[53].fvalue < (float)0.14160977304)) {
                    if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.79142647982)) {
                      result[11] += -0.004966855;
                    } else {
                      result[11] += 0.033043623;
                    }
                  } else {
                    result[11] += -0.033745628;
                  }
                } else {
                  result[11] += 0.023969239;
                }
              }
            }
          } else {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.51605558395)) {
              if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.35827046633)) {
                result[11] += -0.07500004;
              } else {
                result[11] += -0;
              }
            } else {
              if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.92445510626)) {
                result[11] += -0.016694928;
              } else {
                if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.81572955847)) {
                  result[11] += 0.037968237;
                } else {
                  if ( (data[41].missing != -1) && (data[41].fvalue < (float)-0.63551598787)) {
                    if ( (data[32].missing != -1) && (data[32].fvalue < (float)4.9127392769)) {
                      if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.0903491974)) {
                        result[11] += -0;
                      } else {
                        result[11] += -0.013186686;
                      }
                    } else {
                      result[11] += 0.04321235;
                    }
                  } else {
                    if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.097951889)) {
                      result[11] += -0.064731754;
                    } else {
                      result[11] += 0.012082732;
                    }
                  }
                }
              }
            }
          }
        } else {
          result[11] += -0.03235922;
        }
      }
    } else {
      if ( (data[80].missing != -1) && (data[80].fvalue < (float)-0.10689549893)) {
        result[11] += -0.086381696;
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)0.83999991417)) {
          result[11] += -0.03726185;
        } else {
          result[11] += 0.062859915;
        }
      }
    }
  } else {
    if ( (data[83].missing != -1) && (data[83].fvalue < (float)1)) {
      if ( (data[55].missing != -1) && (data[55].fvalue < (float)-0.068880498409)) {
        result[11] += -0.09129402;
      } else {
        result[11] += -0;
      }
    } else {
      if ( (data[40].missing != -1) && (data[40].fvalue < (float)1.3720816374)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.62911725044)) {
          result[11] += -0.056967072;
        } else {
          result[11] += 0.007115421;
        }
      } else {
        result[11] += 0.035466295;
      }
    }
  }
  if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.25832360983)) {
    if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.0699566603)) {
      if ( (data[78].missing != -1) && (data[78].fvalue < (float)-0.43630290031)) {
        if ( (data[37].missing != -1) && (data[37].fvalue < (float)0.64524072409)) {
          if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.016243726015)) {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.62911725044)) {
              result[12] += -0.07320965;
            } else {
              result[12] += -0;
            }
          } else {
            result[12] += 0.106779456;
          }
        } else {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.5222806931)) {
            result[12] += -0.00886024;
          } else {
            result[12] += -0.08345726;
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.62011039257)) {
          result[12] += 0.19872734;
        } else {
          result[12] += 0.061588462;
        }
      }
    } else {
      if ( (data[69].missing != -1) && (data[69].fvalue < (float)0.34058767557)) {
        result[12] += -0.08928797;
      } else {
        result[12] += -0;
      }
    }
  } else {
    if ( (data[52].missing != -1) && (data[52].fvalue < (float)0.018169729039)) {
      result[12] += -0.09378511;
    } else {
      result[12] += 0.011906397;
    }
  }
  if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.18199364841)) {
    if ( (data[80].missing != -1) && (data[80].fvalue < (float)-0.37019988894)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.6006770134)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.15619270504)) {
          if ( (data[32].missing != -1) && (data[32].fvalue < (float)2.4406335354)) {
            if ( (data[55].missing != -1) && (data[55].fvalue < (float)-0.108556889)) {
              if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.61992967129)) {
                result[0] += -0.1805942;
              } else {
                result[0] += -0;
              }
            } else {
              if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.35921764374)) {
                if ( (data[71].missing != -1) && (data[71].fvalue < (float)-0.43492239714)) {
                  result[0] += -0;
                } else {
                  result[0] += 0.056872983;
                }
              } else {
                result[0] += -0.06521356;
              }
            }
          } else {
            if ( (data[36].missing != -1) && (data[36].fvalue < (float)-0.68227016926)) {
              if ( (data[32].missing != -1) && (data[32].fvalue < (float)2.5321929455)) {
                result[0] += 0.0496341;
              } else {
                if ( (data[32].missing != -1) && (data[32].fvalue < (float)5.4163160324)) {
                  if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.39942288399)) {
                    result[0] += -0.05614271;
                  } else {
                    if ( (data[34].missing != -1) && (data[34].fvalue < (float)-0.20921711624)) {
                      if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.18767139316)) {
                        result[0] += -0.0029403076;
                      } else {
                        result[0] += 0.033784933;
                      }
                    } else {
                      result[0] += -0.040854443;
                    }
                  }
                } else {
                  if ( (data[37].missing != -1) && (data[37].fvalue < (float)0.86948847771)) {
                    result[0] += -0.009378951;
                  } else {
                    if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.097951889)) {
                      if ( (data[37].missing != -1) && (data[37].fvalue < (float)1.542231679)) {
                        result[0] += 0.052243475;
                      } else {
                        result[0] += -0;
                      }
                    } else {
                      result[0] += -0;
                    }
                  }
                }
              }
            } else {
              result[0] += 0.082991436;
            }
          }
        } else {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.93369174)) {
            if ( (data[43].missing != -1) && (data[43].fvalue < (float)0.14091680944)) {
              if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.86629867554)) {
                result[0] += -0;
              } else {
                result[0] += -0.021641111;
              }
            } else {
              if ( (data[45].missing != -1) && (data[45].fvalue < (float)2.5961418152)) {
                result[0] += 0.030560713;
              } else {
                result[0] += -0;
              }
            }
          } else {
            if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.99576175213)) {
              if ( (data[30].missing != -1) && (data[30].fvalue < (float)-1.1390959024)) {
                result[0] += -0.0212479;
              } else {
                result[0] += -0;
              }
            } else {
              if ( (data[21].missing != -1) && (data[21].fvalue < (float)-0.26361367106)) {
                result[0] += 0.08520699;
              } else {
                result[0] += 0.019801598;
              }
            }
          }
        }
      } else {
        result[0] += 0.07912091;
      }
    } else {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.73820483685)) {
        if ( (data[50].missing != -1) && (data[50].fvalue < (float)-0.036114759743)) {
          result[0] += -0.081592046;
        } else {
          result[0] += -0.005930046;
        }
      } else {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.78405153751)) {
          result[0] += 0.048389893;
        } else {
          if ( (data[46].missing != -1) && (data[46].fvalue < (float)-0.1287959367)) {
            result[0] += -0.056513414;
          } else {
            result[0] += -0;
          }
        }
      }
    }
  } else {
    if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.64759612083)) {
      result[0] += -0.10274394;
    } else {
      if ( (data[64].missing != -1) && (data[64].fvalue < (float)-0.28967893124)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.58649593592)) {
          if ( (data[30].missing != -1) && (data[30].fvalue < (float)0.9095223546)) {
            result[0] += 0.09157515;
          } else {
            result[0] += 0.010018402;
          }
        } else {
          result[0] += -0;
        }
      } else {
        result[0] += -0.08689723;
      }
    }
  }
  if ( (data[14].missing != -1) && (data[14].fvalue < (float)-0.43788185716)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.51698690653)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)0.45149809122)) {
        if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59719163179)) {
          if ( (data[35].missing != -1) && (data[35].fvalue < (float)0.03643072024)) {
            if ( (data[69].missing != -1) && (data[69].fvalue < (float)-0.39657869935)) {
              if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.61850941181)) {
                if ( (data[86].missing != -1) && (data[86].fvalue < (float)1)) {
                  if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.62646782398)) {
                    result[1] += 0.031703584;
                  } else {
                    result[1] += -0.010356361;
                  }
                } else {
                  result[1] += 0.117549315;
                }
              } else {
                if ( (data[33].missing != -1) && (data[33].fvalue < (float)-0.60387730598)) {
                  result[1] += -0.008214004;
                } else {
                  result[1] += 0.009674391;
                }
              }
            } else {
              if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.20401591063)) {
                if ( (data[33].missing != -1) && (data[33].fvalue < (float)-0.66063469648)) {
                  result[1] += 0.01772772;
                } else {
                  result[1] += -0.045403387;
                }
              } else {
                if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.18767139316)) {
                  result[1] += 0.06393015;
                } else {
                  if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.62007111311)) {
                    result[1] += 0.02449957;
                  } else {
                    result[1] += -0.017966786;
                  }
                }
              }
            }
          } else {
            if ( (data[37].missing != -1) && (data[37].fvalue < (float)0.86948847771)) {
              if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.29079607129)) {
                result[1] += 0.03599124;
              } else {
                result[1] += -0;
              }
            } else {
              result[1] += -0.06253303;
            }
          }
        } else {
          if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.64759612083)) {
            result[1] += -0.058944337;
          } else {
            if ( (data[84].missing != -1) && (data[84].fvalue < (float)1)) {
              result[1] += -0;
            } else {
              result[1] += 0.07422779;
            }
          }
        }
      } else {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.93369174)) {
          result[1] += 0.008617281;
        } else {
          result[1] += -0.11248556;
        }
      }
    } else {
      result[1] += -0.09147929;
    }
  } else {
    if ( (data[78].missing != -1) && (data[78].fvalue < (float)3.4584906101)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62019306421)) {
        result[1] += -0;
      } else {
        if ( (data[79].missing != -1) && (data[79].fvalue < (float)6.0763492584)) {
          result[1] += 0.093825534;
        } else {
          if ( (data[50].missing != -1) && (data[50].fvalue < (float)-0.054048184305)) {
            result[1] += 0.0755194;
          } else {
            result[1] += -0;
          }
        }
      }
    } else {
      result[1] += -0.076579675;
    }
  }
  if ( (data[78].missing != -1) && (data[78].fvalue < (float)3.4584906101)) {
    result[2] += -0.09134294;
  } else {
    if ( (data[34].missing != -1) && (data[34].fvalue < (float)-0.21045561135)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.71015536785)) {
        result[2] += 0.069765806;
      } else {
        result[2] += -0.03636532;
      }
    } else {
      result[2] += -0.038494468;
    }
  }
  if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.17688424885)) {
    result[3] += 0.09387247;
  } else {
    result[3] += -0.09336649;
  }
  if ( (data[30].missing != -1) && (data[30].fvalue < (float)-1.196121335)) {
    if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.35921764374)) {
      if ( (data[80].missing != -1) && (data[80].fvalue < (float)-0.28877517581)) {
        result[4] += 0.028660737;
      } else {
        result[4] += -0.07586645;
      }
    } else {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.57992994785)) {
        result[4] += 0.13142659;
      } else {
        result[4] += 0.05095618;
      }
    }
  } else {
    result[4] += -0.09126669;
  }
  if ( (data[86].missing != -1) && (data[86].fvalue < (float)1)) {
    if ( (data[47].missing != -1) && (data[47].fvalue < (float)-0.015711553395)) {
      result[5] += -0.093967654;
    } else {
      result[5] += -0;
    }
  } else {
    if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.22036042809)) {
      result[5] += -0.073893666;
    } else {
      result[5] += 0.029763738;
    }
  }
  if ( (data[30].missing != -1) && (data[30].fvalue < (float)-1.1498845816)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.15619270504)) {
      result[6] += 0.021820858;
    } else {
      result[6] += -0.07978614;
    }
  } else {
    if ( (data[32].missing != -1) && (data[32].fvalue < (float)2.4406335354)) {
      result[6] += -0.09379324;
    } else {
      result[6] += -0.009088732;
    }
  }
  if ( (data[30].missing != -1) && (data[30].fvalue < (float)-1.2213975191)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.51698690653)) {
      result[7] += -0.060193263;
    } else {
      result[7] += 0.037314463;
    }
  } else {
    result[7] += -0.0939384;
  }
  if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31586059928)) {
    if ( (data[12].missing != -1) && (data[12].fvalue < (float)2.23818326)) {
      result[8] += -0.07468515;
    } else {
      result[8] += 0.08428327;
    }
  } else {
    result[8] += -0.0939802;
  }
  if ( (data[14].missing != -1) && (data[14].fvalue < (float)-0.44441816211)) {
    if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.49173647165)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)1.1061306)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)3.6675543785)) {
          if ( (data[58].missing != -1) && (data[58].fvalue < (float)-0.55193799734)) {
            if ( (data[83].missing != -1) && (data[83].fvalue < (float)1)) {
              result[9] += -0.080076955;
            } else {
              if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.1340187043)) {
                result[9] += -0.048942633;
              } else {
                result[9] += 0.01848002;
              }
            }
          } else {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.71015536785)) {
              result[9] += -0;
            } else {
              result[9] += 0.060397144;
            }
          }
        } else {
          result[9] += 0.07995497;
        }
      } else {
        result[9] += 0.10146658;
      }
    } else {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.62911725044)) {
        if ( (data[40].missing != -1) && (data[40].fvalue < (float)0.0035779729951)) {
          if ( (data[27].missing != -1) && (data[27].fvalue < (float)0.92375618219)) {
            result[9] += -0;
          } else {
            result[9] += -0.075760275;
          }
        } else {
          result[9] += 0.0361945;
        }
      } else {
        result[9] += -0.072023556;
      }
    }
  } else {
    if ( (data[50].missing != -1) && (data[50].fvalue < (float)0.082106918097)) {
      result[9] += -0.09360681;
    } else {
      result[9] += -0.0034404194;
    }
  }
  if ( (data[5].missing != -1) && (data[5].fvalue < (float)-0.54112535715)) {
    result[10] += 0.038848236;
  } else {
    if ( (data[32].missing != -1) && (data[32].fvalue < (float)2.4406335354)) {
      result[10] += -0.09113298;
    } else {
      result[10] += -0.01931685;
    }
  }
  if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.18199364841)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.61983728409)) {
      if ( (data[47].missing != -1) && (data[47].fvalue < (float)-0.016005827114)) {
        if ( (data[80].missing != -1) && (data[80].fvalue < (float)-0.3703558743)) {
          if ( (data[35].missing != -1) && (data[35].fvalue < (float)0.35726323724)) {
            if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.69918745756)) {
              if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025115283206)) {
                if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.77628856897)) {
                  result[11] += -0.010301598;
                } else {
                  if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31466990709)) {
                    result[11] += 0.025999168;
                  } else {
                    result[11] += -0.006029987;
                  }
                }
              } else {
                if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.77948868275)) {
                  result[11] += 0.050045893;
                } else {
                  if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.77148842812)) {
                    if ( (data[32].missing != -1) && (data[32].fvalue < (float)3.4477875233)) {
                      result[11] += -0.032421574;
                    } else {
                      result[11] += -0;
                    }
                  } else {
                    if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.038621056825)) {
                      result[11] += 0.044498235;
                    } else {
                      if ( (data[68].missing != -1) && (data[68].fvalue < (float)-0.35921764374)) {
                        result[11] += -0.0074372175;
                      } else {
                        if ( (data[45].missing != -1) && (data[45].fvalue < (float)2.145118475)) {
                          result[11] += 0.041826554;
                        } else {
                          result[11] += -0;
                        }
                      }
                    }
                  }
                }
              }
            } else {
              if ( (data[32].missing != -1) && (data[32].fvalue < (float)5.9656729698)) {
                result[11] += -0.04375523;
              } else {
                result[11] += 0.00015791191;
              }
            }
          } else {
            if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.31154632568)) {
              result[11] += 0.056573573;
            } else {
              result[11] += -0;
            }
          }
        } else {
          result[11] += -0.040001158;
        }
      } else {
        if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025265553966)) {
          result[11] += -0.031927384;
        } else {
          if ( (data[44].missing != -1) && (data[44].fvalue < (float)-0.01178185828)) {
            if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.29902103543)) {
              if ( (data[37].missing != -1) && (data[37].fvalue < (float)0.7573646307)) {
                result[11] += 0.09463125;
              } else {
                result[11] += 0.025130015;
              }
            } else {
              result[11] += 0.0012555834;
            }
          } else {
            result[11] += -0.005586105;
          }
        }
      }
    } else {
      if ( (data[83].missing != -1) && (data[83].fvalue < (float)1)) {
        result[11] += -0.08764639;
      } else {
        if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.40275913477)) {
          if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.021839931607)) {
            result[11] += -0;
          } else {
            result[11] += -0.051925126;
          }
        } else {
          result[11] += 0.011413765;
        }
      }
    }
  } else {
    if ( (data[83].missing != -1) && (data[83].fvalue < (float)1)) {
      if ( (data[55].missing != -1) && (data[55].fvalue < (float)-0.068880498409)) {
        result[11] += -0.09035538;
      } else {
        result[11] += -0;
      }
    } else {
      if ( (data[40].missing != -1) && (data[40].fvalue < (float)1.3720816374)) {
        if ( (data[40].missing != -1) && (data[40].fvalue < (float)0.30947673321)) {
          result[11] += 0.0025834523;
        } else {
          result[11] += -0.057013884;
        }
      } else {
        result[11] += 0.033303086;
      }
    }
  }
  if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025232160464)) {
    if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.83832764626)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)-0.51474040747)) {
        result[12] += 0.017649513;
      } else {
        result[12] += -0.03387981;
      }
    } else {
      if ( (data[19].missing != -1) && (data[19].fvalue < (float)2.1549119949)) {
        result[12] += -0.09183217;
      } else {
        result[12] += -0.026946647;
      }
    }
  } else {
    if ( (data[13].missing != -1) && (data[13].fvalue < (float)1.0699566603)) {
      if ( (data[86].missing != -1) && (data[86].fvalue < (float)1)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.62796533108)) {
          result[12] += -0;
        } else {
          result[12] += 0.10867186;
        }
      } else {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.039009898901)) {
          result[12] += -0;
        } else {
          result[12] += -0.05550443;
        }
      }
    } else {
      result[12] += -0.06273817;
    }
  }
  if ( (data[30].missing != -1) && (data[30].fvalue < (float)-0.18199364841)) {
    if ( (data[80].missing != -1) && (data[80].fvalue < (float)-0.37019988894)) {
      if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025418607518)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62018990517)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.17023339868)) {
            result[0] += -0.044630684;
          } else {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)-1.93369174)) {
              if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.20401591063)) {
                result[0] += 0.0038904997;
              } else {
                result[0] += -0.0107486155;
              }
            } else {
              if ( (data[30].missing != -1) && (data[30].fvalue < (float)-1.0089722872)) {
                result[0] += -0.011602109;
              } else {
                result[0] += 0.07442753;
              }
            }
          }
        } else {
          if ( (data[44].missing != -1) && (data[44].fvalue < (float)-0.03903195262)) {
            result[0] += 0.105304666;
          } else {
            result[0] += 0.028508205;
          }
        }
      } else {
        if ( (data[58].missing != -1) && (data[58].fvalue < (float)-0.44744732976)) {
          if ( (data[29].missing != -1) && (data[29].fvalue < (float)-0.59758293629)) {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.96582579613)) {
              if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.64759612083)) {
                if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.23670496047)) {
                  if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.25304949284)) {
                    if ( (data[52].missing != -1) && (data[52].fvalue < (float)0.018169729039)) {
                      result[0] += 0.0883077;
                    } else {
                      result[0] += -0;
                    }
                  } else {
                    result[0] += -0;
                  }
                } else {
                  result[0] += 0.1066562;
                }
              } else {
                result[0] += -0;
              }
            } else {
              result[0] += -0;
            }
          } else {
            if ( (data[34].missing != -1) && (data[34].fvalue < (float)-0.20845749974)) {
              if ( (data[61].missing != -1) && (data[61].fvalue < (float)-0.16667290032)) {
                if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.54431396723)) {
                  if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.038621056825)) {
                    result[0] += -0.034468245;
                  } else {
                    if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.17132686079)) {
                      result[0] += 0.024103405;
                    } else {
                      result[0] += -0.0011450767;
                    }
                  }
                } else {
                  if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62019306421)) {
                    if ( (data[43].missing != -1) && (data[43].fvalue < (float)0.14091680944)) {
                      result[0] += -0.02680986;
                    } else {
                      if ( (data[54].missing != -1) && (data[54].fvalue < (float)0.079855747521)) {
                        result[0] += 0.025778841;
                      } else {
                        result[0] += -0.0005276158;
                      }
                    }
                  } else {
                    result[0] += 0.056579415;
                  }
                }
              } else {
                if ( (data[2].missing != -1) && (data[2].fvalue < (float)-0.038750100881)) {
                  result[0] += -0.105252914;
                } else {
                  result[0] += -0;
                }
              }
            } else {
              if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.024169132113)) {
                result[0] += 0.06523189;
              } else {
                result[0] += -0;
              }
            }
          }
        } else {
          result[0] += -0.06970279;
        }
      }
    } else {
      if ( (data[78].missing != -1) && (data[78].fvalue < (float)3.4584906101)) {
        result[0] += -0.08203052;
      } else {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.63977259398)) {
          result[0] += -0.053825058;
        } else {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.78405153751)) {
            result[0] += 0.056527797;
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62021076679)) {
              result[0] += -0.040841416;
            } else {
              result[0] += -0;
            }
          }
        }
      }
    }
  } else {
    if ( (data[38].missing != -1) && (data[38].fvalue < (float)-0.64759612083)) {
      result[0] += -0.10269973;
    } else {
      if ( (data[28].missing != -1) && (data[28].fvalue < (float)1.4877724648)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.58649593592)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.50391459465)) {
            result[0] += 0.013045939;
          } else {
            result[0] += 0.09989307;
          }
        } else {
          result[0] += -0;
        }
      } else {
        result[0] += -0.08874131;
      }
    }
  }
  if ( (data[14].missing != -1) && (data[14].fvalue < (float)-0.43788185716)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.52890723944)) {
      if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.4328392446)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)3.7342278957)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)-0.57866376638)) {
            result[1] += 0.017336115;
          } else {
            if ( (data[42].missing != -1) && (data[42].fvalue < (float)-0.010558721609)) {
              result[1] += -0.10305598;
            } else {
              result[1] += -0.004813413;
            }
          }
        } else {
          result[1] += 0.020832136;
        }
      } else {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)-0.36735785007)) {
          if ( (data[28].missing != -1) && (data[28].fvalue < (float)-0.73308742046)) {
            if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.64542460442)) {
              result[1] += -0;
            } else {
              result[1] += 0.09057659;
            }
          } else {
            if ( (data[39].missing != -1) && (data[39].fvalue < (float)-0.30989176035)) {
              result[1] += -0.08764087;
            } else {
              result[1] += 0.023214204;
            }
          }
        } else {
          if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.15498234332)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62020581961)) {
              result[1] += 0.08499331;
            } else {
              if ( (data[40].missing != -1) && (data[40].fvalue < (float)-0.60498034954)) {
                if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60419660807)) {
                  result[1] += -0;
                } else {
                  result[1] += -0.07054523;
                }
              } else {
                if ( (data[8].missing != -1) && (data[8].fvalue < (float)-0.62002527714)) {
                  if ( (data[32].missing != -1) && (data[32].fvalue < (float)5.7825541496)) {
                    if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62015110254)) {
                      result[1] += -0;
                    } else {
                      result[1] += -0.05498581;
                    }
                  } else {
                    result[1] += -0;
                  }
                } else {
                  if ( (data[57].missing != -1) && (data[57].fvalue < (float)-0.60252219439)) {
                    if ( (data[27].missing != -1) && (data[27].fvalue < (float)-0.25304949284)) {
                      result[1] += 0.005865787;
                    } else {
                      result[1] += 0.0740254;
                    }
                  } else {
                    if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.74638354778)) {
                      result[1] += -0.013748812;
                    } else {
                      result[1] += -0;
                    }
                  }
                }
              }
            }
          } else {
            if ( (data[40].missing != -1) && (data[40].fvalue < (float)0.37125378847)) {
              result[1] += -0.06925231;
            } else {
              result[1] += 0.03284157;
            }
          }
        }
      }
    } else {
      result[1] += -0.090641566;
    }
  } else {
    if ( (data[78].missing != -1) && (data[78].fvalue < (float)3.4584906101)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)-0.62019306421)) {
        result[1] += -0;
      } else {
        if ( (data[79].missing != -1) && (data[79].fvalue < (float)6.0763492584)) {
          result[1] += 0.09337985;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)-0.62002336979)) {
            result[1] += -0;
          } else {
            result[1] += 0.07249815;
          }
        }
      }
    } else {
      result[1] += -0.0752139;
    }
  }
  if ( (data[87].missing != -1) && (data[87].fvalue < (float)1)) {
    if ( (data[52].missing != -1) && (data[52].fvalue < (float)0.23504699767)) {
      result[2] += -0.09086094;
    } else {
      result[2] += -0;
    }
  } else {
    if ( (data[52].missing != -1) && (data[52].fvalue < (float)-0.025407476351)) {
      result[2] += 0.046276726;
    } else {
      result[2] += -0.012448673;
    }
  }
  if ( (data[1].missing != -1) && (data[1].fvalue < (float)-0.17688424885)) {
    result[3] += 0.09329705;
  } else {
    result[3] += -0.09290748;
  }
  if ( (data[12].missing != -1) && (data[12].fvalue < (float)2.23818326)) {
    result[4] += -0.090642415;
  } else {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)0.27389571071)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)0.49699115753)) {
        result[4] += -0;
      } else {
        result[4] += -0.07345659;
      }
    } else {
      result[4] += 0.113015294;
    }
  }
}

