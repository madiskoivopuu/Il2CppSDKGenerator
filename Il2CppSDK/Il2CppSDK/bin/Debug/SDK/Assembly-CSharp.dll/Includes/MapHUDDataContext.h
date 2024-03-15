#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MapHUDDataContext : public DataContext<MapHUDDataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MapHUDDataContext"));
	}


	template <typename R = UIWindowType> R get_WindowType() {
		return ((R (*)(MapHUDDataContext*))(Il2CppBase() + 0x1166DB8))(this);
	}

};

