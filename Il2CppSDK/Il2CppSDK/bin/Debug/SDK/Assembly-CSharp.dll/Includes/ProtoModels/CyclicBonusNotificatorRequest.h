#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class CyclicBonusNotificatorRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "CyclicBonusNotificatorRequest"));
	}

	template <typename T = MessageParser1CyclicBonusNotificatorRequest*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& UserIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& userID_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& ItemFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& item_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& CountFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& count_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& UserIDsFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = FieldCodec1int64_t>*> static T& _repeated_userIDs_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = RepeatedField1int64_t>*> T& userIDs_() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = MessageParser1CyclicBonusNotificatorRequest*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x1640388))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x16403EC))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(CyclicBonusNotificatorRequest*))(Il2CppBase() + 0x164050C))(this);
	}
	template <typename T = CyclicBonusNotificatorRequest*> T Clone() {
		return ((T (*)(CyclicBonusNotificatorRequest*))(Il2CppBase() + 0x16406A8))(this);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(CyclicBonusNotificatorRequest*))(Il2CppBase() + 0x1640704))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(CyclicBonusNotificatorRequest*, int64_t))(Il2CppBase() + 0x164070C))(this, value);
	}
	template <typename T = Il2CppString*> T get_Item() {
		return ((T (*)(CyclicBonusNotificatorRequest*))(Il2CppBase() + 0x1640714))(this);
	}
	template <typename T = void> T set_Item(Il2CppString* value) {
		return ((T (*)(CyclicBonusNotificatorRequest*, Il2CppString*))(Il2CppBase() + 0x164071C))(this, value);
	}
	template <typename T = int32_t> T get_Count() {
		return ((T (*)(CyclicBonusNotificatorRequest*))(Il2CppBase() + 0x164079C))(this);
	}
	template <typename T = void> T set_Count(int32_t value) {
		return ((T (*)(CyclicBonusNotificatorRequest*, int32_t))(Il2CppBase() + 0x16407A4))(this, value);
	}
	template <typename T = RepeatedField1int64_t>*> T get_UserIDs() {
		return ((T (*)(CyclicBonusNotificatorRequest*))(Il2CppBase() + 0x16407AC))(this);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(CyclicBonusNotificatorRequest*, Il2CppObject*))(Il2CppBase() + 0x16407B4))(this, other);
	}
	template <typename T = bool> T Equals_1(CyclicBonusNotificatorRequest* other) {
		return ((T (*)(CyclicBonusNotificatorRequest*, CyclicBonusNotificatorRequest*))(Il2CppBase() + 0x1640824))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(CyclicBonusNotificatorRequest*))(Il2CppBase() + 0x16408E4))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(CyclicBonusNotificatorRequest*))(Il2CppBase() + 0x164098C))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(CyclicBonusNotificatorRequest*, uintptr_t))(Il2CppBase() + 0x16409F0))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(CyclicBonusNotificatorRequest*))(Il2CppBase() + 0x1640B1C))(this);
	}
	template <typename T = void> T MergeFrom(CyclicBonusNotificatorRequest* other) {
		return ((T (*)(CyclicBonusNotificatorRequest*, CyclicBonusNotificatorRequest*))(Il2CppBase() + 0x1640C88))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(CyclicBonusNotificatorRequest*, uintptr_t))(Il2CppBase() + 0x1640D30))(this, input);
	}

};

}
