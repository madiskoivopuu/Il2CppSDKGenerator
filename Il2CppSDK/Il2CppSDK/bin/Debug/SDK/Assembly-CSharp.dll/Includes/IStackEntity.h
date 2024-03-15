#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IStackEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IStackEntity"));
	}


	template <typename R = StackComponent*> R get_stack() {
		return ((R (*)(IStackEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasStack() {
		return ((R (*)(IStackEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddStack(Il2CppString* newResource, int32_t newCount, Nullable1int64_t>* newSignature) {
		return ((R (*)(IStackEntity*, Il2CppString*, int32_t, Nullable1int64_t>*))(Il2CppBase() + 0x0))(this, newResource, newCount, newSignature);
	}
	template <typename R = void> R ReplaceStack(Il2CppString* newResource, int32_t newCount, Nullable1int64_t>* newSignature) {
		return ((R (*)(IStackEntity*, Il2CppString*, int32_t, Nullable1int64_t>*))(Il2CppBase() + 0x0))(this, newResource, newCount, newSignature);
	}
	template <typename R = void> R RemoveStack() {
		return ((R (*)(IStackEntity*))(Il2CppBase() + 0x0))(this);
	}

};

