#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IStackEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IStackEntity"));
	}


	template <typename T = StackComponent*> T get_stack() {
		return ((T (*)(IStackEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasStack() {
		return ((T (*)(IStackEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddStack(Il2CppString* newResource, int32_t newCount, Nullable1int64_t>* newSignature) {
		return ((T (*)(IStackEntity*, Il2CppString*, int32_t, Nullable1int64_t>*))(Il2CppBase() + 0x0))(this, newResource, newCount, newSignature);
	}
	template <typename T = void> T ReplaceStack(Il2CppString* newResource, int32_t newCount, Nullable1int64_t>* newSignature) {
		return ((T (*)(IStackEntity*, Il2CppString*, int32_t, Nullable1int64_t>*))(Il2CppBase() + 0x0))(this, newResource, newCount, newSignature);
	}
	template <typename T = void> T RemoveStack() {
		return ((T (*)(IStackEntity*))(Il2CppBase() + 0x0))(this);
	}

};

