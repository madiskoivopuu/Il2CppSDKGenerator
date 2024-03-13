#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BuilderWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BuilderWindowHelper"));
	}


	template <typename T = BuilderWindow*> static T ShowBuilder(UIWindowsManager* manager) {
		return ((T (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x15B0B60))(0, manager);
	}
	template <typename T = void> static T CloseBuilder(UIWindowsManager* manager) {
		return ((T (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x15B0CA0))(0, manager);
	}
	template <typename T = bool> static T IsBuilderOpen(UIWindowsManager* manager) {
		return ((T (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x15B0D40))(0, manager);
	}
	template <typename T = BuilderWindow*> static T GetBuilder(UIWindowsManager* manager) {
		return ((T (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x15B0E1C))(0, manager);
	}
	template <typename T = void> static T UpdateBuilder(UIWindowsManager* manager) {
		return ((T (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x15B0EB4))(0, manager);
	}
	template <typename T = void> static T UpdateBuildResult(UIWindowsManager* manager, int64_t ticks, int32_t resultId) {
		return ((T (*)(void *, UIWindowsManager*, int64_t, int32_t))(Il2CppBase() + 0x15B0EE0))(0, manager, ticks, resultId);
	}

};

