#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CommandsExtensions
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CommandsExtensions"));
	}


	template <typename T = int16_t> static T Value(Commands* command) {
		return ((T (*)(void *, Commands*))(Il2CppBase() + 0xE292C4))(0, command);
	}

};

