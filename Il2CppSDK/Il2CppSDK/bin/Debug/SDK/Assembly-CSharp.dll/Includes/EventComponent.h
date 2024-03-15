#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EventComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EventComponent"));
	}


	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(EventComponent*, Il2CppObject*))(Il2CppBase() + 0x137F628))(this, target);
	}

};

