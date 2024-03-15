#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaBadFpsStatObject
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaBadFpsStatObject"));
	}

	 static MessageParser1ProtoModels::ArenaBadFpsStatObject*>*& _parser() {
		return *(MessageParser1ProtoModels::ArenaBadFpsStatObject*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& WorldIDsFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& worldIDs_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& WorldTicsFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& worldTics_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& PveFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& pve_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& InfoTypeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::BadFpsStatsEnum*> R& infoType_() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	 static MessageParser1ProtoModels::ArenaBadFpsStatObject*>* get_Parser() {
		return ((MessageParser1ProtoModels::ArenaBadFpsStatObject*>* (*)(void *))(Il2CppBase() + 0x1A171E4))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1A17248))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ArenaBadFpsStatObject*))(Il2CppBase() + 0x1A17368))(this);
	}
	template <typename R = ProtoModels::ArenaBadFpsStatObject*> R Clone() {
		return ((R (*)(ArenaBadFpsStatObject*))(Il2CppBase() + 0x1A17470))(this);
	}
	template <typename R = int64_t> R get_WorldIDs() {
		return ((R (*)(ArenaBadFpsStatObject*))(Il2CppBase() + 0x1A174CC))(this);
	}
	template <typename R = void> R set_WorldIDs(int64_t value) {
		return ((R (*)(ArenaBadFpsStatObject*, int64_t))(Il2CppBase() + 0x1A174D4))(this, value);
	}
	template <typename R = int64_t> R get_WorldTics() {
		return ((R (*)(ArenaBadFpsStatObject*))(Il2CppBase() + 0x1A174DC))(this);
	}
	template <typename R = void> R set_WorldTics(int64_t value) {
		return ((R (*)(ArenaBadFpsStatObject*, int64_t))(Il2CppBase() + 0x1A174E4))(this, value);
	}
	template <typename R = Il2CppString*> R get_Pve() {
		return ((R (*)(ArenaBadFpsStatObject*))(Il2CppBase() + 0x1A174EC))(this);
	}
	template <typename R = void> R set_Pve(Il2CppString* value) {
		return ((R (*)(ArenaBadFpsStatObject*, Il2CppString*))(Il2CppBase() + 0x1A174F4))(this, value);
	}
	template <typename R = ProtoModels::BadFpsStatsEnum*> R get_InfoType() {
		return ((R (*)(ArenaBadFpsStatObject*))(Il2CppBase() + 0x1A17574))(this);
	}
	template <typename R = void> R set_InfoType(ProtoModels::BadFpsStatsEnum* value) {
		return ((R (*)(ArenaBadFpsStatObject*, ProtoModels::BadFpsStatsEnum*))(Il2CppBase() + 0x1A1757C))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ArenaBadFpsStatObject*, Il2CppObject*))(Il2CppBase() + 0x1A17584))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ArenaBadFpsStatObject* other) {
		return ((R (*)(ArenaBadFpsStatObject*, ProtoModels::ArenaBadFpsStatObject*))(Il2CppBase() + 0x1A175F4))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ArenaBadFpsStatObject*))(Il2CppBase() + 0x1A17674))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ArenaBadFpsStatObject*))(Il2CppBase() + 0x1A17724))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ArenaBadFpsStatObject*, uintptr_t))(Il2CppBase() + 0x1A17788))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ArenaBadFpsStatObject*))(Il2CppBase() + 0x1A1786C))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ArenaBadFpsStatObject* other) {
		return ((R (*)(ArenaBadFpsStatObject*, ProtoModels::ArenaBadFpsStatObject*))(Il2CppBase() + 0x1A179AC))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ArenaBadFpsStatObject*, uintptr_t))(Il2CppBase() + 0x1A17A10))(this, input);
	}

};

}
