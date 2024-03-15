#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IResourcesEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IResourcesEntity"));
	}


	template <typename R = ResourcesComponent*> R get_resources() {
		return ((R (*)(IResourcesEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasResources() {
		return ((R (*)(IResourcesEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddResources(Il2CppArray<Resource>* newList) {
		return ((R (*)(IResourcesEntity*, Il2CppArray<Resource>*))(Il2CppBase() + 0x0))(this, newList);
	}
	template <typename R = void> R ReplaceResources(Il2CppArray<Resource>* newList) {
		return ((R (*)(IResourcesEntity*, Il2CppArray<Resource>*))(Il2CppBase() + 0x0))(this, newList);
	}
	template <typename R = void> R RemoveResources() {
		return ((R (*)(IResourcesEntity*))(Il2CppBase() + 0x0))(this);
	}

};

