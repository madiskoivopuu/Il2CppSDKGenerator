#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IEventContexts
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IEventContexts"));
	}


	template <typename T = EventContext*> T get_events() {
		return ((T (*)(IEventContexts*))(Il2CppBase() + 0x0))(this);
	}

};

