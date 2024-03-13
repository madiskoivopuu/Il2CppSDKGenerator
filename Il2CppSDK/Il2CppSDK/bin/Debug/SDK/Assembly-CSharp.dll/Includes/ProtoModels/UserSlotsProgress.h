#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class UserSlotsProgress
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "UserSlotsProgress"));
	}

	template <typename T = MessageParser1UserSlotsProgress*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& ItemsFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = FieldCodec1UserProductProgressDataItem*>*> static T& _repeated_items_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = RepeatedField1UserProductProgressDataItem*>*> T& items_() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = MessageParser1UserSlotsProgress*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x15B9EF4))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x15B9F58))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(UserSlotsProgress*))(Il2CppBase() + 0x15BA078))(this);
	}
	template <typename T = UserSlotsProgress*> T Clone() {
		return ((T (*)(UserSlotsProgress*))(Il2CppBase() + 0x15BA1D0))(this);
	}
	template <typename T = RepeatedField1UserProductProgressDataItem*>*> T get_Items() {
		return ((T (*)(UserSlotsProgress*))(Il2CppBase() + 0x15BA22C))(this);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(UserSlotsProgress*, Il2CppObject*))(Il2CppBase() + 0x15BA234))(this, other);
	}
	template <typename T = bool> T Equals_1(UserSlotsProgress* other) {
		return ((T (*)(UserSlotsProgress*, UserSlotsProgress*))(Il2CppBase() + 0x15BA2A4))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(UserSlotsProgress*))(Il2CppBase() + 0x15BA330))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(UserSlotsProgress*))(Il2CppBase() + 0x15BA35C))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(UserSlotsProgress*, uintptr_t))(Il2CppBase() + 0x15BA3C0))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(UserSlotsProgress*))(Il2CppBase() + 0x15BA460))(this);
	}
	template <typename T = void> T MergeFrom(UserSlotsProgress* other) {
		return ((T (*)(UserSlotsProgress*, UserSlotsProgress*))(Il2CppBase() + 0x15BA4F0))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(UserSlotsProgress*, uintptr_t))(Il2CppBase() + 0x15BA568))(this, input);
	}

};

}
