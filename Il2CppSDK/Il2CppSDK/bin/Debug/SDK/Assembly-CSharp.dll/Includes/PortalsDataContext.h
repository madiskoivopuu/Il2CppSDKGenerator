#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PortalsDataContext : public DataContext
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PortalsDataContext"));
	}


	template <typename R = UIWindowType> R get_WindowType() {
		return ((R (*)(PortalsDataContext*))(Il2CppBase() + 0x10BAE44))(this);
	}

};

