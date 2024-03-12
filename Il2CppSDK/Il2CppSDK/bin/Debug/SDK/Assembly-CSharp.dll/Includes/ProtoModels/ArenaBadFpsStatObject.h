#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaBadFpsStatObject
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaBadFpsStatObject"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& WorldIDsFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& worldIDs_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& WorldTicsFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& worldTics_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& PveFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& pve_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& InfoTypeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& infoType_() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A171E4))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A17248))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ArenaBadFpsStatObject*))(Il2CppBase() + 0x1A17368))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(ArenaBadFpsStatObject*))(Il2CppBase() + 0x1A17470))(this);
	}
	template <typename T = int64_t> T get_WorldIDs() {
		return ((T (*)(ArenaBadFpsStatObject*))(Il2CppBase() + 0x1A174CC))(this);
	}
	template <typename T = void> T set_WorldIDs(int64_t value) {
		return ((T (*)(ArenaBadFpsStatObject*, int64_t))(Il2CppBase() + 0x1A174D4))(this, value);
	}
	template <typename T = int64_t> T get_WorldTics() {
		return ((T (*)(ArenaBadFpsStatObject*))(Il2CppBase() + 0x1A174DC))(this);
	}
	template <typename T = void> T set_WorldTics(int64_t value) {
		return ((T (*)(ArenaBadFpsStatObject*, int64_t))(Il2CppBase() + 0x1A174E4))(this, value);
	}
	template <typename T = Il2CppString*> T get_Pve() {
		return ((T (*)(ArenaBadFpsStatObject*))(Il2CppBase() + 0x1A174EC))(this);
	}
	template <typename T = void> T set_Pve(Il2CppString* value) {
		return ((T (*)(ArenaBadFpsStatObject*, Il2CppString*))(Il2CppBase() + 0x1A174F4))(this, value);
	}
	template <typename T = uintptr_t> T get_InfoType() {
		return ((T (*)(ArenaBadFpsStatObject*))(Il2CppBase() + 0x1A17574))(this);
	}
	template <typename T = void> T set_InfoType(uintptr_t value) {
		return ((T (*)(ArenaBadFpsStatObject*, uintptr_t))(Il2CppBase() + 0x1A1757C))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(ArenaBadFpsStatObject*, uintptr_t))(Il2CppBase() + 0x1A17584))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(ArenaBadFpsStatObject*, uintptr_t))(Il2CppBase() + 0x1A175F4))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArenaBadFpsStatObject*))(Il2CppBase() + 0x1A17674))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ArenaBadFpsStatObject*))(Il2CppBase() + 0x1A17724))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ArenaBadFpsStatObject*, uintptr_t))(Il2CppBase() + 0x1A17788))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ArenaBadFpsStatObject*))(Il2CppBase() + 0x1A1786C))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(ArenaBadFpsStatObject*, uintptr_t))(Il2CppBase() + 0x1A179AC))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ArenaBadFpsStatObject*, uintptr_t))(Il2CppBase() + 0x1A17A10))(this, input);
	}

};

}
