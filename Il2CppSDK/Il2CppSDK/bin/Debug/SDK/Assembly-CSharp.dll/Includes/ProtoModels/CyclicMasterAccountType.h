#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class CyclicMasterAccountType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "CyclicMasterAccountType"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& StatusFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& status_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& BattleTagFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& battleTag_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& NameFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& name_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& LevelFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& level_() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x1645038))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x164509C))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(CyclicMasterAccountType*))(Il2CppBase() + 0x16451BC))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(CyclicMasterAccountType*))(Il2CppBase() + 0x16452DC))(this);
	}
	template <typename T = uintptr_t> T get_Status() {
		return ((T (*)(CyclicMasterAccountType*))(Il2CppBase() + 0x1645338))(this);
	}
	template <typename T = void> T set_Status(uintptr_t value) {
		return ((T (*)(CyclicMasterAccountType*, uintptr_t))(Il2CppBase() + 0x1645340))(this, value);
	}
	template <typename T = Il2CppString*> T get_BattleTag() {
		return ((T (*)(CyclicMasterAccountType*))(Il2CppBase() + 0x1645348))(this);
	}
	template <typename T = void> T set_BattleTag(Il2CppString* value) {
		return ((T (*)(CyclicMasterAccountType*, Il2CppString*))(Il2CppBase() + 0x1645350))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(CyclicMasterAccountType*))(Il2CppBase() + 0x16453D0))(this);
	}
	template <typename T = void> T set_Name(Il2CppString* value) {
		return ((T (*)(CyclicMasterAccountType*, Il2CppString*))(Il2CppBase() + 0x16453D8))(this, value);
	}
	template <typename T = int32_t> T get_Level() {
		return ((T (*)(CyclicMasterAccountType*))(Il2CppBase() + 0x1645458))(this);
	}
	template <typename T = void> T set_Level(int32_t value) {
		return ((T (*)(CyclicMasterAccountType*, int32_t))(Il2CppBase() + 0x1645460))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(CyclicMasterAccountType*, uintptr_t))(Il2CppBase() + 0x1645468))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(CyclicMasterAccountType*, uintptr_t))(Il2CppBase() + 0x16454D8))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(CyclicMasterAccountType*))(Il2CppBase() + 0x164555C))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(CyclicMasterAccountType*))(Il2CppBase() + 0x164560C))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(CyclicMasterAccountType*, uintptr_t))(Il2CppBase() + 0x1645670))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(CyclicMasterAccountType*))(Il2CppBase() + 0x164575C))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(CyclicMasterAccountType*, uintptr_t))(Il2CppBase() + 0x16458A4))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(CyclicMasterAccountType*, uintptr_t))(Il2CppBase() + 0x1645914))(this, input);
	}

};

}
