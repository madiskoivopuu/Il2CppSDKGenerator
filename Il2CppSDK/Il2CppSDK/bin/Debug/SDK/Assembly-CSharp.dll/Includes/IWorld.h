#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IWorld
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IWorld"));
	}


	template <typename T = int64_t> T get_WorldId() {
		return ((T (*)(IWorld*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T get_WorldName() {
		return ((T (*)(IWorld*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_Systems() {
		return ((T (*)(IWorld*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = ICommonLogger*> T get_Logger() {
		return ((T (*)(IWorld*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = ITimeManager*> T get_TimeManager() {
		return ((T (*)(IWorld*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = IRandomManager*> T get_RandomManager() {
		return ((T (*)(IWorld*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = IIdManager*> T get_IdManager() {
		return ((T (*)(IWorld*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Initialize() {
		return ((T (*)(IWorld*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Execute() {
		return ((T (*)(IWorld*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Destroy() {
		return ((T (*)(IWorld*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T TryCleanMemory() {
		return ((T (*)(IWorld*))(Il2CppBase() + 0x0))(this);
	}

};

