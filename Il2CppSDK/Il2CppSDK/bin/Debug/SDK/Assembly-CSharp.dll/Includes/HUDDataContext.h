#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HUDDataContext : public DataContext<HUDDataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDDataContext"));
	}


	template <typename R = UIWindowType*> R get_WindowType() {
		return ((R (*)(HUDDataContext*))(Il2CppBase() + 0xEA8840))(this);
	}

};

