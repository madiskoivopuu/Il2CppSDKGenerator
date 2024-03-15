#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InputTickComparer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InputTickComparer"));
	}


	template <typename R = int32_t> R Compare(InputEntity* x, InputEntity* y) {
		return ((R (*)(InputTickComparer*, InputEntity*, InputEntity*))(Il2CppBase() + 0x111D05C))(this, x, y);
	}

};

