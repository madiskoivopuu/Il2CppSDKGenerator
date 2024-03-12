#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class Requisite
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "Requisite"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& IdFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& id_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& NameFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& name_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& TotalCountFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& totalCount_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& RequireCountFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& requireCount_() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> static T& CountFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& count_() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> static T& TargetNameFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& targetName_() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x1199904))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1199968))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(Requisite*))(Il2CppBase() + 0x1199A88))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(Requisite*))(Il2CppBase() + 0x1199BB4))(this);
	}
	template <typename T = int64_t> T get_Id() {
		return ((T (*)(Requisite*))(Il2CppBase() + 0x1199C10))(this);
	}
	template <typename T = void> T set_Id(int64_t value) {
		return ((T (*)(Requisite*, int64_t))(Il2CppBase() + 0x1199C18))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(Requisite*))(Il2CppBase() + 0x1199C20))(this);
	}
	template <typename T = void> T set_Name(Il2CppString* value) {
		return ((T (*)(Requisite*, Il2CppString*))(Il2CppBase() + 0x1199C28))(this, value);
	}
	template <typename T = int32_t> T get_TotalCount() {
		return ((T (*)(Requisite*))(Il2CppBase() + 0x1199CA8))(this);
	}
	template <typename T = void> T set_TotalCount(int32_t value) {
		return ((T (*)(Requisite*, int32_t))(Il2CppBase() + 0x1199CB0))(this, value);
	}
	template <typename T = int32_t> T get_RequireCount() {
		return ((T (*)(Requisite*))(Il2CppBase() + 0x1199CB8))(this);
	}
	template <typename T = void> T set_RequireCount(int32_t value) {
		return ((T (*)(Requisite*, int32_t))(Il2CppBase() + 0x1199CC0))(this, value);
	}
	template <typename T = int32_t> T get_Count() {
		return ((T (*)(Requisite*))(Il2CppBase() + 0x1199CC8))(this);
	}
	template <typename T = void> T set_Count(int32_t value) {
		return ((T (*)(Requisite*, int32_t))(Il2CppBase() + 0x1199CD0))(this, value);
	}
	template <typename T = Il2CppString*> T get_TargetName() {
		return ((T (*)(Requisite*))(Il2CppBase() + 0x1199CD8))(this);
	}
	template <typename T = void> T set_TargetName(Il2CppString* value) {
		return ((T (*)(Requisite*, Il2CppString*))(Il2CppBase() + 0x1199CE0))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(Requisite*, uintptr_t))(Il2CppBase() + 0x1199D60))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(Requisite*, uintptr_t))(Il2CppBase() + 0x1199DD0))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(Requisite*))(Il2CppBase() + 0x1199E78))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(Requisite*))(Il2CppBase() + 0x1199F64))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(Requisite*, uintptr_t))(Il2CppBase() + 0x1199FC8))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(Requisite*))(Il2CppBase() + 0x119A10C))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(Requisite*, uintptr_t))(Il2CppBase() + 0x119A2CC))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(Requisite*, uintptr_t))(Il2CppBase() + 0x119A35C))(this, input);
	}

};

}
