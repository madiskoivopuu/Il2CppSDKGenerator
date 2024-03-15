#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BuilderWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BuilderWindowHelper"));
	}


	template <typename R = BuilderWindow*> static R ShowBuilder(UIWindowsManager* manager) {
		return ((R (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x15B0B60))(0, manager);
	}
	template <typename R = void> static R CloseBuilder(UIWindowsManager* manager) {
		return ((R (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x15B0CA0))(0, manager);
	}
	template <typename R = bool> static R IsBuilderOpen(UIWindowsManager* manager) {
		return ((R (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x15B0D40))(0, manager);
	}
	template <typename R = BuilderWindow*> static R GetBuilder(UIWindowsManager* manager) {
		return ((R (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x15B0E1C))(0, manager);
	}
	template <typename R = void> static R UpdateBuilder(UIWindowsManager* manager) {
		return ((R (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x15B0EB4))(0, manager);
	}
	template <typename R = void> static R UpdateBuildResult(UIWindowsManager* manager, int64_t ticks, int32_t resultId) {
		return ((R (*)(void *, UIWindowsManager*, int64_t, int32_t))(Il2CppBase() + 0x15B0EE0))(0, manager, ticks, resultId);
	}

};

