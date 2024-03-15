#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ServerViewComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ServerViewComponent"));
	}

	template <typename R = ServerView*> R& View() {
		return *(R*)((uintptr_t)this + 0x10);
	}


};

