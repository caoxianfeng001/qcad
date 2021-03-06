// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is copyable.
        
        #ifndef RECMATRANSFORMOP_H
        #define RECMATRANSFORMOP_H

        #include "ecmaapi_global.h"

        #include <QScriptEngine>
        #include <QScriptValue>
        #include <QScriptContextInfo>
        #include <QDebug>

        
                #include "RTransformOp.h"
            

        /**
         * \ingroup scripting_ecmaapi
         */
        class
        
        QCADECMAAPI_EXPORT
        REcmaTransformOp {

        public:
      static  void initEcma(QScriptEngine& engine, QScriptValue* proto 
    =NULL
    ) 
    ;static  QScriptValue createEcma(QScriptContext* context, QScriptEngine* engine) 
    ;

    // conversion functions for base classes:
    

    // returns class name:
    static  QScriptValue getClassName(QScriptContext *context, QScriptEngine *engine) 
        ;

    // returns all base classes (in case of multiple inheritance):
    static  QScriptValue getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        ;

    // properties:
    static  QScriptValue getSetType
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue getSetD1
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue getSetD2
        (QScriptContext* context, QScriptEngine* engine) 
        ;

    // public methods:
    static  QScriptValue
        createTranslation
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        createScale
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        createRotation
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getType
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getD1
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getD2
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue toString
    (QScriptContext *context, QScriptEngine *engine)
    ;static  QScriptValue copy
    (QScriptContext *context, QScriptEngine *engine)
    ;static  QScriptValue destroy(QScriptContext *context, QScriptEngine *engine)
    ;static RTransformOp* getSelf(const QString& fName, QScriptContext* context)
    ;static RTransformOp* getSelfShell(const QString& fName, QScriptContext* context)
    ;static  QScriptValue toScriptValueEnumType(QScriptEngine* engine, const RTransformOp::Type& value)
    ;static  void fromScriptValueEnumType(const QScriptValue& value, RTransformOp::Type& out)
    ;};
    #endif
    