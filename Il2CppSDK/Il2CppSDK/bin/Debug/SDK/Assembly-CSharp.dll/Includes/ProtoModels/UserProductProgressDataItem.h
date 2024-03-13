#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class UserProductProgressDataItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "UserProductProgressDataItem"));
	}

	template <typename T = MessageParser1UserProductProgressDataItem*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& NameFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& name_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& CountFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& count_() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = MessageParser1UserProductProgressDataItem*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x2471C28))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x2471C8C))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(UserProductProgressDataItem*))(Il2CppBase() + 0x2471DAC))(this);
	}
	template <typename T = UserProductProgressDataItem*> T Clone() {
		return ((T (*)(UserProductProgressDataItem*))(Il2CppBase() + 0x2471354))(this);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(UserProductProgressDataItem*))(Il2CppBase() + 0x2471E48))(this);
	}
	template <typename T = void> T set_Name(Il2CppString* value) {
		return ((T (*)(UserProductProgressDataItem*, Il2CppString*))(Il2CppBase() + 0x2471E50))(this, value);
	}
	template <typename T = int32_t> T get_Count() {
		return ((T (*)(UserProductProgressDataItem*))(Il2CppBase() + 0x2471ED0))(this);
	}
	template <typename T = void> T set_Count(int32_t value) {
		return ((T (*)(UserProductProgressDataItem*, int32_t))(Il2CppBase() + 0x2471ED8))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(UserProductProgressDataItem*, Il2CppObject*))(Il2CppBase() + 0x2471EE0))(this, other);
	}
	template <typename T = bool> T Equals_1(UserProductProgressDataItem* other) {
		return ((T (*)(UserProductProgressDataItem*, UserProductProgressDataItem*))(Il2CppBase() + 0x2471F50))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(UserProductProgressDataItem*))(Il2CppBase() + 0x2471FB0))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(UserProductProgressDataItem*))(Il2CppBase() + 0x2472024))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(UserProductProgressDataItem*, uintptr_t))(Il2CppBase() + 0x2472088))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(UserProductProgressDataItem*))(Il2CppBase() + 0x2472114))(this);
	}
	template <typename T = void> T MergeFrom(UserProductProgressDataItem* other) {
		return ((T (*)(UserProductProgressDataItem*, UserProductProgressDataItem*))(Il2CppBase() + 0x24718CC))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(UserProductProgressDataItem*, uintptr_t))(Il2CppBase() + 0x24721DC))(this, input);
	}

};

}
