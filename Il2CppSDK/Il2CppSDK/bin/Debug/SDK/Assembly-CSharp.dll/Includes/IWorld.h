#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IWorld
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IWorld"));
	}


	template <typename R = int64_t> R get_WorldId() {
		return ((R (*)(IWorld*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = Il2CppString*> R get_WorldName() {
		return ((R (*)(IWorld*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = uintptr_t> R get_Systems() {
		return ((R (*)(IWorld*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = ICommonLogger*> R get_Logger() {
		return ((R (*)(IWorld*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = ITimeManager*> R get_TimeManager() {
		return ((R (*)(IWorld*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = IRandomManager*> R get_RandomManager() {
		return ((R (*)(IWorld*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = IIdManager*> R get_IdManager() {
		return ((R (*)(IWorld*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R Initialize() {
		return ((R (*)(IWorld*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R Execute() {
		return ((R (*)(IWorld*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R Destroy() {
		return ((R (*)(IWorld*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R TryCleanMemory() {
		return ((R (*)(IWorld*))(Il2CppBase() + 0x0))(this);
	}

};

