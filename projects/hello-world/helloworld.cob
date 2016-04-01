        *>+--------------------------------------------------------------------+
        *>| Hello World in GNU COBOL.                                          |
        *>|                                                                    |
        *>| Written by Dmitry Makhnin.                                         |
        *>+--------------------------------------------------------------------+
        ID DIVISION.
        PROGRAM-ID. helloworld.

        ENVIRONMENT DIVISION.
    
        DATA DIVISION.
        WORKING-STORAGE SECTION.
        01 hello-world PIC X(20)
            VALUE IS "Hello, World!".

        PROCEDURE DIVISION.
            DISPLAY hello-world.

            STOP RUN.
