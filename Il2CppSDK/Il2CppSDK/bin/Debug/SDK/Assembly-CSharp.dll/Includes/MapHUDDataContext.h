#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "DataContext.h" 

class MapHUDDataContext : public DataContext<MapHUDDataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MapHUDDataContext"));
	}


	template <typename T = UIWindowType*> T get_WindowType() {
		return ((T (*)(MapHUDDataContext*))(Il2CppBase() + 0x1166DB8))(this);
	}

};

