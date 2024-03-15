#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IEventContexts
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IEventContexts"));
	}


	template <typename R = EventContext*> R get_events() {
		return ((R (*)(IEventContexts*))(Il2CppBase() + 0x0))(this);
	}

};

