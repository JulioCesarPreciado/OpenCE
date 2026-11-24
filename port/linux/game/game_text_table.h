/*
GAME_TEXT_TABLE.H

The game's texts and their Spanish ones (game_text.c). Written by
tools/game_text.py from port/assets/menus/language/es.json and
port/assets/game_text/es.json: change those and run it, not this file.
*/

/* each Spanish text (not const: the game ends a string as it gets it,
text_group.c) */
static wchar_t game_text_0[] = L"\t%b-button =salir";
static wchar_t game_text_1[] = L"\t%b-button =salir    %a-button =elegir partida";
static wchar_t game_text_2[] = L"\tEquipo azul\t%s";
static wchar_t game_text_3[] = L"\tESCAPE = Salir";
static wchar_t game_text_4[] = L"\tESCAPE = Salir    ENTER = Continuar";
static wchar_t game_text_5[] = L"\tEquipo rojo\t%s";
static wchar_t game_text_6[] = L" \n \n \nReglas actuales:";
static wchar_t game_text_7[] = L" \r\n \r\n \r\nReglas actuales:";
static wchar_t game_text_8[] = L" restantes";
static wchar_t game_text_9[] = L"N.\x00BA de jugadores:";
static wchar_t game_text_10[] = L"%d equipo %d";
static wchar_t game_text_11[] = L"%s %d banderas";
static wchar_t game_text_12[] = L"%s (%d segundos)";
static wchar_t game_text_13[] = L"%s 1 bandera";
static wchar_t game_text_14[] = L"%s todas las vueltas completas";
static wchar_t game_text_15[] = L"%s se suicid\x00F3";
static wchar_t game_text_16[] = L"%s muri\x00F3";
static wchar_t game_text_17[] = L"%s tiene la bola.";
static wchar_t game_text_18[] = L"%s la trae.";
static wchar_t game_text_19[] = L"%s bajas %d de %d";
static wchar_t game_text_20[] = L"%s bajas %d equipo %d de %d";
static wchar_t game_text_21[] = L"%s vuelta %d de %d";
static wchar_t game_text_22[] = L"%s sali\x00F3";
static wchar_t game_text_23[] = L"%s fue traicionado por %s";
static wchar_t game_text_24[] = L"%s cay\x00F3 ante %s";
static wchar_t game_text_25[] = L"%s muri\x00F3 atropellado";
static wchar_t game_text_26[] = L"%s cay\x00F3 ante los guardianes";
static wchar_t game_text_27[] = L"(%d vidas)";
static wchar_t game_text_28[] = L"(1 vida)";
static wchar_t game_text_29[] = L"(cerrada)";
static wchar_t game_text_30[] = L"(sin vidas)";
static wchar_t game_text_31[] = L"... y entonces hubo doce bolas en la partida.";
static wchar_t game_text_32[] = L"1 MINUTO";
static wchar_t game_text_33[] = L"10 MINUTOS";
static wchar_t game_text_34[] = L"10.\x00BA";
static wchar_t game_text_35[] = L"10.\x00BA lugar";
static wchar_t game_text_36[] = L"11.\x00BA";
static wchar_t game_text_37[] = L"11.\x00BA lugar";
static wchar_t game_text_38[] = L"12.\x00BA";
static wchar_t game_text_39[] = L"12.\x00BA lugar";
static wchar_t game_text_40[] = L"13.\x00BA";
static wchar_t game_text_41[] = L"13.\x00BA lugar";
static wchar_t game_text_42[] = L"14.\x00BA";
static wchar_t game_text_43[] = L"14.\x00BA lugar";
static wchar_t game_text_44[] = L"15 MINUTOS";
static wchar_t game_text_45[] = L"15.\x00BA";
static wchar_t game_text_46[] = L"15.\x00BA lugar";
static wchar_t game_text_47[] = L"16.\x00BA";
static wchar_t game_text_48[] = L"16.\x00BA lugar";
static wchar_t game_text_49[] = L"1.\x00BA";
static wchar_t game_text_50[] = L"2 MINUTOS";
static wchar_t game_text_51[] = L"20 MINUTOS";
static wchar_t game_text_52[] = L"25 MINUTOS";
static wchar_t game_text_53[] = L"2.\x00BA";
static wchar_t game_text_54[] = L"3 MINUTOS";
static wchar_t game_text_55[] = L"30 MINUTOS";
static wchar_t game_text_56[] = L"3.\x00BA";
static wchar_t game_text_57[] = L"45 MINUTOS";
static wchar_t game_text_58[] = L"4.\x00BA";
static wchar_t game_text_59[] = L"5 MINUTOS";
static wchar_t game_text_60[] = L"5.\x00BA";
static wchar_t game_text_61[] = L"60 SEGUNDOS";
static wchar_t game_text_62[] = L"6.\x00BA";
static wchar_t game_text_63[] = L"7.\x00BA";
static wchar_t game_text_64[] = L"8.\x00BA";
static wchar_t game_text_65[] = L"90 SEGUNDOS";
static wchar_t game_text_66[] = L"9.\x00BA";
static wchar_t game_text_67[] = L"9.\x00BA lugar";
static wchar_t game_text_68[] = L"=ACEPTAR";
static wchar_t game_text_69[] = L"=ATR\x00C1S";
static wchar_t game_text_70[] = L"=VOLVER";
static wchar_t game_text_71[] = L"=DESCARTAR CAMBIOS";
static wchar_t game_text_72[] = L"=CREAR NUEVO";
static wchar_t game_text_73[] = L"=RETRASAR PARTIDA";
static wchar_t game_text_74[] = L"=BORRAR";
static wchar_t game_text_75[] = L"=LISTO";
static wchar_t game_text_76[] = L"=EDITAR";
static wchar_t game_text_77[] = L"=GUARDAR";
static wchar_t game_text_78[] = L"=GUARDAR CAMBIOS";
static wchar_t game_text_79[] = L"=ELEGIR";
static wchar_t game_text_80[] = L"=INICIAR PARTIDA";
static wchar_t game_text_81[] = L"Ocurri\x00F3 un error\nde la tarjeta de\nmemoria del control.";
static wchar_t game_text_82[] = L"Ocurri\x00F3 un error\r\nde la tarjeta de\r\nmemoria del control.";
static wchar_t game_text_83[] = L"Ocurri\x00F3 un error\ndel control.";
static wchar_t game_text_84[] = L"Ocurri\x00F3 un error\r\ndel control.";
static wchar_t game_text_85[] = L"Un buen amigo es el mejor espejo.";
static wchar_t game_text_86[] = L"Ciento cincuenta bajas para ganar.\nSolo un servidor lleno llega ah\x00ED.";
static wchar_t game_text_87[] = L"Ciento cincuenta bajas para ganar.\r\nSolo un servidor lleno llega ah\x00ED.";
static wchar_t game_text_88[] = L"Cien bajas para ganar. Hecho para partidas grandes.";
static wchar_t game_text_89[] = L"Mucho caminar por\nun pasillo corto...\n\n2-8 jugadores";
static wchar_t game_text_90[] = L"Mucho caminar por\r\nun pasillo corto...\r\n\r\n2-8 jugadores";
static wchar_t game_text_91[] = L"Ocurri\x00F3 un error\nde red.";
static wchar_t game_text_92[] = L"Ocurri\x00F3 un error\r\nde red.";
static wchar_t game_text_93[] = L"Un arma primaria al azar, de las que\ntiene el mapa, cada vez que apareces.";
static wchar_t game_text_94[] = L"Un arma primaria al azar, de las que\r\ntiene el mapa, cada vez que apareces.";
static wchar_t game_text_95[] = L"Un arma secundaria al azar, de las que\ntiene el mapa, cada vez que apareces.";
static wchar_t game_text_96[] = L"Un arma secundaria al azar, de las que\r\ntiene el mapa, cada vez que apareces.";
static wchar_t game_text_97[] = L"Basta una sola vuelta para ganar la partida. \nSalvo que traigas prisa, ser\x00E1 r\x00E1pido \n"
	L"y f\x00E1" L"cil.";
static wchar_t game_text_98[] = L"Basta una sola vuelta para ganar la partida. \r\nSalvo que traigas prisa, ser\x00E1 r\x00E1pido "
	L"\r\ny f\x00E1" L"cil.";
static wchar_t game_text_99[] = L"ACERCA DE";
static wchar_t game_text_100[] = L"ACCI\x00D3N";
static wchar_t game_text_101[] = L"AVANZADO";
static wchar_t game_text_102[] = L"\x00A1" L"ALERTA!";
static wchar_t game_text_103[] = L"CUALQUIER ORDEN";
static wchar_t game_text_104[] = L"\x00BF" L"EST\x00C1S SEGURO\?";
static wchar_t game_text_105[] = L"ASALTO:";
static wchar_t game_text_106[] = L"ATENCI\x00D3N";
static wchar_t game_text_107[] = L"ATENCI\x00D3N:";
static wchar_t game_text_108[] = L"AUDIO";
static wchar_t game_text_109[] = L"BALANCE DE EQUIPOS:";
static wchar_t game_text_110[] = L"DISPOSITIVOS DISPONIBLES";
static wchar_t game_text_111[] = L"Aceptando jugadores";
static wchar_t game_text_112[] = L"Ajusta la sensibilidad y la\npunter\x00ED" L"a del mouse.\n\nPerfil:";
static wchar_t game_text_113[] = L"Ajusta la sensibilidad y la\r\npunter\x00ED" L"a del mouse.\r\n\r\nPerfil:";
static wchar_t game_text_114[] = L"Ajusta el volumen de la m\x00FAsica\ny de todo lo dem\x00E1s.\n\nPerfil:";
static wchar_t game_text_115[] = L"Ajusta el volumen de la m\x00FAsica\r\ny de todo lo dem\x00E1s.\r\n\r\nPerfil:";
static wchar_t game_text_116[] = L"Ajusta los veh\x00ED" L"culos del equipo azul.";
static wchar_t game_text_117[] = L"Ajusta los veh\x00ED" L"culos del equipo rojo.";
static wchar_t game_text_118[] = L"Al morir puedes reaparecer de inmediato.";
static wchar_t game_text_119[] = L"Todos - ";
static wchar_t game_text_120[] = L"Todos los dem\x00E1s jugadores aparecen en tu sensor \nde movimiento cuando se mueven.";
static wchar_t game_text_121[] = L"Todos los dem\x00E1s jugadores aparecen en tu sensor \r\nde movimiento cuando se mueven.";
static wchar_t game_text_122[] = L"Todos los jugadores son visibles, a menos que\nencuentren un camuflaje activo.";
static wchar_t game_text_123[] = L"Todos los jugadores son visibles, a menos que\r\nencuentren un camuflaje activo.";
static wchar_t game_text_124[] = L"Se perder\x00E1 todo el \navance de este nivel.";
static wchar_t game_text_125[] = L"Se perder\x00E1 todo el \r\navance de este nivel.";
static wchar_t game_text_126[] = L"Se perder\x00E1 todo el\navance desde el \x00FAltimo\npunto de control.";
static wchar_t game_text_127[] = L"Se perder\x00E1 todo el\r\navance desde el \x00FAltimo\r\npunto de control.";
static wchar_t game_text_128[] = L"Todos los jugadores son completamente invisibles.";
static wchar_t game_text_129[] = L"Todas las armas del mapa solo sirven a\ncorta distancia.";
static wchar_t game_text_130[] = L"Todas las armas del mapa solo sirven a\r\ncorta distancia.";
static wchar_t game_text_131[] = L"Todas las armas del mapa se cambian por\nrifles de asalto y rifles de plasma.";
static wchar_t game_text_132[] = L"Todas las armas del mapa se cambian por\npistolas.";
static wchar_t game_text_133[] = L"Todas las armas del mapa se cambian por\narmas de plasma.";
static wchar_t game_text_134[] = L"Todas las armas del mapa se cambian por\nlanzacohetes.";
static wchar_t game_text_135[] = L"Todas las armas del mapa se cambian por\nescopetas.";
static wchar_t game_text_136[] = L"Todas las armas del mapa se cambian por\r\nrifles de asalto y rifles de plasma.";
static wchar_t game_text_137[] = L"Todas las armas del mapa se cambian por\r\npistolas.";
static wchar_t game_text_138[] = L"Todas las armas del mapa se cambian por\r\narmas de plasma.";
static wchar_t game_text_139[] = L"Todas las armas del mapa se cambian por\r\nlanzacohetes.";
static wchar_t game_text_140[] = L"Todas las armas del mapa se cambian por\r\nescopetas.";
static wchar_t game_text_141[] = L"Todo tu esfuerzo valdr\x00E1 la pena.";
static wchar_t game_text_142[] = L"Aliado %s complet\x00F3 la vuelta %d.";
static wchar_t game_text_143[] = L"Aliado %s tiene la bola (%d segundos)";
static wchar_t game_text_144[] = L"Aliado %s en la colina (%d segundos)";
static wchar_t game_text_145[] = L"\x00A1" L"Aliado %s anot\x00F3 una bandera!";
static wchar_t game_text_146[] = L"\x00A1Un aliado la trae!";
static wchar_t game_text_147[] = L"Un enemigo detr\x00E1s\nde cada \x00E1rbol\n\n4-16 jugadores\n\nCon veh\x00ED" L"culos";
static wchar_t game_text_148[] = L"Un enemigo detr\x00E1s\r\nde cada \x00E1rbol\r\n\r\n4-16 jugadores\r\n\r\nCon veh\x00ED" L"culos";
static wchar_t game_text_149[] = L"Un aliado tiene la bola.";
static wchar_t game_text_150[] = L"Ocurri\x00F3 un error al\ncargar un archivo de mapa.";
static wchar_t game_text_151[] = L"Ocurri\x00F3 un error al\r\ncargar un archivo de mapa.";
static wchar_t game_text_152[] = L"\x00BFSeguro que quieres borrar\nesta partida guardada\?";
static wchar_t game_text_153[] = L"\x00BFSeguro que quieres borrar\r\nesta partida guardada\?";
static wchar_t game_text_154[] = L"\x00BFSeguro que quieres \nborrar este tipo de\njuego\? Se perder\x00E1n\ntus ajustes.";
static wchar_t game_text_155[] = L"\x00BFSeguro que quieres \nborrar este perfil\? \nSe perder\x00E1n tu avance \ny tus ajustes.";
static wchar_t game_text_156[] = L"\x00BFSeguro que quieres \r\nborrar este tipo de\r\njuego\? Se perder\x00E1n\r\ntus ajustes.";
static wchar_t game_text_157[] = L"\x00BFSeguro que quieres \r\nborrar este perfil\? \r\nSe perder\x00E1n tu avance \r\ny tus ajust"
	L"es.";
static wchar_t game_text_158[] = L"\x00BFSeguro que quieres\nsalir de OpenCE Arena\?";
static wchar_t game_text_159[] = L"\x00BFSeguro que quieres\r\nsalir de OpenCE Arena\?";
static wchar_t game_text_160[] = L"Asalto";
static wchar_t game_text_161[] = L"Asistencias";
static wchar_t game_text_162[] = L"Al final de esta partida habr\x00E1 quince jugadores\nenojados. Enojados porque el ganador los e"
	L"limin\x00F3.";
static wchar_t game_text_163[] = L"Al final de esta partida habr\x00E1 quince jugadores\r\nenojados. Enojados porque el ganador los"
	L" elimin\x00F3.";
static wchar_t game_text_164[] = L"Inicio autom\x00E1tico";
static wchar_t game_text_165[] = L"N\x00DAMERO DE BOLAS:";
static wchar_t game_text_166[] = L"TIPO DE BOLA:";
static wchar_t game_text_167[] = L"EQUIPO AZUL";
static wchar_t game_text_168[] = L"Retroceso";
static wchar_t game_text_169[] = L"Calidad y efectos de audio\nb\x00E1sicos para el mejor rendimiento.";
static wchar_t game_text_170[] = L"Calidad y efectos de audio\r\nb\x00E1sicos para el mejor rendimiento.";
static wchar_t game_text_171[] = L"\x00A1S\x00E9 el primero de tu cuadra en juntar las quince bolas!";
static wchar_t game_text_172[] = L"Hazte uno con la bola. Y \nal\x00E9jala de todos los dem\x00E1s \nmientras tanto.\nReglas actual"
	L"es:";
static wchar_t game_text_173[] = L"Hazte uno con la bola. Y \r\nal\x00E9jala de todos los dem\x00E1s \r\nmientras tanto.\r\nReglas "
	L"actuales:";
static wchar_t game_text_174[] = L"La mejor calidad de audio con Doppler y\nefectos 3D de posici\x00F3n, para PC de gama alta.";
static wchar_t game_text_175[] = L"La mejor calidad de audio con Doppler y\r\nefectos 3D de posici\x00F3n, para PC de gama alta.";
static wchar_t game_text_176[] = L"Negro";
static wchar_t game_text_177[] = L"Azul";
static wchar_t game_text_178[] = L"Equipo azul";
static wchar_t game_text_179[] = L"Azul supera a Rojo %s a %s %s";
static wchar_t game_text_180[] = L"Caf\x00E9";
static wchar_t game_text_181[] = L"Explora las partidas en\ninternet.";
static wchar_t game_text_182[] = L"Explora las partidas en\r\ninternet.";
static wchar_t game_text_183[] = L"CAPTURAS PARA GANAR:";
static wchar_t game_text_184[] = L"CATEGOR\x00CD" L"A:";
static wchar_t game_text_185[] = L"CAMBIAR COLOR";
static wchar_t game_text_186[] = L"CAMBIAR NOMBRE";
static wchar_t game_text_187[] = L"CL\x00C1SICO";
static wchar_t game_text_188[] = L"PUERTO DEL CLIENTE:";
static wchar_t game_text_189[] = L"CAMPA\x00D1" L"A CO-OP";
static wchar_t game_text_190[] = L"TIPO DE CONEXI\x00D3N:";
static wchar_t game_text_191[] = L"TECLAS";
static wchar_t game_text_192[] = L"CREAR PARTIDA";
static wchar_t game_text_193[] = L"CREAR";
static wchar_t game_text_194[] = L"AGACHARSE";
static wchar_t game_text_195[] = L"Bloq May\x00FAs";
static wchar_t game_text_196[] = L"Captura la bandera cinco veces y ganas la partida.";
static wchar_t game_text_197[] = L"Capturas";
static wchar_t game_text_198[] = L"Cambia el color del perfil\npara todos contra todos.\n\nPerfil:";
static wchar_t game_text_199[] = L"Cambia el color del perfil\r\npara todos contra todos.\r\n\r\nPerfil:";
static wchar_t game_text_200[] = L"Punto de control guardado.";
static wchar_t game_text_201[] = L"Punto de control... ";
static wchar_t game_text_202[] = L"Punto de control... listo";
static wchar_t game_text_203[] = L"Elige un punto guardado para cargar";
static wchar_t game_text_204[] = L"Elige un dispositivo de la lista para configurarlo.";
static wchar_t game_text_205[] = L"Elige ventana o pantalla\ncompleta, los cuadros y m\x00E1s.\n\nPerfil:";
static wchar_t game_text_206[] = L"Elige ventana o pantalla\r\ncompleta, los cuadros y m\x00E1s.\r\n\r\nPerfil:";
static wchar_t game_text_207[] = L"Elige equipo con la cruceta";
static wchar_t game_text_208[] = L"Elige las teclas y botones del\nmouse para cada acci\x00F3n.\n\nPerfil:";
static wchar_t game_text_209[] = L"Elige las teclas y botones del\r\nmouse para cada acci\x00F3n.\r\n\r\nPerfil:";
static wchar_t game_text_210[] = L"Elige el m\x00E1ximo de jugadores que podr\x00E1n jugar\nen tu partida. El m\x00E1ximo de jugado"
	L"res de un\nservidor depende de la velocidad de tu\nconexi\x00F3n.";
static wchar_t game_text_211[] = L"Elige el m\x00E1ximo de jugadores que podr\x00E1n jugar\r\nen tu partida. El m\x00E1ximo de juga"
	L"dores de un\r\nservidor depende de la velocidad de tu\r\nconexi\x00F3n.";
static wchar_t game_text_212[] = L"Elige los ajustes y \nrestricciones de jugador de\neste tipo de juego.\nEste tipo de juego:";
static wchar_t game_text_213[] = L"Elige los ajustes y \r\nrestricciones de jugador de\r\neste tipo de juego.\r\nEste tipo de juego"
	L":";
static wchar_t game_text_214[] = L"Elige las reglas de OpenCE:\nSWAT, Infection, Gun Game\ny Hardcore.\nEste tipo de juego:";
static wchar_t game_text_215[] = L"Elige las reglas de OpenCE:\r\nSWAT, Infection, Gun Game\r\ny Hardcore.\r\nEste tipo de juego:";
static wchar_t game_text_216[] = L"Elige las armas y\nlos dem\x00E1s objetos que\naparecen en este tipo de\njuego. Este tipo de jue"
	L"go:";
static wchar_t game_text_217[] = L"Elige las armas y\r\nlos dem\x00E1s objetos que\r\naparecen en este tipo de\r\njuego. Este tipo "
	L"de juego:";
static wchar_t game_text_218[] = L"Elige qu\x00E9 indicadores de la\ninterfaz hay al jugar \neste tipo de juego.\nEste tipo de jueg"
	L"o:";
static wchar_t game_text_219[] = L"Elige qu\x00E9 indicadores de la\r\ninterfaz hay al jugar \r\neste tipo de juego.\r\nEste tipo d"
	L"e juego:";
static wchar_t game_text_220[] = L"Cobalto";
static wchar_t game_text_221[] = L"Domina los cielos en el Banshee.";
static wchar_t game_text_222[] = L"Completa las vueltas\nrequeridas antes que tus\nrivales y deja atr\x00E1s a la\ncompetencia. Reg"
	L"las actuales:";
static wchar_t game_text_223[] = L"Completa las vueltas\r\nrequeridas antes que tus\r\nrivales y deja atr\x00E1s a la\r\ncompetenci"
	L"a. Reglas actuales:";
static wchar_t game_text_224[] = L"Conexi\x00F3n rechazada: tu\ncliente es m\x00E1s nuevo que\nel servidor.";
static wchar_t game_text_225[] = L"Conexi\x00F3n rechazada: tu\ncliente es m\x00E1s viejo que\nel servidor.";
static wchar_t game_text_226[] = L"Conexi\x00F3n rechazada: tu\r\ncliente es m\x00E1s nuevo que\r\nel servidor.";
static wchar_t game_text_227[] = L"Conexi\x00F3n rechazada: tu\r\ncliente es m\x00E1s viejo que\r\nel servidor.";
static wchar_t game_text_228[] = L"Controla la bola o tr\x00E1" L"ela cinco minutos y la partida\nes tuya. Gana el primer Juggernau"
	L"t con cinco bajas.";
static wchar_t game_text_229[] = L"Controla la bola o tr\x00E1" L"ela cinco minutos y la partida\r\nes tuya. Gana el primer Juggern"
	L"aut con cinco bajas.";
static wchar_t game_text_230[] = L"Controla la bola o tr\x00E1" L"ela dos minutos y la partida\nes tuya. Gana el primer Juggernaut "
	L"con dos bajas.";
static wchar_t game_text_231[] = L"Controla la bola o tr\x00E1" L"ela dos minutos y la partida\r\nes tuya. Gana el primer Juggernau"
	L"t con dos bajas.";
static wchar_t game_text_232[] = L"Controles:";
static wchar_t game_text_233[] = L"Hidroprocesadora\ndel Covenant\n\n4-8 jugadores";
static wchar_t game_text_234[] = L"Hidroprocesadora\r\ndel Covenant\r\n\r\n4-8 jugadores";
static wchar_t game_text_235[] = L"Crear perfil\nde jugador";
static wchar_t game_text_236[] = L"Crear perfil\r\nde jugador";
static wchar_t game_text_237[] = L"Creando el tipo de juego...\nun momento por favor.";
static wchar_t game_text_238[] = L"Creando el archivo de\najustes... no apagues\ntu consola Xbox.";
static wchar_t game_text_239[] = L"Creando el tipo de juego...\r\nun momento por favor.";
static wchar_t game_text_240[] = L"Creando el archivo de\r\najustes... no apagues\r\ntu consola Xbox.";
static wchar_t game_text_241[] = L"Creando tu perfil...\nun momento por favor.";
static wchar_t game_text_242[] = L"Creando el perfil...\nno apagues tu\nconsola Xbox.";
static wchar_t game_text_243[] = L"Creando tu perfil...\r\nun momento por favor.";
static wchar_t game_text_244[] = L"Creando el perfil...\r\nno apagues tu\r\nconsola Xbox.";
static wchar_t game_text_245[] = L"Nivel actual:";
static wchar_t game_text_246[] = L"Cambia el puerto de red por\nel que env\x00ED" L"a el cliente.";
static wchar_t game_text_247[] = L"Cambia el puerto de red por\r\nel que env\x00ED" L"a el cliente.";
static wchar_t game_text_248[] = L"Cambia el puerto de red en el que escucha el\nservidor. Tambi\x00E9n afecta el puerto donde los\n"
	L"clientes buscan partidas en la red local.";
static wchar_t game_text_249[] = L"Cambia el puerto de red en el que escucha el\r\nservidor. Tambi\x00E9n afecta el puerto donde lo"
	L"s\r\nclientes buscan partidas en la red local.";
static wchar_t game_text_250[] = L"Personaliza el conjunto de\nveh\x00ED" L"culos que aparecen en el mapa.";
static wchar_t game_text_251[] = L"Personaliza el conjunto de\r\nveh\x00ED" L"culos que aparecen en el mapa.";
static wchar_t game_text_252[] = L"Cian";
static wchar_t game_text_253[] = L"Recorre los grupos de comandos para\nconfigurar todos los comandos disponibles.";
static wchar_t game_text_254[] = L"Recorre los grupos de comandos para\r\nconfigurar todos los comandos disponibles.";
static wchar_t game_text_255[] = L"RESISTENTE AL DA\x00D1O";
static wchar_t game_text_256[] = L"OSCURECER / ACLARAR";
static wchar_t game_text_257[] = L"BONO POR MUERTE:";
static wchar_t game_text_258[] = L"CALCOMAN\x00CD" L"AS:";
static wchar_t game_text_259[] = L"RESTABLECER";
static wchar_t game_text_260[] = L"BORRAR";
static wchar_t game_text_261[] = L"DISPOSITIVO:";
static wchar_t game_text_262[] = L"DISPOSITIVOS DEL PERFIL";
static wchar_t game_text_263[] = L"\x00BFSAB\x00CD" L"AS QUE...\?";
static wchar_t game_text_264[] = L"ENLACE DIRECTO";
static wchar_t game_text_265[] = L"DSL/Cable (MEDIA)";
static wchar_t game_text_266[] = L"DSL/Cable (ALTA)";
static wchar_t game_text_267[] = L"DSL/Cable (BAJA)";
static wchar_t game_text_268[] = L"El fuego amigo solo baja los escudos.\nLa salud no se ve afectada.";
static wchar_t game_text_269[] = L"El fuego amigo solo baja los escudos.\r\nLa salud no se ve afectada.";
static wchar_t game_text_270[] = L"Muerto";
static wchar_t game_text_271[] = L"Muertes";
static wchar_t game_text_272[] = L"Las calcoman\x00ED" L"as se desactivan.";
static wchar_t game_text_273[] = L"Las calcoman\x00ED" L"as se activan.\nIncluyen agujeros de bala y sangre.";
static wchar_t game_text_274[] = L"Las calcoman\x00ED" L"as se activan.\r\nIncluyen agujeros de bala y sangre.";
static wchar_t game_text_275[] = L"Anomal\x00ED" L"a espacial\n#0198\n\n4-8 jugadores";
static wchar_t game_text_276[] = L"Anomal\x00ED" L"a espacial\r\n#0198\r\n\r\n4-8 jugadores";
static wchar_t game_text_277[] = L"Normal";
static wchar_t game_text_278[] = L"Defiende el terreno con la poderosa torreta\nCovenant.";
static wchar_t game_text_279[] = L"Defiende el terreno con la poderosa torreta\r\nCovenant.";
static wchar_t game_text_280[] = L"Dificultad:";
static wchar_t game_text_281[] = L"Desactiva la asistencia de punter\x00ED" L"a con teclado\ny mouse. La del control y la t\x00E1" L"c"
	L"til no cambian.";
static wchar_t game_text_282[] = L"Desactiva la asistencia de punter\x00ED" L"a con teclado\r\ny mouse. La del control y la t\x00E1"
	L"ctil no cambian.";
static wchar_t game_text_283[] = L"No mostrar servidores vac\x00EDos.";
static wchar_t game_text_284[] = L"No mostrar servidores llenos.";
static wchar_t game_text_285[] = L"\x00BF" L"De verdad quieres\nsalir sin guardar\ntus cambios\?";
static wchar_t game_text_286[] = L"\x00BF" L"De verdad quieres\r\nsalir sin guardar\r\ntus cambios\?";
static wchar_t game_text_287[] = L"No mires abajo...\na menos que caigas\n\n4-16 jugadores\n\nCon veh\x00ED" L"culos";
static wchar_t game_text_288[] = L"No mires abajo...\r\na menos que caigas\r\n\r\n4-16 jugadores\r\n\r\nCon veh\x00ED" L"culos";
static wchar_t game_text_289[] = L"Listo";
static wchar_t game_text_290[] = L"\x00A1" L"Doble baja!";
static wchar_t game_text_291[] = L"\x00A1" L"Doble baja! (%d)";
static wchar_t game_text_292[] = L"Oye, de verdad\nnecesitas...\n\n2-8 jugadores";
static wchar_t game_text_293[] = L"Oye, de verdad\r\nnecesitas...\r\n\r\n2-8 jugadores";
static wchar_t game_text_294[] = L"Durante la partida, la colina se teletransporta a\nun lugar al azar.";
static wchar_t game_text_295[] = L"Durante la partida, la colina se teletransporta a\r\nun lugar al azar.";
static wchar_t game_text_296[] = L"Las sombras din\x00E1micas se desactivan.";
static wchar_t game_text_297[] = L"Las sombras din\x00E1micas se activan.";
static wchar_t game_text_298[] = L"F\x00C1" L"CIL";
static wchar_t game_text_299[] = L"TIPOS DE JUEGO";
static wchar_t game_text_300[] = L"DETALLE DE EFECTOS:";
static wchar_t game_text_301[] = L"SONIDO AMBIENTAL:";
static wchar_t game_text_302[] = L"INTERCAMBIAR ARMA";
static wchar_t game_text_303[] = L"DA\x00D1O EXTRA";
static wchar_t game_text_304[] = L"Cada baja da un punto al equipo del que la hizo\n(una traici\x00F3n quita uno), y cada captura v"
	L"ale\nBajas por captura. El l\x00EDmite es en capturas.";
static wchar_t game_text_305[] = L"Cada baja da un punto al equipo del que la hizo\r\n(una traici\x00F3n quita uno), y cada captura"
	L" vale\r\nBajas por captura. El l\x00EDmite es en capturas.";
static wchar_t game_text_306[] = L"Cada baja que haces cuenta para tus puntos.";
static wchar_t game_text_307[] = L"Cada jugador solo puede llevar hasta 4 granadas de\ncada tipo a la vez.";
static wchar_t game_text_308[] = L"Cada jugador solo puede llevar hasta 4 granadas de\r\ncada tipo a la vez.";
static wchar_t game_text_309[] = L"Cada equipo tiene su propia bandera.";
static wchar_t game_text_310[] = L"Los puntos de cada equipo son los de su miembro\ncon m\x00E1s puntos.";
static wchar_t game_text_311[] = L"Los puntos de cada equipo son los de su miembro\r\ncon m\x00E1s puntos.";
static wchar_t game_text_312[] = L"Los puntos de cada equipo son la suma de los de\nsus miembros.";
static wchar_t game_text_313[] = L"Los puntos de cada equipo son la suma de los de\r\nsus miembros.";
static wchar_t game_text_314[] = L"F\x00E1" L"cil";
static wchar_t game_text_315[] = L"Ocho bolas definitivamente bastan.";
static wchar_t game_text_316[] = L"Espacio\nvac\x00EDo";
static wchar_t game_text_317[] = L"Espacio\r\nvac\x00EDo";
static wchar_t game_text_318[] = L"Enemigo %s complet\x00F3 una vuelta.";
static wchar_t game_text_319[] = L"Enemigo %s tiene la bola (%d segundos)";
static wchar_t game_text_320[] = L"Enemigo %s en la colina (%d segundos)";
static wchar_t game_text_321[] = L"\x00A1" L"Enemigo %s anot\x00F3 una bandera!";
static wchar_t game_text_322[] = L"El enemigo anot\x00F3: %d a %d.";
static wchar_t game_text_323[] = L"Escribe el nombre de tu tipo de juego";
static wchar_t game_text_324[] = L"Escribe el nombre de tu perfil de jugador";
static wchar_t game_text_325[] = L"Escribe un nombre para tu servidor.";
static wchar_t game_text_326[] = L"Escribe la contrase\x00F1" L"a del servidor\nal que quieres conectarte.";
static wchar_t game_text_327[] = L"Escribe la contrase\x00F1" L"a del servidor\r\nal que quieres conectarte.";
static wchar_t game_text_328[] = L"Escribe la direcci\x00F3n del servidor al que\nquieres conectarte y, si quieres, dos\npuntos y e"
	L"l puerto. Ejemplo: 206.0.8.4:2304.";
static wchar_t game_text_329[] = L"Escribe la direcci\x00F3n del servidor al que\r\nquieres conectarte y, si quieres, dos\r\npuntos"
	L" y el puerto. Ejemplo: 206.0.8.4:2304.";
static wchar_t game_text_330[] = L"Cada vez que causas tu propia muerte esperas \ncinco segundos antes de volver a la partida. ";
static wchar_t game_text_331[] = L"Cada vez que causas tu propia muerte esperas \r\ncinco segundos antes de volver a la partida. ";
static wchar_t game_text_332[] = L"Cada vez que mueres sumas quince segundos a tu\ntiempo de reaparici\x00F3n. Cada vez que elimina"
	L"s a\nalguien restas quince segundos.";
static wchar_t game_text_333[] = L"Cada vez que mueres sumas quince segundos a tu\r\ntiempo de reaparici\x00F3n. Cada vez que elimi"
	L"nas a\r\nalguien restas quince segundos.";
static wchar_t game_text_334[] = L"Cada vez que mueres tu tiempo de reaparici\x00F3n sube\ncinco segundos. Cada vez que eliminas a "
	L"alguien\nbaja cinco segundos.";
static wchar_t game_text_335[] = L"Cada vez que mueres tu tiempo de reaparici\x00F3n sube\r\ncinco segundos. Cada vez que eliminas "
	L"a alguien\r\nbaja cinco segundos.";
static wchar_t game_text_336[] = L"Cada vez que eliminas a otro jugador corres un\npoco m\x00E1s lento. Una desventaja entretenida "
	L"para\nel tirador de buen ojo.";
static wchar_t game_text_337[] = L"Cada vez que eliminas a otro jugador corres un\r\npoco m\x00E1s lento. Una desventaja entretenid"
	L"a para\r\nel tirador de buen ojo.";
static wchar_t game_text_338[] = L"Aparecen todos los veh\x00ED" L"culos que pone\nel mapa, como en la versi\x00F3n de PC.";
static wchar_t game_text_339[] = L"Aparecen todos los veh\x00ED" L"culos que pone\r\nel mapa, como en la versi\x00F3n de PC.";
static wchar_t game_text_340[] = L"Todos tienen granadas sin l\x00EDmite: diversi\x00F3n\nruidosa, explosiva y a veces desastrosa.";
static wchar_t game_text_341[] = L"Todos tienen granadas sin l\x00EDmite: diversi\x00F3n\r\nruidosa, explosiva y a veces desastrosa"
	L".";
static wchar_t game_text_342[] = L"Todos tienen un mismo punto de destino, y el\njugador que llega primero anota una vuelta.";
static wchar_t game_text_343[] = L"Todos tienen un mismo punto de destino, y el\r\njugador que llega primero anota una vuelta.";
static wchar_t game_text_344[] = L"Todos ven los escudos y el sobreescudo\noriginales, sin importar sus ajustes.";
static wchar_t game_text_345[] = L"Todos ven los escudos y el sobreescudo\r\noriginales, sin importar sus ajustes.";
static wchar_t game_text_346[] = L"Todos aparecen con un rifle de asalto como arma\nprimaria (si el mapa tiene uno).";
static wchar_t game_text_347[] = L"Todos aparecen con un rifle de asalto como arma\r\nprimaria (si el mapa tiene uno).";
static wchar_t game_text_348[] = L"Todos aparecen con un rifle de asalto como arma\nsecundaria (si el mapa tiene uno).";
static wchar_t game_text_349[] = L"Todos aparecen con un rifle de asalto como arma\r\nsecundaria (si el mapa tiene uno).";
static wchar_t game_text_350[] = L"Todos aparecen con un needler como arma\nprimaria (si el mapa tiene uno).";
static wchar_t game_text_351[] = L"Todos aparecen con un needler como arma\r\nprimaria (si el mapa tiene uno).";
static wchar_t game_text_352[] = L"Todos aparecen con un needler como arma\nsecundaria (si el mapa tiene uno).";
static wchar_t game_text_353[] = L"Todos aparecen con un needler como arma\r\nsecundaria (si el mapa tiene uno).";
static wchar_t game_text_354[] = L"Todos aparecen con una pistola como arma\nprimaria (si el mapa tiene una).";
static wchar_t game_text_355[] = L"Todos aparecen con una pistola como arma\r\nprimaria (si el mapa tiene una).";
static wchar_t game_text_356[] = L"Todos aparecen con una pistola como arma\nsecundaria (si el mapa tiene una).";
static wchar_t game_text_357[] = L"Todos aparecen con una pistola como arma\r\nsecundaria (si el mapa tiene una).";
static wchar_t game_text_358[] = L"Todos aparecen con una pistola de plasma como arma\nprimaria (si el mapa tiene una).";
static wchar_t game_text_359[] = L"Todos aparecen con una pistola de plasma como arma\r\nprimaria (si el mapa tiene una).";
static wchar_t game_text_360[] = L"Todos aparecen con una pistola de plasma como arma\nsecundaria (si el mapa tiene una).";
static wchar_t game_text_361[] = L"Todos aparecen con una pistola de plasma como arma\r\nsecundaria (si el mapa tiene una).";
static wchar_t game_text_362[] = L"Todos aparecen con un rifle de plasma como arma\nprimaria (si el mapa tiene uno).";
static wchar_t game_text_363[] = L"Todos aparecen con un rifle de plasma como arma\r\nprimaria (si el mapa tiene uno).";
static wchar_t game_text_364[] = L"Todos aparecen con un rifle de plasma como arma\nsecundaria (si el mapa tiene uno).";
static wchar_t game_text_365[] = L"Todos aparecen con un rifle de plasma como arma\r\nsecundaria (si el mapa tiene uno).";
static wchar_t game_text_366[] = L"Todos aparecen con un lanzacohetes como arma\nprimaria (si el mapa tiene uno).";
static wchar_t game_text_367[] = L"Todos aparecen con un lanzacohetes como arma\r\nprimaria (si el mapa tiene uno).";
static wchar_t game_text_368[] = L"Todos aparecen con un lanzacohetes como arma\nsecundaria (si el mapa tiene uno).";
static wchar_t game_text_369[] = L"Todos aparecen con un lanzacohetes como arma\r\nsecundaria (si el mapa tiene uno).";
static wchar_t game_text_370[] = L"Todos aparecen con una escopeta como arma\nprimaria (si el mapa tiene una).";
static wchar_t game_text_371[] = L"Todos aparecen con una escopeta como arma\r\nprimaria (si el mapa tiene una).";
static wchar_t game_text_372[] = L"Todos aparecen con una escopeta como arma\nsecundaria (si el mapa tiene una).";
static wchar_t game_text_373[] = L"Todos aparecen con una escopeta como arma\r\nsecundaria (si el mapa tiene una).";
static wchar_t game_text_374[] = L"Todos aparecen con un rifle de francotirador\ncomo arma primaria (si el mapa tiene uno).";
static wchar_t game_text_375[] = L"Todos aparecen con un rifle de francotirador\r\ncomo arma primaria (si el mapa tiene uno).";
static wchar_t game_text_376[] = L"Todos aparecen con un rifle de francotirador como arma\nsecundaria (si el mapa tiene uno).";
static wchar_t game_text_377[] = L"Todos aparecen con un rifle de francotirador como arma\r\nsecundaria (si el mapa tiene uno).";
static wchar_t game_text_378[] = L"Todos empiezan con el arma primaria y secundaria\nde abajo; las armas del mapa son las suyas.";
static wchar_t game_text_379[] = L"Todos empiezan con el arma primaria y secundaria\r\nde abajo; las armas del mapa son las suyas.";
static wchar_t game_text_380[] = L"Los escudos de todos iluminan su entorno al\ndestellar, tres veces m\x00E1s lejos (Show de luces"
	L").";
static wchar_t game_text_381[] = L"Los escudos de todos iluminan su entorno al\ndestellar.";
static wchar_t game_text_382[] = L"Los escudos de todos iluminan su entorno al\r\ndestellar, tres veces m\x00E1s lejos (Show de luc"
	L"es).";
static wchar_t game_text_383[] = L"Los escudos de todos iluminan su entorno al\r\ndestellar.";
static wchar_t game_text_384[] = L"Todo yace en silencio.";
static wchar_t game_text_385[] = L"R\x00C1PIDO";
static wchar_t game_text_386[] = L"FILTROS";
static wchar_t game_text_387[] = L"DISPARAR";
static wchar_t game_text_388[] = L"BANDERA EN CASA:";
static wchar_t game_text_389[] = L"BANDERA VUELVE SOLA:";
static wchar_t game_text_390[] = L"LINTERNA";
static wchar_t game_text_391[] = L"APARECER POR EQUIPO:";
static wchar_t game_text_392[] = L"CUADROS:";
static wchar_t game_text_393[] = L"ALIADOS EN PANTALLA:";
static wchar_t game_text_394[] = L"CASTIGO POR FUEGO AMIGO:";
static wchar_t game_text_395[] = L"ALIADOS";
static wchar_t game_text_396[] = L"No se pudo entrar a la\npartida en red local.";
static wchar_t game_text_397[] = L"No se pudo entrar a la\r\npartida en red local.";
static wchar_t game_text_398[] = L"No se pudo entrar a la partida.";
static wchar_t game_text_399[] = L"Filtra servidores por latencia (en ms): qu\x00E9 tan\nr\x00E1pido llegan los datos del servidor.";
static wchar_t game_text_400[] = L"Filtra servidores por latencia (en ms): qu\x00E9 tan\r\nr\x00E1pido llegan los datos del servido"
	L"r.";
static wchar_t game_text_401[] = L"Encuentra la bandera enemiga\ny ll\x00E9vala a tu base mientras\nalejas a los rivales\nde la tuy"
	L"a. Reglas actuales:";
static wchar_t game_text_402[] = L"Encuentra la bandera enemiga\r\ny ll\x00E9vala a tu base mientras\r\nalejas a los rivales\r\nde "
	L"la tuya. Reglas actuales:";
static wchar_t game_text_403[] = L"Gana el primero en llevar la bola o traerla diez\nminutos. Gana el primer Juggernaut con diez ba"
	L"jas.";
static wchar_t game_text_404[] = L"Gana el primero en llevar la bola o traerla diez\r\nminutos. Gana el primer Juggernaut con diez "
	L"bajas.";
static wchar_t game_text_405[] = L"Gana el primer jugador que elimine a diez enemigos.";
static wchar_t game_text_406[] = L"Cinco bolas regadas por todos lados.";
static wchar_t game_text_407[] = L"Quinientas bajas para ganar. Vas a estar aqu\x00ED un rato.";
static wchar_t game_text_408[] = L"Banderas";
static wchar_t game_text_409[] = L"Para todos, el brillo del Show de luces, y el\nsobreescudo que sube y queda encendido.";
static wchar_t game_text_410[] = L"Para todos, el brillo del Show de luces, y el\r\nsobreescudo que sube y queda encendido.";
static wchar_t game_text_411[] = L"Para todos, los escudos iluminan su entorno,\ny el sobreescudo sube y queda encendido.";
static wchar_t game_text_412[] = L"Para todos, los escudos iluminan su entorno,\r\ny el sobreescudo sube y queda encendido.";
static wchar_t game_text_413[] = L"Para todos, el sobreescudo sube por el cuerpo\ny queda encendido, en su propio color.";
static wchar_t game_text_414[] = L"Para todos, el sobreescudo sube por el cuerpo\r\ny queda encendido, en su propio color.";
static wchar_t game_text_415[] = L"Bajas";
static wchar_t game_text_416[] = L"Todos contra todos";
static wchar_t game_text_417[] = L"OPC. DE JUEGO";
static wchar_t game_text_418[] = L"CONTROLES";
static wchar_t game_text_419[] = L"GEN\x00C9RICO";
static wchar_t game_text_420[] = L"OBTENER LISTA";
static wchar_t game_text_421[] = L"TORRETA:";
static wchar_t game_text_422[] = L"TORRETAS";
static wchar_t game_text_423[] = L"Juego";
static wchar_t game_text_424[] = L"Partida en curso";
static wchar_t game_text_425[] = L"La partida termina en empate";
static wchar_t game_text_426[] = L"Los sonidos se reproducen con toda su variedad.\nDa la mejor calidad en un CPU r\x00E1pido.";
static wchar_t game_text_427[] = L"Los sonidos se reproducen con toda su variedad.\r\nDa la mejor calidad en un CPU r\x00E1pido.";
static wchar_t game_text_428[] = L"Los sonidos se reproducen con m\x00EDnima variedad.\nDa el mejor rendimiento en un CPU lento.";
static wchar_t game_text_429[] = L"Los sonidos se reproducen con m\x00EDnima variedad.\r\nDa el mejor rendimiento en un CPU lento.";
static wchar_t game_text_430[] = L"Los sonidos se reproducen con algo de\nvariedad. Equilibra calidad y rendimiento.";
static wchar_t game_text_431[] = L"Los sonidos se reproducen con algo de\r\nvariedad. Equilibra calidad y rendimiento.";
static wchar_t game_text_432[] = L"Juego:";
static wchar_t game_text_433[] = L"Gamma controla el brillo.";
static wchar_t game_text_434[] = L"Busca una silla c\x00F3moda: necesitas controlar la\ncolina quince minutos enteros para ganar.";
static wchar_t game_text_435[] = L"Busca una silla c\x00F3moda: necesitas controlar la\r\ncolina quince minutos enteros para ganar.";
static wchar_t game_text_436[] = L"Sube a la cima\n\n\n2-8 jugadores";
static wchar_t game_text_437[] = L"Sube a la cima\r\n\r\n\r\n2-8 jugadores";
static wchar_t game_text_438[] = L"Llega a la colina \ny defi\x00E9ndela de quienes \nquieran quit\x00E1rtela.\nReglas actuales:";
static wchar_t game_text_439[] = L"Llega a la colina \r\ny defi\x00E9ndela de quienes \r\nquieran quit\x00E1rtela.\r\nReglas actual"
	L"es:";
static wchar_t game_text_440[] = L"Obteniendo el mensaje del d\x00ED" L"a...";
static wchar_t game_text_441[] = L"Obteniendo datos del servidor...";
static wchar_t game_text_442[] = L"Toma quince banderas y te llevas la victoria, adem\x00E1s\nde una colecci\x00F3n de banderas imp"
	L"resionante.";
static wchar_t game_text_443[] = L"Toma quince banderas y te llevas la victoria, adem\x00E1s\r\nde una colecci\x00F3n de banderas i"
	L"mpresionante.";
static wchar_t game_text_444[] = L"Gris";
static wchar_t game_text_445[] = L"Verde";
static wchar_t game_text_446[] = L"Aparecen tri\x00E1ngulos verdes sobre la cabeza de tus\ncompa\x00F1" L"eros, para recordarte que"
	L" no debes\ndispararles.";
static wchar_t game_text_447[] = L"Aparecen tri\x00E1ngulos verdes sobre la cabeza de tus\r\ncompa\x00F1" L"eros, para recordarte q"
	L"ue no debes\r\ndispararles.";
static wchar_t game_text_448[] = L"Avanza por el terreno en el tanque Scorpion,\nuna poderosa m\x00E1quina de guerra.";
static wchar_t game_text_449[] = L"Avanza por el terreno en el tanque Scorpion,\r\nuna poderosa m\x00E1quina de guerra.";
static wchar_t game_text_450[] = L"ACELERACI\x00D3N POR HARDWARE:";
static wchar_t game_text_451[] = L"ARMAS PESADAS";
static wchar_t game_text_452[] = L"HEROICO";
static wchar_t game_text_453[] = L"ALTA";
static wchar_t game_text_454[] = L"HUMANAS";
static wchar_t game_text_455[] = L"Heroico";
static wchar_t game_text_456[] = L"Mant\x00E9n \"%s\" para ver puntos";
static wchar_t game_text_457[] = L"Mant\x00E9n BACK para ver los puntos";
static wchar_t game_text_458[] = L"Crea una partida en internet:\nlos jugadores entran con su\nenlace de invitaci\x00F3n o Discord.";
static wchar_t game_text_459[] = L"Crea una partida en internet:\r\nlos jugadores entran con su\r\nenlace de invitaci\x00F3n o Disc"
	L"ord.";
static wchar_t game_text_460[] = L"Crea una partida\nsolo en tu red local.";
static wchar_t game_text_461[] = L"Crea una partida\r\nsolo en tu red local.";
static wchar_t game_text_462[] = L"Lo imaginaba\nm\x00E1s grande\n\n4-16 jugadores\n\nCon veh\x00ED" L"culos";
static wchar_t game_text_463[] = L"Lo imaginaba\r\nm\x00E1s grande\r\n\r\n4-16 jugadores\r\n\r\nCon veh\x00ED" L"culos";
static wchar_t game_text_464[] = L"Me gustan los frijoles.";
static wchar_t game_text_465[] = L"OPC. DE INDICADORES";
static wchar_t game_text_466[] = L"INFINITAS";
static wchar_t game_text_467[] = L"GRANADAS INFINITAS:";
static wchar_t game_text_468[] = L"INMEDIATA";
static wchar_t game_text_469[] = L"INVISIBLES:";
static wchar_t game_text_470[] = L"OPC. DE OBJETOS";
static wchar_t game_text_471[] = L"Si algo no puede salir mal, saldr\x00E1 mal de todos modos.";
static wchar_t game_text_472[] = L"Mejor calidad de audio con efecto Doppler,\npara PC de gama media.";
static wchar_t game_text_473[] = L"Mejor calidad de audio con efecto Doppler,\r\npara PC de gama media.";
static wchar_t game_text_474[] = L"En %s lugar con %s %s";
static wchar_t game_text_475[] = L"Para anotar, la bandera de tu equipo debe estar en\nsu lugar. Usa esta opci\x00F3n si te gusta p"
	L"erseguir\nenemigos con bandera antes de anotar.";
static wchar_t game_text_476[] = L"Para anotar, la bandera de tu equipo debe estar en\r\nsu lugar. Usa esta opci\x00F3n si te gusta"
	L" perseguir\r\nenemigos con bandera antes de anotar.";
static wchar_t game_text_477[] = L"No hay espacios de guardado libres.";
static wchar_t game_text_478[] = L"No hay espacio libre para\nguardar la partida.";
static wchar_t game_text_479[] = L"No hay espacio libre para\r\nguardar la partida.";
static wchar_t game_text_480[] = L"Juego por internet,\nactualizaciones y el HUD.\n\nPerfil:";
static wchar_t game_text_481[] = L"Juego por internet,\r\nactualizaciones y el HUD.\r\n\r\nPerfil:";
static wchar_t game_text_482[] = L"Invertido";
static wchar_t game_text_483[] = L"Cada quien por su cuenta.";
static wchar_t game_text_484[] = L"SALTAR";
static wchar_t game_text_485[] = L"Entra a una partida con su enlace\nde invitaci\x00F3n, o a una que lleg\x00F3\npor invitaci\x00F3"
	L"n de Discord.";
static wchar_t game_text_486[] = L"Entra a una partida con su enlace\r\nde invitaci\x00F3n, o a una que lleg\x00F3\r\npor invitaci\x00F3"
	L"n de Discord.";
static wchar_t game_text_487[] = L"Entra a una partida en\ntu red local.";
static wchar_t game_text_488[] = L"Entra a una partida en\r\ntu red local.";
static wchar_t game_text_489[] = L"BAJAS EN ORDEN:";
static wchar_t game_text_490[] = L"CASTIGO POR BAJA:";
static wchar_t game_text_491[] = L"BAJAS POR CAPTURA:";
static wchar_t game_text_492[] = L"BAJAS PUNT\x00DA" L"AN:";
static wchar_t game_text_493[] = L"BAJAS PARA GANAR:";
static wchar_t game_text_494[] = L"Bajas";
static wchar_t game_text_495[] = L"\x00A1Killtacular!";
static wchar_t game_text_496[] = L"\x00A1Killtacular! (%d)";
static wchar_t game_text_497[] = L"VUELTAS PARA GANAR:";
static wchar_t game_text_498[] = L"ABANDONAR";
static wchar_t game_text_499[] = L"LEGENDARIO";
static wchar_t game_text_500[] = L"EQUIPO:";
static wchar_t game_text_501[] = L"MIRAR ABAJO";
static wchar_t game_text_502[] = L"MIRAR IZQUIERDA";
static wchar_t game_text_503[] = L"MIRAR DERECHA";
static wchar_t game_text_504[] = L"MIRAR ARRIBA";
static wchar_t game_text_505[] = L"BAJA";
static wchar_t game_text_506[] = L"Vueltas";
static wchar_t game_text_507[] = L"Legendario";
static wchar_t game_text_508[] = L"Como Cenicienta, solo te ocupas de\nuna bola.";
static wchar_t game_text_509[] = L"Como Cenicienta, solo te ocupas de\r\nuna bola.";
static wchar_t game_text_510[] = L"Cargando...";
static wchar_t game_text_511[] = L"Cargando... listo";
static wchar_t game_text_512[] = L"Mirar a los lados ser\x00E1 un poco lento.";
static wchar_t game_text_513[] = L"Mirar a los lados ser\x00E1 extremadamente r\x00E1pido.";
static wchar_t game_text_514[] = L"Mirar a los lados ser\x00E1 m\x00E1s r\x00E1pido que el promedio.";
static wchar_t game_text_515[] = L"Mirar a los lados ser\x00E1 un poco m\x00E1s r\x00E1pido\nque el promedio.";
static wchar_t game_text_516[] = L"Mirar a los lados ser\x00E1 un poco m\x00E1s r\x00E1pido\r\nque el promedio.";
static wchar_t game_text_517[] = L"Mirar a los lados ser\x00E1 apenas m\x00E1s r\x00E1pido\nque el promedio.";
static wchar_t game_text_518[] = L"Mirar a los lados ser\x00E1 apenas m\x00E1s r\x00E1pido\r\nque el promedio.";
static wchar_t game_text_519[] = L"Mirar a los lados ser\x00E1 justo: ni muy r\x00E1pido\nni muy lento.";
static wchar_t game_text_520[] = L"Mirar a los lados ser\x00E1 justo: ni muy r\x00E1pido\r\nni muy lento.";
static wchar_t game_text_521[] = L"Mirar a los lados ser\x00E1 bastante m\x00E1s r\x00E1pido\nque el promedio.";
static wchar_t game_text_522[] = L"Mirar a los lados ser\x00E1 bastante m\x00E1s r\x00E1pido\r\nque el promedio.";
static wchar_t game_text_523[] = L"Mirar a los lados ser\x00E1 algo lento.";
static wchar_t game_text_524[] = L"Mirar a los lados ser\x00E1 muy r\x00E1pido.";
static wchar_t game_text_525[] = L"Mirar a los lados ser\x00E1 ultrasensible.";
static wchar_t game_text_526[] = L"Mirar arriba y abajo ser\x00E1 un poco lento.";
static wchar_t game_text_527[] = L"Mirar arriba y abajo ser\x00E1 extremadamente r\x00E1pido.";
static wchar_t game_text_528[] = L"Mirar arriba y abajo ser\x00E1 m\x00E1s r\x00E1pido que el promedio.";
static wchar_t game_text_529[] = L"Mirar arriba y abajo ser\x00E1 un poco m\x00E1s r\x00E1pido\nque el promedio.";
static wchar_t game_text_530[] = L"Mirar arriba y abajo ser\x00E1 un poco m\x00E1s r\x00E1pido\r\nque el promedio.";
static wchar_t game_text_531[] = L"Mirar arriba y abajo ser\x00E1 apenas m\x00E1s r\x00E1pido\nque el promedio.";
static wchar_t game_text_532[] = L"Mirar arriba y abajo ser\x00E1 apenas m\x00E1s r\x00E1pido\r\nque el promedio.";
static wchar_t game_text_533[] = L"Mirar arriba y abajo ser\x00E1 justo: ni muy r\x00E1pido\nni muy lento.";
static wchar_t game_text_534[] = L"Mirar arriba y abajo ser\x00E1 justo: ni muy r\x00E1pido\r\nni muy lento.";
static wchar_t game_text_535[] = L"Mirar arriba y abajo ser\x00E1 bastante m\x00E1s r\x00E1pido\nque el promedio.";
static wchar_t game_text_536[] = L"Mirar arriba y abajo ser\x00E1 bastante m\x00E1s r\x00E1pido\r\nque el promedio.";
static wchar_t game_text_537[] = L"Mirar arriba y abajo ser\x00E1 algo lento.";
static wchar_t game_text_538[] = L"Mirar arriba y abajo ser\x00E1 muy r\x00E1pido.";
static wchar_t game_text_539[] = L"Mirar arriba y abajo ser\x00E1 ultrasensible.";
static wchar_t game_text_540[] = L"Qu\x00E9 suerte: hay trece bolas en esta partida.";
static wchar_t game_text_541[] = L"ARMAS DEL MAPA:";
static wchar_t game_text_542[] = L"M\x00C1X. JUGADORES";
static wchar_t game_text_543[] = L"M\x00C1XIMO";
static wchar_t game_text_544[] = L"SALUD M\x00C1XIMA:";
static wchar_t game_text_545[] = L"GOLPE";
static wchar_t game_text_546[] = L"ACEPTAR EN MEN\x00DAS";
static wchar_t game_text_547[] = L"ATR\x00C1S EN MEN\x00DAS";
static wchar_t game_text_548[] = L"M\x00CDNIMO";
static wchar_t game_text_549[] = L"MIN/PUNTOS PARA GANAR:";
static wchar_t game_text_550[] = L"OTROS";
static wchar_t game_text_551[] = L"OBJETIVOS DE LA MISI\x00D3N:";
static wchar_t game_text_552[] = L"CALIDAD DE MODELOS:";
static wchar_t game_text_553[] = L"SENSOR";
static wchar_t game_text_554[] = L"MOUSE";
static wchar_t game_text_555[] = L"RETROCEDER";
static wchar_t game_text_556[] = L"AVANZAR";
static wchar_t game_text_557[] = L"MOVER IZQUIERDA";
static wchar_t game_text_558[] = L"MOVER DERECHA";
static wchar_t game_text_559[] = L"COLINA M\x00D3VIL:";
static wchar_t game_text_560[] = L"VARIAS COLINAS:";
static wchar_t game_text_561[] = L"Mapa";
static wchar_t game_text_562[] = L"Mapa:";
static wchar_t game_text_563[] = L"Granate";
static wchar_t game_text_564[] = L"Mensaje";
static wchar_t game_text_565[] = L"Minutos";
static wchar_t game_text_566[] = L"Cambia las opciones\ny reglas de los\nmodos por equipos.\nEste tipo de juego:";
static wchar_t game_text_567[] = L"Cambia las opciones\r\ny reglas de los\r\nmodos por equipos.\r\nEste tipo de juego:";
static wchar_t game_text_568[] = L"PUNTOS NAV";
static wchar_t game_text_569[] = L"RED ";
static wchar_t game_text_570[] = L"SIN GRANADAS";
static wchar_t game_text_571[] = L"SIN FRANCOTIRAR";
static wchar_t game_text_572[] = L"SIN VSYNC";
static wchar_t game_text_573[] = L"N\x00DAMERO DE VIDAS:";
static wchar_t game_text_574[] = L"Nombre";
static wchar_t game_text_575[] = L"La naturaleza siempre se pone del lado del defecto oculto.";
static wchar_t game_text_576[] = L"Se perdi\x00F3 la conexi\x00F3n de red.";
static wchar_t game_text_577[] = L"Se perdi\x00F3 la conexi\x00F3n. \nEl cable de red puede \nestar desconectado\no la red no funci"
	L"ona.";
static wchar_t game_text_578[] = L"Se perdi\x00F3 la conexi\x00F3n. \r\nEl cable de red puede \r\nestar desconectado\r\no la red no"
	L" funciona.";
static wchar_t game_text_579[] = L"Nunca uses tus mejores pantalones para luchar por la libertad.";
static wchar_t game_text_580[] = L"Nuevo objetivo %s";
static wchar_t game_text_581[] = L"No aparecen Banshees en el mapa.";
static wchar_t game_text_582[] = L"No aparecen Ghosts en el mapa.";
static wchar_t game_text_583[] = L"No aparecen torretas en el mapa.";
static wchar_t game_text_584[] = L"No aparecen Rocket Warthogs en el mapa.";
static wchar_t game_text_585[] = L"No aparecen Scorpions en el mapa.";
static wchar_t game_text_586[] = L"No aparecen Warthogs en el mapa.";
static wchar_t game_text_587[] = L"Sin arma primaria.";
static wchar_t game_text_588[] = L"No hay castigo de reaparici\x00F3n para quien\nelimina a un compa\x00F1" L"ero.";
static wchar_t game_text_589[] = L"No hay castigo de reaparici\x00F3n para quien\r\nelimina a un compa\x00F1" L"ero.";
static wchar_t game_text_590[] = L"Sin arma secundaria.";
static wchar_t game_text_591[] = L"No aparece ning\x00FAn veh\x00ED" L"culo en este mapa; siempre\nvas a pie.";
static wchar_t game_text_592[] = L"No aparece ning\x00FAn veh\x00ED" L"culo en este mapa; siempre\r\nvas a pie.";
static wchar_t game_text_593[] = L"No aparecen armas en el mapa: con equipo\nNINGUNO y NINGUNO, solo golpes y granadas.";
static wchar_t game_text_594[] = L"No aparecen armas en el mapa: con equipo\r\nNINGUNO y NINGUNO, solo golpes y granadas.";
static wchar_t game_text_595[] = L"Sin sincronizar: cada jugador ve los efectos de\nescudo de sus propios ajustes de Video.";
static wchar_t game_text_596[] = L"Sin sincronizar: cada jugador ve los efectos de\r\nescudo de sus propios ajustes de Video.";
static wchar_t game_text_597[] = L"INDICADOR DE OBJETIVOS:";
static wchar_t game_text_598[] = L"OBJETIVOS EN PANTALLA:";
static wchar_t game_text_599[] = L"QUEDA FUERA:";
static wchar_t game_text_600[] = L"\x00A1UPS!";
static wchar_t game_text_601[] = L"JUGADORES EN EL RADAR:";
static wchar_t game_text_602[] = L"Solo punt\x00FA" L"an las capturas de bandera.";
static wchar_t game_text_603[] = L"En el mapa solo aparecen las armas m\x00E1s\ndevastadoras y peligrosas.";
static wchar_t game_text_604[] = L"En el mapa solo aparecen las armas m\x00E1s\r\ndevastadoras y peligrosas.";
static wchar_t game_text_605[] = L"Solo se ve al jugador que lleva la bola; los dem\x00E1s\nson invisibles.";
static wchar_t game_text_606[] = L"Solo se ve al jugador que lleva la bola; los dem\x00E1s\r\nson invisibles.";
static wchar_t game_text_607[] = L"En el mapa solo aparecen armas hechas por el\nCovenant.";
static wchar_t game_text_608[] = L"En el mapa solo aparecen armas hechas por el\r\nCovenant.";
static wchar_t game_text_609[] = L"OpenCE Arena no puede\nconectarse a la red.";
static wchar_t game_text_610[] = L"OpenCE Arena no puede\r\nconectarse a la red.";
static wchar_t game_text_611[] = L"OpenCE Arena, en esta\ncomputadora.\n\nPerfil:";
static wchar_t game_text_612[] = L"OpenCE Arena, en esta\r\ncomputadora.\r\n\r\nPerfil:";
static wchar_t game_text_613[] = L"Naranja";
static wchar_t game_text_614[] = L"Los jugadores aliados aparecen en tu sensor \nde movimiento cuando se mueven.";
static wchar_t game_text_615[] = L"Los jugadores aliados aparecen en tu sensor \r\nde movimiento cuando se mueven.";
static wchar_t game_text_616[] = L"Los dem\x00E1s jugadores nunca aparecen en tu sensor\nde movimiento.";
static wchar_t game_text_617[] = L"Los dem\x00E1s jugadores nunca aparecen en tu sensor\r\nde movimiento.";
static wchar_t game_text_618[] = L"P\x00C1GINA";
static wchar_t game_text_619[] = L"PART\x00CD" L"CULAS:";
static wchar_t game_text_620[] = L"CONTRASE\x00D1" L"A";
static wchar_t game_text_621[] = L"PISTOLAS";
static wchar_t game_text_622[] = L"ARMAS DE PLASMA";
static wchar_t game_text_623[] = L"OPC. DE JUGADOR";
static wchar_t game_text_624[] = L"JUGADORES:";
static wchar_t game_text_625[] = L"ARMA PRIMARIA:";
static wchar_t game_text_626[] = L"Las part\x00ED" L"culas se desactivan. Incluyen\npolvo y chispas.";
static wchar_t game_text_627[] = L"Las part\x00ED" L"culas se desactivan. Incluyen\r\npolvo y chispas.";
static wchar_t game_text_628[] = L"Las part\x00ED" L"culas se activan, pero solo\na la mitad de densidad.";
static wchar_t game_text_629[] = L"Las part\x00ED" L"culas se activan, pero solo\r\na la mitad de densidad.";
static wchar_t game_text_630[] = L"Las part\x00ED" L"culas se activan por\ncompleto. Incluyen polvo y chispas.";
static wchar_t game_text_631[] = L"Las part\x00ED" L"culas se activan por\r\ncompleto. Incluyen polvo y chispas.";
static wchar_t game_text_632[] = L"Recogiste %d tanques de lanzallamas";
static wchar_t game_text_633[] = L"Recogiste %d granadas de fragmentaci\x00F3n";
static wchar_t game_text_634[] = L"Recogiste %d granadas de plasma";
static wchar_t game_text_635[] = L"Recogiste %d balas de rifle de asalto";
static wchar_t game_text_636[] = L"Recogiste %d cargas de espada de energ\x00ED" L"a";
static wchar_t game_text_637[] = L"Recogiste %d balas de bandera";
static wchar_t game_text_638[] = L"Recogiste %d cargas de ca\x00F1\x00F3n de combustible";
static wchar_t game_text_639[] = L"Recogiste %d cargas de rifle de gravedad";
static wchar_t game_text_640[] = L"Recogiste %d agujas de needler";
static wchar_t game_text_641[] = L"Recogiste %d balas de pistola";
static wchar_t game_text_642[] = L"Recogiste %d cargas de pistola de plasma";
static wchar_t game_text_643[] = L"Recogiste %d cargas de rifle de plasma";
static wchar_t game_text_644[] = L"Recogiste %d cohetes de lanzacohetes";
static wchar_t game_text_645[] = L"Recogiste %d cartuchos de escopeta";
static wchar_t game_text_646[] = L"Recogiste %d balas de rifle de francotirador";
static wchar_t game_text_647[] = L"Recogiste un lanzallamas";
static wchar_t game_text_648[] = L"Recogiste una granada de fragmentaci\x00F3n";
static wchar_t game_text_649[] = L"Recogiste un ca\x00F1\x00F3n de combustible";
static wchar_t game_text_650[] = L"Recogiste un rifle de gravedad";
static wchar_t game_text_651[] = L"Recogiste un botiqu\x00EDn";
static wchar_t game_text_652[] = L"Recogiste un needler";
static wchar_t game_text_653[] = L"Recogiste una pistola";
static wchar_t game_text_654[] = L"Recogiste una granada de plasma";
static wchar_t game_text_655[] = L"Recogiste una pistola de plasma";
static wchar_t game_text_656[] = L"Recogiste un rifle de plasma";
static wchar_t game_text_657[] = L"Recogiste un lanzacohetes";
static wchar_t game_text_658[] = L"Recogiste una escopeta";
static wchar_t game_text_659[] = L"Recogiste un rifle de francotirador";
static wchar_t game_text_660[] = L"Recogiste camuflaje activo";
static wchar_t game_text_661[] = L"Recogiste un rifle de asalto";
static wchar_t game_text_662[] = L"Recogiste una espada de energ\x00ED" L"a";
static wchar_t game_text_663[] = L"Recogiste un sobreescudo";
static wchar_t game_text_664[] = L"Recogiste doble velocidad";
static wchar_t game_text_665[] = L"Recogiste visi\x00F3n de espectro completo";
static wchar_t game_text_666[] = L"Recogiste la bandera";
static wchar_t game_text_667[] = L"Recogiste la bola";
static wchar_t game_text_668[] = L"Rosa";
static wchar_t game_text_669[] = L"Lugar";
static wchar_t game_text_670[] = L"El jugador 2 debe usar\nun control distinto\nal del jugador 1.";
static wchar_t game_text_671[] = L"El jugador 2 debe usar\r\nun control distinto\r\nal del jugador 1.";
static wchar_t game_text_672[] = L"Jugadores";
static wchar_t game_text_673[] = L"Los explosivos de sus compa\x00F1" L"eros \nhacen da\x00F1o a los jugadores.";
static wchar_t game_text_674[] = L"Los explosivos de sus compa\x00F1" L"eros \r\nhacen da\x00F1o a los jugadores.";
static wchar_t game_text_675[] = L"Las armas y explosivos de sus compa\x00F1" L"eros\nhacen da\x00F1o a los jugadores.";
static wchar_t game_text_676[] = L"Las armas y explosivos de sus compa\x00F1" L"eros\r\nhacen da\x00F1o a los jugadores.";
static wchar_t game_text_677[] = L"Las armas y explosivos de sus compa\x00F1" L"eros\nno hacen da\x00F1o a los jugadores.";
static wchar_t game_text_678[] = L"Las armas y explosivos de sus compa\x00F1" L"eros\r\nno hacen da\x00F1o a los jugadores.";
static wchar_t game_text_679[] = L"Cada jugador conserva su asistencia de punter\x00ED" L"a del mouse.";
static wchar_t game_text_680[] = L"Los jugadores sin la bola resisten m\x00E1s\nda\x00F1o que el jugador que la tiene.";
static wchar_t game_text_681[] = L"Los jugadores sin la bola resisten m\x00E1s\r\nda\x00F1o que el jugador que la tiene.";
static wchar_t game_text_682[] = L"Los jugadores sin la bola hacen da\x00F1o extra;\nlo pierden mientras tienen la bola.";
static wchar_t game_text_683[] = L"Los jugadores sin la bola hacen da\x00F1o extra;\r\nlo pierden mientras tienen la bola.";
static wchar_t game_text_684[] = L"Quien elimina a un compa\x00F1" L"ero recibe\nquince segundos de castigo la pr\x00F3xima vez\nqu"
	L"e muere.";
static wchar_t game_text_685[] = L"Quien elimina a un compa\x00F1" L"ero recibe\r\nquince segundos de castigo la pr\x00F3xima vez\r"
	L"\nque muere.";
static wchar_t game_text_686[] = L"Quien elimina a un compa\x00F1" L"ero recibe cinco \nsegundos de castigo la pr\x00F3xima vez que"
	L" muere.";
static wchar_t game_text_687[] = L"Quien elimina a un compa\x00F1" L"ero recibe diez \nsegundos de castigo la pr\x00F3xima vez que "
	L"muere.";
static wchar_t game_text_688[] = L"Quien elimina a un compa\x00F1" L"ero recibe cinco \r\nsegundos de castigo la pr\x00F3xima vez q"
	L"ue muere.";
static wchar_t game_text_689[] = L"Quien elimina a un compa\x00F1" L"ero recibe diez \r\nsegundos de castigo la pr\x00F3xima vez qu"
	L"e muere.";
static wchar_t game_text_690[] = L"Los jugadores solo aparecen en los\npuntos de Capture the Flag de su equipo.";
static wchar_t game_text_691[] = L"Los jugadores solo aparecen en los\r\npuntos de Capture the Flag de su equipo.";
static wchar_t game_text_692[] = L"Los jugadores aparecen en cualquier\npunto que permita el tipo de juego.";
static wchar_t game_text_693[] = L"Los jugadores aparecen en cualquier\r\npunto que permita el tipo de juego.";
static wchar_t game_text_694[] = L"Inserta otra\nmoneda.";
static wchar_t game_text_695[] = L"Inserta otra\r\nmoneda.";
static wchar_t game_text_696[] = L"Vuelve a conectar\nel control #%controller.";
static wchar_t game_text_697[] = L"Vuelve a conectar\nel control #%controller.\nPulsa START para seguir\ndespu\x00E9s de conectarlo"
	L".";
static wchar_t game_text_698[] = L"Vuelve a conectar\r\nel control #%controller.";
static wchar_t game_text_699[] = L"Vuelve a conectar\r\nel control #%controller.\r\nPulsa START para seguir\r\ndespu\x00E9s de cone"
	L"ctarlo.";
static wchar_t game_text_700[] = L"Pulsa START para continuar";
static wchar_t game_text_701[] = L"Pulsa un bot\x00F3n o mueve un eje para asignarlo.\nESC = cancelar.  RETROCESO = borrar.";
static wchar_t game_text_702[] = L"Pulsa un bot\x00F3n o mueve un eje para asignarlo.\r\nESC = cancelar.  RETROCESO = borrar.";
static wchar_t game_text_703[] = L"Perfil:";
static wchar_t game_text_704[] = L"Morado";
static wchar_t game_text_705[] = L"SALIR";
static wchar_t game_text_706[] = L"Sali\x00F3";
static wchar_t game_text_707[] = L"\x00BFSalir\?";
static wchar_t game_text_708[] = L"TIPO DE CARRERA:";
static wchar_t game_text_709[] = L"INICIO AL AZAR:";
static wchar_t game_text_710[] = L"EQUIPO ROJO";
static wchar_t game_text_711[] = L"REFLEJOS:";
static wchar_t game_text_712[] = L"ACTUALIZAR";
static wchar_t game_text_713[] = L"FRECUENCIA:";
static wchar_t game_text_714[] = L"RECARGAR";
static wchar_t game_text_715[] = L"AUMENTO AL MORIR:";
static wchar_t game_text_716[] = L"REAPARICI\x00D3N:";
static wchar_t game_text_717[] = L"REINICIAR NIVEL";
static wchar_t game_text_718[] = L"CONTINUAR";
static wchar_t game_text_719[] = L"VOLVER AL GUARDADO";
static wchar_t game_text_720[] = L"LANZACOHETES";
static wchar_t game_text_721[] = L"Rojo";
static wchar_t game_text_722[] = L"Sangre roja\nNieve blanca\n\n4-16 jugadores\n\nCon veh\x00ED" L"culos";
static wchar_t game_text_723[] = L"Sangre roja\r\nNieve blanca\r\n\r\n4-16 jugadores\r\n\r\nCon veh\x00ED" L"culos";
static wchar_t game_text_724[] = L"Equipo rojo";
static wchar_t game_text_725[] = L"Equipo rojo %d Equipo azul %d";
static wchar_t game_text_726[] = L"Rojo supera a Azul %s a %s %s";
static wchar_t game_text_727[] = L"Regresas en %d";
static wchar_t game_text_728[] = L"Cambia el nombre de\neste tipo de juego.\n\nEste tipo de juego:";
static wchar_t game_text_729[] = L"Cambia el nombre de\r\neste tipo de juego.\r\n\r\nEste tipo de juego:";
static wchar_t game_text_730[] = L"Cambia el nombre de\neste perfil.\n\nPerfil:";
static wchar_t game_text_731[] = L"Cambia el nombre de\r\neste perfil.\r\n\r\nPerfil:";
static wchar_t game_text_732[] = L"El tiempo de reaparici\x00F3n se queda\nsiempre en su valor inicial.";
static wchar_t game_text_733[] = L"El tiempo de reaparici\x00F3n se queda\r\nsiempre en su valor inicial.";
static wchar_t game_text_734[] = L"El descanso es bueno, pero la pereza es su hermana.";
static wchar_t game_text_735[] = L"Vueltas y vueltas \ny m\x00E1s vueltas\n\n2-8 jugadores";
static wchar_t game_text_736[] = L"Vueltas y vueltas \r\ny m\x00E1s vueltas\r\n\r\n2-8 jugadores";
static wchar_t game_text_737[] = L"Reglas";
static wchar_t game_text_738[] = L"\x00A1Imparable!";
static wchar_t game_text_739[] = L"\x00A1Imparable! (%d)";
static wchar_t game_text_740[] = L"GUARDAR Y SALIR";
static wchar_t game_text_741[] = L"GUARDAR CAMBIOS";
static wchar_t game_text_742[] = L"GUARDAR CAMBIOS ";
static wchar_t game_text_743[] = L"GUARDANDO...";
static wchar_t game_text_744[] = L"HABLAR";
static wchar_t game_text_745[] = L"HABLAR AL EQUIPO";
static wchar_t game_text_746[] = L"HABLAR AL VEH\x00CD" L"CULO";
static wchar_t game_text_747[] = L"ZOOM DE MIRA";
static wchar_t game_text_748[] = L"PUNTOS PARA GANAR:";
static wchar_t game_text_749[] = L"CAPTURA";
static wchar_t game_text_750[] = L"ARMA SECUNDARIA:";
static wchar_t game_text_751[] = L"DIRECCI\x00D3N DEL SERVIDOR";
static wchar_t game_text_752[] = L"SERVIDORES";
static wchar_t game_text_753[] = L"IP DEL SERVIDOR";
static wchar_t game_text_754[] = L"MODO DEL SERVIDOR";
static wchar_t game_text_755[] = L"NOMBRE DEL SERVIDOR";
static wchar_t game_text_756[] = L"PUERTO DEL SERVIDOR:";
static wchar_t game_text_757[] = L"SERVIDORES:";
static wchar_t game_text_758[] = L"AJUSTES";
static wchar_t game_text_759[] = L"SOMBRAS:";
static wchar_t game_text_760[] = L"EFECTOS DE ESCUDO:";
static wchar_t game_text_761[] = L"ESCUDOS:";
static wchar_t game_text_762[] = L"CORTO ALCANCE";
static wchar_t game_text_763[] = L"ESCOPETAS";
static wchar_t game_text_764[] = L"SERVIDORES VAC\x00CDOS";
static wchar_t game_text_765[] = L"SERVIDORES LLENOS";
static wchar_t game_text_766[] = L"MAPAS QUE NO TIENES";
static wchar_t game_text_767[] = L"VER NOMBRES";
static wchar_t game_text_768[] = L"VER REGLAS";
static wchar_t game_text_769[] = L"VER PUNTOS";
static wchar_t game_text_770[] = L"LADO:";
static wchar_t game_text_771[] = L"UNA BANDERA:";
static wchar_t game_text_772[] = L"LENTO";
static wchar_t game_text_773[] = L"FRANCOTIRADOR";
static wchar_t game_text_774[] = L"CALIDAD DE SONIDO:";
static wchar_t game_text_775[] = L"VARIEDAD DE SONIDO:";
static wchar_t game_text_776[] = L"ESPECULAR:";
static wchar_t game_text_777[] = L"VELOCIDAD CON BOLA:";
static wchar_t game_text_778[] = L"EST\x00C1NDAR";
static wchar_t game_text_779[] = L"EQUIPO INICIAL:";
static wchar_t game_text_780[] = L"DETENER";
static wchar_t game_text_781[] = L"CASTIGO SUICIDIO:";
static wchar_t game_text_782[] = L"SUMA";
static wchar_t game_text_783[] = L"CAMBIAR GRANADA";
static wchar_t game_text_784[] = L"CAMBIAR ARMA";
static wchar_t game_text_785[] = L"Salvia";
static wchar_t game_text_786[] = L"Salm\x00F3n";
static wchar_t game_text_787[] = L"Arena, olas y \ncasquillos\n\n4-16 jugadores\n\nCon veh\x00ED" L"culos";
static wchar_t game_text_788[] = L"Arena, olas y \r\ncasquillos\r\n\r\n4-16 jugadores\r\n\r\nCon veh\x00ED" L"culos";
static wchar_t game_text_789[] = L"Guarda los cambios de este\ntipo de juego y vuelve\na la pantalla anterior.\nEste tipo de juego:";
static wchar_t game_text_790[] = L"Guarda los cambios de este\r\ntipo de juego y vuelve\r\na la pantalla anterior.\r\nEste tipo de "
	L"juego:";
static wchar_t game_text_791[] = L"Guardando el \x00FAltimo punto...\nun momento por favor.";
static wchar_t game_text_792[] = L"Guardando el punto de\ncontrol... no apagues\ntu consola Xbox.";
static wchar_t game_text_793[] = L"Guardando el \x00FAltimo punto...\r\nun momento por favor.";
static wchar_t game_text_794[] = L"Guardando el punto de\r\ncontrol... no apagues\r\ntu consola Xbox.";
static wchar_t game_text_795[] = L"Guardando... un\nmomento por favor.";
static wchar_t game_text_796[] = L"Guardando... un\r\nmomento por favor.";
static wchar_t game_text_797[] = L"Guardando... no\napagues tu consola\nXbox.";
static wchar_t game_text_798[] = L"Guardando... no\r\napagues tu consola\r\nXbox.";
static wchar_t game_text_799[] = L"Da miedo, \x00BFno\?\n\n\n2-12 jugadores\n\nCon veh\x00ED" L"culos";
static wchar_t game_text_800[] = L"Da miedo, \x00BFno\?\r\n\r\n\r\n2-12 jugadores\r\n\r\nCon veh\x00ED" L"culos";
static wchar_t game_text_801[] = L"Puntos";
static wchar_t game_text_802[] = L"L\x00EDmite de puntos:";
static wchar_t game_text_803[] = L"Con solo cinco bajas ganas la partida.";
static wchar_t game_text_804[] = L"Buscando partidas disponibles...";
static wchar_t game_text_805[] = L"Elige una resoluci\x00F3n de pantalla.";
static wchar_t game_text_806[] = L"Elige una frecuencia de refresco.";
static wchar_t game_text_807[] = L"Elige este elemento para activarlo\ny agregarlo a tu perfil.";
static wchar_t game_text_808[] = L"Elige este elemento para activarlo\r\ny agregarlo a tu perfil.";
static wchar_t game_text_809[] = L"Elige este elemento para desactivarlo \ny quitarlo de tu perfil.";
static wchar_t game_text_810[] = L"Elige este elemento para desactivarlo \r\ny quitarlo de tu perfil.";
static wchar_t game_text_811[] = L"Elige este comando para cambiar el bot\x00F3n o\neje que tiene asignado.  ";
static wchar_t game_text_812[] = L"Elige este comando para cambiar el bot\x00F3n o\r\neje que tiene asignado.  ";
static wchar_t game_text_813[] = L"Direcci\x00F3n IP del servidor - ";
static wchar_t game_text_814[] = L"Servidor";
static wchar_t game_text_815[] = L"Define todas las reglas de tus \ntipos de juego multijugador y\ngu\x00E1rdalas para despu\x00E9s"
	L".";
static wchar_t game_text_816[] = L"Define todas las reglas de tus \r\ntipos de juego multijugador y\r\ngu\x00E1rdalas para despu\x00E9"
	L"s.";
static wchar_t game_text_817[] = L"Ajusta el volumen general.";
static wchar_t game_text_818[] = L"Ajusta el volumen de la m\x00FAsica.";
static wchar_t game_text_819[] = L"Ajusta el volumen de los efectos de sonido.";
static wchar_t game_text_820[] = L"Ajusta la sensibilidad y los\nbotones del control.\n\nPerfil:";
static wchar_t game_text_821[] = L"Ajusta la sensibilidad y los\r\nbotones del control.\r\n\r\nPerfil:";
static wchar_t game_text_822[] = L"Setenta y cinco bajas para ganar.\nPrep\x00E1rate para una pelea larga.";
static wchar_t game_text_823[] = L"Setenta y cinco bajas para ganar.\r\nPrep\x00E1rate para una pelea larga.";
static wchar_t game_text_824[] = L"May\x00FAs";
static wchar_t game_text_825[] = L"Combate de nave\na nave\n\n4-16 jugadores";
static wchar_t game_text_826[] = L"Combate de nave\r\na nave\r\n\r\n4-16 jugadores";
static wchar_t game_text_827[] = L"Mostrar servidores vac\x00EDos.";
static wchar_t game_text_828[] = L"Mostrar servidores llenos.";
static wchar_t game_text_829[] = L"Muestra solo partidas del\ntipo de juego elegido.";
static wchar_t game_text_830[] = L"Muestra solo partidas del\r\ntipo de juego elegido.";
static wchar_t game_text_831[] = L"Muestra solo servidores de todos contra todos.";
static wchar_t game_text_832[] = L"Muestra solo servidores por equipos.";
static wchar_t game_text_833[] = L"Muestra solo servidores con mapas\ncustom que tienes instalados.";
static wchar_t game_text_834[] = L"Muestra solo servidores con mapas\r\ncustom que tienes instalados.";
static wchar_t game_text_835[] = L"Muestra servidores en mapas que no tienes si su\nanfitri\x00F3n los comparte: se descargan al en"
	L"trar.";
static wchar_t game_text_836[] = L"Muestra servidores en mapas que no tienes si su\r\nanfitri\x00F3n los comparte: se descargan al "
	L"entrar.";
static wchar_t game_text_837[] = L"Muestra servidores de todos\ncontra todos y por equipos.";
static wchar_t game_text_838[] = L"Muestra servidores de todos\r\ncontra todos y por equipos.";
static wchar_t game_text_839[] = L"Muestra servidores con mapas custom que no\ntienes instalados.";
static wchar_t game_text_840[] = L"Muestra servidores con mapas custom que no\r\ntienes instalados.";
static wchar_t game_text_841[] = L"Un jugador";
static wchar_t game_text_842[] = L"Asalto de una bandera";
static wchar_t game_text_843[] = L"CTF de una bandera";
static wchar_t game_text_844[] = L"Seis bolas, y todo en orden.";
static wchar_t game_text_845[] = L"Resbalones y\npatinazos\n\n4-16 jugadores\n\nCon veh\x00ED" L"culos";
static wchar_t game_text_846[] = L"Resbalones y\r\npatinazos\r\n\r\n4-16 jugadores\r\n\r\nCon veh\x00ED" L"culos";
static wchar_t game_text_847[] = L"Sonr\x00ED" L"e cuando est\x00E9s listo.";
static wchar_t game_text_848[] = L"No aparecen rifles de francotirador ni pistolas.";
static wchar_t game_text_849[] = L"A veces hay que\neliminar. Este es uno de\nesos momentos. Pega o te\npegan. Reglas actuales:";
static wchar_t game_text_850[] = L"A veces hay que\r\neliminar. Este es uno de\r\nesos momentos. Pega o te\r\npegan. Reglas actuale"
	L"s:";
static wchar_t game_text_851[] = L"Ya hay un tipo de \njuego o un perfil \ncon ese nombre \nen tu consola Xbox.";
static wchar_t game_text_852[] = L"Ya existe un tipo\nde juego o un perfil\nguardado con ese nombre.";
static wchar_t game_text_853[] = L"Ya hay un tipo de \r\njuego o un perfil \r\ncon ese nombre \r\nen tu consola Xbox.";
static wchar_t game_text_854[] = L"Ya existe un tipo\r\nde juego o un perfil\r\nguardado con ese nombre.";
static wchar_t game_text_855[] = L"No puedes crear un\narchivo guardado\nsin nombre.";
static wchar_t game_text_856[] = L"No puedes crear un\r\narchivo guardado\r\nsin nombre.";
static wchar_t game_text_857[] = L"No puedes borrar los\ntipos de juego\npredeterminados.";
static wchar_t game_text_858[] = L"No puedes borrar los\r\ntipos de juego\r\npredeterminados.";
static wchar_t game_text_859[] = L"Espacio";
static wchar_t game_text_860[] = L"Complejo de clones\nSpartan\n\n2-6 jugadores";
static wchar_t game_text_861[] = L"Complejo de clones\r\nSpartan\r\n\r\n2-6 jugadores";
static wchar_t game_text_862[] = L"Define c\x00F3mo funcionan los\nveh\x00ED" L"culos y cu\x00E1les aparecen\nen este tipo de juego"
	L".\nEste tipo de juego:";
static wchar_t game_text_863[] = L"Define c\x00F3mo funcionan los\r\nveh\x00ED" L"culos y cu\x00E1les aparecen\r\nen este tipo de j"
	L"uego.\r\nEste tipo de juego:";
static wchar_t game_text_864[] = L"Define el tipo de partida\nque quieres jugar y las\nreglas que se le aplican.\nEste tipo de jueg"
	L"o:";
static wchar_t game_text_865[] = L"Define el tipo de partida\r\nque quieres jugar y las\r\nreglas que se le aplican.\r\nEste tipo d"
	L"e juego:";
static wchar_t game_text_866[] = L"Domina la colina diez minutos completos y la\npartida es tuya.";
static wchar_t game_text_867[] = L"Domina la colina diez minutos completos y la\r\npartida es tuya.";
static wchar_t game_text_868[] = L"Splash Splash\nBang Bang\n\n2-8 jugadores";
static wchar_t game_text_869[] = L"Splash Splash\r\nBang Bang\r\n\r\n2-8 jugadores";
static wchar_t game_text_870[] = L"S\x00EDmbolos";
static wchar_t game_text_871[] = L"POR EQUIPOS:";
static wchar_t game_text_872[] = L"PUNTOS DE EQUIPO:";
static wchar_t game_text_873[] = L"OPC. DE EQUIPO";
static wchar_t game_text_874[] = L"CALIDAD DE TEXTURAS:";
static wchar_t game_text_875[] = L"LANZAR GRANADA";
static wchar_t game_text_876[] = L"L\x00CDMITE DE TIEMPO:";
static wchar_t game_text_877[] = L"VENTAJA CON BOLA:";
static wchar_t game_text_878[] = L"VENTAJA SIN BOLA:";
static wchar_t game_text_879[] = L"Canela";
static wchar_t game_text_880[] = L"Turquesa";
static wchar_t game_text_881[] = L"Equipo - ";
static wchar_t game_text_882[] = L"Por equipos";
static wchar_t game_text_883[] = L"El balance autom\x00E1tico de equipos se desactiva. Los\njugadores cambian de equipo cuando quie"
	L"ran.";
static wchar_t game_text_884[] = L"El balance autom\x00E1tico de equipos se desactiva. Los\r\njugadores cambian de equipo cuando qu"
	L"ieran.";
static wchar_t game_text_885[] = L"El balance autom\x00E1tico de equipos se activa. Los\njugadores no pueden pasar a un equipo m\x00E1"
	L"s lleno.";
static wchar_t game_text_886[] = L"El balance autom\x00E1tico de equipos se activa. Los\r\njugadores no pueden pasar a un equipo m\x00E1"
	L"s lleno.";
static wchar_t game_text_887[] = L"Equipos empatados a %s %s";
static wchar_t game_text_888[] = L"El teletransportador est\x00E1 bloqueado";
static wchar_t game_text_889[] = L"\x00A1" L"Diez! \x00A1" L"Diez bolas en esta partida! \x00A1Ja ja ja ja ja!";
static wchar_t game_text_890[] = L"La colina siempre est\x00E1 en el mismo lugar.";
static wchar_t game_text_891[] = L"Los r\x00E1pidos \ny los muertos\n\n4-16 jugadores\n\nCon veh\x00ED" L"culos";
static wchar_t game_text_892[] = L"Los r\x00E1pidos \r\ny los muertos\r\n\r\n4-16 jugadores\r\n\r\nCon veh\x00ED" L"culos";
static wchar_t game_text_893[] = L"La partida en red\nlocal se cerr\x00F3.";
static wchar_t game_text_894[] = L"La partida en red\r\nlocal se cerr\x00F3.";
static wchar_t game_text_895[] = L"El eje Y de tu mouse se invierte: empujar\nhacia adelante mira abajo, y al rev\x00E9s.";
static wchar_t game_text_896[] = L"El eje Y de tu mouse se invierte: empujar\r\nhacia adelante mira abajo, y al rev\x00E9s.";
static wchar_t game_text_897[] = L"La direcci\x00F3n no es v\x00E1lida.";
static wchar_t game_text_898[] = L"La bola siempre aparece en el mismo lugar del\nmapa.";
static wchar_t game_text_899[] = L"La bola siempre aparece en el mismo lugar del\r\nmapa.";
static wchar_t game_text_900[] = L"La bola aparece en lugares al azar del mapa.";
static wchar_t game_text_901[] = L"El enemigo tiene tu bandera.";
static wchar_t game_text_902[] = L"El enemigo devolvi\x00F3 la bandera.";
static wchar_t game_text_903[] = L"La bandera enemiga fue devuelta.";
static wchar_t game_text_904[] = L"El primero en eliminar a otro la trae. Los dem\x00E1s la\ntraen al eliminar a quien la trae. Tr\x00E1"
	L"ela el\ntiempo indicado para ganar. No hay bola. Raro, \x00BFno\?";
static wchar_t game_text_905[] = L"El primero en eliminar a otro la trae. Los dem\x00E1s la\r\ntraen al eliminar a quien la trae. T"
	L"r\x00E1" L"ela el\r\ntiempo indicado para ganar. No hay bola. Raro, \x00BFno\?";
static wchar_t game_text_906[] = L"El primero en eliminar es el Juggernaut, y punt\x00FA" L"a\npor cada baja. Los dem\x00E1s toman "
	L"su lugar al\neliminarlo. Otra vez, no hay bola.";
static wchar_t game_text_907[] = L"El primero en eliminar es el Juggernaut, y punt\x00FA" L"a\r\npor cada baja. Los dem\x00E1s toma"
	L"n su lugar al\r\neliminarlo. Otra vez, no hay bola.";
static wchar_t game_text_908[] = L"Gana el primer jugador que pase sesenta segundos\nen la colina.";
static wchar_t game_text_909[] = L"Gana el primer jugador que pase sesenta segundos\r\nen la colina.";
static wchar_t game_text_910[] = L"Gana el primer equipo que capture la bandera.";
static wchar_t game_text_911[] = L"La bandera vuelve a la base si pasas sobre ella.";
static wchar_t game_text_912[] = L"El lanzallamas y el ca\x00F1\x00F3n de combustible no\naparecen en el mapa.";
static wchar_t game_text_913[] = L"El lanzallamas y el ca\x00F1\x00F3n de combustible no\r\naparecen en el mapa.";
static wchar_t game_text_914[] = L"La partida\nse cerr\x00F3.";
static wchar_t game_text_915[] = L"La partida\r\nse cerr\x00F3.";
static wchar_t game_text_916[] = L"La partida no tiene l\x00EDmite de tiempo. Solo termina\ncuando alguien gana.";
static wchar_t game_text_917[] = L"La partida no tiene l\x00EDmite de tiempo. Solo termina\r\ncuando alguien gana.";
static wchar_t game_text_918[] = L"Los objetivos de la partida (colinas, banderas,\nbolas y dem\x00E1s) aparecen en tu sensor de mo"
	L"vimiento.";
static wchar_t game_text_919[] = L"Los objetivos de la partida (colinas, banderas,\r\nbolas y dem\x00E1s) aparecen en tu sensor de "
	L"movimiento.";
static wchar_t game_text_920[] = L"Los objetivos de la partida tienen marcadores\nespeciales en pantalla.";
static wchar_t game_text_921[] = L"Los objetivos de la partida tienen marcadores\r\nespeciales en pantalla.";
static wchar_t game_text_922[] = L"Los objetivos de la partida no se ven en\ntu sensor de movimiento ni en pantalla.";
static wchar_t game_text_923[] = L"Los objetivos de la partida no se ven en\r\ntu sensor de movimiento ni en pantalla.";
static wchar_t game_text_924[] = L"Las armas del mapa se cambian por armas\ncon mira telesc\x00F3pica.";
static wchar_t game_text_925[] = L"Las armas del mapa se cambian por armas\r\ncon mira telesc\x00F3pica.";
static wchar_t game_text_926[] = L"El mapa tiene los veh\x00ED" L"culos que define\nel propio mapa. Incluye Warthogs, tanques\nScor"
	L"pion, Ghosts, Banshees y torretas Covenant.";
static wchar_t game_text_927[] = L"El mapa tiene los veh\x00ED" L"culos que define\r\nel propio mapa. Incluye Warthogs, tanques\r\n"
	L"Scorpion, Ghosts, Banshees y torretas Covenant.";
static wchar_t game_text_928[] = L"El mapa tiene las armas que le pusieron sus\ndise\x00F1" L"adores.";
static wchar_t game_text_929[] = L"El mapa tiene las armas que le pusieron sus\r\ndise\x00F1" L"adores.";
static wchar_t game_text_930[] = L"Las armas del mapa aparecen donde\nlas pusieron sus dise\x00F1" L"adores.";
static wchar_t game_text_931[] = L"Las armas del mapa aparecen donde\r\nlas pusieron sus dise\x00F1" L"adores.";
static wchar_t game_text_932[] = L"Las armas del mapa, sin granadas.";
static wchar_t game_text_933[] = L"El objetivo es mantener la bola el mayor tiempo\nposible. Gana el primer jugador que la tenga\nd"
	L"urante el tiempo indicado.";
static wchar_t game_text_934[] = L"El objetivo es mantener la bola el mayor tiempo\r\nposible. Gana el primer jugador que la tenga\r"
	L"\ndurante el tiempo indicado.";
static wchar_t game_text_935[] = L"El servidor est\x00E1 lleno.";
static wchar_t game_text_936[] = L"El operador del\nservidor te prohibi\x00F3\njugar en este servidor.";
static wchar_t game_text_937[] = L"El operador del\nservidor te expuls\x00F3\nde este servidor.";
static wchar_t game_text_938[] = L"El operador del\r\nservidor te prohibi\x00F3\r\njugar en este servidor.";
static wchar_t game_text_939[] = L"El operador del\r\nservidor te expuls\x00F3\r\nde este servidor.";
static wchar_t game_text_940[] = L"El servidor report\x00F3\nuna solicitud de\nconexi\x00F3n inv\x00E1lida.";
static wchar_t game_text_941[] = L"El servidor report\x00F3\r\nuna solicitud de\r\nconexi\x00F3n inv\x00E1lida.";
static wchar_t game_text_942[] = L"\x00A1" L"El servidor que elegiste\nrequiere contrase\x00F1" L"a!";
static wchar_t game_text_943[] = L"\x00A1" L"El servidor que elegiste\r\nrequiere contrase\x00F1" L"a!";
static wchar_t game_text_944[] = L"Los escudos de tu armadura no funcionan: es\nmucho m\x00E1s f\x00E1" L"cil que todos mueran.";
static wchar_t game_text_945[] = L"Los escudos de tu armadura no funcionan: es\r\nmucho m\x00E1s f\x00E1" L"cil que todos mueran.";
static wchar_t game_text_946[] = L"Las armas siguen el conjunto de armas de arriba.";
static wchar_t game_text_947[] = L"En el mapa no hay armas hechas en los talleres\ndel Covenant.";
static wchar_t game_text_948[] = L"En el mapa no hay armas hechas en los talleres\r\ndel Covenant.";
static wchar_t game_text_949[] = L"Hay cinco colinas a la vez. Mantener cualquiera\npunt\x00FA" L"a.";
static wchar_t game_text_950[] = L"Hay cinco colinas a la vez. Mantener cualquiera\r\npunt\x00FA" L"a.";
static wchar_t game_text_951[] = L"Hay cuatro colinas a la vez. Mantener cualquiera\npunt\x00FA" L"a.";
static wchar_t game_text_952[] = L"Hay cuatro colinas a la vez. Mantener cualquiera\r\npunt\x00FA" L"a.";
static wchar_t game_text_953[] = L"Solo hay una colina a la vez.";
static wchar_t game_text_954[] = L"Solo hay una bandera en el mapa a la vez.\nAparece en la base de un equipo. Los equipos\nalterna"
	L"n ataque y defensa cada minuto.";
static wchar_t game_text_955[] = L"Solo hay una bandera en el mapa a la vez.\nAparece en la base de un equipo. Los equipos\nalterna"
	L"n ataque y defensa cada 10 minutos.";
static wchar_t game_text_956[] = L"Solo hay una bandera en el mapa a la vez.\nAparece en la base de un equipo. Los equipos\nalterna"
	L"n ataque y defensa cada 2 minutos.";
static wchar_t game_text_957[] = L"Solo hay una bandera en el mapa a la vez.\nAparece en la base de un equipo. Los equipos\nalterna"
	L"n ataque y defensa cada 3 minutos.";
static wchar_t game_text_958[] = L"Solo hay una bandera en el mapa a la vez.\nAparece en la base de un equipo. Los equipos\nalterna"
	L"n ataque y defensa cada 5 minutos.";
static wchar_t game_text_959[] = L"Solo hay una bandera en el mapa a la vez.\r\nAparece en la base de un equipo. Los equipos\r\nalt"
	L"ernan ataque y defensa cada minuto.";
static wchar_t game_text_960[] = L"Solo hay una bandera en el mapa a la vez.\r\nAparece en la base de un equipo. Los equipos\r\nalt"
	L"ernan ataque y defensa cada 10 minutos.";
static wchar_t game_text_961[] = L"Solo hay una bandera en el mapa a la vez.\r\nAparece en la base de un equipo. Los equipos\r\nalt"
	L"ernan ataque y defensa cada 2 minutos.";
static wchar_t game_text_962[] = L"Solo hay una bandera en el mapa a la vez.\r\nAparece en la base de un equipo. Los equipos\r\nalt"
	L"ernan ataque y defensa cada 3 minutos.";
static wchar_t game_text_963[] = L"Solo hay una bandera en el mapa a la vez.\r\nAparece en la base de un equipo. Los equipos\r\nalt"
	L"ernan ataque y defensa cada 5 minutos.";
static wchar_t game_text_964[] = L"Hay tres colinas a la vez. Mantener cualquiera\npunt\x00FA" L"a.";
static wchar_t game_text_965[] = L"Hay tres colinas a la vez. Mantener cualquiera\r\npunt\x00FA" L"a.";
static wchar_t game_text_966[] = L"Hay dos colinas a la vez. Mantener cualquiera\npunt\x00FA" L"a.";
static wchar_t game_text_967[] = L"Hay dos colinas a la vez. Mantener cualquiera\r\npunt\x00FA" L"a.";
static wchar_t game_text_968[] = L"Hay un problema con el disco que usas.\nPuede estar sucio o da\x00F1" L"ado.\nPulsa A para conti"
	L"nuar.";
static wchar_t game_text_969[] = L"Hay un problema con el disco que usas.\r\nPuede estar sucio o da\x00F1" L"ado.\r\nPulsa A para c"
	L"ontinuar.";
static wchar_t game_text_970[] = L"Nivel no\ndisponible";
static wchar_t game_text_971[] = L"Nivel no\r\ndisponible";
static wchar_t game_text_972[] = L"Esta partida llega a once. Bolas, claro.";
static wchar_t game_text_973[] = L"Esta partida se conocer\x00E1 en adelante\ncomo el Juego de las Nueve Bolas.";
static wchar_t game_text_974[] = L"Esta partida se conocer\x00E1 en adelante\r\ncomo el Juego de las Nueve Bolas.";
static wchar_t game_text_975[] = L"Esta partida tiene un l\x00EDmite de 10 minutos. Termina\nal acabarse el tiempo o cuando alguien"
	L" gana.";
static wchar_t game_text_976[] = L"Esta partida tiene un l\x00EDmite de 10 minutos. Termina\r\nal acabarse el tiempo o cuando algui"
	L"en gana.";
static wchar_t game_text_977[] = L"Esta partida tiene un l\x00EDmite de 15 minutos. Termina\nal acabarse el tiempo o cuando alguien"
	L" gana.";
static wchar_t game_text_978[] = L"Esta partida tiene un l\x00EDmite de 15 minutos. Termina\r\nal acabarse el tiempo o cuando algui"
	L"en gana.";
static wchar_t game_text_979[] = L"Esta partida tiene un l\x00EDmite de 20 minutos. Termina\nal acabarse el tiempo o cuando alguien"
	L" gana.";
static wchar_t game_text_980[] = L"Esta partida tiene un l\x00EDmite de 20 minutos. Termina\r\nal acabarse el tiempo o cuando algui"
	L"en gana.";
static wchar_t game_text_981[] = L"Esta partida tiene un l\x00EDmite de 25 minutos. Termina\nal acabarse el tiempo o cuando alguien"
	L" gana.";
static wchar_t game_text_982[] = L"Esta partida tiene un l\x00EDmite de 25 minutos. Termina\r\nal acabarse el tiempo o cuando algui"
	L"en gana.";
static wchar_t game_text_983[] = L"Esta partida tiene un l\x00EDmite de 30 minutos. Termina\nal acabarse el tiempo o cuando alguien"
	L" gana.";
static wchar_t game_text_984[] = L"Esta partida tiene un l\x00EDmite de 30 minutos. Termina\r\nal acabarse el tiempo o cuando algui"
	L"en gana.";
static wchar_t game_text_985[] = L"Esta partida tiene un l\x00EDmite de 45 minutos. Termina\nal acabarse el tiempo o cuando alguien"
	L" gana.";
static wchar_t game_text_986[] = L"Esta partida tiene un l\x00EDmite de 45 minutos. Termina\r\nal acabarse el tiempo o cuando algui"
	L"en gana.";
static wchar_t game_text_987[] = L"Es una partida por equipos.";
static wchar_t game_text_988[] = L"Tres bolas, el triple de diversi\x00F3n.";
static wchar_t game_text_989[] = L"Tres vueltas r\x00E1pidas y listo. Como una\npaleta.";
static wchar_t game_text_990[] = L"Tres vueltas r\x00E1pidas y listo. Como una\r\npaleta.";
static wchar_t game_text_991[] = L"Empate en %s lugar con %s %s";
static wchar_t game_text_992[] = L"Tiempo";
static wchar_t game_text_993[] = L"L\x00EDmite de tiempo, minutos:";
static wchar_t game_text_994[] = L"Se acab\x00F3 el tiempo.";
static wchar_t game_text_995[] = L"Para completar una vuelta debes pasar\npor todas las banderas en orden.";
static wchar_t game_text_996[] = L"Para completar una vuelta debes pasar\r\npor todas las banderas en orden.";
static wchar_t game_text_997[] = L"Para ganar necesitas nervios de acero, agallas y\ndiez vueltas.";
static wchar_t game_text_998[] = L"Para ganar necesitas nervios de acero, agallas y\r\ndiez vueltas.";
static wchar_t game_text_999[] = L"L\x00E1pidas para\ntodos\n\n4-16 jugadores";
static wchar_t game_text_1000[] = L"L\x00E1pidas para\r\ntodos\r\n\r\n4-16 jugadores";
static wchar_t game_text_1001[] = L"\x00A1Triple baja!";
static wchar_t game_text_1002[] = L"\x00A1Triple baja! (%d)";
static wchar_t game_text_1003[] = L"Doscientas cincuenta bajas para ganar.";
static wchar_t game_text_1004[] = L"Doscientas bajas para ganar. Trae amigos. Muchos\namigos.";
static wchar_t game_text_1005[] = L"Doscientas bajas para ganar. Trae amigos. Muchos\r\namigos.";
static wchar_t game_text_1006[] = L"NIVEL DESCONOCIDO\n\n\n";
static wchar_t game_text_1007[] = L"NIVEL DESCONOCIDO\r\n\r\n\r\n";
static wchar_t game_text_1008[] = L"No se pudo completar\nla \x00FAltima operaci\x00F3n.";
static wchar_t game_text_1009[] = L"No se pudo completar\r\nla \x00FAltima operaci\x00F3n.";
static wchar_t game_text_1010[] = L"No se pudo crear\nel tipo de juego\nmultijugador.";
static wchar_t game_text_1011[] = L"No se pudo crear el\nperfil de jugador.";
static wchar_t game_text_1012[] = L"No se pudo crear\r\nel tipo de juego\r\nmultijugador.";
static wchar_t game_text_1013[] = L"No se pudo crear el\r\nperfil de jugador.";
static wchar_t game_text_1014[] = L"No se pudo entrar a la\npartida en red local:\nest\x00E1 cerrada.";
static wchar_t game_text_1015[] = L"No se pudo entrar a la\npartida en red local.";
static wchar_t game_text_1016[] = L"No se pudo entrar a la\r\npartida en red local:\r\nest\x00E1 cerrada.";
static wchar_t game_text_1017[] = L"No se pudo entrar a la\r\npartida en red local.";
static wchar_t game_text_1018[] = L"No se puede entrar a la\npartida porque est\x00E1 cerrada.";
static wchar_t game_text_1019[] = L"No se puede entrar a la\r\npartida porque est\x00E1 cerrada.";
static wchar_t game_text_1020[] = L"No se puede entrar a la partida.";
static wchar_t game_text_1021[] = L"\x00A1No se pudo entrar al\nservidor!";
static wchar_t game_text_1022[] = L"\x00A1No se pudo entrar al\r\nservidor!";
static wchar_t game_text_1023[] = L"No se pudo cargar la\npartida guardada.";
static wchar_t game_text_1024[] = L"No se pudo cargar el\narchivo guardado.\nPulsa A para continuar.";
static wchar_t game_text_1025[] = L"No se pudo cargar el\navance guardado de\neste perfil.";
static wchar_t game_text_1026[] = L"No se pudo cargar el\navance guardado de\neste perfil. Pulsa A\npara continuar.";
static wchar_t game_text_1027[] = L"No se pudo cargar la\r\npartida guardada.";
static wchar_t game_text_1028[] = L"No se pudo cargar el\r\narchivo guardado.\r\nPulsa A para continuar.";
static wchar_t game_text_1029[] = L"No se pudo cargar el\r\navance guardado de\r\neste perfil.";
static wchar_t game_text_1030[] = L"No se pudo cargar el\r\navance guardado de\r\neste perfil. Pulsa A\r\npara continuar.";
static wchar_t game_text_1031[] = L"Desconocido";
static wchar_t game_text_1032[] = L"Nivel desconocido";
static wchar_t game_text_1033[] = L"Sube las rampas\nBaja por los tubos\n\n2-6 jugadores";
static wchar_t game_text_1034[] = L"Sube las rampas\r\nBaja por los tubos\r\n\r\n2-6 jugadores";
static wchar_t game_text_1035[] = L"Aparecen hasta cuatro Banshees en el mapa.";
static wchar_t game_text_1036[] = L"Aparecen hasta cuatro Ghosts en el mapa.";
static wchar_t game_text_1037[] = L"Aparecen hasta cuatro torretas en el mapa.";
static wchar_t game_text_1038[] = L"Aparecen hasta cuatro Rocket Warthogs en el mapa.";
static wchar_t game_text_1039[] = L"Aparecen hasta cuatro Scorpions en el mapa.";
static wchar_t game_text_1040[] = L"Aparecen hasta cuatro Warthogs en el mapa.";
static wchar_t game_text_1041[] = L"Aparece hasta un Banshee en el mapa.";
static wchar_t game_text_1042[] = L"Aparece hasta un Ghost en el mapa.";
static wchar_t game_text_1043[] = L"Aparece hasta una torreta en el mapa.";
static wchar_t game_text_1044[] = L"Aparece hasta un Rocket Warthog en el mapa.";
static wchar_t game_text_1045[] = L"Aparece hasta un Scorpion en el mapa.";
static wchar_t game_text_1046[] = L"Aparece hasta un Warthog en el mapa.";
static wchar_t game_text_1047[] = L"Aparecen hasta tres Banshees en el mapa.";
static wchar_t game_text_1048[] = L"Aparecen hasta tres Ghosts en el mapa.";
static wchar_t game_text_1049[] = L"Aparecen hasta tres torretas en el mapa.";
static wchar_t game_text_1050[] = L"Aparecen hasta tres Rocket Warthogs en el mapa.";
static wchar_t game_text_1051[] = L"Aparecen hasta tres Scorpions en el mapa.";
static wchar_t game_text_1052[] = L"Aparecen hasta tres Warthogs en el mapa.";
static wchar_t game_text_1053[] = L"Aparecen hasta dos Banshees en el mapa.";
static wchar_t game_text_1054[] = L"Aparecen hasta dos Ghosts en el mapa.";
static wchar_t game_text_1055[] = L"Aparecen hasta dos torretas en el mapa.";
static wchar_t game_text_1056[] = L"Aparecen hasta dos Rocket Warthogs en el mapa.";
static wchar_t game_text_1057[] = L"Aparecen hasta dos Scorpions en el mapa.";
static wchar_t game_text_1058[] = L"Aparecen hasta dos Warthogs en el mapa.";
static wchar_t game_text_1059[] = L"Usa las armas iniciales gen\x00E9ricas en todos los mapas.";
static wchar_t game_text_1060[] = L"OPC. DE VEH\x00CD" L"CULOS";
static wchar_t game_text_1061[] = L"VEH\x00CD" L"CULOS REAPARECEN:";
static wchar_t game_text_1062[] = L"VEH\x00CD" L"CULOS:";
static wchar_t game_text_1063[] = L"VIDEO";
static wchar_t game_text_1064[] = L"Veh\x00ED" L"culo - ";
static wchar_t game_text_1065[] = L"Los veh\x00ED" L"culos no reaparecen.";
static wchar_t game_text_1066[] = L"Los veh\x00ED" L"culos reaparecen cada 2 minutos sin uso.";
static wchar_t game_text_1067[] = L"Los veh\x00ED" L"culos reaparecen cada 3 minutos sin uso.";
static wchar_t game_text_1068[] = L"Los veh\x00ED" L"culos reaparecen cada 30 segundos sin uso.";
static wchar_t game_text_1069[] = L"Los veh\x00ED" L"culos reaparecen cada 5 minutos sin uso.";
static wchar_t game_text_1070[] = L"Los veh\x00ED" L"culos reaparecen cada 60 segundos sin uso.";
static wchar_t game_text_1071[] = L"Los veh\x00ED" L"culos reaparecen cada 90 segundos sin uso.";
static wchar_t game_text_1072[] = L"Ajustes de video cambiados...\nPulsa OK para aceptar.";
static wchar_t game_text_1073[] = L"Ajustes de video cambiados...\r\nPulsa OK para aceptar.";
static wchar_t game_text_1074[] = L"Se probar\x00E1n los ajustes de\nvideo. Si no ves un\ndi\x00E1logo de confirmaci\x00F3n\ntras el"
	L" cambio, pulsa ESC.";
static wchar_t game_text_1075[] = L"Se probar\x00E1n los ajustes de\r\nvideo. Si no ves un\r\ndi\x00E1logo de confirmaci\x00F3n\r\nt"
	L"ras el cambio, pulsa ESC.";
static wchar_t game_text_1076[] = L"ARMAS:";
static wchar_t game_text_1077[] = L"Esperando a otra consola Xbox";
static wchar_t game_text_1078[] = L"Esperando a otro jugador";
static wchar_t game_text_1079[] = L"Esperando a que se despeje el lugar";
static wchar_t game_text_1080[] = L"Esperamos que tengas tiempo, porque necesitas\ncincuenta bajas completas para ganar esta.";
static wchar_t game_text_1081[] = L"Esperamos que tengas tiempo, porque necesitas\r\ncincuenta bajas completas para ganar esta.";
static wchar_t game_text_1082[] = L"Bienvenido, %s";
static wchar_t game_text_1083[] = L"\x00A1" L"Bienvenido a OpenCE Arena!";
static wchar_t game_text_1084[] = L"\x00BFQu\x00E9 obtienes al duplicar la emoci\x00F3n y el misterio\nde siete bolas\? \x00A1" L"Ca"
	L"torce bolas, eso!";
static wchar_t game_text_1085[] = L"\x00BFQu\x00E9 obtienes al duplicar la emoci\x00F3n y el misterio\r\nde siete bolas\? \x00A1" L"C"
	L"atorce bolas, eso!";
static wchar_t game_text_1086[] = L"\x00BFQu\x00E9 tiene cuatro bolas y emoci\x00F3n para todos\? \x00A1" L"Esta partida!";
static wchar_t game_text_1087[] = L"\x00BF" L"Cu\x00E1l es el significado oculto de la s\x00E9ptima bola\?";
static wchar_t game_text_1088[] = L"Al morir, el que queda fuera no reaparece hasta\nque otro asuma esa vergonzosa carga\nmuriendo.";
static wchar_t game_text_1089[] = L"Al morir, el que queda fuera no reaparece hasta\r\nque otro asuma esa vergonzosa carga\r\nmurien"
	L"do.";
static wchar_t game_text_1090[] = L"Al terminar la partida, cada equipo se\nordena por su miembro con menos puntos.";
static wchar_t game_text_1091[] = L"Al terminar la partida, cada equipo se\r\nordena por su miembro con menos puntos.";
static wchar_t game_text_1092[] = L"Al morir y reaparecer corres un poco m\x00E1s r\x00E1pido.\nAyuda a equilibrar la partida entre "
	L"\nnovatos y expertos.";
static wchar_t game_text_1093[] = L"Al morir y reaparecer corres un poco m\x00E1s r\x00E1pido.\r\nAyuda a equilibrar la partida entr"
	L"e \r\nnovatos y expertos.";
static wchar_t game_text_1094[] = L"Al morir esperas cinco segundos antes de\nvolver a la partida.";
static wchar_t game_text_1095[] = L"Al morir esperas cinco segundos antes de\r\nvolver a la partida.";
static wchar_t game_text_1096[] = L"Al morir debes esperar quince segundos antes de\nreaparecer. Te dar\x00E1 una idea de c\x00F3mo "
	L"es la\neternidad.";
static wchar_t game_text_1097[] = L"Al morir debes esperar quince segundos antes de\r\nreaparecer. Te dar\x00E1 una idea de c\x00F3m"
	L"o es la\r\neternidad.";
static wchar_t game_text_1098[] = L"Al morir reapareces de inmediato, sin esperar\na que otro repita tus errores.";
static wchar_t game_text_1099[] = L"Al morir reapareces de inmediato, sin esperar\r\na que otro repita tus errores.";
static wchar_t game_text_1100[] = L"Cuando tienes la bola corres m\x00E1s lento que los\ndem\x00E1s jugadores.";
static wchar_t game_text_1101[] = L"Cuando tienes la bola corres m\x00E1s lento que los\r\ndem\x00E1s jugadores.";
static wchar_t game_text_1102[] = L"Cuando tienes la bola corres m\x00E1s r\x00E1pido que los\ndem\x00E1s jugadores.";
static wchar_t game_text_1103[] = L"Cuando tienes la bola corres m\x00E1s r\x00E1pido que los\r\ndem\x00E1s jugadores.";
static wchar_t game_text_1104[] = L"Al suicidarte debes esperar quince segundos \nantes de reaparecer. Te dar\x00E1 una idea de \nc\x00F3"
	L"mo es la eternidad.";
static wchar_t game_text_1105[] = L"Al suicidarte debes esperar quince segundos \r\nantes de reaparecer. Te dar\x00E1 una idea de \r"
	L"\nc\x00F3mo es la eternidad.";
static wchar_t game_text_1106[] = L"Al llevar la bola haces da\x00F1o extra a\ntus rivales.";
static wchar_t game_text_1107[] = L"Al llevar la bola haces da\x00F1o extra a\r\ntus rivales.";
static wchar_t game_text_1108[] = L"Mientras tienes la bola eres\ninvisible para los dem\x00E1s jugadores.";
static wchar_t game_text_1109[] = L"Mientras tienes la bola eres\r\ninvisible para los dem\x00E1s jugadores.";
static wchar_t game_text_1110[] = L"Mientras llevas la bola resistes\nm\x00E1s da\x00F1o.";
static wchar_t game_text_1111[] = L"Mientras llevas la bola resistes\r\nm\x00E1s da\x00F1o.";
static wchar_t game_text_1112[] = L"Blanco";
static wchar_t game_text_1113[] = L"Con Bajas punt\x00FA" L"an, cada captura de bandera vale\n10 puntos (una baja vale 1).";
static wchar_t game_text_1114[] = L"Con Bajas punt\x00FA" L"an, cada captura de bandera vale\n100 puntos (una baja vale 1).";
static wchar_t game_text_1115[] = L"Con Bajas punt\x00FA" L"an, cada captura de bandera vale\n15 puntos (una baja vale 1).";
static wchar_t game_text_1116[] = L"Con Bajas punt\x00FA" L"an, cada captura de bandera vale\n20 puntos (una baja vale 1).";
static wchar_t game_text_1117[] = L"Con Bajas punt\x00FA" L"an, cada captura de bandera vale\n25 puntos (una baja vale 1).";
static wchar_t game_text_1118[] = L"Con Bajas punt\x00FA" L"an, cada captura de bandera vale\n30 puntos (una baja vale 1).";
static wchar_t game_text_1119[] = L"Con Bajas punt\x00FA" L"an, cada captura de bandera vale\n40 puntos (una baja vale 1).";
static wchar_t game_text_1120[] = L"Con Bajas punt\x00FA" L"an, cada captura de bandera vale\n5 puntos (una baja vale 1).";
static wchar_t game_text_1121[] = L"Con Bajas punt\x00FA" L"an, cada captura de bandera vale\n50 puntos (una baja vale 1).";
static wchar_t game_text_1122[] = L"Con Bajas punt\x00FA" L"an, cada captura de bandera vale\n75 puntos (una baja vale 1).";
static wchar_t game_text_1123[] = L"Con Bajas punt\x00FA" L"an, cada captura de bandera vale\r\n10 puntos (una baja vale 1).";
static wchar_t game_text_1124[] = L"Con Bajas punt\x00FA" L"an, cada captura de bandera vale\r\n100 puntos (una baja vale 1).";
static wchar_t game_text_1125[] = L"Con Bajas punt\x00FA" L"an, cada captura de bandera vale\r\n15 puntos (una baja vale 1).";
static wchar_t game_text_1126[] = L"Con Bajas punt\x00FA" L"an, cada captura de bandera vale\r\n20 puntos (una baja vale 1).";
static wchar_t game_text_1127[] = L"Con Bajas punt\x00FA" L"an, cada captura de bandera vale\r\n25 puntos (una baja vale 1).";
static wchar_t game_text_1128[] = L"Con Bajas punt\x00FA" L"an, cada captura de bandera vale\r\n30 puntos (una baja vale 1).";
static wchar_t game_text_1129[] = L"Con Bajas punt\x00FA" L"an, cada captura de bandera vale\r\n40 puntos (una baja vale 1).";
static wchar_t game_text_1130[] = L"Con Bajas punt\x00FA" L"an, cada captura de bandera vale\r\n5 puntos (una baja vale 1).";
static wchar_t game_text_1131[] = L"Con Bajas punt\x00FA" L"an, cada captura de bandera vale\r\n50 puntos (una baja vale 1).";
static wchar_t game_text_1132[] = L"Con Bajas punt\x00FA" L"an, cada captura de bandera vale\r\n75 puntos (una baja vale 1).";
static wchar_t game_text_1133[] = L"Amarillo";
static wchar_t game_text_1134[] = L"\x00A1La traes!";
static wchar_t game_text_1135[] = L"\x00A1Llevas una racha de bajas!";
static wchar_t game_text_1136[] = L"\x00A1Llevas una racha de bajas! (%d)";
static wchar_t game_text_1137[] = L"Est\x00E1s a la defensa.";
static wchar_t game_text_1138[] = L"Est\x00E1s al ataque.";
static wchar_t game_text_1139[] = L"Te quedaste sin vidas";
static wchar_t game_text_1140[] = L"Te quedaste fuera";
static wchar_t game_text_1141[] = L"Empiezas la partida con 50% m\x00E1s de salud y\nescudos de lo normal.";
static wchar_t game_text_1142[] = L"Empiezas la partida con 50% m\x00E1s de salud y\r\nescudos de lo normal.";
static wchar_t game_text_1143[] = L"Empiezas la partida con cuatro veces la salud \ny los escudos de lo normal.";
static wchar_t game_text_1144[] = L"Empiezas la partida con cuatro veces la salud \r\ny los escudos de lo normal.";
static wchar_t game_text_1145[] = L"Empiezas la partida con salud y escudos completos.";
static wchar_t game_text_1146[] = L"Empiezas la partida con el triple de salud \ny escudos de lo normal.";
static wchar_t game_text_1147[] = L"Empiezas la partida con el triple de salud \r\ny escudos de lo normal.";
static wchar_t game_text_1148[] = L"Empiezas la partida con el doble de salud y\nescudos de lo normal.";
static wchar_t game_text_1149[] = L"Empiezas la partida con el doble de salud y\r\nescudos de lo normal.";
static wchar_t game_text_1150[] = L"Traicionaste a %s";
static wchar_t game_text_1151[] = L"No puedes jugar en red\nlocal sin conectarte \nantes a una red activa \no a otra consola Xbox.";
static wchar_t game_text_1152[] = L"No puedes jugar en red\r\nlocal sin conectarte \r\nantes a una red activa \r\no a otra consola X"
	L"box.";
static wchar_t game_text_1153[] = L"No puedes caerte del piso.";
static wchar_t game_text_1154[] = L"No puedes devolver la bandera a tu base; vuelve\nsola despu\x00E9s de cierto tiempo.";
static wchar_t game_text_1155[] = L"No puedes devolver la bandera a tu base; vuelve\r\nsola despu\x00E9s de cierto tiempo.";
static wchar_t game_text_1156[] = L"Completas una vuelta al tocar todas\nlas banderas, en el orden que quieras.";
static wchar_t game_text_1157[] = L"Completas una vuelta al tocar todas\r\nlas banderas, en el orden que quieras.";
static wchar_t game_text_1158[] = L"Completaste la vuelta %d en %.2f segundos.";
static wchar_t game_text_1159[] = L"Tienes cinco vidas, cuatro m\x00E1s de las que tendr\x00ED" L"as\nen el mundo real. \x00DAsalas "
	L"bien.";
static wchar_t game_text_1160[] = L"Tienes cinco vidas, cuatro m\x00E1s de las que tendr\x00ED" L"as\r\nen el mundo real. \x00DAsala"
	L"s bien.";
static wchar_t game_text_1161[] = L"Tienes una sola vida. Al menos la usas para\nrepartir golpes por la galaxia en vez de quedarte\n"
	L"sentado en una mansi\x00F3n.";
static wchar_t game_text_1162[] = L"Tienes una sola vida. Al menos la usas para\r\nrepartir golpes por la galaxia en vez de quedarte"
	L"\r\nsentado en una mansi\x00F3n.";
static wchar_t game_text_1163[] = L"Llegaste al m\x00E1ximo\nde archivos del\njuego. No se pueden\ncrear m\x00E1s.";
static wchar_t game_text_1164[] = L"Llegaste al m\x00E1ximo\nde archivos de partida.\nNo se pueden\ncrear m\x00E1s.";
static wchar_t game_text_1165[] = L"Llegaste al m\x00E1ximo\r\nde archivos del\r\njuego. No se pueden\r\ncrear m\x00E1s.";
static wchar_t game_text_1166[] = L"Llegaste al m\x00E1ximo\r\nde archivos de partida.\r\nNo se pueden\r\ncrear m\x00E1s.";
static wchar_t game_text_1167[] = L"Elegiste un espacio \nde perfil vac\x00EDo. \n\x00BFQuieres crear un \nperfil nuevo\?";
static wchar_t game_text_1168[] = L"Elegiste un espacio \r\nde perfil vac\x00EDo. \r\n\x00BFQuieres crear un \r\nperfil nuevo\?";
static wchar_t game_text_1169[] = L"Tienes la bola.";
static wchar_t game_text_1170[] = L"Tienes el m\x00E1ximo de archivos guardados del\njuego en tu consola Xbox. Pulsa A para seguir\n"
	L"sin guardar o B para volver al DASHBOARD\ny borrar algunos archivos guardados.\n\nNecesitas al m"
	L"enos 2600 bloques libres\npara resolver este problema.";
static wchar_t game_text_1171[] = L"Tienes el m\x00E1ximo de archivos guardados del\r\njuego en tu consola Xbox. Pulsa A para seguir"
	L"\r\nsin guardar o B para volver al DASHBOARD\r\ny borrar algunos archivos guardados.\r\n\r\nNece"
	L"sitas al menos 2600 bloques libres\r\npara resolver este problema.";
static wchar_t game_text_1172[] = L"Eliminaste a %s";
static wchar_t game_text_1173[] = L"Eliminaste a %s (%d)";
static wchar_t game_text_1174[] = L"Perdiste";
static wchar_t game_text_1175[] = L"Si quieres, escribe una contrase\x00F1" L"a para\ntu servidor.";
static wchar_t game_text_1176[] = L"Si quieres, escribe una contrase\x00F1" L"a para\r\ntu servidor.";
static wchar_t game_text_1177[] = L"Debes capturar la bandera enemiga y llevarla a\ntu propia base.";
static wchar_t game_text_1178[] = L"Debes capturar la bandera enemiga y llevarla a\r\ntu propia base.";
static wchar_t game_text_1179[] = L"Debes llevar tu propia bandera a la base del\nequipo contrario para anotar.";
static wchar_t game_text_1180[] = L"Debes llevar tu propia bandera a la base del\r\nequipo contrario para anotar.";
static wchar_t game_text_1181[] = L"Debes escribir un nombre nuevo para este archivo";
static wchar_t game_text_1182[] = L"Deben formar 2 equipos";
static wchar_t game_text_1183[] = L"Necesitas crear o\nelegir un perfil para\ncontinuar.";
static wchar_t game_text_1184[] = L"Necesitas crear o\r\nelegir un perfil para\r\ncontinuar.";
static wchar_t game_text_1185[] = L"No pagas ning\x00FAn precio por acabar con tu propia vida.";
static wchar_t game_text_1186[] = L"Seguro esperabas un chiste de \"dos bolas\" en\neste espacio. \x00BF" L"Est\x00E1s loco\? \x00A1"
	L"Nos despedir\x00ED" L"an!";
static wchar_t game_text_1187[] = L"Seguro esperabas un chiste de \"dos bolas\" en\r\neste espacio. \x00BF" L"Est\x00E1s loco\? \x00A1"
	L"Nos despedir\x00ED" L"an!";
static wchar_t game_text_1188[] = L"Saliste de la partida";
static wchar_t game_text_1189[] = L"Devolviste la bandera.";
static wchar_t game_text_1190[] = L"Anotaste: %d a %d.";
static wchar_t game_text_1191[] = L"\x00A1" L"Anotaste una bandera!";
static wchar_t game_text_1192[] = L"Te aplast\x00F3 un teletransporte";
static wchar_t game_text_1193[] = L"Siempre corres a la misma velocidad, mueras las\nveces que mueras.";
static wchar_t game_text_1194[] = L"Siempre corres a la misma velocidad, mueras las\r\nveces que mueras.";
static wchar_t game_text_1195[] = L"Siempre corres a la misma velocidad, elimines a\ncuantos jugadores elimines.";
static wchar_t game_text_1196[] = L"Siempre corres a la misma velocidad, elimines a\r\ncuantos jugadores elimines.";
static wchar_t game_text_1197[] = L"Puedes anotar aunque tu propia bandera est\x00E9 en\nlas viles manos del enemigo.";
static wchar_t game_text_1198[] = L"Puedes anotar aunque tu propia bandera est\x00E9 en\r\nlas viles manos del enemigo.";
static wchar_t game_text_1199[] = L"Empiezas la partida con la mitad de la salud\ny los escudos a media capacidad.";
static wchar_t game_text_1200[] = L"Empiezas la partida con la mitad de la salud\r\ny los escudos a media capacidad.";
static wchar_t game_text_1201[] = L"No tienes habilidades especiales cuando no\nllevas la bola.";
static wchar_t game_text_1202[] = L"No tienes habilidades especiales cuando no\r\nllevas la bola.";
static wchar_t game_text_1203[] = L"No tienes habilidades especiales al llevar la\nbola.";
static wchar_t game_text_1204[] = L"No tienes habilidades especiales al llevar la\r\nbola.";
static wchar_t game_text_1205[] = L"Tienes tres vidas, lo que te hace\nun tercio de genial que un gato.";
static wchar_t game_text_1206[] = L"Tienes tres vidas, lo que te hace\r\nun tercio de genial que un gato.";
static wchar_t game_text_1207[] = L"Solo punt\x00FA" L"as al eliminar a tu objetivo\nasignado. El objetivo cambia cada vez que haces"
	L"\nuna baja.";
static wchar_t game_text_1208[] = L"Solo punt\x00FA" L"as al eliminar a tu objetivo\r\nasignado. El objetivo cambia cada vez que hac"
	L"es\r\nuna baja.";
static wchar_t game_text_1209[] = L"Reapareces sin l\x00EDmite hasta que termine la partida\no se acabe el tiempo.";
static wchar_t game_text_1210[] = L"Reapareces sin l\x00EDmite hasta que termine la partida\r\no se acabe el tiempo.";
static wchar_t game_text_1211[] = L"Corres a la misma velocidad tengas o no la\nbola.";
static wchar_t game_text_1212[] = L"Corres a la misma velocidad tengas o no la\r\nbola.";
static wchar_t game_text_1213[] = L"Empiezas la partida con las armas que los\ndise\x00F1" L"adores del mapa eligieron para \x00E9l.";
static wchar_t game_text_1214[] = L"Empiezas la partida con las armas que los\r\ndise\x00F1" L"adores del mapa eligieron para \x00E9"
	L"l.";
static wchar_t game_text_1215[] = L"Ganaste";
static wchar_t game_text_1216[] = L"Apenas podr\x00E1s caminar sin tropezar con\nuna de las diecis\x00E9is bolas de esta partida.";
static wchar_t game_text_1217[] = L"Apenas podr\x00E1s caminar sin tropezar con\r\nuna de las diecis\x00E9is bolas de esta partida.";
static wchar_t game_text_1218[] = L"Necesitas quince vueltas (y quiz\x00E1 una\nparada en pits) para completar esta carrera.";
static wchar_t game_text_1219[] = L"Necesitas quince vueltas (y quiz\x00E1 una\r\nparada en pits) para completar esta carrera.";
static wchar_t game_text_1220[] = L"Necesitas capturar diez banderas si quieres ganar.";
static wchar_t game_text_1221[] = L"Necesitas capturar tres banderas para ganar.";
static wchar_t game_text_1222[] = L"Solo necesitas mantener la colina dos minutos para \nganar la corona.";
static wchar_t game_text_1223[] = L"Solo necesitas mantener la colina dos minutos para \r\nganar la corona.";
static wchar_t game_text_1224[] = L"Necesitas mantener la colina cinco minutos para ganar.";
static wchar_t game_text_1225[] = L"Necesitas conseguir veinticinco bajas para\nganar la partida.";
static wchar_t game_text_1226[] = L"Necesitas conseguir veinticinco bajas para\r\nganar la partida.";
static wchar_t game_text_1227[] = L"Necesitas pasar quince minutos con la bola o\ntray\x00E9ndola para ganar. El Juggernaut necesita"
	L"\nquince bajas.";
static wchar_t game_text_1228[] = L"Necesitas pasar quince minutos con la bola o\r\ntray\x00E9ndola para ganar. El Juggernaut necesi"
	L"ta\r\nquince bajas.";
static wchar_t game_text_1229[] = L"Necesitar\x00E1s todos los dedos de una mano\npara contar las vueltas de esta partida.";
static wchar_t game_text_1230[] = L"Necesitar\x00E1s todos los dedos de una mano\r\npara contar las vueltas de esta partida.";
static wchar_t game_text_1231[] = L"Solo necesitas tener la bola o traerla un\nminuto en total para ganar. Al Juggernaut le basta\nu"
	L"na baja.";
static wchar_t game_text_1232[] = L"Solo necesitas tener la bola o traerla un\r\nminuto en total para ganar. Al Juggernaut le basta\r"
	L"\nuna baja.";
static wchar_t game_text_1233[] = L"Recorres el mapa en el Rocket Warthog, un\njeep resistente con un lanzacohetes atr\x00E1s.";
static wchar_t game_text_1234[] = L"Recorres el mapa en el Rocket Warthog, un\r\njeep resistente con un lanzacohetes atr\x00E1s.";
static wchar_t game_text_1235[] = L"Recorres el mapa en el \x00E1gil Warthog, un\njeep resistente con una ametralladora atr\x00E1s.";
static wchar_t game_text_1236[] = L"Recorres el mapa en el \x00E1gil Warthog, un\r\njeep resistente con una ametralladora atr\x00E1s"
	L".";
static wchar_t game_text_1237[] = L"Esperas diez segundos tras causar tu propia \nmuerte antes de volver a la partida.";
static wchar_t game_text_1238[] = L"Esperas diez segundos tras causar tu propia \r\nmuerte antes de volver a la partida.";
static wchar_t game_text_1239[] = L"Esperas diez segundos tras morir antes de\nvolver a la partida.";
static wchar_t game_text_1240[] = L"Esperas diez segundos tras morir antes de\r\nvolver a la partida.";
static wchar_t game_text_1241[] = L"Ten a la mano una bolsa para el mareo si quieres\nterminar las 25 vueltas para ganar.";
static wchar_t game_text_1242[] = L"Ten a la mano una bolsa para el mareo si quieres\r\nterminar las 25 vueltas para ganar.";
static wchar_t game_text_1243[] = L"Tu conexi\x00F3n de red\nlocal est\x00E1\nteniendo\nproblemas...";
static wchar_t game_text_1244[] = L"Tu conexi\x00F3n de red\r\nlocal est\x00E1\r\nteniendo\r\nproblemas...";
static wchar_t game_text_1245[] = L"Tu consola Xbox no tiene bloques libres\nsuficientes para guardar. Pulsa A para seguir\nsin guar"
	L"dar o B para volver al DASHBOARD\ny liberar bloques.\n\nNecesitas al menos 2600 bloques libres\n"
	L"para resolver este problema.";
static wchar_t game_text_1246[] = L"Tu consola Xbox no tiene bloques libres\r\nsuficientes para guardar. Pulsa A para seguir\r\nsin "
	L"guardar o B para volver al DASHBOARD\r\ny liberar bloques.\r\n\r\nNecesitas al menos 2600 bloque"
	L"s libres\r\npara resolver este problema.";
static wchar_t game_text_1247[] = L"Tu consola Xbox perdi\x00F3\nla sincron\x00ED" L"a con las\notras consolas de la\npartida. Reini"
	L"ciando...";
static wchar_t game_text_1248[] = L"Tu consola Xbox perdi\x00F3\r\nla sincron\x00ED" L"a con las\r\notras consolas de la\r\npartida."
	L" Reiniciando...";
static wchar_t game_text_1249[] = L"Tu aliado tiene la bandera.";
static wchar_t game_text_1250[] = L"Tu aliado devolvi\x00F3 la bandera.";
static wchar_t game_text_1251[] = L"Tu aliado anot\x00F3: %d a %d.";
static wchar_t game_text_1252[] = L"Tu armadura tiene escudos, as\x00ED que es m\x00E1s\ndif\x00ED" L"cil matarte.";
static wchar_t game_text_1253[] = L"Tu armadura tiene escudos, as\x00ED que es m\x00E1s\r\ndif\x00ED" L"cil matarte.";
static wchar_t game_text_1254[] = L"Tu cliente usa una\nversi\x00F3n de protocolo de \nred incompatible.";
static wchar_t game_text_1255[] = L"Tu cliente usa una\r\nversi\x00F3n de protocolo de \r\nred incompatible.";
static wchar_t game_text_1256[] = L"Tu conexi\x00F3n\ntiene\ndificultades...";
static wchar_t game_text_1257[] = L"Tu conexi\x00F3n\r\ntiene\r\ndificultades...";
static wchar_t game_text_1258[] = L"Tu bandera fue devuelta.";
static wchar_t game_text_1259[] = L"Tu partida se\ndesincroniz\x00F3 de la de\nlos dem\x00E1s. \nReiniciando...";
static wchar_t game_text_1260[] = L"Tu partida se\r\ndesincroniz\x00F3 de la de\r\nlos dem\x00E1s. \r\nReiniciando...";
static wchar_t game_text_1261[] = L"Tu suerte est\x00E1 por cambiar.";
static wchar_t game_text_1262[] = L"Tu mouse usa los valores normales: \nempuja para mirar arriba y jala para mirar abajo.";
static wchar_t game_text_1263[] = L"Tu mouse usa los valores normales: \r\nempuja para mirar arriba y jala para mirar abajo.";
static wchar_t game_text_1264[] = L"El servidor rechaz\x00F3\ntu contrase\x00F1" L"a.";
static wchar_t game_text_1265[] = L"El servidor rechaz\x00F3\r\ntu contrase\x00F1" L"a.";
static wchar_t game_text_1266[] = L"Tu tiempo de reaparici\x00F3n sube diez\nsegundos cada vez que mueres, y baja diez\nsegundos cad"
	L"a vez que eliminas a alguien.";
static wchar_t game_text_1267[] = L"Tu tiempo de reaparici\x00F3n sube diez\r\nsegundos cada vez que mueres, y baja diez\r\nsegundos"
	L" cada vez que eliminas a alguien.";
static wchar_t game_text_1268[] = L"Tu equipo perdi\x00F3";
static wchar_t game_text_1269[] = L"Tu equipo gan\x00F3";
static wchar_t game_text_1270[] = L"Tus compa\x00F1" L"eros solo se distinguen por el color de\nsu armadura.";
static wchar_t game_text_1271[] = L"Tus compa\x00F1" L"eros solo se distinguen por el color de\r\nsu armadura.";
static wchar_t game_text_1272[] = L"Vuela bajo en el Ghost, un \x00E1gil\naerodeslizador con potentes ca\x00F1ones de energ\x00ED" L"a"
	L"\ny la pintura m\x00E1s vistosa de la galaxia.";
static wchar_t game_text_1273[] = L"Vuela bajo en el Ghost, un \x00E1gil\r\naerodeslizador con potentes ca\x00F1ones de energ\x00ED" L"a"
	L"\r\ny la pintura m\x00E1s vistosa de la galaxia.";
static wchar_t game_text_1274[] = L"octavo lugar";
static wchar_t game_text_1275[] = L"parejo";
static wchar_t game_text_1276[] = L"quinto lugar";
static wchar_t game_text_1277[] = L"primer lugar";
static wchar_t game_text_1278[] = L"cuarto lugar";
static wchar_t game_text_1279[] = L"perdiendo";
static wchar_t game_text_1280[] = L"nuevo mejor tiempo de vuelta %.2f.";
static wchar_t game_text_1281[] = L"segundo lugar";
static wchar_t game_text_1282[] = L"s\x00E9ptimo lugar";
static wchar_t game_text_1283[] = L"sexto lugar";
static wchar_t game_text_1284[] = L"tercer lugar";
static wchar_t game_text_1285[] = L"empatado";
static wchar_t game_text_1286[] = L"empate en 10.\x00BA lugar";
static wchar_t game_text_1287[] = L"empate en 11.\x00BA lugar";
static wchar_t game_text_1288[] = L"empate en 12.\x00BA lugar";
static wchar_t game_text_1289[] = L"empate en 13.\x00BA lugar";
static wchar_t game_text_1290[] = L"empate en 14.\x00BA lugar";
static wchar_t game_text_1291[] = L"empate en 15.\x00BA lugar";
static wchar_t game_text_1292[] = L"empate en 16.\x00BA lugar";
static wchar_t game_text_1293[] = L"empate en 9.\x00BA lugar";
static wchar_t game_text_1294[] = L"empate en octavo lugar";
static wchar_t game_text_1295[] = L"empate en quinto lugar";
static wchar_t game_text_1296[] = L"empate en primer lugar";
static wchar_t game_text_1297[] = L"empate en cuarto lugar";
static wchar_t game_text_1298[] = L"empate en segundo lugar";
static wchar_t game_text_1299[] = L"empate en s\x00E9ptimo lugar";
static wchar_t game_text_1300[] = L"empate en sexto lugar";
static wchar_t game_text_1301[] = L"empate en tercer lugar";
static wchar_t game_text_1302[] = L"ganando";

/* each English text and its Spanish one, in the order of the English
texts' characters */
static struct game_text const game_texts[] =
{
	{ L"\t%b-button =quit", game_text_0 },
	{ L"\t%b-button =quit    %a-button =pick game", game_text_1 },
	{ L"\tBlue Team\t%s", game_text_2 },
	{ L"\tESCAPE = Quit", game_text_3 },
	{ L"\tESCAPE = Quit    ENTER = Continue", game_text_4 },
	{ L"\tRed Team\t%s", game_text_5 },
	{ L" \n \n \nCurrent Rules:", game_text_6 },
	{ L" \r\n \r\n \r\nCurrent Rules:", game_text_7 },
	{ L" Remaining", game_text_8 },
	{ L"# of Players:", game_text_9 },
	{ L"%d team %d", game_text_10 },
	{ L"%s %d flags", game_text_11 },
	{ L"%s (%d seconds)", game_text_12 },
	{ L"%s 1 flag", game_text_13 },
	{ L"%s all laps complete", game_text_14 },
	{ L"%s committed suicide", game_text_15 },
	{ L"%s died", game_text_16 },
	{ L"%s has the ball.", game_text_17 },
	{ L"%s is it.", game_text_18 },
	{ L"%s kills %d of %d", game_text_19 },
	{ L"%s kills %d team %d of %d", game_text_20 },
	{ L"%s lap %d of %d", game_text_21 },
	{ L"%s quit", game_text_22 },
	{ L"%s was betrayed by %s", game_text_23 },
	{ L"%s was killed by %s", game_text_24 },
	{ L"%s was killed by a vehicle", game_text_25 },
	{ L"%s was killed by the guardians", game_text_26 },
	{ L"(%d lives)", game_text_27 },
	{ L"(1 life)", game_text_28 },
	{ L"(closed)", game_text_29 },
	{ L"(no lives)", game_text_30 },
	{ L"... and then there were twelve balls in the game.", game_text_31 },
	{ L"1 MINUTE", game_text_32 },
	{ L"10 MINUTES", game_text_33 },
	{ L"10th", game_text_34 },
	{ L"10th place", game_text_35 },
	{ L"11th", game_text_36 },
	{ L"11th place", game_text_37 },
	{ L"12th", game_text_38 },
	{ L"12th place", game_text_39 },
	{ L"13th", game_text_40 },
	{ L"13th place", game_text_41 },
	{ L"14th", game_text_42 },
	{ L"14th place", game_text_43 },
	{ L"15 MINUTES", game_text_44 },
	{ L"15th", game_text_45 },
	{ L"15th place", game_text_46 },
	{ L"16th", game_text_47 },
	{ L"16th place", game_text_48 },
	{ L"1st", game_text_49 },
	{ L"2 MINUTES", game_text_50 },
	{ L"20 MINUTES", game_text_51 },
	{ L"25 MINUTES", game_text_52 },
	{ L"2nd", game_text_53 },
	{ L"3 MINUTES", game_text_54 },
	{ L"30 MINUTES", game_text_55 },
	{ L"3rd", game_text_56 },
	{ L"45 MINUTES", game_text_57 },
	{ L"4th", game_text_58 },
	{ L"5 MINUTES", game_text_59 },
	{ L"5th", game_text_60 },
	{ L"60 SECONDS", game_text_61 },
	{ L"6th", game_text_62 },
	{ L"7th", game_text_63 },
	{ L"8th", game_text_64 },
	{ L"90 SECONDS", game_text_65 },
	{ L"9th", game_text_66 },
	{ L"9th place", game_text_67 },
	{ L"=ACCEPT", game_text_68 },
	{ L"=BACK", game_text_69 },
	{ L"=CANCEL", game_text_70 },
	{ L"=CANCEL CHANGES", game_text_71 },
	{ L"=CREATE NEW", game_text_72 },
	{ L"=DELAY GAME", game_text_73 },
	{ L"=DELETE", game_text_74 },
	{ L"=DONE", game_text_75 },
	{ L"=EDIT", game_text_76 },
	{ L"=SAVE", game_text_77 },
	{ L"=SAVE CHANGES", game_text_78 },
	{ L"=SELECT", game_text_79 },
	{ L"=START GAME", game_text_80 },
	{ L"A controller\nmemory card error\nhas occurred.", game_text_81 },
	{ L"A controller\r\nmemory card error\r\nhas occurred.", game_text_82 },
	{ L"A controller error\nhas occurred.", game_text_83 },
	{ L"A controller error\r\nhas occurred.", game_text_84 },
	{ L"A good friend is the best mirror.", game_text_85 },
	{ L"A hundred and fifty kills to win. Only a crowded\nserver gets there.", game_text_86 },
	{ L"A hundred and fifty kills to win. Only a crowded\r\nserver gets there.", game_text_87 },
	{ L"A hundred kills to win. Made for big games.", game_text_88 },
	{ L"A long walk\ndown a short hall...\n\n2-8 players", game_text_89 },
	{ L"A long walk\r\ndown a short hall...\r\n\r\n2-8 players", game_text_90 },
	{ L"A networking error\nhas occurred.", game_text_91 },
	{ L"A networking error\r\nhas occurred.", game_text_92 },
	{ L"A random primary weapon, of those the map has,\neach time you spawn.", game_text_93 },
	{ L"A random primary weapon, of those the map has,\r\neach time you spawn.", game_text_94 },
	{ L"A random secondary weapon, of those the map has,\neach time you spawn.", game_text_95 },
	{ L"A random secondary weapon, of those the map has,\r\neach time you spawn.", game_text_96 },
	{ L"A single lap is all that's required to win the game. \nUnless your pants are on fire, this shoul"
		L"d be quick \nand easy.", game_text_97 },
	{ L"A single lap is all that's required to win the game. \r\nUnless your pants are on fire, this sho"
		L"uld be quick \r\nand easy.", game_text_98 },
	{ L"ABOUT", game_text_99 },
	{ L"ACTION", game_text_100 },
	{ L"ADVANCED", game_text_101 },
	{ L"ALERT!", game_text_102 },
	{ L"ANY ORDER", game_text_103 },
	{ L"ARE YOU SURE\?", game_text_104 },
	{ L"ASSAULT:", game_text_105 },
	{ L"ATTENTION", game_text_106 },
	{ L"ATTENTION:", game_text_107 },
	{ L"AUDIO SETUP", game_text_108 },
	{ L"AUTO TEAM BALANCE:", game_text_109 },
	{ L"AVAILABLE DEVICES", game_text_110 },
	{ L"Accepting Players", game_text_111 },
	{ L"Adjust the mouse's sensitivity\nand aiming.\n\nProfile:", game_text_112 },
	{ L"Adjust the mouse's sensitivity\r\nand aiming.\r\n\r\nProfile:", game_text_113 },
	{ L"Adjust the volume of the music\nand of everything else.\n\nProfile:", game_text_114 },
	{ L"Adjust the volume of the music\r\nand of everything else.\r\n\r\nProfile:", game_text_115 },
	{ L"Adjust vehicle placement for the Blue Team.", game_text_116 },
	{ L"Adjust vehicle placement for the Red Team.", game_text_117 },
	{ L"After you die, you'll be able to respawn immediately.", game_text_118 },
	{ L"All - ", game_text_119 },
	{ L"All other players in the game will show up on your \nMotion Tracker when mobile.", game_text_120 },
	{ L"All other players in the game will show up on your \r\nMotion Tracker when mobile.", game_text_121 },
	{ L"All players will be visible unless they happen to find\nan Active Camouflage powerup.", game_text_122 },
	{ L"All players will be visible unless they happen to find\r\nan Active Camouflage powerup.", game_text_123 },
	{ L"All progress on this \nlevel will be lost.", game_text_124 },
	{ L"All progress on this \r\nlevel will be lost.", game_text_125 },
	{ L"All progress since the\nlast checkpoint will\nbe lost.", game_text_126 },
	{ L"All progress since the\r\nlast checkpoint will\r\nbe lost.", game_text_127 },
	{ L"All the players will be completely invisible.", game_text_128 },
	{ L"All the weapons on the map are only effective at\nshort ranges.", game_text_129 },
	{ L"All the weapons on the map are only effective at\r\nshort ranges.", game_text_130 },
	{ L"All the weapons on the map will be replaced by\nassault rifles and plasma rifles.", game_text_131 },
	{ L"All the weapons on the map will be replaced by\npistols.", game_text_132 },
	{ L"All the weapons on the map will be replaced by\nplasma weapons.", game_text_133 },
	{ L"All the weapons on the map will be replaced by\nrocket launchers.", game_text_134 },
	{ L"All the weapons on the map will be replaced by\nshotguns.", game_text_135 },
	{ L"All the weapons on the map will be replaced by\r\nassault rifles and plasma rifles.", game_text_136 },
	{ L"All the weapons on the map will be replaced by\r\npistols.", game_text_137 },
	{ L"All the weapons on the map will be replaced by\r\nplasma weapons.", game_text_138 },
	{ L"All the weapons on the map will be replaced by\r\nrocket launchers.", game_text_139 },
	{ L"All the weapons on the map will be replaced by\r\nshotguns.", game_text_140 },
	{ L"All your hard work will pay off.", game_text_141 },
	{ L"Ally %s completed a lap %d.", game_text_142 },
	{ L"Ally %s has the ball (%d seconds)", game_text_143 },
	{ L"Ally %s in on the hill (%d seconds)", game_text_144 },
	{ L"Ally %s scored a flag!", game_text_145 },
	{ L"Ally is it!", game_text_146 },
	{ L"An Enemy Behind\nEvery Tree\n\n4-16 players\n\nSupports vehicles", game_text_147 },
	{ L"An Enemy Behind\r\nEvery Tree\r\n\r\n4-16 players\r\n\r\nSupports vehicles", game_text_148 },
	{ L"An ally has the ball.", game_text_149 },
	{ L"An error has occurred\nloading a map file.", game_text_150 },
	{ L"An error has occurred\r\nloading a map file.", game_text_151 },
	{ L"Are you sure you want to\ndelete this saved game\?", game_text_152 },
	{ L"Are you sure you want to\r\ndelete this saved game\?", game_text_153 },
	{ L"Are you sure you wish \nto delete this\ngametype\? All your\nsettings will be lost.", game_text_154 },
	{ L"Are you sure you wish \nto delete this profile\? \nAll your progress and \nsettings will be lost"
		L".", game_text_155 },
	{ L"Are you sure you wish \r\nto delete this\r\ngametype\? All your\r\nsettings will be lost.", game_text_156 },
	{ L"Are you sure you wish \r\nto delete this profile\? \r\nAll your progress and \r\nsettings will b"
		L"e lost.", game_text_157 },
	{ L"Are you sure you wish to\nexit OpenCE Arena\?", game_text_158 },
	{ L"Are you sure you wish to\r\nexit OpenCE Arena\?", game_text_159 },
	{ L"Assault", game_text_160 },
	{ L"Assists", game_text_161 },
	{ L"At the end of this game there will be fifteen angry\nmen. Angry because the winning player kille"
		L"d them.", game_text_162 },
	{ L"At the end of this game there will be fifteen angry\r\nmen. Angry because the winning player kil"
		L"led them.", game_text_163 },
	{ L"Auto Start", game_text_164 },
	{ L"BALL SPAWN COUNT:", game_text_165 },
	{ L"BALL TYPE:", game_text_166 },
	{ L"BLUE TEAM", game_text_167 },
	{ L"Backspace", game_text_168 },
	{ L"Basic audio quality and effects for best\nperformance.", game_text_169 },
	{ L"Basic audio quality and effects for best\r\nperformance.", game_text_170 },
	{ L"Be the first on your block to collect all fifteen balls!", game_text_171 },
	{ L"Become one with the ball. And \nkeep the ball away from every-\none else while you're at it.\nCu"
		L"rrent Rules:", game_text_172 },
	{ L"Become one with the ball. And \r\nkeep the ball away from every-\r\none else while you're at it."
		L"\r\nCurrent Rules:", game_text_173 },
	{ L"Best audio quality including Doppler and 3D\npositional effects, for high-end PCs.", game_text_174 },
	{ L"Best audio quality including Doppler and 3D\r\npositional effects, for high-end PCs.", game_text_175 },
	{ L"Black", game_text_176 },
	{ L"Blue", game_text_177 },
	{ L"Blue Team", game_text_178 },
	{ L"Blue leads Red %s to %s %s", game_text_179 },
	{ L"Brown", game_text_180 },
	{ L"Browse the games on the\nInternet.", game_text_181 },
	{ L"Browse the games on the\r\nInternet.", game_text_182 },
	{ L"CAPTURES TO WIN:", game_text_183 },
	{ L"CATEGORY:", game_text_184 },
	{ L"CHANGE COLOR", game_text_185 },
	{ L"CHANGE NAME", game_text_186 },
	{ L"CLASSIC", game_text_187 },
	{ L"CLIENT PORT:", game_text_188 },
	{ L"CO-OP CAMPAIGN", game_text_189 },
	{ L"CONNECTION TYPE:", game_text_190 },
	{ L"CONTROLS SETUP", game_text_191 },
	{ L"CREATE GAME", game_text_192 },
	{ L"CREATE NEW", game_text_193 },
	{ L"CROUCH", game_text_194 },
	{ L"Caps Lock", game_text_195 },
	{ L"Capture the flag five times and you'll win the game.", game_text_196 },
	{ L"Captures", game_text_197 },
	{ L"Change the current profile's\nfree-for-all multiplayer color.\n\nProfile:", game_text_198 },
	{ L"Change the current profile's\r\nfree-for-all multiplayer color.\r\n\r\nProfile:", game_text_199 },
	{ L"Checkpoint saved.", game_text_200 },
	{ L"Checkpoint... ", game_text_201 },
	{ L"Checkpoint... done", game_text_202 },
	{ L"Choose a Save Point to Load", game_text_203 },
	{ L"Choose a device from the list to configure.", game_text_204 },
	{ L"Choose a window or the full\nscreen, the frame rate and more.\n\nProfile:", game_text_205 },
	{ L"Choose a window or the full\r\nscreen, the frame rate and more.\r\n\r\nProfile:", game_text_206 },
	{ L"Choose teams using D-pad", game_text_207 },
	{ L"Choose the keys and mouse\nbuttons for each action.\n\nProfile:", game_text_208 },
	{ L"Choose the keys and mouse\r\nbuttons for each action.\r\n\r\nProfile:", game_text_209 },
	{ L"Choose the maximum number of players you want to\nbe able to play in your game.  Note that the\n"
		L"maximum number of players for a server is based\non your connection speed.", game_text_210 },
	{ L"Choose the maximum number of players you want to\r\nbe able to play in your game.  Note that the"
		L"\r\nmaximum number of players for a server is based\r\non your connection speed.", game_text_211 },
	{ L"Choose the player settings and \nrestrictions that apply to\nthis gametype.\nThis gametype:", game_text_212 },
	{ L"Choose the player settings and \r\nrestrictions that apply to\r\nthis gametype.\r\nThis gametype"
		L":", game_text_213 },
	{ L"Choose the rules of OpenCE's\ngametypes: SWAT, Infection,\nGun Game and Hardcore.\nThis gametype"
		L":", game_text_214 },
	{ L"Choose the rules of OpenCE's\r\ngametypes: SWAT, Infection,\r\nGun Game and Hardcore.\r\nThis ga"
		L"metype:", game_text_215 },
	{ L"Choose the weapons and\nother items that appear in\nthis gametype.\nThis gametype:", game_text_216 },
	{ L"Choose the weapons and\r\nother items that appear in\r\nthis gametype.\r\nThis gametype:", game_text_217 },
	{ L"Choose which interface indica-\ntors are available while playing \nthis gametype.\nThis gametype"
		L":", game_text_218 },
	{ L"Choose which interface indica-\r\ntors are available while playing \r\nthis gametype.\r\nThis ga"
		L"metype:", game_text_219 },
	{ L"Cobalt", game_text_220 },
	{ L"Command the skies in the Banshee.", game_text_221 },
	{ L"Complete the required number \nof laps before your opponents, \nblowing away the competition.\nC"
		L"urrent Rules:", game_text_222 },
	{ L"Complete the required number \r\nof laps before your opponents, \r\nblowing away the competition"
		L".\r\nCurrent Rules:", game_text_223 },
	{ L"Connection rejected: Your\nclient is newer than the\nserver.", game_text_224 },
	{ L"Connection rejected: Your\nclient is older than the\nserver.", game_text_225 },
	{ L"Connection rejected: Your\r\nclient is newer than the\r\nserver.", game_text_226 },
	{ L"Connection rejected: Your\r\nclient is older than the\r\nserver.", game_text_227 },
	{ L"Control the ball or be It for five minutes and the\ngame is yours. First Juggernaut to five kill"
		L"s wins.", game_text_228 },
	{ L"Control the ball or be It for five minutes and the\r\ngame is yours. First Juggernaut to five ki"
		L"lls wins.", game_text_229 },
	{ L"Control the ball or be It for two minutes and the\ngame is yours. First Juggernaut with two kill"
		L"s wins.", game_text_230 },
	{ L"Control the ball or be It for two minutes and the\r\ngame is yours. First Juggernaut with two ki"
		L"lls wins.", game_text_231 },
	{ L"Controls:", game_text_232 },
	{ L"Covenant Hydro-\nProcessing Center\n\n4-8 players", game_text_233 },
	{ L"Covenant Hydro-\r\nProcessing Center\r\n\r\n4-8 players", game_text_234 },
	{ L"Create New\nPlayer Profile", game_text_235 },
	{ L"Create New\r\nPlayer Profile", game_text_236 },
	{ L"Creating game settings\nfile... one moment please.", game_text_237 },
	{ L"Creating game settings\nfile... please don't turn\noff your Xbox console.", game_text_238 },
	{ L"Creating game settings\r\nfile... one moment please.", game_text_239 },
	{ L"Creating game settings\r\nfile... please don't turn\r\noff your Xbox console.", game_text_240 },
	{ L"Creating player profile...\none moment please.", game_text_241 },
	{ L"Creating player profile...\nplease don't turn off\nyour Xbox console.", game_text_242 },
	{ L"Creating player profile...\r\none moment please.", game_text_243 },
	{ L"Creating player profile...\r\nplease don't turn off\r\nyour Xbox console.", game_text_244 },
	{ L"Current Level:", game_text_245 },
	{ L"Customize the network port the client\nsends on.", game_text_246 },
	{ L"Customize the network port the client\r\nsends on.", game_text_247 },
	{ L"Customize the network port the server\nlistens on.  Also affects the port that\nclients look for"
		L" LAN games on.", game_text_248 },
	{ L"Customize the network port the server\r\nlistens on.  Also affects the port that\r\nclients look"
		L" for LAN games on.", game_text_249 },
	{ L"Customize the set of vehicles which will spawn\nin the map.", game_text_250 },
	{ L"Customize the set of vehicles which will spawn\r\nin the map.", game_text_251 },
	{ L"Cyan", game_text_252 },
	{ L"Cycle through the command groups to\nconfigure all available commands.", game_text_253 },
	{ L"Cycle through the command groups to\r\nconfigure all available commands.", game_text_254 },
	{ L"DAMAGE RESISTANT", game_text_255 },
	{ L"DARKEN / BRIGHTEN", game_text_256 },
	{ L"DEATH BONUS:", game_text_257 },
	{ L"DECALS:", game_text_258 },
	{ L"DEFAULTS", game_text_259 },
	{ L"DELETE", game_text_260 },
	{ L"DEVICE:", game_text_261 },
	{ L"DEVICES IN PROFILE", game_text_262 },
	{ L"DID YOU KNOW...", game_text_263 },
	{ L"DIRECT LINK", game_text_264 },
	{ L"DSL/Cable (AVG)", game_text_265 },
	{ L"DSL/Cable (HIGH)", game_text_266 },
	{ L"DSL/Cable (LOW)", game_text_267 },
	{ L"Damage from friendly fire will only reduce shields.\nHealth will be unaffected.", game_text_268 },
	{ L"Damage from friendly fire will only reduce shields.\r\nHealth will be unaffected.", game_text_269 },
	{ L"Dead", game_text_270 },
	{ L"Deaths", game_text_271 },
	{ L"Decals will be disabled.", game_text_272 },
	{ L"Decals will be enabled.  Decals include bullet\nholes and blood.", game_text_273 },
	{ L"Decals will be enabled.  Decals include bullet\r\nholes and blood.", game_text_274 },
	{ L"Deep-Space\nAnomaly #0198\n\n4-8 players", game_text_275 },
	{ L"Deep-Space\r\nAnomaly #0198\r\n\r\n4-8 players", game_text_276 },
	{ L"Default", game_text_277 },
	{ L"Defend the lands with the powerful Covenant Gun\nTurret.", game_text_278 },
	{ L"Defend the lands with the powerful Covenant Gun\r\nTurret.", game_text_279 },
	{ L"Difficulty:", game_text_280 },
	{ L"Disable mouse aim assist for mouse/keyboard players.\nController and touch aim assist are unchan"
		L"ged.", game_text_281 },
	{ L"Disable mouse aim assist for mouse/keyboard players.\r\nController and touch aim assist are unch"
		L"anged.", game_text_282 },
	{ L"Do not show empty servers.", game_text_283 },
	{ L"Do not show full servers.", game_text_284 },
	{ L"Do you really want to\nback out without saving\nyour changes\?", game_text_285 },
	{ L"Do you really want to\r\nback out without saving\r\nyour changes\?", game_text_286 },
	{ L"Don't Look Down...\nUnless You Fall\n\n4-16 players\n\nSupports vehicles", game_text_287 },
	{ L"Don't Look Down...\r\nUnless You Fall\r\n\r\n4-16 players\r\n\r\nSupports vehicles", game_text_288 },
	{ L"Done", game_text_289 },
	{ L"Double Kill!", game_text_290 },
	{ L"Double Kill! (%d)", game_text_291 },
	{ L"Dude, you really\nneed to...\n\n2-8 players", game_text_292 },
	{ L"Dude, you really\r\nneed to...\r\n\r\n2-8 players", game_text_293 },
	{ L"During the course of the game, the Hill will teleport to\na random location.", game_text_294 },
	{ L"During the course of the game, the Hill will teleport to\r\na random location.", game_text_295 },
	{ L"Dynamic shadows will be disabled.", game_text_296 },
	{ L"Dynamic shadows will be enabled.", game_text_297 },
	{ L"EASY", game_text_298 },
	{ L"EDIT GAMETYPES", game_text_299 },
	{ L"EFFECTS DETAIL:", game_text_300 },
	{ L"ENVIRONMENTAL SOUND:", game_text_301 },
	{ L"EXCHANGE WEAPON", game_text_302 },
	{ L"EXTRA DAMAGE", game_text_303 },
	{ L"Each kill scores a point for the killer's team (a\nbetrayal takes one away), and each capture is"
		L" worth\nKills per Capture. The limit is in captures.", game_text_304 },
	{ L"Each kill scores a point for the killer's team (a\r\nbetrayal takes one away), and each capture "
		L"is worth\r\nKills per Capture. The limit is in captures.", game_text_305 },
	{ L"Each kill you make counts toward your score.", game_text_306 },
	{ L"Each player can only carry up to 4 grenades of each\ntype at any given time.", game_text_307 },
	{ L"Each player can only carry up to 4 grenades of each\r\ntype at any given time.", game_text_308 },
	{ L"Each team will have its own individual flag.", game_text_309 },
	{ L"Each team's score is equal to that of the highest-\nscoring team member.", game_text_310 },
	{ L"Each team's score is equal to that of the highest-\r\nscoring team member.", game_text_311 },
	{ L"Each team's score is the sum total of its individual\nmember's scores.", game_text_312 },
	{ L"Each team's score is the sum total of its individual\r\nmember's scores.", game_text_313 },
	{ L"Easy", game_text_314 },
	{ L"Eight balls is definitely enough.", game_text_315 },
	{ L"Empty game\nsetting slot", game_text_316 },
	{ L"Empty game\r\nsetting slot", game_text_317 },
	{ L"Enemy %s completed a lap.", game_text_318 },
	{ L"Enemy %s has the ball (%d seconds)", game_text_319 },
	{ L"Enemy %s in on the hill (%d seconds)", game_text_320 },
	{ L"Enemy %s scored a flag!", game_text_321 },
	{ L"Enemy scored %d to %d.", game_text_322 },
	{ L"Enter a name for your game setting", game_text_323 },
	{ L"Enter a name for your player profile", game_text_324 },
	{ L"Enter a name for your server.", game_text_325 },
	{ L"Enter a password for the server you want\nto connect to.", game_text_326 },
	{ L"Enter a password for the server you want\r\nto connect to.", game_text_327 },
	{ L"Enter the address of  the server you want to\nconnect to, and optionally a colon and port\nnumbe"
		L"r. Example: 206.0.8.4:2304.", game_text_328 },
	{ L"Enter the address of  the server you want to\r\nconnect to, and optionally a colon and port\r\nn"
		L"umber. Example: 206.0.8.4:2304.", game_text_329 },
	{ L"Every time you cause your own death, there will be a \nfive-second wait before you can rejoin th"
		L"e game. ", game_text_330 },
	{ L"Every time you cause your own death, there will be a \r\nfive-second wait before you can rejoin "
		L"the game. ", game_text_331 },
	{ L"Every time you die you'll add fifteen seconds to your\nrespawn time. Every time you kill someone"
		L" you'll\nsubtract fifteen seconds.", game_text_332 },
	{ L"Every time you die you'll add fifteen seconds to your\r\nrespawn time. Every time you kill someo"
		L"ne you'll\r\nsubtract fifteen seconds.", game_text_333 },
	{ L"Every time you die your respawn time will increase\nby five seconds. Every time you kill someone"
		L" your\nrespawn time will decrease by five seconds.", game_text_334 },
	{ L"Every time you die your respawn time will increase\r\nby five seconds. Every time you kill someo"
		L"ne your\r\nrespawn time will decrease by five seconds.", game_text_335 },
	{ L"Every time you kill another player, you will run a\nlittle slower. An entertaining handicap for "
		L"the\nsharp-eyed marksman.", game_text_336 },
	{ L"Every time you kill another player, you will run a\r\nlittle slower. An entertaining handicap fo"
		L"r the\r\nsharp-eyed marksman.", game_text_337 },
	{ L"Every vehicle the map places will spawn, as in\nthe PC version.", game_text_338 },
	{ L"Every vehicle the map places will spawn, as in\r\nthe PC version.", game_text_339 },
	{ L"Everyone has a limitless supply of grenades, which\nmakes for loud, explosive and occasionally m"
		L"essy fun.", game_text_340 },
	{ L"Everyone has a limitless supply of grenades, which\r\nmakes for loud, explosive and occasionally"
		L" messy fun.", game_text_341 },
	{ L"Everyone has one point as the destination, and the\nplayer who reaches it first scores a lap.", game_text_342 },
	{ L"Everyone has one point as the destination, and the\r\nplayer who reaches it first scores a lap.", game_text_343 },
	{ L"Everyone sees the stock game's shields and\novershield, whatever their own settings.", game_text_344 },
	{ L"Everyone sees the stock game's shields and\r\novershield, whatever their own settings.", game_text_345 },
	{ L"Everyone spawns with a assault rifle as their primary\nweapon (where the map has one).", game_text_346 },
	{ L"Everyone spawns with a assault rifle as their primary\r\nweapon (where the map has one).", game_text_347 },
	{ L"Everyone spawns with a assault rifle as their secondary\nweapon (where the map has one).", game_text_348 },
	{ L"Everyone spawns with a assault rifle as their secondary\r\nweapon (where the map has one).", game_text_349 },
	{ L"Everyone spawns with a needler as their primary\nweapon (where the map has one).", game_text_350 },
	{ L"Everyone spawns with a needler as their primary\r\nweapon (where the map has one).", game_text_351 },
	{ L"Everyone spawns with a needler as their secondary\nweapon (where the map has one).", game_text_352 },
	{ L"Everyone spawns with a needler as their secondary\r\nweapon (where the map has one).", game_text_353 },
	{ L"Everyone spawns with a pistol as their primary\nweapon (where the map has one).", game_text_354 },
	{ L"Everyone spawns with a pistol as their primary\r\nweapon (where the map has one).", game_text_355 },
	{ L"Everyone spawns with a pistol as their secondary\nweapon (where the map has one).", game_text_356 },
	{ L"Everyone spawns with a pistol as their secondary\r\nweapon (where the map has one).", game_text_357 },
	{ L"Everyone spawns with a plasma pistol as their primary\nweapon (where the map has one).", game_text_358 },
	{ L"Everyone spawns with a plasma pistol as their primary\r\nweapon (where the map has one).", game_text_359 },
	{ L"Everyone spawns with a plasma pistol as their secondary\nweapon (where the map has one).", game_text_360 },
	{ L"Everyone spawns with a plasma pistol as their secondary\r\nweapon (where the map has one).", game_text_361 },
	{ L"Everyone spawns with a plasma rifle as their primary\nweapon (where the map has one).", game_text_362 },
	{ L"Everyone spawns with a plasma rifle as their primary\r\nweapon (where the map has one).", game_text_363 },
	{ L"Everyone spawns with a plasma rifle as their secondary\nweapon (where the map has one).", game_text_364 },
	{ L"Everyone spawns with a plasma rifle as their secondary\r\nweapon (where the map has one).", game_text_365 },
	{ L"Everyone spawns with a rocket launcher as their primary\nweapon (where the map has one).", game_text_366 },
	{ L"Everyone spawns with a rocket launcher as their primary\r\nweapon (where the map has one).", game_text_367 },
	{ L"Everyone spawns with a rocket launcher as their secondary\nweapon (where the map has one).", game_text_368 },
	{ L"Everyone spawns with a rocket launcher as their secondary\r\nweapon (where the map has one).", game_text_369 },
	{ L"Everyone spawns with a shotgun as their primary\nweapon (where the map has one).", game_text_370 },
	{ L"Everyone spawns with a shotgun as their primary\r\nweapon (where the map has one).", game_text_371 },
	{ L"Everyone spawns with a shotgun as their secondary\nweapon (where the map has one).", game_text_372 },
	{ L"Everyone spawns with a shotgun as their secondary\r\nweapon (where the map has one).", game_text_373 },
	{ L"Everyone spawns with a sniper rifle as their primary\nweapon (where the map has one).", game_text_374 },
	{ L"Everyone spawns with a sniper rifle as their primary\r\nweapon (where the map has one).", game_text_375 },
	{ L"Everyone spawns with a sniper rifle as their secondary\nweapon (where the map has one).", game_text_376 },
	{ L"Everyone spawns with a sniper rifle as their secondary\r\nweapon (where the map has one).", game_text_377 },
	{ L"Everyone starts with the primary and secondary\nweapons below; the map's weapons are its own.", game_text_378 },
	{ L"Everyone starts with the primary and secondary\r\nweapons below; the map's weapons are its own.", game_text_379 },
	{ L"Everyone's shields light their surroundings as\nthey flare, three times as far (Light Show).", game_text_380 },
	{ L"Everyone's shields light their surroundings as\nthey flare.", game_text_381 },
	{ L"Everyone's shields light their surroundings as\r\nthey flare, three times as far (Light Show).", game_text_382 },
	{ L"Everyone's shields light their surroundings as\r\nthey flare.", game_text_383 },
	{ L"Everything lies in silence.", game_text_384 },
	{ L"FAST", game_text_385 },
	{ L"FILTERS", game_text_386 },
	{ L"FIRE WEAPON", game_text_387 },
	{ L"FLAG AT HOME TO SCORE:", game_text_388 },
	{ L"FLAG MUST RESET:", game_text_389 },
	{ L"FLASHLIGHT", game_text_390 },
	{ L"FORCE TEAM SPAWNS:", game_text_391 },
	{ L"FRAMERATE:", game_text_392 },
	{ L"FRIEND INDICATORS ON SCREEN:", game_text_393 },
	{ L"FRIENDLY FIRE PENALTY:", game_text_394 },
	{ L"FRIENDS", game_text_395 },
	{ L"Failed to join the\nSystem Link game.", game_text_396 },
	{ L"Failed to join the\r\nSystem Link game.", game_text_397 },
	{ L"Failed to join the game.", game_text_398 },
	{ L"Filter servers by connection latency (in ms).\nLatency is how fast data travels from the server.", game_text_399 },
	{ L"Filter servers by connection latency (in ms).\r\nLatency is how fast data travels from the serve"
		L"r.", game_text_400 },
	{ L"Find the enemy's flag and\nreturn it to your base while\nkeeping them away from yours.\nCurrent "
		L"Rules:", game_text_401 },
	{ L"Find the enemy's flag and\r\nreturn it to your base while\r\nkeeping them away from yours.\r\nCu"
		L"rrent Rules:", game_text_402 },
	{ L"First person to carry the ball or be It for ten minutes\nwins the game. First Juggernaut to ten "
		L"kills wins.", game_text_403 },
	{ L"First person to carry the ball or be It for ten minutes\r\nwins the game. First Juggernaut to te"
		L"n kills wins.", game_text_404 },
	{ L"First player to plug ten enemies wins.", game_text_405 },
	{ L"Five balls are scattered about willy-nilly.", game_text_406 },
	{ L"Five hundred kills to win. You'll be here a while.", game_text_407 },
	{ L"Flags", game_text_408 },
	{ L"For everyone, Light Show's shield glow, and the\novershield rising and staying lit.", game_text_409 },
	{ L"For everyone, Light Show's shield glow, and the\r\novershield rising and staying lit.", game_text_410 },
	{ L"For everyone, shields light their surroundings,\nand the overshield rises and stays lit.", game_text_411 },
	{ L"For everyone, shields light their surroundings,\r\nand the overshield rises and stays lit.", game_text_412 },
	{ L"For everyone, the overshield rises up the body\nand stays lit, in its own color.", game_text_413 },
	{ L"For everyone, the overshield rises up the body\r\nand stays lit, in its own color.", game_text_414 },
	{ L"Frags", game_text_415 },
	{ L"Free for All", game_text_416 },
	{ L"GAME OPTIONS", game_text_417 },
	{ L"GAMEPADS", game_text_418 },
	{ L"GENERIC", game_text_419 },
	{ L"GET LIST", game_text_420 },
	{ L"GUN TURRET:", game_text_421 },
	{ L"GUN TURRETS", game_text_422 },
	{ L"Game", game_text_423 },
	{ L"Game In Progress", game_text_424 },
	{ L"Game ends in a draw", game_text_425 },
	{ L"Game sounds will be played with full variety.\nThis provides the best quality for a fast CPU.", game_text_426 },
	{ L"Game sounds will be played with full variety.\r\nThis provides the best quality for a fast CPU.", game_text_427 },
	{ L"Game sounds will be played with minimal variety.\nThis provides the best performance for a slowe"
		L"r CPU.", game_text_428 },
	{ L"Game sounds will be played with minimal variety.\r\nThis provides the best performance for a slo"
		L"wer CPU.", game_text_429 },
	{ L"Game sounds will be played with some variety.\nThis balances quality and performance.", game_text_430 },
	{ L"Game sounds will be played with some variety.\r\nThis balances quality and performance.", game_text_431 },
	{ L"Game:", game_text_432 },
	{ L"Gamma controls the brightness.", game_text_433 },
	{ L"Get a comfy chair, because you'll need to control the\nhill for a solid fifteen minutes in order"
		L" to win.", game_text_434 },
	{ L"Get a comfy chair, because you'll need to control the\r\nhill for a solid fifteen minutes in ord"
		L"er to win.", game_text_435 },
	{ L"Get on Top\n\n\n2-8 players", game_text_436 },
	{ L"Get on Top\r\n\r\n\r\n2-8 players", game_text_437 },
	{ L"Get your bad self to the hill \nand defend it against those \nwho would take it from you.\nCurre"
		L"nt Rules:", game_text_438 },
	{ L"Get your bad self to the hill \r\nand defend it against those \r\nwho would take it from you.\r\n"
		L"Current Rules:", game_text_439 },
	{ L"Getting Message of the Day...", game_text_440 },
	{ L"Getting Server Info...", game_text_441 },
	{ L"Grab fifteen flags and you'll rack up a win - not to\nmention an impressive flag collection.", game_text_442 },
	{ L"Grab fifteen flags and you'll rack up a win - not to\r\nmention an impressive flag collection.", game_text_443 },
	{ L"Gray", game_text_444 },
	{ L"Green", game_text_445 },
	{ L"Green triangles will appear over the heads of your\nteammates as a reminder that you should not "
		L"shoot\nthem.", game_text_446 },
	{ L"Green triangles will appear over the heads of your\r\nteammates as a reminder that you should no"
		L"t shoot\r\nthem.", game_text_447 },
	{ L"Grind your way across the landscape in the Scorpion\ntank, a mighty killing machine.", game_text_448 },
	{ L"Grind your way across the landscape in the Scorpion\r\ntank, a mighty killing machine.", game_text_449 },
	{ L"HARDWARE ACCELERATION:", game_text_450 },
	{ L"HEAVY WEAPONS", game_text_451 },
	{ L"HEROIC", game_text_452 },
	{ L"HIGH", game_text_453 },
	{ L"HUMAN", game_text_454 },
	{ L"Heroic", game_text_455 },
	{ L"Hold \"%s\" for score", game_text_456 },
	{ L"Hold BACK for score", game_text_457 },
	{ L"Host a game on the Internet:\nplayers join by its invite\nlink or Discord.", game_text_458 },
	{ L"Host a game on the Internet:\r\nplayers join by its invite\r\nlink or Discord.", game_text_459 },
	{ L"Host a game on your LAN\nonly.", game_text_460 },
	{ L"Host a game on your LAN\r\nonly.", game_text_461 },
	{ L"I Imagined it\nWould Be Bigger\n\n4-16 players\n\nSupports vehicles", game_text_462 },
	{ L"I Imagined it\r\nWould Be Bigger\r\n\r\n4-16 players\r\n\r\nSupports vehicles", game_text_463 },
	{ L"I like beans.", game_text_464 },
	{ L"INDICATOR OPTIONS", game_text_465 },
	{ L"INFINITE", game_text_466 },
	{ L"INFINITE GRENADES:", game_text_467 },
	{ L"INSTANT", game_text_468 },
	{ L"INVISIBLE PLAYERS:", game_text_469 },
	{ L"ITEM OPTIONS", game_text_470 },
	{ L"If anything just cannot go wrong, it will anyway.", game_text_471 },
	{ L"Improved audio quality plus Doppler effects,\nfor mid-range PCs.", game_text_472 },
	{ L"Improved audio quality plus Doppler effects,\r\nfor mid-range PCs.", game_text_473 },
	{ L"In %s place with %s %s", game_text_474 },
	{ L"In order to score, your team's flag must be in its home\nlocation. Use this option if you enjoy "
		L"chasing\nflag-bearing enemies before you can score.", game_text_475 },
	{ L"In order to score, your team's flag must be in its home\r\nlocation. Use this option if you enjo"
		L"y chasing\r\nflag-bearing enemies before you can score.", game_text_476 },
	{ L"Insufficient free save slots.", game_text_477 },
	{ L"Insufficient free space to\nsave game.", game_text_478 },
	{ L"Insufficient free space to\r\nsave game.", game_text_479 },
	{ L"Internet play, updates and the\nmultiplayer HUD.\n\nProfile:", game_text_480 },
	{ L"Internet play, updates and the\r\nmultiplayer HUD.\r\n\r\nProfile:", game_text_481 },
	{ L"Inverted", game_text_482 },
	{ L"It's every man for himself.", game_text_483 },
	{ L"JUMP", game_text_484 },
	{ L"Join a game by its invite link,\nor one a Discord invite\nreached.", game_text_485 },
	{ L"Join a game by its invite link,\r\nor one a Discord invite\r\nreached.", game_text_486 },
	{ L"Join a multiplayer game on\nyour LAN.", game_text_487 },
	{ L"Join a multiplayer game on\r\nyour LAN.", game_text_488 },
	{ L"KILL IN ORDER:", game_text_489 },
	{ L"KILL PENALTY:", game_text_490 },
	{ L"KILLS PER CAPTURE:", game_text_491 },
	{ L"KILLS SCORE:", game_text_492 },
	{ L"KILLS TO WIN:", game_text_493 },
	{ L"Kills", game_text_494 },
	{ L"Killtacular!", game_text_495 },
	{ L"Killtacular! (%d)", game_text_496 },
	{ L"LAPS TO WIN:", game_text_497 },
	{ L"LEAVE GAME", game_text_498 },
	{ L"LEGENDARY", game_text_499 },
	{ L"LOADOUT:", game_text_500 },
	{ L"LOOK DOWN", game_text_501 },
	{ L"LOOK LEFT", game_text_502 },
	{ L"LOOK RIGHT", game_text_503 },
	{ L"LOOK UP", game_text_504 },
	{ L"LOW", game_text_505 },
	{ L"Laps", game_text_506 },
	{ L"Legendary", game_text_507 },
	{ L"Like Cinderella, you will concern yourself with only\none ball.", game_text_508 },
	{ L"Like Cinderella, you will concern yourself with only\r\none ball.", game_text_509 },
	{ L"Loading...", game_text_510 },
	{ L"Loading... done", game_text_511 },
	{ L"Looking side-to-side will be a little sluggish.", game_text_512 },
	{ L"Looking side-to-side will be extremely fast.", game_text_513 },
	{ L"Looking side-to-side will be faster than average.", game_text_514 },
	{ L"Looking side-to-side will be just a little faster\nthan average.", game_text_515 },
	{ L"Looking side-to-side will be just a little faster\r\nthan average.", game_text_516 },
	{ L"Looking side-to-side will be just a tiny bit faster\nthan average.", game_text_517 },
	{ L"Looking side-to-side will be just a tiny bit faster\r\nthan average.", game_text_518 },
	{ L"Looking side-to-side will be just right - not too fast,\nnot too slow.", game_text_519 },
	{ L"Looking side-to-side will be just right - not too fast,\r\nnot too slow.", game_text_520 },
	{ L"Looking side-to-side will be moderately faster\nthan average.", game_text_521 },
	{ L"Looking side-to-side will be moderately faster\r\nthan average.", game_text_522 },
	{ L"Looking side-to-side will be moderately sluggish.", game_text_523 },
	{ L"Looking side-to-side will be quite fast.", game_text_524 },
	{ L"Looking side-to-side will be ultra-sensitive.", game_text_525 },
	{ L"Looking up and down will be a little sluggish.", game_text_526 },
	{ L"Looking up and down will be extremely fast.", game_text_527 },
	{ L"Looking up and down will be faster than average.", game_text_528 },
	{ L"Looking up and down will be just a little faster\nthan average.", game_text_529 },
	{ L"Looking up and down will be just a little faster\r\nthan average.", game_text_530 },
	{ L"Looking up and down will be just a tiny bit faster\nthan average.", game_text_531 },
	{ L"Looking up and down will be just a tiny bit faster\r\nthan average.", game_text_532 },
	{ L"Looking up and down will be just right - not too fast,\nnot too slow.", game_text_533 },
	{ L"Looking up and down will be just right - not too fast,\r\nnot too slow.", game_text_534 },
	{ L"Looking up and down will be moderately faster\nthan average.", game_text_535 },
	{ L"Looking up and down will be moderately faster\r\nthan average.", game_text_536 },
	{ L"Looking up and down will be moderately sluggish.", game_text_537 },
	{ L"Looking up and down will be quite fast.", game_text_538 },
	{ L"Looking up and down will be ultra-sensitive.", game_text_539 },
	{ L"Lucky you - there are thirteen balls in this game.", game_text_540 },
	{ L"MAP WEAPONS:", game_text_541 },
	{ L"MAX PLAYERS", game_text_542 },
	{ L"MAXIMUM", game_text_543 },
	{ L"MAXIMUM HEALTH:", game_text_544 },
	{ L"MELEE ATTACK", game_text_545 },
	{ L"MENU ACCEPT", game_text_546 },
	{ L"MENU BACK", game_text_547 },
	{ L"MINIMUM", game_text_548 },
	{ L"MINUTES/POINTS TO WIN:", game_text_549 },
	{ L"MISC.", game_text_550 },
	{ L"MISSION OBJECTIVES:", game_text_551 },
	{ L"MODEL QUALITY:", game_text_552 },
	{ L"MOTION TRACKER", game_text_553 },
	{ L"MOUSE SETUP", game_text_554 },
	{ L"MOVE BACKWARD", game_text_555 },
	{ L"MOVE FORWARD", game_text_556 },
	{ L"MOVE LEFT", game_text_557 },
	{ L"MOVE RIGHT", game_text_558 },
	{ L"MOVING HILL:", game_text_559 },
	{ L"MULTI-HILL:", game_text_560 },
	{ L"Map", game_text_561 },
	{ L"Map:", game_text_562 },
	{ L"Maroon", game_text_563 },
	{ L"Message", game_text_564 },
	{ L"Minutes", game_text_565 },
	{ L"Modify gameplay options and\nrules used by teamplay game\nmodes.\nThis gametype:", game_text_566 },
	{ L"Modify gameplay options and\r\nrules used by teamplay game\r\nmodes.\r\nThis gametype:", game_text_567 },
	{ L"NAV POINTS", game_text_568 },
	{ L"NETWORK SETUP ", game_text_569 },
	{ L"NO GRENADES", game_text_570 },
	{ L"NO SNIPING", game_text_571 },
	{ L"NO VSYNC", game_text_572 },
	{ L"NUMBER OF LIVES:", game_text_573 },
	{ L"Name", game_text_574 },
	{ L"Nature always sides with the hidden flaw.", game_text_575 },
	{ L"Network connection lost.", game_text_576 },
	{ L"Network connection lost. \nXbox System Link Cable \nmay be disconnected\nor the network is down.", game_text_577 },
	{ L"Network connection lost. \r\nXbox System Link Cable \r\nmay be disconnected\r\nor the network is"
		L" down.", game_text_578 },
	{ L"Never wear your best pants when fighting for freedom.", game_text_579 },
	{ L"New Target %s", game_text_580 },
	{ L"No Banshees will spawn in the map.", game_text_581 },
	{ L"No Ghosts will spawn in the map.", game_text_582 },
	{ L"No Gun Turrets will spawn in the map.", game_text_583 },
	{ L"No Rocket Warthogs will spawn in the map.", game_text_584 },
	{ L"No Scorpions will spawn in the map.", game_text_585 },
	{ L"No Warthogs will spawn in the map.", game_text_586 },
	{ L"No primary weapon.", game_text_587 },
	{ L"No respawn time penalty will be assessed to players\nwho kill a teammate.", game_text_588 },
	{ L"No respawn time penalty will be assessed to players\r\nwho kill a teammate.", game_text_589 },
	{ L"No secondary weapon.", game_text_590 },
	{ L"No vehicles will appear anywhere on this map; you will\ntravel on foot at all times.", game_text_591 },
	{ L"No vehicles will appear anywhere on this map; you will\r\ntravel on foot at all times.", game_text_592 },
	{ L"No weapons appear on the map: with a loadout of\nNONE and NONE, melee and grenades only.", game_text_593 },
	{ L"No weapons appear on the map: with a loadout of\r\nNONE and NONE, melee and grenades only.", game_text_594 },
	{ L"Not synced: each player sees the shield effects\nof their own Video Setup settings.", game_text_595 },
	{ L"Not synced: each player sees the shield effects\r\nof their own Video Setup settings.", game_text_596 },
	{ L"OBJECTIVES INDICATOR:", game_text_597 },
	{ L"OBJECTIVES ON SCREEN:", game_text_598 },
	{ L"ODD MAN OUT:", game_text_599 },
	{ L"OOPS!", game_text_600 },
	{ L"OTHER PLAYERS ON RADAR:", game_text_601 },
	{ L"Only flag captures score.", game_text_602 },
	{ L"Only the most devastating and dangerous of weapons\nwill appear in the map.", game_text_603 },
	{ L"Only the most devastating and dangerous of weapons\r\nwill appear in the map.", game_text_604 },
	{ L"Only the player carrying the ball is visible; all others\nare invisible.", game_text_605 },
	{ L"Only the player carrying the ball is visible; all others\r\nare invisible.", game_text_606 },
	{ L"Only weapons made by the Covenant will appear\nin the map.", game_text_607 },
	{ L"Only weapons made by the Covenant will appear\r\nin the map.", game_text_608 },
	{ L"OpenCE Arena can't\nconnect to the network.", game_text_609 },
	{ L"OpenCE Arena can't\r\nconnect to the network.", game_text_610 },
	{ L"OpenCE Arena, on this\ncomputer.\n\nProfile:", game_text_611 },
	{ L"OpenCE Arena, on this\r\ncomputer.\r\n\r\nProfile:", game_text_612 },
	{ L"Orange", game_text_613 },
	{ L"Other friendly players in the game will show up on \nyour Motion Tracker when mobile.", game_text_614 },
	{ L"Other friendly players in the game will show up on \r\nyour Motion Tracker when mobile.", game_text_615 },
	{ L"Other players in the game will never show up on your\nMotion Tracker.", game_text_616 },
	{ L"Other players in the game will never show up on your\r\nMotion Tracker.", game_text_617 },
	{ L"PAGE", game_text_618 },
	{ L"PARTICLES:", game_text_619 },
	{ L"PASSWORD", game_text_620 },
	{ L"PISTOLS", game_text_621 },
	{ L"PLASMA WEAPONS", game_text_622 },
	{ L"PLAYER OPTIONS", game_text_623 },
	{ L"PLAYERS:", game_text_624 },
	{ L"PRIMARY WEAPON:", game_text_625 },
	{ L"Particles will be disabled.  Particles include\ndust and sparks.", game_text_626 },
	{ L"Particles will be disabled.  Particles include\r\ndust and sparks.", game_text_627 },
	{ L"Particles will be enabled but will only\ndraw at half density.", game_text_628 },
	{ L"Particles will be enabled but will only\r\ndraw at half density.", game_text_629 },
	{ L"Particles will be fully enabled.  Particles\ninclude dust and sparks.", game_text_630 },
	{ L"Particles will be fully enabled.  Particles\r\ninclude dust and sparks.", game_text_631 },
	{ L"Picked up %d canisters for flamethrower", game_text_632 },
	{ L"Picked up %d fragmentation grenades", game_text_633 },
	{ L"Picked up %d plasma grenades", game_text_634 },
	{ L"Picked up %d rounds for assault rifle", game_text_635 },
	{ L"Picked up %d rounds for energy sword", game_text_636 },
	{ L"Picked up %d rounds for flag", game_text_637 },
	{ L"Picked up %d rounds for fuel rod gun", game_text_638 },
	{ L"Picked up %d rounds for gravity rifle", game_text_639 },
	{ L"Picked up %d rounds for needler", game_text_640 },
	{ L"Picked up %d rounds for pistol", game_text_641 },
	{ L"Picked up %d rounds for plasma pistol", game_text_642 },
	{ L"Picked up %d rounds for plasma rifle", game_text_643 },
	{ L"Picked up %d rounds for rocket launcher", game_text_644 },
	{ L"Picked up %d rounds for shotgun", game_text_645 },
	{ L"Picked up %d rounds for sniper rifle", game_text_646 },
	{ L"Picked up a flamethrower", game_text_647 },
	{ L"Picked up a fragmentation grenade", game_text_648 },
	{ L"Picked up a fuel rod gun", game_text_649 },
	{ L"Picked up a gravity rifle", game_text_650 },
	{ L"Picked up a health pack", game_text_651 },
	{ L"Picked up a needler", game_text_652 },
	{ L"Picked up a pistol", game_text_653 },
	{ L"Picked up a plasma grenade", game_text_654 },
	{ L"Picked up a plasma pistol", game_text_655 },
	{ L"Picked up a plasma rifle", game_text_656 },
	{ L"Picked up a rocket launcher", game_text_657 },
	{ L"Picked up a shotgun", game_text_658 },
	{ L"Picked up a sniper rifle", game_text_659 },
	{ L"Picked up active camouflage", game_text_660 },
	{ L"Picked up an assault rifle", game_text_661 },
	{ L"Picked up an energy sword", game_text_662 },
	{ L"Picked up an over shield", game_text_663 },
	{ L"Picked up double speed", game_text_664 },
	{ L"Picked up full-spectrum vision", game_text_665 },
	{ L"Picked up the flag", game_text_666 },
	{ L"Picked up the odd ball", game_text_667 },
	{ L"Pink", game_text_668 },
	{ L"Place", game_text_669 },
	{ L"Player 2 must use a\ndifferent controller\nthan Player 1.", game_text_670 },
	{ L"Player 2 must use a\r\ndifferent controller\r\nthan Player 1.", game_text_671 },
	{ L"Players", game_text_672 },
	{ L"Players can be hurt by damage from explosives \nfired by their teammates.", game_text_673 },
	{ L"Players can be hurt by damage from explosives \r\nfired by their teammates.", game_text_674 },
	{ L"Players can be hurt by weapons or explosives\nfired by their teammates.", game_text_675 },
	{ L"Players can be hurt by weapons or explosives\r\nfired by their teammates.", game_text_676 },
	{ L"Players can not be hurt by weapons and explosives\nfired by their teammates.", game_text_677 },
	{ L"Players can not be hurt by weapons and explosives\r\nfired by their teammates.", game_text_678 },
	{ L"Players keep their current mouse aim assist setting.", game_text_679 },
	{ L"Players who are not carrying the ball are more\nresistant to damage than the player who has the "
		L"ball.", game_text_680 },
	{ L"Players who are not carrying the ball are more\r\nresistant to damage than the player who has th"
		L"e ball.", game_text_681 },
	{ L"Players who are not carrying the ball do extra damage;\nthis ability disappears while they have "
		L"the ball.", game_text_682 },
	{ L"Players who are not carrying the ball do extra damage;\r\nthis ability disappears while they hav"
		L"e the ball.", game_text_683 },
	{ L"Players who kill a teammate will be assessed\na fifteen-second respawn penalty the next time\nth"
		L"ey die.", game_text_684 },
	{ L"Players who kill a teammate will be assessed\r\na fifteen-second respawn penalty the next time\r"
		L"\nthey die.", game_text_685 },
	{ L"Players who kill a teammate will be assessed a \nfive-second respawn penalty the next time they "
		L"die.", game_text_686 },
	{ L"Players who kill a teammate will be assessed a \nten-second respawn penalty the next time they d"
		L"ie.", game_text_687 },
	{ L"Players who kill a teammate will be assessed a \r\nfive-second respawn penalty the next time the"
		L"y die.", game_text_688 },
	{ L"Players who kill a teammate will be assessed a \r\nten-second respawn penalty the next time they"
		L" die.", game_text_689 },
	{ L"Players will only spawn at their own team's\nCapture the Flag spawn points.", game_text_690 },
	{ L"Players will only spawn at their own team's\r\nCapture the Flag spawn points.", game_text_691 },
	{ L"Players will spawn at any spawn point the\ngametype allows.", game_text_692 },
	{ L"Players will spawn at any spawn point the\r\ngametype allows.", game_text_693 },
	{ L"Please insert\nanother quarter.", game_text_694 },
	{ L"Please insert\r\nanother quarter.", game_text_695 },
	{ L"Please reconnect\n#%controller controller.", game_text_696 },
	{ L"Please reconnect\ncontroller #%controller.\nPress START to continue\nafter reconnecting.", game_text_697 },
	{ L"Please reconnect\r\n#%controller controller.", game_text_698 },
	{ L"Please reconnect\r\ncontroller #%controller.\r\nPress START to continue\r\nafter reconnecting.", game_text_699 },
	{ L"Press START to Continue", game_text_700 },
	{ L"Press a button or move an axis to assign.\nESC = cancel.  BACKSPACE = clear.", game_text_701 },
	{ L"Press a button or move an axis to assign.\r\nESC = cancel.  BACKSPACE = clear.", game_text_702 },
	{ L"Profile:", game_text_703 },
	{ L"Purple", game_text_704 },
	{ L"QUIT", game_text_705 },
	{ L"Quit", game_text_706 },
	{ L"Quit\?", game_text_707 },
	{ L"RACE TYPE:", game_text_708 },
	{ L"RANDOM START:", game_text_709 },
	{ L"RED TEAM", game_text_710 },
	{ L"REFLECTIONS:", game_text_711 },
	{ L"REFRESH", game_text_712 },
	{ L"REFRESH RATE:", game_text_713 },
	{ L"RELOAD", game_text_714 },
	{ L"RESPAWN TIME GROWTH:", game_text_715 },
	{ L"RESPAWN TIME:", game_text_716 },
	{ L"RESTART LEVEL", game_text_717 },
	{ L"RESUME GAME", game_text_718 },
	{ L"REVERT TO SAVED", game_text_719 },
	{ L"ROCKET LAUNCHERS", game_text_720 },
	{ L"Red", game_text_721 },
	{ L"Red Blood\nWhite Snow\n\n4-16 players\n\nSupports vehicles", game_text_722 },
	{ L"Red Blood\r\nWhite Snow\r\n\r\n4-16 players\r\n\r\nSupports vehicles", game_text_723 },
	{ L"Red Team", game_text_724 },
	{ L"Red Team %d Blue Team %d", game_text_725 },
	{ L"Red leads Blue %s to %s %s", game_text_726 },
	{ L"Rejoin in %d", game_text_727 },
	{ L"Rename this gametype.\n\n\nThis gametype:", game_text_728 },
	{ L"Rename this gametype.\r\n\r\n\r\nThis gametype:", game_text_729 },
	{ L"Rename this profile.\n\n\nProfile:", game_text_730 },
	{ L"Rename this profile.\r\n\r\n\r\nProfile:", game_text_731 },
	{ L"Respawn time will always remain at its initial\nsetting.", game_text_732 },
	{ L"Respawn time will always remain at its initial\r\nsetting.", game_text_733 },
	{ L"Rest is good, but idleness is its brother.", game_text_734 },
	{ L"Round and Round \nand Round\n\n2-8 players", game_text_735 },
	{ L"Round and Round \r\nand Round\r\n\r\n2-8 players", game_text_736 },
	{ L"Rules", game_text_737 },
	{ L"Running Riot!", game_text_738 },
	{ L"Running Riot! (%d)", game_text_739 },
	{ L"SAVE AND QUIT", game_text_740 },
	{ L"SAVE CHANGES", game_text_741 },
	{ L"SAVE CHANGES ", game_text_742 },
	{ L"SAVING...", game_text_743 },
	{ L"SAY", game_text_744 },
	{ L"SAY TO TEAM", game_text_745 },
	{ L"SAY TO VEHICLE", game_text_746 },
	{ L"SCOPE ZOOM", game_text_747 },
	{ L"SCORE TO WIN:", game_text_748 },
	{ L"SCREENSHOT", game_text_749 },
	{ L"SECONDARY WEAPON:", game_text_750 },
	{ L"SERVER ADDRESS", game_text_751 },
	{ L"SERVER BROWSER", game_text_752 },
	{ L"SERVER IP", game_text_753 },
	{ L"SERVER MODE", game_text_754 },
	{ L"SERVER NAME", game_text_755 },
	{ L"SERVER PORT:", game_text_756 },
	{ L"SERVERS:", game_text_757 },
	{ L"SETTINGS", game_text_758 },
	{ L"SHADOWS:", game_text_759 },
	{ L"SHIELD EFFECTS:", game_text_760 },
	{ L"SHIELDS:", game_text_761 },
	{ L"SHORT RANGE", game_text_762 },
	{ L"SHOTGUNS", game_text_763 },
	{ L"SHOW EMPTY SERVERS", game_text_764 },
	{ L"SHOW FULL SERVERS", game_text_765 },
	{ L"SHOW MISSING MAPS", game_text_766 },
	{ L"SHOW PLAYER NAMES", game_text_767 },
	{ L"SHOW RULES", game_text_768 },
	{ L"SHOW SCORES", game_text_769 },
	{ L"SIDE:", game_text_770 },
	{ L"SINGLE FLAG:", game_text_771 },
	{ L"SLOW", game_text_772 },
	{ L"SNIPER", game_text_773 },
	{ L"SOUND QUALITY:", game_text_774 },
	{ L"SOUND VARIETY:", game_text_775 },
	{ L"SPECULAR:", game_text_776 },
	{ L"SPEED WITH BALL:", game_text_777 },
	{ L"STANDARD", game_text_778 },
	{ L"STARTING EQUIPMENT:", game_text_779 },
	{ L"STOP", game_text_780 },
	{ L"SUICIDE PENALTY:", game_text_781 },
	{ L"SUM", game_text_782 },
	{ L"SWITCH GRENADE", game_text_783 },
	{ L"SWITCH WEAPON", game_text_784 },
	{ L"Sage", game_text_785 },
	{ L"Salmon", game_text_786 },
	{ L"Sand, Surf, and \nSpent Shells\n\n4-16 players\n\nSupports vehicles", game_text_787 },
	{ L"Sand, Surf, and \r\nSpent Shells\r\n\r\n4-16 players\r\n\r\nSupports vehicles", game_text_788 },
	{ L"Save changes you've made to\nthis gametype and return to\nthe previous screen.\nThis gametype:", game_text_789 },
	{ L"Save changes you've made to\r\nthis gametype and return to\r\nthe previous screen.\r\nThis gamet"
		L"ype:", game_text_790 },
	{ L"Saving last checkpoint...\none moment please.", game_text_791 },
	{ L"Saving last checkpoint...\nplease don't turn off\nyour Xbox console.", game_text_792 },
	{ L"Saving last checkpoint...\r\none moment please.", game_text_793 },
	{ L"Saving last checkpoint...\r\nplease don't turn off\r\nyour Xbox console.", game_text_794 },
	{ L"Saving... one moment\nplease.", game_text_795 },
	{ L"Saving... one moment\r\nplease.", game_text_796 },
	{ L"Saving... please don't\nturn off your Xbox\nconsole.", game_text_797 },
	{ L"Saving... please don't\r\nturn off your Xbox\r\nconsole.", game_text_798 },
	{ L"Scary, huh\?\n\n\n2-12 players\n\nSupports vehicles", game_text_799 },
	{ L"Scary, huh\?\r\n\r\n\r\n2-12 players\r\n\r\nSupports vehicles", game_text_800 },
	{ L"Score", game_text_801 },
	{ L"Score Limit:", game_text_802 },
	{ L"Scoring a mere five kills will win the game for you.", game_text_803 },
	{ L"Searching for available games...", game_text_804 },
	{ L"Select a display resolution.", game_text_805 },
	{ L"Select a monitor refresh rate.", game_text_806 },
	{ L"Select the current item to activate it\nand add it to your profile.", game_text_807 },
	{ L"Select the current item to activate it\r\nand add it to your profile.", game_text_808 },
	{ L"Select the current item to deactivate it \nand remove it from your profile.", game_text_809 },
	{ L"Select the current item to deactivate it \r\nand remove it from your profile.", game_text_810 },
	{ L"Select this command to modify the button or\naxis assigned to it.  ", game_text_811 },
	{ L"Select this command to modify the button or\r\naxis assigned to it.  ", game_text_812 },
	{ L"Server IP Address - ", game_text_813 },
	{ L"Server Name", game_text_814 },
	{ L"Set all the attributes for your \nmultiplayer gametypes and\nkeep them for future use.", game_text_815 },
	{ L"Set all the attributes for your \r\nmultiplayer gametypes and\r\nkeep them for future use.", game_text_816 },
	{ L"Set the master volume level.", game_text_817 },
	{ L"Set the music volume level.", game_text_818 },
	{ L"Set the volume level of game sound effects.", game_text_819 },
	{ L"Set this profile's controller\nsensitivity and layouts.\n\nProfile:", game_text_820 },
	{ L"Set this profile's controller\r\nsensitivity and layouts.\r\n\r\nProfile:", game_text_821 },
	{ L"Seventy-five kills to win. Settle in for a long\nfight.", game_text_822 },
	{ L"Seventy-five kills to win. Settle in for a long\r\nfight.", game_text_823 },
	{ L"Shift", game_text_824 },
	{ L"Ship-to-Ship\nCombat\n\n4-16 players", game_text_825 },
	{ L"Ship-to-Ship\r\nCombat\r\n\r\n4-16 players", game_text_826 },
	{ L"Show empty servers.", game_text_827 },
	{ L"Show full servers.", game_text_828 },
	{ L"Show only games matching the selected\ngame type.", game_text_829 },
	{ L"Show only games matching the selected\r\ngame type.", game_text_830 },
	{ L"Show only servers running free-for-all modes.", game_text_831 },
	{ L"Show only servers running teamplay modes.", game_text_832 },
	{ L"Show only servers with custom maps that are\ncurrently installed.", game_text_833 },
	{ L"Show only servers with custom maps that are\r\ncurrently installed.", game_text_834 },
	{ L"Show servers on maps you do not have if their\nhost shares them: they download as you join.", game_text_835 },
	{ L"Show servers on maps you do not have if their\r\nhost shares them: they download as you join.", game_text_836 },
	{ L"Show servers running both free-for-all\nand teamplay modes.", game_text_837 },
	{ L"Show servers running both free-for-all\r\nand teamplay modes.", game_text_838 },
	{ L"Show servers with custom maps that are not\ncurrently installed.", game_text_839 },
	{ L"Show servers with custom maps that are not\r\ncurrently installed.", game_text_840 },
	{ L"Single Player", game_text_841 },
	{ L"Single flag Assault", game_text_842 },
	{ L"Single flag CTF", game_text_843 },
	{ L"Six balls, and all's well.", game_text_844 },
	{ L"Slipping and\nSliding\n\n4-16 players\n\nSupports vehicles", game_text_845 },
	{ L"Slipping and\r\nSliding\r\n\r\n4-16 players\r\n\r\nSupports vehicles", game_text_846 },
	{ L"Smile when you're ready.", game_text_847 },
	{ L"Sniper rifles and pistols will not appear on the map.", game_text_848 },
	{ L"Sometimes you have to kill. \nNow is one of those times. \nWhack or be whacked.\nCurrent Rules:", game_text_849 },
	{ L"Sometimes you have to kill. \r\nNow is one of those times. \r\nWhack or be whacked.\r\nCurrent R"
		L"ules:", game_text_850 },
	{ L"Sorry, there is already \na saved gametype or \nprofile with that name \non your Xbox console.", game_text_851 },
	{ L"Sorry, there is already \na saved gametype or \nprofile with that name.", game_text_852 },
	{ L"Sorry, there is already \r\na saved gametype or \r\nprofile with that name \r\non your Xbox cons"
		L"ole.", game_text_853 },
	{ L"Sorry, there is already \r\na saved gametype or \r\nprofile with that name.", game_text_854 },
	{ L"Sorry, you can't create\na saved game file with\nan empty name.", game_text_855 },
	{ L"Sorry, you can't create\r\na saved game file with\r\nan empty name.", game_text_856 },
	{ L"Sorry, you can't delete\nthe default multiplayer\ngame settings.", game_text_857 },
	{ L"Sorry, you can't delete\r\nthe default multiplayer\r\ngame settings.", game_text_858 },
	{ L"Space", game_text_859 },
	{ L"Spartan Clone\nTraining Complex\n\n2-6 players", game_text_860 },
	{ L"Spartan Clone\r\nTraining Complex\r\n\r\n2-6 players", game_text_861 },
	{ L"Specify options that change\nhow vehicles work and which\nones spawn in this gametype.\nThis gam"
		L"etype:", game_text_862 },
	{ L"Specify options that change\r\nhow vehicles work and which\r\nones spawn in this gametype.\r\nTh"
		L"is gametype:", game_text_863 },
	{ L"Specify the type of game you\nwant to play and the rules\nthat apply to it.\nThis gametype:", game_text_864 },
	{ L"Specify the type of game you\r\nwant to play and the rules\r\nthat apply to it.\r\nThis gametype"
		L":", game_text_865 },
	{ L"Spend a full ten minutes dominating the hill and the\ngame is yours.", game_text_866 },
	{ L"Spend a full ten minutes dominating the hill and the\r\ngame is yours.", game_text_867 },
	{ L"Splash Splash\nBang Bang\n\n2-8 players", game_text_868 },
	{ L"Splash Splash\r\nBang Bang\r\n\r\n2-8 players", game_text_869 },
	{ L"Symbols", game_text_870 },
	{ L"TEAM PLAY:", game_text_871 },
	{ L"TEAM SCORING:", game_text_872 },
	{ L"TEAMPLAY OPTIONS", game_text_873 },
	{ L"TEXTURE QUALITY:", game_text_874 },
	{ L"THROW GRENADE", game_text_875 },
	{ L"TIME LIMIT:", game_text_876 },
	{ L"TRAIT WITH BALL:", game_text_877 },
	{ L"TRAIT WITHOUT BALL:", game_text_878 },
	{ L"Tan", game_text_879 },
	{ L"Teal", game_text_880 },
	{ L"Team - ", game_text_881 },
	{ L"Team Game", game_text_882 },
	{ L"Team autobalancing will be disabled.  Players will\nbe free to change teams as they wish.", game_text_883 },
	{ L"Team autobalancing will be disabled.  Players will\r\nbe free to change teams as they wish.", game_text_884 },
	{ L"Team autobalancing will be enabled.  Players will\nnot be able to change to a more full team.", game_text_885 },
	{ L"Team autobalancing will be enabled.  Players will\r\nnot be able to change to a more full team.", game_text_886 },
	{ L"Teams tied at %s %s", game_text_887 },
	{ L"Teleporter is blocked", game_text_888 },
	{ L"Ten! Ten balls in this game! Ha ha ha ha ha ha ha!", game_text_889 },
	{ L"The Hill will always be in the same spot.", game_text_890 },
	{ L"The Quick \nand the Dead\n\n4-16 players\n\nSupports vehicles", game_text_891 },
	{ L"The Quick \r\nand the Dead\r\n\r\n4-16 players\r\n\r\nSupports vehicles", game_text_892 },
	{ L"The System Link game\nhas closed down.", game_text_893 },
	{ L"The System Link game\r\nhas closed down.", game_text_894 },
	{ L"The Y-axis of your mouse will reverse, so that\npushing forward makes you look down, and vice ve"
		L"rsa.", game_text_895 },
	{ L"The Y-axis of your mouse will reverse, so that\r\npushing forward makes you look down, and vice "
		L"versa.", game_text_896 },
	{ L"The address is invalid.", game_text_897 },
	{ L"The ball will always appear in the same spot on\nthe map.", game_text_898 },
	{ L"The ball will always appear in the same spot on\r\nthe map.", game_text_899 },
	{ L"The ball will appear in random locations on the map.", game_text_900 },
	{ L"The enemy has your flag.", game_text_901 },
	{ L"The enemy returned the flag.", game_text_902 },
	{ L"The enemy's flag was returned.", game_text_903 },
	{ L"The first player to kill another becomes It. Others\nbecome It by killing the player who is It. "
		L"Be It for\nthe specified time to win. There is no ball. Odd, eh\?", game_text_904 },
	{ L"The first player to kill another becomes It. Others\r\nbecome It by killing the player who is It"
		L". Be It for\r\nthe specified time to win. There is no ball. Odd, eh\?", game_text_905 },
	{ L"The first player to kill becomes the Juggernaut, and\nscores for all kills. Others take his plac"
		L"e by killing\nhim. Once again there is no ball to speak of.", game_text_906 },
	{ L"The first player to kill becomes the Juggernaut, and\r\nscores for all kills. Others take his pl"
		L"ace by killing\r\nhim. Once again there is no ball to speak of.", game_text_907 },
	{ L"The first player to spend sixty seconds atop the hill\nwins.", game_text_908 },
	{ L"The first player to spend sixty seconds atop the hill\r\nwins.", game_text_909 },
	{ L"The first team to capture the flag wins.", game_text_910 },
	{ L"The flag will return to the base if you walk over it.", game_text_911 },
	{ L"The flamethrower and fuel rod gun will not appear\nin the map.", game_text_912 },
	{ L"The flamethrower and fuel rod gun will not appear\r\nin the map.", game_text_913 },
	{ L"The game has\nclosed down.", game_text_914 },
	{ L"The game has\r\nclosed down.", game_text_915 },
	{ L"The game will have no time limit.  It will only end\nwhen someone wins.", game_text_916 },
	{ L"The game will have no time limit.  It will only end\r\nwhen someone wins.", game_text_917 },
	{ L"The game's objectives (hills, flags, balls and the like)\nwill appear in your Motion Tracker.", game_text_918 },
	{ L"The game's objectives (hills, flags, balls and the like)\r\nwill appear in your Motion Tracker.", game_text_919 },
	{ L"The game's objectives will have special markers\ndisplayed over them on screen.", game_text_920 },
	{ L"The game's objectives will have special markers\r\ndisplayed over them on screen.", game_text_921 },
	{ L"The game's objectives will not be visible in your\nMotion Tracker or on screen.", game_text_922 },
	{ L"The game's objectives will not be visible in your\r\nMotion Tracker or on screen.", game_text_923 },
	{ L"The guns on the map will be replaced by weapons\nwith sniper scopes.", game_text_924 },
	{ L"The guns on the map will be replaced by weapons\r\nwith sniper scopes.", game_text_925 },
	{ L"The map will contain the default vehicles specified\nin the map.  Includes Warthogs, Scorpion ta"
		L"nks, \nGhosts, Banshees and Covenant Gun Turrets.", game_text_926 },
	{ L"The map will contain the default vehicles specified\r\nin the map.  Includes Warthogs, Scorpion "
		L"tanks, \r\nGhosts, Banshees and Covenant Gun Turrets.", game_text_927 },
	{ L"The map will contain whatever weapons the designers\nplaced on it.", game_text_928 },
	{ L"The map will contain whatever weapons the designers\r\nplaced on it.", game_text_929 },
	{ L"The map's weapons appear where its designers\nplaced them.", game_text_930 },
	{ L"The map's weapons appear where its designers\r\nplaced them.", game_text_931 },
	{ L"The map's weapons, without any grenades.", game_text_932 },
	{ L"The object of the game is to hold the ball for as long\nas possible. The winner is the first pla"
		L"yer to hold the\nball for the specified time.", game_text_933 },
	{ L"The object of the game is to hold the ball for as long\r\nas possible. The winner is the first p"
		L"layer to hold the\r\nball for the specified time.", game_text_934 },
	{ L"The server is full.", game_text_935 },
	{ L"The server operator has\nbanned you from playing\non this server.", game_text_936 },
	{ L"The server operator has\nkicked you from this\nserver.", game_text_937 },
	{ L"The server operator has\r\nbanned you from playing\r\non this server.", game_text_938 },
	{ L"The server operator has\r\nkicked you from this\r\nserver.", game_text_939 },
	{ L"The server reported\nan invalid connection\nrequest.", game_text_940 },
	{ L"The server reported\r\nan invalid connection\r\nrequest.", game_text_941 },
	{ L"The server you selected\nrequires a password!", game_text_942 },
	{ L"The server you selected\r\nrequires a password!", game_text_943 },
	{ L"The shields on your battle suit will not work, making\nit much easier for everyone to perish.", game_text_944 },
	{ L"The shields on your battle suit will not work, making\r\nit much easier for everyone to perish.", game_text_945 },
	{ L"The weapons follow the weapon set above.", game_text_946 },
	{ L"There are no weapons on the map that were made in\nCovenant sweat shops.", game_text_947 },
	{ L"There are no weapons on the map that were made in\r\nCovenant sweat shops.", game_text_948 },
	{ L"There will be five Hills at once. Holding any of\nthem scores.", game_text_949 },
	{ L"There will be five Hills at once. Holding any of\r\nthem scores.", game_text_950 },
	{ L"There will be four Hills at once. Holding any of\nthem scores.", game_text_951 },
	{ L"There will be four Hills at once. Holding any of\r\nthem scores.", game_text_952 },
	{ L"There will be only one Hill at a time.", game_text_953 },
	{ L"There will be only one flag on the map at any given\ntime. It will appear in a team base. Each t"
		L"eam alter-\nnates offense and defense every minute.", game_text_954 },
	{ L"There will be only one flag on the map at any given\ntime. It will appear in a team base. Each t"
		L"eam alter-\nnates offense and defense in 10 minute intervals.", game_text_955 },
	{ L"There will be only one flag on the map at any given\ntime. It will appear in a team base. Each t"
		L"eam alter-\nnates offense and defense in 2 minute intervals.", game_text_956 },
	{ L"There will be only one flag on the map at any given\ntime. It will appear in a team base. Each t"
		L"eam alter-\nnates offense and defense in 3 minute intervals.", game_text_957 },
	{ L"There will be only one flag on the map at any given\ntime. It will appear in a team base. Each t"
		L"eam alter-\nnates offense and defense in 5 minute intervals.", game_text_958 },
	{ L"There will be only one flag on the map at any given\r\ntime. It will appear in a team base. Each"
		L" team alter-\r\nnates offense and defense every minute.", game_text_959 },
	{ L"There will be only one flag on the map at any given\r\ntime. It will appear in a team base. Each"
		L" team alter-\r\nnates offense and defense in 10 minute intervals.", game_text_960 },
	{ L"There will be only one flag on the map at any given\r\ntime. It will appear in a team base. Each"
		L" team alter-\r\nnates offense and defense in 2 minute intervals.", game_text_961 },
	{ L"There will be only one flag on the map at any given\r\ntime. It will appear in a team base. Each"
		L" team alter-\r\nnates offense and defense in 3 minute intervals.", game_text_962 },
	{ L"There will be only one flag on the map at any given\r\ntime. It will appear in a team base. Each"
		L" team alter-\r\nnates offense and defense in 5 minute intervals.", game_text_963 },
	{ L"There will be three Hills at once. Holding any of\nthem scores.", game_text_964 },
	{ L"There will be three Hills at once. Holding any of\r\nthem scores.", game_text_965 },
	{ L"There will be two Hills at once. Holding either one\nscores.", game_text_966 },
	{ L"There will be two Hills at once. Holding either one\r\nscores.", game_text_967 },
	{ L"There\x2019s a problem with the disc you\x2019re using.\nIt may be dirty or damaged.\nPress A to"
		L" continue.", game_text_968 },
	{ L"There\x2019s a problem with the disc you\x2019re using.\r\nIt may be dirty or damaged.\r\nPress "
		L"A to continue.", game_text_969 },
	{ L"This Level\nUnavailable", game_text_970 },
	{ L"This Level\r\nUnavailable", game_text_971 },
	{ L"This game goes to eleven. Balls, that is.", game_text_972 },
	{ L"This game shall henceforth be known as the\nGame O' Nine Balls.", game_text_973 },
	{ L"This game shall henceforth be known as the\r\nGame O' Nine Balls.", game_text_974 },
	{ L"This game will have a 10 minute time limit.  It will\nend after the time limit is up or someone "
		L"wins.", game_text_975 },
	{ L"This game will have a 10 minute time limit.  It will\r\nend after the time limit is up or someon"
		L"e wins.", game_text_976 },
	{ L"This game will have a 15 minute time limit.  It will\nend after the time limit is up or someone "
		L"wins.", game_text_977 },
	{ L"This game will have a 15 minute time limit.  It will\r\nend after the time limit is up or someon"
		L"e wins.", game_text_978 },
	{ L"This game will have a 20 minute time limit.  It will\nend after the time limit is up or someone "
		L"wins.", game_text_979 },
	{ L"This game will have a 20 minute time limit.  It will\r\nend after the time limit is up or someon"
		L"e wins.", game_text_980 },
	{ L"This game will have a 25 minute time limit.  It will\nend after the time limit is up or someone "
		L"wins.", game_text_981 },
	{ L"This game will have a 25 minute time limit.  It will\r\nend after the time limit is up or someon"
		L"e wins.", game_text_982 },
	{ L"This game will have a 30 minute time limit.  It will\nend after the time limit is up or someone "
		L"wins.", game_text_983 },
	{ L"This game will have a 30 minute time limit.  It will\r\nend after the time limit is up or someon"
		L"e wins.", game_text_984 },
	{ L"This game will have a 45 minute time limit.  It will\nend after the time limit is up or someone "
		L"wins.", game_text_985 },
	{ L"This game will have a 45 minute time limit.  It will\r\nend after the time limit is up or someon"
		L"e wins.", game_text_986 },
	{ L"This is a team game.", game_text_987 },
	{ L"Three balls equals thrice the fun.", game_text_988 },
	{ L"Three quick laps and you're done.  Just like a\nlollipop.", game_text_989 },
	{ L"Three quick laps and you're done.  Just like a\r\nlollipop.", game_text_990 },
	{ L"Tied for %s place with %s %s", game_text_991 },
	{ L"Time", game_text_992 },
	{ L"Time Limit, minutes:", game_text_993 },
	{ L"Time expired.", game_text_994 },
	{ L"To complete a lap, you must reach all the flags in\norder.", game_text_995 },
	{ L"To complete a lap, you must reach all the flags in\r\norder.", game_text_996 },
	{ L"To win, you'll need nerves of steel, brass balls and\nten laps.", game_text_997 },
	{ L"To win, you'll need nerves of steel, brass balls and\r\nten laps.", game_text_998 },
	{ L"Tombstones for\nEverybody\n\n4-16 players", game_text_999 },
	{ L"Tombstones for\r\nEverybody\r\n\r\n4-16 players", game_text_1000 },
	{ L"Triple Kill!", game_text_1001 },
	{ L"Triple Kill! (%d)", game_text_1002 },
	{ L"Two hundred and fifty kills to win.", game_text_1003 },
	{ L"Two hundred kills to win. Bring friends. Lots of\nthem.", game_text_1004 },
	{ L"Two hundred kills to win. Bring friends. Lots of\r\nthem.", game_text_1005 },
	{ L"UNKNOWN LEVEL\n\n\n", game_text_1006 },
	{ L"UNKNOWN LEVEL\r\n\r\n\r\n", game_text_1007 },
	{ L"Unable to complete\nthe last operation.", game_text_1008 },
	{ L"Unable to complete\r\nthe last operation.", game_text_1009 },
	{ L"Unable to create new\nmultiplayer game\nsettings entry.", game_text_1010 },
	{ L"Unable to create new\nplayer profile.", game_text_1011 },
	{ L"Unable to create new\r\nmultiplayer game\r\nsettings entry.", game_text_1012 },
	{ L"Unable to create new\r\nplayer profile.", game_text_1013 },
	{ L"Unable to join System\nLink game because it\nis closed.", game_text_1014 },
	{ L"Unable to join System\nLink game.", game_text_1015 },
	{ L"Unable to join System\r\nLink game because it\r\nis closed.", game_text_1016 },
	{ L"Unable to join System\r\nLink game.", game_text_1017 },
	{ L"Unable to join game \nbecause it is closed.", game_text_1018 },
	{ L"Unable to join game \r\nbecause it is closed.", game_text_1019 },
	{ L"Unable to join game.", game_text_1020 },
	{ L"Unable to join the game\nserver!", game_text_1021 },
	{ L"Unable to join the game\r\nserver!", game_text_1022 },
	{ L"Unable to load saved\ngame file.", game_text_1023 },
	{ L"Unable to load saved\ngame file. Press A to\ncontinue.", game_text_1024 },
	{ L"Unable to load saved\nprogress for this\nprofile.", game_text_1025 },
	{ L"Unable to load saved\nprogress for this\nprofile. Press A to\ncontinue.", game_text_1026 },
	{ L"Unable to load saved\r\ngame file.", game_text_1027 },
	{ L"Unable to load saved\r\ngame file. Press A to\r\ncontinue.", game_text_1028 },
	{ L"Unable to load saved\r\nprogress for this\r\nprofile.", game_text_1029 },
	{ L"Unable to load saved\r\nprogress for this\r\nprofile. Press A to\r\ncontinue.", game_text_1030 },
	{ L"Unknown", game_text_1031 },
	{ L"Unknown Level", game_text_1032 },
	{ L"Up the Ramps\nDown the Tubes\n\n2-6 players", game_text_1033 },
	{ L"Up the Ramps\r\nDown the Tubes\r\n\r\n2-6 players", game_text_1034 },
	{ L"Up to four Banshees will spawn in the map.", game_text_1035 },
	{ L"Up to four Ghosts will spawn in the map.", game_text_1036 },
	{ L"Up to four Gun Turrets will spawn in the map.", game_text_1037 },
	{ L"Up to four Rocket Warthogs will spawn in the map.", game_text_1038 },
	{ L"Up to four Scorpions will spawn in the map.", game_text_1039 },
	{ L"Up to four Warthogs will spawn in the map.", game_text_1040 },
	{ L"Up to one Banshee will spawn in the map.", game_text_1041 },
	{ L"Up to one Ghost will spawn in the map.", game_text_1042 },
	{ L"Up to one Gun Turret will spawn in the map.", game_text_1043 },
	{ L"Up to one Rocket Warthog will spawn in the map.", game_text_1044 },
	{ L"Up to one Scorpion will spawn in the map.", game_text_1045 },
	{ L"Up to one Warthog will spawn in the map.", game_text_1046 },
	{ L"Up to three Banshees will spawn in the map.", game_text_1047 },
	{ L"Up to three Ghosts will spawn in the map.", game_text_1048 },
	{ L"Up to three Gun Turrets will spawn in the map.", game_text_1049 },
	{ L"Up to three Rocket Warthogs will spawn in the map.", game_text_1050 },
	{ L"Up to three Scorpions will spawn in the map.", game_text_1051 },
	{ L"Up to three Warthogs will spawn in the map.", game_text_1052 },
	{ L"Up to two Banshees will spawn in the map.", game_text_1053 },
	{ L"Up to two Ghosts will spawn in the map.", game_text_1054 },
	{ L"Up to two Gun Turrets will spawn in the map.", game_text_1055 },
	{ L"Up to two Rocket Warthogs will spawn in the map.", game_text_1056 },
	{ L"Up to two Scorpions will spawn in the map.", game_text_1057 },
	{ L"Up to two Warthogs will spawn in the map.", game_text_1058 },
	{ L"Use the generic starting weapons across all maps.", game_text_1059 },
	{ L"VEHICLE OPTIONS", game_text_1060 },
	{ L"VEHICLE RESPAWN TIME:", game_text_1061 },
	{ L"VEHICLE SET:", game_text_1062 },
	{ L"VIDEO SETUP", game_text_1063 },
	{ L"Vehicle - ", game_text_1064 },
	{ L"Vehicles will not respawn.", game_text_1065 },
	{ L"Vehicles will respawn every 2 minutes if idle.", game_text_1066 },
	{ L"Vehicles will respawn every 3 minutes if idle.", game_text_1067 },
	{ L"Vehicles will respawn every 30 seconds if idle.", game_text_1068 },
	{ L"Vehicles will respawn every 5 minutes if idle.", game_text_1069 },
	{ L"Vehicles will respawn every 60 seconds if idle.", game_text_1070 },
	{ L"Vehicles will respawn every 90 seconds if idle.", game_text_1071 },
	{ L"Video settings changed...\nPress OK to accept.", game_text_1072 },
	{ L"Video settings changed...\r\nPress OK to accept.", game_text_1073 },
	{ L"Video settings will be\ntested.  If you do not see\na confirm dialog after\nthe change, press ES"
		L"C.", game_text_1074 },
	{ L"Video settings will be\r\ntested.  If you do not see\r\na confirm dialog after\r\nthe change, pr"
		L"ess ESC.", game_text_1075 },
	{ L"WEAPON SET:", game_text_1076 },
	{ L"Waiting for another Xbox console", game_text_1077 },
	{ L"Waiting for another player", game_text_1078 },
	{ L"Waiting for space to clear", game_text_1079 },
	{ L"We hope you've got plenty of time, because you'll\nneed to make a full fifty kills to win this o"
		L"ne.", game_text_1080 },
	{ L"We hope you've got plenty of time, because you'll\r\nneed to make a full fifty kills to win this"
		L" one.", game_text_1081 },
	{ L"Welcome %s", game_text_1082 },
	{ L"Welcome to OpenCE Arena!", game_text_1083 },
	{ L"What do you get when you double the excitement and\nmystery of seven balls\? Fourteen balls, tha"
		L"t's what!", game_text_1084 },
	{ L"What do you get when you double the excitement and\r\nmystery of seven balls\? Fourteen balls, t"
		L"hat's what!", game_text_1085 },
	{ L"What has four balls and thrills for all\? This game!", game_text_1086 },
	{ L"What is the hidden significance of the seventh ball\?", game_text_1087 },
	{ L"When he dies, the Odd Man Out cannot respawn until\nsomeone else assumes the shameful burden of "
		L"Odd\nMan Out by dying.", game_text_1088 },
	{ L"When he dies, the Odd Man Out cannot respawn until\r\nsomeone else assumes the shameful burden o"
		L"f Odd\r\nMan Out by dying.", game_text_1089 },
	{ L"When the game ends, each team is ranked by its\nlowest-scoring member.", game_text_1090 },
	{ L"When the game ends, each team is ranked by its\r\nlowest-scoring member.", game_text_1091 },
	{ L"When you die and respawn you'll run a little faster.\nGives new meaning to \"The Quick and the D"
		L"ead.\" This \nhelps balance play with newbies and experts.", game_text_1092 },
	{ L"When you die and respawn you'll run a little faster.\r\nGives new meaning to \"The Quick and the"
		L" Dead.\" This \r\nhelps balance play with newbies and experts.", game_text_1093 },
	{ L"When you die, there will be a five-second wait before\nyou can rejoin the game.", game_text_1094 },
	{ L"When you die, there will be a five-second wait before\r\nyou can rejoin the game.", game_text_1095 },
	{ L"When you die, you must wait fifteen seconds before\nyou can respawn. This will give you an idea "
		L"of what\neternity is like.", game_text_1096 },
	{ L"When you die, you must wait fifteen seconds before\r\nyou can respawn. This will give you an ide"
		L"a of what\r\neternity is like.", game_text_1097 },
	{ L"When you die, you will respawn immediately without\nwaiting for someone else to repeat your mist"
		L"akes.", game_text_1098 },
	{ L"When you die, you will respawn immediately without\r\nwaiting for someone else to repeat your mi"
		L"stakes.", game_text_1099 },
	{ L"When you have the ball, you will run slower than the\nother players.", game_text_1100 },
	{ L"When you have the ball, you will run slower than the\r\nother players.", game_text_1101 },
	{ L"When you have the ball, you'll run faster than the\nother players.", game_text_1102 },
	{ L"When you have the ball, you'll run faster than the\r\nother players.", game_text_1103 },
	{ L"When you suicide, you must wait fifteen seconds \nbefore you can respawn. This will give you an "
		L"idea of \nwhat eternity is like.", game_text_1104 },
	{ L"When you suicide, you must wait fifteen seconds \r\nbefore you can respawn. This will give you a"
		L"n idea of \r\nwhat eternity is like.", game_text_1105 },
	{ L"While carrying the ball, you will do extra damage to\nyour opponents.", game_text_1106 },
	{ L"While carrying the ball, you will do extra damage to\r\nyour opponents.", game_text_1107 },
	{ L"While the ball is in your possession, you will be\ninvisible to the other players.", game_text_1108 },
	{ L"While the ball is in your possession, you will be\r\ninvisible to the other players.", game_text_1109 },
	{ L"While you're carrying the ball, you will be more\nresistant to damage.", game_text_1110 },
	{ L"While you're carrying the ball, you will be more\r\nresistant to damage.", game_text_1111 },
	{ L"White", game_text_1112 },
	{ L"With Kills Score on, each flag capture is worth\n10 points (a kill is worth 1).", game_text_1113 },
	{ L"With Kills Score on, each flag capture is worth\n100 points (a kill is worth 1).", game_text_1114 },
	{ L"With Kills Score on, each flag capture is worth\n15 points (a kill is worth 1).", game_text_1115 },
	{ L"With Kills Score on, each flag capture is worth\n20 points (a kill is worth 1).", game_text_1116 },
	{ L"With Kills Score on, each flag capture is worth\n25 points (a kill is worth 1).", game_text_1117 },
	{ L"With Kills Score on, each flag capture is worth\n30 points (a kill is worth 1).", game_text_1118 },
	{ L"With Kills Score on, each flag capture is worth\n40 points (a kill is worth 1).", game_text_1119 },
	{ L"With Kills Score on, each flag capture is worth\n5 points (a kill is worth 1).", game_text_1120 },
	{ L"With Kills Score on, each flag capture is worth\n50 points (a kill is worth 1).", game_text_1121 },
	{ L"With Kills Score on, each flag capture is worth\n75 points (a kill is worth 1).", game_text_1122 },
	{ L"With Kills Score on, each flag capture is worth\r\n10 points (a kill is worth 1).", game_text_1123 },
	{ L"With Kills Score on, each flag capture is worth\r\n100 points (a kill is worth 1).", game_text_1124 },
	{ L"With Kills Score on, each flag capture is worth\r\n15 points (a kill is worth 1).", game_text_1125 },
	{ L"With Kills Score on, each flag capture is worth\r\n20 points (a kill is worth 1).", game_text_1126 },
	{ L"With Kills Score on, each flag capture is worth\r\n25 points (a kill is worth 1).", game_text_1127 },
	{ L"With Kills Score on, each flag capture is worth\r\n30 points (a kill is worth 1).", game_text_1128 },
	{ L"With Kills Score on, each flag capture is worth\r\n40 points (a kill is worth 1).", game_text_1129 },
	{ L"With Kills Score on, each flag capture is worth\r\n5 points (a kill is worth 1).", game_text_1130 },
	{ L"With Kills Score on, each flag capture is worth\r\n50 points (a kill is worth 1).", game_text_1131 },
	{ L"With Kills Score on, each flag capture is worth\r\n75 points (a kill is worth 1).", game_text_1132 },
	{ L"Yellow", game_text_1133 },
	{ L"You are it!", game_text_1134 },
	{ L"You are on a killing spree!", game_text_1135 },
	{ L"You are on a killing spree! (%d)", game_text_1136 },
	{ L"You are on defense.", game_text_1137 },
	{ L"You are on offense.", game_text_1138 },
	{ L"You are out of lives", game_text_1139 },
	{ L"You are the odd man out", game_text_1140 },
	{ L"You begin the game with 50% more health and shield\nstrength than usual.", game_text_1141 },
	{ L"You begin the game with 50% more health and shield\r\nstrength than usual.", game_text_1142 },
	{ L"You begin the game with four times as much health \nand shield strength as you normally do.", game_text_1143 },
	{ L"You begin the game with four times as much health \r\nand shield strength as you normally do.", game_text_1144 },
	{ L"You begin the game with full health and shields.", game_text_1145 },
	{ L"You begin the game with three times as much health \nand shield strength as you normally do.", game_text_1146 },
	{ L"You begin the game with three times as much health \r\nand shield strength as you normally do.", game_text_1147 },
	{ L"You begin the game with twice as much health and\nshield strength as you normally do.", game_text_1148 },
	{ L"You begin the game with twice as much health and\r\nshield strength as you normally do.", game_text_1149 },
	{ L"You betrayed %s", game_text_1150 },
	{ L"You can't play System\nLink games without first \nconnecting to an active \nnetwork or Xbox cons"
		L"ole.", game_text_1151 },
	{ L"You can't play System\r\nLink games without first \r\nconnecting to an active \r\nnetwork or Xbo"
		L"x console.", game_text_1152 },
	{ L"You cannot fall off the floor.", game_text_1153 },
	{ L"You cannot return the flag to your base; it will return\nitself after a set amount of time.", game_text_1154 },
	{ L"You cannot return the flag to your base; it will return\r\nitself after a set amount of time.", game_text_1155 },
	{ L"You complete a lap by touching all the flags, in\nwhatever order you please.", game_text_1156 },
	{ L"You complete a lap by touching all the flags, in\r\nwhatever order you please.", game_text_1157 },
	{ L"You completed lap %d in %.2f seconds.", game_text_1158 },
	{ L"You have five lives, which is four more than you'd get\nin the real world.  Use them wisely.", game_text_1159 },
	{ L"You have five lives, which is four more than you'd get\r\nin the real world.  Use them wisely.", game_text_1160 },
	{ L"You have one life to live. But at least you're using it\nto kick ass across the galaxy instead o"
		L"f just sitting\nin a mansion crying with your rich socialite lovers.", game_text_1161 },
	{ L"You have one life to live. But at least you're using it\r\nto kick ass across the galaxy instead"
		L" of just sitting\r\nin a mansion crying with your rich socialite lovers.", game_text_1162 },
	{ L"You have reached the\nmaximum number of Halo\ngame files. Unable to\ncreate additional ones.", game_text_1163 },
	{ L"You have reached the\nmaximum number of game\nfiles. Unable to\ncreate additional ones.", game_text_1164 },
	{ L"You have reached the\r\nmaximum number of Halo\r\ngame files. Unable to\r\ncreate additional one"
		L"s.", game_text_1165 },
	{ L"You have reached the\r\nmaximum number of game\r\nfiles. Unable to\r\ncreate additional ones.", game_text_1166 },
	{ L"You have selected an \nempty player profile \nslot. Would you like to \ncreate a new profile\?", game_text_1167 },
	{ L"You have selected an \r\nempty player profile \r\nslot. Would you like to \r\ncreate a new profi"
		L"le\?", game_text_1168 },
	{ L"You have the ball.", game_text_1169 },
	{ L"You have the maximum number of saved HALO\ngame files on your Xbox console. Press A to\ncontinue"
		L" without saving or B to return to the\nDASHBOARD to remove some saved HALO game files.\n\nYou ne"
		L"ed a minimum of 2600 free blocks\nto clear up this problem.", game_text_1170 },
	{ L"You have the maximum number of saved HALO\r\ngame files on your Xbox console. Press A to\r\ncont"
		L"inue without saving or B to return to the\r\nDASHBOARD to remove some saved HALO game files.\r\n"
		L"\r\nYou need a minimum of 2600 free blocks\r\nto clear up this problem.", game_text_1171 },
	{ L"You killed %s", game_text_1172 },
	{ L"You killed %s (%d)", game_text_1173 },
	{ L"You lost", game_text_1174 },
	{ L"You may optionally enter a password for\nyour server.", game_text_1175 },
	{ L"You may optionally enter a password for\r\nyour server.", game_text_1176 },
	{ L"You must capture the enemy's flag and return it to\nyour own base.", game_text_1177 },
	{ L"You must capture the enemy's flag and return it to\r\nyour own base.", game_text_1178 },
	{ L"You must carry your own flag into the opposing\nteam's base to score.", game_text_1179 },
	{ L"You must carry your own flag into the opposing\r\nteam's base to score.", game_text_1180 },
	{ L"You must enter a new name for this game file", game_text_1181 },
	{ L"You must form 2 teams", game_text_1182 },
	{ L"You need to create or\nselect a profile in order\nto continue.", game_text_1183 },
	{ L"You need to create or\r\nselect a profile in order\r\nto continue.", game_text_1184 },
	{ L"You pay no price for ending your own life prematurely.", game_text_1185 },
	{ L"You probably expected a crass \"two balls\" joke in\nthis space. Are you nuts\? We'd get sacked!", game_text_1186 },
	{ L"You probably expected a crass \"two balls\" joke in\r\nthis space. Are you nuts\? We'd get sacke"
		L"d!", game_text_1187 },
	{ L"You quit out of the game", game_text_1188 },
	{ L"You returned the flag.", game_text_1189 },
	{ L"You scored %d to %d.", game_text_1190 },
	{ L"You scored a flag!", game_text_1191 },
	{ L"You were telefragged", game_text_1192 },
	{ L"You will always run at the same speed no matter how\nmany times you die.", game_text_1193 },
	{ L"You will always run at the same speed no matter how\r\nmany times you die.", game_text_1194 },
	{ L"You will always run at the same speed, no matter how\nmany other players you kill.", game_text_1195 },
	{ L"You will always run at the same speed, no matter how\r\nmany other players you kill.", game_text_1196 },
	{ L"You will be able to score even if your own flag is in\nthe scurrilous hands of the enemy.", game_text_1197 },
	{ L"You will be able to score even if your own flag is in\r\nthe scurrilous hands of the enemy.", game_text_1198 },
	{ L"You will begin the game with half your health already\ngone, and shields at half capacity.", game_text_1199 },
	{ L"You will begin the game with half your health already\r\ngone, and shields at half capacity.", game_text_1200 },
	{ L"You will have no special abilities when you are not\ncarrying the ball.", game_text_1201 },
	{ L"You will have no special abilities when you are not\r\ncarrying the ball.", game_text_1202 },
	{ L"You will have no special abilities while carrying the\nball.", game_text_1203 },
	{ L"You will have no special abilities while carrying the\r\nball.", game_text_1204 },
	{ L"You will have three lives to live, which makes you\none-third as cool as a cat.", game_text_1205 },
	{ L"You will have three lives to live, which makes you\r\none-third as cool as a cat.", game_text_1206 },
	{ L"You will only score when you kill your designated\ntarget. The target will change each time you "
		L"make\na kill.", game_text_1207 },
	{ L"You will only score when you kill your designated\r\ntarget. The target will change each time yo"
		L"u make\r\na kill.", game_text_1208 },
	{ L"You will respawn indefinitely until you end the game\nor reach a time limit.", game_text_1209 },
	{ L"You will respawn indefinitely until you end the game\r\nor reach a time limit.", game_text_1210 },
	{ L"You will run at the same speed whether you have the\nball or not.", game_text_1211 },
	{ L"You will run at the same speed whether you have the\r\nball or not.", game_text_1212 },
	{ L"You will start the game with the weapon set that the \nmap designers custom tailored for it.", game_text_1213 },
	{ L"You will start the game with the weapon set that the \r\nmap designers custom tailored for it.", game_text_1214 },
	{ L"You won", game_text_1215 },
	{ L"You'll barely be able to walk without stepping over\none of the sixteen balls in this game.", game_text_1216 },
	{ L"You'll barely be able to walk without stepping over\r\none of the sixteen balls in this game.", game_text_1217 },
	{ L"You'll need fifteen laps (and maybe one pit stop) to \ncomplete this race.", game_text_1218 },
	{ L"You'll need fifteen laps (and maybe one pit stop) to \r\ncomplete this race.", game_text_1219 },
	{ L"You'll need to capture ten flags if you want to win.", game_text_1220 },
	{ L"You'll need to capture three flags to win the game.", game_text_1221 },
	{ L"You'll need to hold the hill for a mere two minutes to \nwin the crown.", game_text_1222 },
	{ L"You'll need to hold the hill for a mere two minutes to \r\nwin the crown.", game_text_1223 },
	{ L"You'll need to hold the hill for five minutes to win.", game_text_1224 },
	{ L"You'll need to secure twenty-five kills in order to\nwin the game.", game_text_1225 },
	{ L"You'll need to secure twenty-five kills in order to\r\nwin the game.", game_text_1226 },
	{ L"You'll need to spend fifteen minutes of quality time\nwith the ball or being It in order to win."
		L" Juggernauts\nmust score an impressive fifteen kills.", game_text_1227 },
	{ L"You'll need to spend fifteen minutes of quality time\r\nwith the ball or being It in order to wi"
		L"n. Juggernauts\r\nmust score an impressive fifteen kills.", game_text_1228 },
	{ L"You'll need to use all the fingers on one of your hands\nto count the laps in this game.", game_text_1229 },
	{ L"You'll need to use all the fingers on one of your hands\r\nto count the laps in this game.", game_text_1230 },
	{ L"You'll only need to hang onto the ball or be It for a\ntotal of one minute to win. Juggernauts o"
		L"nly need\none kill to win.", game_text_1231 },
	{ L"You'll only need to hang onto the ball or be It for a\r\ntotal of one minute to win. Juggernauts"
		L" only need\r\none kill to win.", game_text_1232 },
	{ L"You'll traverse the map in the Rocket Warthog, a\nhardy jeep with a rocket launcher mounted in t"
		L"he back.", game_text_1233 },
	{ L"You'll traverse the map in the Rocket Warthog, a\r\nhardy jeep with a rocket launcher mounted in"
		L" the back.", game_text_1234 },
	{ L"You'll traverse the map in the nimble Warthog, a\nhardy jeep with a chain gun mounted in the bac"
		L"k.", game_text_1235 },
	{ L"You'll traverse the map in the nimble Warthog, a\r\nhardy jeep with a chain gun mounted in the b"
		L"ack.", game_text_1236 },
	{ L"You'll wait ten seconds after you cause your own \ndeath before you can return to the game.", game_text_1237 },
	{ L"You'll wait ten seconds after you cause your own \r\ndeath before you can return to the game.", game_text_1238 },
	{ L"You'll wait ten seconds after you perish before you\ncan return to the game.", game_text_1239 },
	{ L"You'll wait ten seconds after you perish before you\r\ncan return to the game.", game_text_1240 },
	{ L"You'll want to keep a barf bag handy if you want to\nfinish all 25 laps to win.", game_text_1241 },
	{ L"You'll want to keep a barf bag handy if you want to\r\nfinish all 25 laps to win.", game_text_1242 },
	{ L"Your Xbox System\nLink connection is\nexperiencing\ndifficulties...", game_text_1243 },
	{ L"Your Xbox System\r\nLink connection is\r\nexperiencing\r\ndifficulties...", game_text_1244 },
	{ L"Your Xbox console doesn\x2019t have enough free\nblocks to save games. Press A to continue\nwith"
		L"out saving or B to return to the DASHBOARD\nto free more blocks.\n\nYou need a minimum of 2600 f"
		L"ree blocks\nto clear up this problem.", game_text_1245 },
	{ L"Your Xbox console doesn\x2019t have enough free\r\nblocks to save games. Press A to continue\r\n"
		L"without saving or B to return to the DASHBOARD\r\nto free more blocks.\r\n\r\nYou need a minimum"
		L" of 2600 free blocks\r\nto clear up this problem.", game_text_1246 },
	{ L"Your Xbox console has\ngone out of sync with\nthe other consoles in\nthe game. Resetting...", game_text_1247 },
	{ L"Your Xbox console has\r\ngone out of sync with\r\nthe other consoles in\r\nthe game. Resetting.."
		L".", game_text_1248 },
	{ L"Your ally has the flag.", game_text_1249 },
	{ L"Your ally returned the flag.", game_text_1250 },
	{ L"Your ally scored %d to %d.", game_text_1251 },
	{ L"Your battle suit will have shields and thus make you\nharder to kill.", game_text_1252 },
	{ L"Your battle suit will have shields and thus make you\r\nharder to kill.", game_text_1253 },
	{ L"Your client is running an\nincompatible network \nprotocol version.", game_text_1254 },
	{ L"Your client is running an\r\nincompatible network \r\nprotocol version.", game_text_1255 },
	{ L"Your connection is\nexperiencing\ndifficulties...", game_text_1256 },
	{ L"Your connection is\r\nexperiencing\r\ndifficulties...", game_text_1257 },
	{ L"Your flag was returned.", game_text_1258 },
	{ L"Your game has\ngone out of sync with\nthe others in\nthe game. Resetting...", game_text_1259 },
	{ L"Your game has\r\ngone out of sync with\r\nthe others in\r\nthe game. Resetting...", game_text_1260 },
	{ L"Your luck is about to change.", game_text_1261 },
	{ L"Your mouse will use the default settings: \npush forward to look up and pull back to look down.", game_text_1262 },
	{ L"Your mouse will use the default settings: \r\npush forward to look up and pull back to look down"
		L".", game_text_1263 },
	{ L"Your password was\nrejected by the server.", game_text_1264 },
	{ L"Your password was\r\nrejected by the server.", game_text_1265 },
	{ L"Your respawn time increases by ten seconds each\ntime you die, and decreases by ten seconds each"
		L"\ntime you kill someone.", game_text_1266 },
	{ L"Your respawn time increases by ten seconds each\r\ntime you die, and decreases by ten seconds ea"
		L"ch\r\ntime you kill someone.", game_text_1267 },
	{ L"Your team lost", game_text_1268 },
	{ L"Your team won", game_text_1269 },
	{ L"Your teammates will only be denoted by the color of\ntheir armor.", game_text_1270 },
	{ L"Your teammates will only be denoted by the color of\r\ntheir armor.", game_text_1271 },
	{ L"Zip around in the Ghost, a nimble hovercraft with \npowerful energy cannons and the snazziest pa"
		L"int job \nin the galaxy.", game_text_1272 },
	{ L"Zip around in the Ghost, a nimble hovercraft with \r\npowerful energy cannons and the snazziest "
		L"paint job \r\nin the galaxy.", game_text_1273 },
	{ L"eighth place", game_text_1274 },
	{ L"even", game_text_1275 },
	{ L"fifth place", game_text_1276 },
	{ L"first place", game_text_1277 },
	{ L"fourth place", game_text_1278 },
	{ L"losing", game_text_1279 },
	{ L"new best lap time %.2f.", game_text_1280 },
	{ L"second place", game_text_1281 },
	{ L"seventh place", game_text_1282 },
	{ L"sixth place", game_text_1283 },
	{ L"third place", game_text_1284 },
	{ L"tied", game_text_1285 },
	{ L"tied for 10th place", game_text_1286 },
	{ L"tied for 11th place", game_text_1287 },
	{ L"tied for 12th place", game_text_1288 },
	{ L"tied for 13th place", game_text_1289 },
	{ L"tied for 14th place", game_text_1290 },
	{ L"tied for 15th place", game_text_1291 },
	{ L"tied for 16th place", game_text_1292 },
	{ L"tied for 9th place", game_text_1293 },
	{ L"tied for eighth place", game_text_1294 },
	{ L"tied for fifth place", game_text_1295 },
	{ L"tied for first place", game_text_1296 },
	{ L"tied for fourth place", game_text_1297 },
	{ L"tied for second place", game_text_1298 },
	{ L"tied for seventh place", game_text_1299 },
	{ L"tied for sixth place", game_text_1300 },
	{ L"tied for third place", game_text_1301 },
	{ L"winning", game_text_1302 },
};
