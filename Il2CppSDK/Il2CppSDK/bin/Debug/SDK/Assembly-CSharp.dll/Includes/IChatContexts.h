#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IChatContexts
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IChatContexts"));
	}


	template <typename T = ChatContext*> T get_chat() {
		return ((T (*)(IChatContexts*))(Il2CppBase() + 0x0))(this);
	}

};

