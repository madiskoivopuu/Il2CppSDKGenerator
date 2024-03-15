#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class CyclicBonusNotificatorRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "CyclicBonusNotificatorRequest"));
	}

	 static MessageParser1ProtoModels::CyclicBonusNotificatorRequest*>*& _parser() {
		return *(MessageParser1ProtoModels::CyclicBonusNotificatorRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& UserIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& userID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& ItemFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& item_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& CountFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& count_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& UserIDsFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1int64_t>*& _repeated_userIDs_codec() {
		return *(FieldCodec1int64_t>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 RepeatedField1int64_t>*& userIDs_() {
		return *(RepeatedField1int64_t>**)((uintptr_t)this + 0x28);
	}

	 static MessageParser1ProtoModels::CyclicBonusNotificatorRequest*>* get_Parser() {
		return ((MessageParser1ProtoModels::CyclicBonusNotificatorRequest*>* (*)(void *))(Il2CppBase() + 0x1640388))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x16403EC))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(CyclicBonusNotificatorRequest*))(Il2CppBase() + 0x164050C))(this);
	}
	template <typename R = ProtoModels::CyclicBonusNotificatorRequest*> R Clone() {
		return ((R (*)(CyclicBonusNotificatorRequest*))(Il2CppBase() + 0x16406A8))(this);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(CyclicBonusNotificatorRequest*))(Il2CppBase() + 0x1640704))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(CyclicBonusNotificatorRequest*, int64_t))(Il2CppBase() + 0x164070C))(this, value);
	}
	template <typename R = Il2CppString*> R get_Item() {
		return ((R (*)(CyclicBonusNotificatorRequest*))(Il2CppBase() + 0x1640714))(this);
	}
	template <typename R = void> R set_Item(Il2CppString* value) {
		return ((R (*)(CyclicBonusNotificatorRequest*, Il2CppString*))(Il2CppBase() + 0x164071C))(this, value);
	}
	template <typename R = int32_t> R get_Count() {
		return ((R (*)(CyclicBonusNotificatorRequest*))(Il2CppBase() + 0x164079C))(this);
	}
	template <typename R = void> R set_Count(int32_t value) {
		return ((R (*)(CyclicBonusNotificatorRequest*, int32_t))(Il2CppBase() + 0x16407A4))(this, value);
	}
	 RepeatedField1int64_t>* get_UserIDs() {
		return ((RepeatedField1int64_t>* (*)(CyclicBonusNotificatorRequest*))(Il2CppBase() + 0x16407AC))(this);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(CyclicBonusNotificatorRequest*, Il2CppObject*))(Il2CppBase() + 0x16407B4))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::CyclicBonusNotificatorRequest* other) {
		return ((R (*)(CyclicBonusNotificatorRequest*, ProtoModels::CyclicBonusNotificatorRequest*))(Il2CppBase() + 0x1640824))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(CyclicBonusNotificatorRequest*))(Il2CppBase() + 0x16408E4))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(CyclicBonusNotificatorRequest*))(Il2CppBase() + 0x164098C))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(CyclicBonusNotificatorRequest*, uintptr_t))(Il2CppBase() + 0x16409F0))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(CyclicBonusNotificatorRequest*))(Il2CppBase() + 0x1640B1C))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::CyclicBonusNotificatorRequest* other) {
		return ((R (*)(CyclicBonusNotificatorRequest*, ProtoModels::CyclicBonusNotificatorRequest*))(Il2CppBase() + 0x1640C88))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(CyclicBonusNotificatorRequest*, uintptr_t))(Il2CppBase() + 0x1640D30))(this, input);
	}

};

}
