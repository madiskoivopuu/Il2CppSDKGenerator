#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ChatContactContentView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChatContactContentView"));
	}


	template <typename T = void> T AddView(uintptr_t view) {
		return ((T (*)(ChatContactContentView*, uintptr_t))(Il2CppBase() + 0x13F182C))(this, view);
	}

};

}
