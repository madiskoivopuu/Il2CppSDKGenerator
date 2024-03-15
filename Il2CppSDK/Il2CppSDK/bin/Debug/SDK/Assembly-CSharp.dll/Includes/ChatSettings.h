#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ChatSettings
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChatSettings"));
	}

	template <typename R = Il2CppString*> static R& MatrixLicence() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

