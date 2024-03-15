#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IBuildGroupEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IBuildGroupEntity"));
	}


	template <typename R = BuildGroupComponent*> R get_buildGroup() {
		return ((R (*)(IBuildGroupEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasBuildGroup() {
		return ((R (*)(IBuildGroupEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddBuildGroup(Il2CppArray<BuildInstance>* newList) {
		return ((R (*)(IBuildGroupEntity*, Il2CppArray<BuildInstance>*))(Il2CppBase() + 0x0))(this, newList);
	}
	template <typename R = void> R ReplaceBuildGroup(Il2CppArray<BuildInstance>* newList) {
		return ((R (*)(IBuildGroupEntity*, Il2CppArray<BuildInstance>*))(Il2CppBase() + 0x0))(this, newList);
	}
	template <typename R = void> R RemoveBuildGroup() {
		return ((R (*)(IBuildGroupEntity*))(Il2CppBase() + 0x0))(this);
	}

};

