#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class CyclicMasterAccountType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "CyclicMasterAccountType"));
	}

	 static MessageParser1<ProtoModels::CyclicMasterAccountType*>*& _parser() {
		return *(MessageParser1<ProtoModels::CyclicMasterAccountType*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& StatusFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::CyclicMasterAccountStatusType> R& status_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& BattleTagFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& battleTag_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& NameFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& name_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& LevelFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& level_() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	 static MessageParser1<ProtoModels::CyclicMasterAccountType*>* get_Parser() {
		return ((MessageParser1<ProtoModels::CyclicMasterAccountType*>* (*)(void *))(Il2CppBase() + 0x1645038))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x164509C))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(CyclicMasterAccountType*))(Il2CppBase() + 0x16451BC))(this);
	}
	template <typename R = ProtoModels::CyclicMasterAccountType*> R Clone() {
		return ((R (*)(CyclicMasterAccountType*))(Il2CppBase() + 0x16452DC))(this);
	}
	template <typename R = ProtoModels::CyclicMasterAccountStatusType> R get_Status() {
		return ((R (*)(CyclicMasterAccountType*))(Il2CppBase() + 0x1645338))(this);
	}
	template <typename R = void> R set_Status(ProtoModels::CyclicMasterAccountStatusType value) {
		return ((R (*)(CyclicMasterAccountType*, ProtoModels::CyclicMasterAccountStatusType))(Il2CppBase() + 0x1645340))(this, value);
	}
	template <typename R = Il2CppString*> R get_BattleTag() {
		return ((R (*)(CyclicMasterAccountType*))(Il2CppBase() + 0x1645348))(this);
	}
	template <typename R = void> R set_BattleTag(Il2CppString* value) {
		return ((R (*)(CyclicMasterAccountType*, Il2CppString*))(Il2CppBase() + 0x1645350))(this, value);
	}
	template <typename R = Il2CppString*> R get_Name() {
		return ((R (*)(CyclicMasterAccountType*))(Il2CppBase() + 0x16453D0))(this);
	}
	template <typename R = void> R set_Name(Il2CppString* value) {
		return ((R (*)(CyclicMasterAccountType*, Il2CppString*))(Il2CppBase() + 0x16453D8))(this, value);
	}
	template <typename R = int32_t> R get_Level() {
		return ((R (*)(CyclicMasterAccountType*))(Il2CppBase() + 0x1645458))(this);
	}
	template <typename R = void> R set_Level(int32_t value) {
		return ((R (*)(CyclicMasterAccountType*, int32_t))(Il2CppBase() + 0x1645460))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(CyclicMasterAccountType*, Il2CppObject*))(Il2CppBase() + 0x1645468))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::CyclicMasterAccountType* other) {
		return ((R (*)(CyclicMasterAccountType*, ProtoModels::CyclicMasterAccountType*))(Il2CppBase() + 0x16454D8))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(CyclicMasterAccountType*))(Il2CppBase() + 0x164555C))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(CyclicMasterAccountType*))(Il2CppBase() + 0x164560C))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(CyclicMasterAccountType*, uintptr_t))(Il2CppBase() + 0x1645670))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(CyclicMasterAccountType*))(Il2CppBase() + 0x164575C))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::CyclicMasterAccountType* other) {
		return ((R (*)(CyclicMasterAccountType*, ProtoModels::CyclicMasterAccountType*))(Il2CppBase() + 0x16458A4))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(CyclicMasterAccountType*, uintptr_t))(Il2CppBase() + 0x1645914))(this, input);
	}

};

}
