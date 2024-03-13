#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IBuildGroupEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IBuildGroupEntity"));
	}


	template <typename T = BuildGroupComponent*> T get_buildGroup() {
		return ((T (*)(IBuildGroupEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasBuildGroup() {
		return ((T (*)(IBuildGroupEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddBuildGroup(Il2CppArray<uintptr_t>* newList) {
		return ((T (*)(IBuildGroupEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, newList);
	}
	template <typename T = void> T ReplaceBuildGroup(Il2CppArray<uintptr_t>* newList) {
		return ((T (*)(IBuildGroupEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, newList);
	}
	template <typename T = void> T RemoveBuildGroup() {
		return ((T (*)(IBuildGroupEntity*))(Il2CppBase() + 0x0))(this);
	}

};

