#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IResourcesEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IResourcesEntity"));
	}


	template <typename T = uintptr_t> T get_resources() {
		return ((T (*)(IResourcesEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasResources() {
		return ((T (*)(IResourcesEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddResources(Il2CppArray<uintptr_t>* newList) {
		return ((T (*)(IResourcesEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, newList);
	}
	template <typename T = void> T ReplaceResources(Il2CppArray<uintptr_t>* newList) {
		return ((T (*)(IResourcesEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, newList);
	}
	template <typename T = void> T RemoveResources() {
		return ((T (*)(IResourcesEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
