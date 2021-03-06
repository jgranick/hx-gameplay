#include "HaxeAPI.h"

/*******************************************************************************
 * PROPERTIES                                                                  *
 ******************************************************************************/

value hx_PhysicsController_HitResult_property_object_get(value thisObj)
{
    PhysicsController::HitResult *_thisObj;
    ValueToObject(thisObj, _thisObj);
    return ObjectToValue(_thisObj->object, false);
}
DEFINE_PRIM(hx_PhysicsController_HitResult_property_object_get, 1);

value hx_PhysicsController_HitResult_property_object_set(value thisObj, value _value)
{
    PhysicsController::HitResult *_thisObj;
    PhysicsCollisionObject *object;
    ValueToObject(thisObj, _thisObj);
    ValueToObject(_value, object);
    _thisObj->object = object;
    return _value;
}
DEFINE_PRIM(hx_PhysicsController_HitResult_property_object_set, 2);

value hx_PhysicsController_HitResult_property_point_get(value thisObj)
{
    PhysicsController::HitResult *_thisObj;
    ValueToObject(thisObj, _thisObj);
    return ObjectToValue(new Vector3(_thisObj->point));
}
DEFINE_PRIM(hx_PhysicsController_HitResult_property_point_get, 1);

value hx_PhysicsController_HitResult_property_point_set(value thisObj, value _value)
{
    PhysicsController::HitResult *_thisObj;
    Vector3 *point;
    ValueToObject(thisObj, _thisObj);
    ValueToObject(_value, point);
    _thisObj->point.set(*point);
    return _value;
}
DEFINE_PRIM(hx_PhysicsController_HitResult_property_point_set, 2);

value hx_PhysicsController_HitResult_property_fraction_get(value thisObj)
{
    PhysicsController::HitResult *_thisObj;
    ValueToObject(thisObj, _thisObj);
    return alloc_float(_thisObj->fraction);
}
DEFINE_PRIM(hx_PhysicsController_HitResult_property_fraction_get, 1);

value hx_PhysicsController_HitResult_property_fraction_set(value thisObj, value _value)
{
    PhysicsController::HitResult *_thisObj;
    float _flt = ValueToFloat(_value);
    ValueToObject(thisObj, _thisObj);
    _thisObj->fraction = _flt;
    return _value;
}
DEFINE_PRIM(hx_PhysicsController_HitResult_property_fraction_set, 2);

value hx_PhysicsController_HitResult_property_normal_get(value thisObj)
{
    PhysicsController::HitResult *_thisObj;
    ValueToObject(thisObj, _thisObj);
    return ObjectToValue(new Vector3(_thisObj->normal));
}
DEFINE_PRIM(hx_PhysicsController_HitResult_property_normal_get, 1);

value hx_PhysicsController_HitResult_property_normal_set(value thisObj, value _value)
{
    PhysicsController::HitResult *_thisObj;
    Vector3 *normal;
    ValueToObject(thisObj, _thisObj);
    ValueToObject(_value, normal);
    _thisObj->normal.set(*normal);
    return _value;
}
DEFINE_PRIM(hx_PhysicsController_HitResult_property_normal_set, 2);

// END
//
