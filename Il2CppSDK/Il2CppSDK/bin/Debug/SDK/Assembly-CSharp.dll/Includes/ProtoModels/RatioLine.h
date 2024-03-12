#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class RatioLine
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "RatioLine"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& PositionFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& position_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& PreviousPositionFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& previousPosition_() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> static T& PlayerIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& playerID_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& ClanIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& clanID_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& PlayerNameFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& playerName_() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> static T& ClanNameFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& clanName_() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> static T& LevelFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& level_() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> static T& RegionFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& region_() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> static T& RatioFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& ratio_() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x138AEFC))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x138AF60))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(RatioLine*))(Il2CppBase() + 0x138B080))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(RatioLine*))(Il2CppBase() + 0x138B1E0))(this);
	}
	template <typename T = int32_t> T get_Position() {
		return ((T (*)(RatioLine*))(Il2CppBase() + 0x138B23C))(this);
	}
	template <typename T = void> T set_Position(int32_t value) {
		return ((T (*)(RatioLine*, int32_t))(Il2CppBase() + 0x138B244))(this, value);
	}
	template <typename T = int32_t> T get_PreviousPosition() {
		return ((T (*)(RatioLine*))(Il2CppBase() + 0x138B24C))(this);
	}
	template <typename T = void> T set_PreviousPosition(int32_t value) {
		return ((T (*)(RatioLine*, int32_t))(Il2CppBase() + 0x138B254))(this, value);
	}
	template <typename T = int64_t> T get_PlayerID() {
		return ((T (*)(RatioLine*))(Il2CppBase() + 0x138B25C))(this);
	}
	template <typename T = void> T set_PlayerID(int64_t value) {
		return ((T (*)(RatioLine*, int64_t))(Il2CppBase() + 0x138B264))(this, value);
	}
	template <typename T = int64_t> T get_ClanID() {
		return ((T (*)(RatioLine*))(Il2CppBase() + 0x138B26C))(this);
	}
	template <typename T = void> T set_ClanID(int64_t value) {
		return ((T (*)(RatioLine*, int64_t))(Il2CppBase() + 0x138B274))(this, value);
	}
	template <typename T = Il2CppString*> T get_PlayerName() {
		return ((T (*)(RatioLine*))(Il2CppBase() + 0x138B27C))(this);
	}
	template <typename T = void> T set_PlayerName(Il2CppString* value) {
		return ((T (*)(RatioLine*, Il2CppString*))(Il2CppBase() + 0x138B284))(this, value);
	}
	template <typename T = Il2CppString*> T get_ClanName() {
		return ((T (*)(RatioLine*))(Il2CppBase() + 0x138B304))(this);
	}
	template <typename T = void> T set_ClanName(Il2CppString* value) {
		return ((T (*)(RatioLine*, Il2CppString*))(Il2CppBase() + 0x138B30C))(this, value);
	}
	template <typename T = int32_t> T get_Level() {
		return ((T (*)(RatioLine*))(Il2CppBase() + 0x138B38C))(this);
	}
	template <typename T = void> T set_Level(int32_t value) {
		return ((T (*)(RatioLine*, int32_t))(Il2CppBase() + 0x138B394))(this, value);
	}
	template <typename T = Il2CppString*> T get_Region() {
		return ((T (*)(RatioLine*))(Il2CppBase() + 0x138B39C))(this);
	}
	template <typename T = void> T set_Region(Il2CppString* value) {
		return ((T (*)(RatioLine*, Il2CppString*))(Il2CppBase() + 0x138B3A4))(this, value);
	}
	template <typename T = int32_t> T get_Ratio() {
		return ((T (*)(RatioLine*))(Il2CppBase() + 0x138B424))(this);
	}
	template <typename T = void> T set_Ratio(int32_t value) {
		return ((T (*)(RatioLine*, int32_t))(Il2CppBase() + 0x138B42C))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(RatioLine*, uintptr_t))(Il2CppBase() + 0x138B434))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(RatioLine*, uintptr_t))(Il2CppBase() + 0x138B4A4))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(RatioLine*))(Il2CppBase() + 0x138B57C))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(RatioLine*))(Il2CppBase() + 0x138B6C0))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(RatioLine*, uintptr_t))(Il2CppBase() + 0x138B724))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(RatioLine*))(Il2CppBase() + 0x138B8F4))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(RatioLine*, uintptr_t))(Il2CppBase() + 0x138BB70))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(RatioLine*, uintptr_t))(Il2CppBase() + 0x138BC28))(this, input);
	}

};

}
