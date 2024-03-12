#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IMailContexts
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IMailContexts"));
	}


	template <typename T = uintptr_t> T get_mail() {
		return ((T (*)(IMailContexts*))(Il2CppBase() + 0x0))(this);
	}

};

}
