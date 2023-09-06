#include "pch-cpp.hpp"






struct ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411;
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
struct String_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Physics_t1244C2983AEAFA149425AFFC3DF53BC91C18ED56_il2cpp_TypeInfo_var;

struct ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CModuleU3E_tCFCF033B61CFCC76C69180CF9A7B07EED67725EA 
{
};
struct Physics_t1244C2983AEAFA149425AFFC3DF53BC91C18ED56  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	float ___x;
	float ___y;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	float ___x;
	float ___y;
	float ___z;
};
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};
struct ContactPair_t096319945A27108A2DA384393A9ED390BE4356FD 
{
	int32_t ___m_ColliderID;
	int32_t ___m_OtherColliderID;
	intptr_t ___m_StartPtr;
	uint32_t ___m_NbPoints;
	uint16_t ___m_Flags;
	uint16_t ___m_Events;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_ImpulseSum;
};
struct ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B 
{
	int32_t ___m_BodyID;
	int32_t ___m_OtherBodyID;
	intptr_t ___m_StartPtr;
	uint32_t ___m_NbPairs;
	uint16_t ___m_Flags;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity;
};
struct ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse;
	int32_t ___m_ThisColliderInstanceID;
	int32_t ___m_OtherColliderInstanceID;
	float ___m_Separation;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr;
};
struct RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal;
	uint32_t ___m_FaceID;
	float ___m_Distance;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UV;
	int32_t ___m_Collider;
};
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0  : public RuntimeObject
{
	ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B ___m_Header;
	ContactPair_t096319945A27108A2DA384393A9ED390BE4356FD ___m_Pair;
	bool ___m_Flipped;
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_LegacyContacts;
};
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};
struct Physics_t1244C2983AEAFA149425AFFC3DF53BC91C18ED56_StaticFields
{
	Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___s_ReusableCollision;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411  : public RuntimeArray
{
	ALIGN_FIELD (8) ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9 m_Items[1];

	inline ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9 value)
	{
		m_Items[index] = value;
	}
};



IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collision__ctor_mC3F14BC1026130B6B0E6BB83D7431753C3484912 (Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* Object_FindObjectFromInstanceID_m977F314530A838CAB5497C8F5D0D8DA134B92E0C (int32_t ___0_instanceID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RaycastHit_get_normal_mD8741B70D2039C5CAFC4368D4CE59D89562040B5 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RaycastHit_get_distance_m035194B0E9BB6229259CFC43B095A9C8E5011C78 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collision__ctor_mC3F14BC1026130B6B0E6BB83D7431753C3484912 (Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* __this, const RuntimeMethod* method) 
{
	{
		__this->___m_LegacyContacts = (ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_LegacyContacts), (void*)(ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411*)NULL);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* L_0 = (ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B*)(&__this->___m_Header);
		il2cpp_codegen_initobj(L_0, sizeof(ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B));
		ContactPair_t096319945A27108A2DA384393A9ED390BE4356FD* L_1 = (ContactPair_t096319945A27108A2DA384393A9ED390BE4356FD*)(&__this->___m_Pair);
		il2cpp_codegen_initobj(L_1, sizeof(ContactPair_t096319945A27108A2DA384393A9ED390BE4356FD));
		__this->___m_Flipped = (bool)0;
		__this->___m_LegacyContacts = (ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_LegacyContacts), (void*)(ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411*)NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Physics__cctor_m1E2D4816C77050D34F6D01F43E63D7969410AE2A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics_t1244C2983AEAFA149425AFFC3DF53BC91C18ED56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_0 = (Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0*)il2cpp_codegen_object_new(Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_il2cpp_TypeInfo_var);
		Collision__ctor_mC3F14BC1026130B6B0E6BB83D7431753C3484912(L_0, NULL);
		((Physics_t1244C2983AEAFA149425AFFC3DF53BC91C18ED56_StaticFields*)il2cpp_codegen_static_fields_for(Physics_t1244C2983AEAFA149425AFFC3DF53BC91C18ED56_il2cpp_TypeInfo_var))->___s_ReusableCollision = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Physics_t1244C2983AEAFA149425AFFC3DF53BC91C18ED56_StaticFields*)il2cpp_codegen_static_fields_for(Physics_t1244C2983AEAFA149425AFFC3DF53BC91C18ED56_il2cpp_TypeInfo_var))->___s_ReusableCollision), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* V_0 = NULL;
	{
		int32_t L_0 = __this->___m_Collider;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_1;
		L_1 = Object_FindObjectFromInstanceID_m977F314530A838CAB5497C8F5D0D8DA134B92E0C(L_0, NULL);
		V_0 = ((Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76*)IsInstClass((RuntimeObject*)L_1, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_il2cpp_TypeInfo_var));
		goto IL_0014;
	}

IL_0014:
	{
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5*>(__this + _offset);
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* _returnValue;
	_returnValue = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___m_Point;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5*>(__this + _offset);
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 _returnValue;
	_returnValue = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RaycastHit_get_normal_mD8741B70D2039C5CAFC4368D4CE59D89562040B5 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___m_Normal;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RaycastHit_get_normal_mD8741B70D2039C5CAFC4368D4CE59D89562040B5_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5*>(__this + _offset);
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 _returnValue;
	_returnValue = RaycastHit_get_normal_mD8741B70D2039C5CAFC4368D4CE59D89562040B5(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RaycastHit_get_distance_m035194B0E9BB6229259CFC43B095A9C8E5011C78 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___m_Distance;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  float RaycastHit_get_distance_m035194B0E9BB6229259CFC43B095A9C8E5011C78_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5*>(__this + _offset);
	float _returnValue;
	_returnValue = RaycastHit_get_distance_m035194B0E9BB6229259CFC43B095A9C8E5011C78(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
