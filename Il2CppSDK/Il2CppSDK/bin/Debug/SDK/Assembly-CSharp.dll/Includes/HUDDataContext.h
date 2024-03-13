#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "DataContext.h" 

class HUDDataContext : public DataContext<HUDDataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDDataContext"));
	}


	template <typename T = UIWindowType*> T get_WindowType() {
		return ((T (*)(HUDDataContext*))(Il2CppBase() + 0xEA8840))(this);
	}

};

