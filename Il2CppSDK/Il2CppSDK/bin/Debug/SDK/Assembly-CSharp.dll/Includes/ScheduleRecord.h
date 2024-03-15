#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ScheduleRecord
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ScheduleRecord"));
	}

	template <typename R = float> R& StartTime() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = float> R& EndTime() {
		return *(R*)((uintptr_t)this + 0x4);
	}
	template <typename R = Il2CppString*> R& ActorMagic() {
		return *(R*)((uintptr_t)this + 0x8);
	}


};

