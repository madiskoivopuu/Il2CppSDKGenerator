#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IChatContexts
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IChatContexts"));
	}


	template <typename R = ChatContext*> R get_chat() {
		return ((R (*)(IChatContexts*))(Il2CppBase() + 0x0))(this);
	}

};

