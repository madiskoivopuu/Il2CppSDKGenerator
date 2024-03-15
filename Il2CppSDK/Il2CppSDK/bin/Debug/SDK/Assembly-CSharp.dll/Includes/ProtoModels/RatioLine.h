#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class RatioLine
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "RatioLine"));
	}

	 static MessageParser1ProtoModels::RatioLine*>*& _parser() {
		return *(MessageParser1ProtoModels::RatioLine*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& PositionFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& position_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& PreviousPositionFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& previousPosition_() {
		return *(R*)((uintptr_t)this + 0x14);
	}
	template <typename R = int32_t> static R& PlayerIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& playerID_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& ClanIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& clanID_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& PlayerNameFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& playerName_() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> static R& ClanNameFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& clanName_() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = int32_t> static R& LevelFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& level_() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = int32_t> static R& RegionFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& region_() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = int32_t> static R& RatioFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& ratio_() {
		return *(R*)((uintptr_t)this + 0x48);
	}

	 static MessageParser1ProtoModels::RatioLine*>* get_Parser() {
		return ((MessageParser1ProtoModels::RatioLine*>* (*)(void *))(Il2CppBase() + 0x138AEFC))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x138AF60))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(RatioLine*))(Il2CppBase() + 0x138B080))(this);
	}
	template <typename R = ProtoModels::RatioLine*> R Clone() {
		return ((R (*)(RatioLine*))(Il2CppBase() + 0x138B1E0))(this);
	}
	template <typename R = int32_t> R get_Position() {
		return ((R (*)(RatioLine*))(Il2CppBase() + 0x138B23C))(this);
	}
	template <typename R = void> R set_Position(int32_t value) {
		return ((R (*)(RatioLine*, int32_t))(Il2CppBase() + 0x138B244))(this, value);
	}
	template <typename R = int32_t> R get_PreviousPosition() {
		return ((R (*)(RatioLine*))(Il2CppBase() + 0x138B24C))(this);
	}
	template <typename R = void> R set_PreviousPosition(int32_t value) {
		return ((R (*)(RatioLine*, int32_t))(Il2CppBase() + 0x138B254))(this, value);
	}
	template <typename R = int64_t> R get_PlayerID() {
		return ((R (*)(RatioLine*))(Il2CppBase() + 0x138B25C))(this);
	}
	template <typename R = void> R set_PlayerID(int64_t value) {
		return ((R (*)(RatioLine*, int64_t))(Il2CppBase() + 0x138B264))(this, value);
	}
	template <typename R = int64_t> R get_ClanID() {
		return ((R (*)(RatioLine*))(Il2CppBase() + 0x138B26C))(this);
	}
	template <typename R = void> R set_ClanID(int64_t value) {
		return ((R (*)(RatioLine*, int64_t))(Il2CppBase() + 0x138B274))(this, value);
	}
	template <typename R = Il2CppString*> R get_PlayerName() {
		return ((R (*)(RatioLine*))(Il2CppBase() + 0x138B27C))(this);
	}
	template <typename R = void> R set_PlayerName(Il2CppString* value) {
		return ((R (*)(RatioLine*, Il2CppString*))(Il2CppBase() + 0x138B284))(this, value);
	}
	template <typename R = Il2CppString*> R get_ClanName() {
		return ((R (*)(RatioLine*))(Il2CppBase() + 0x138B304))(this);
	}
	template <typename R = void> R set_ClanName(Il2CppString* value) {
		return ((R (*)(RatioLine*, Il2CppString*))(Il2CppBase() + 0x138B30C))(this, value);
	}
	template <typename R = int32_t> R get_Level() {
		return ((R (*)(RatioLine*))(Il2CppBase() + 0x138B38C))(this);
	}
	template <typename R = void> R set_Level(int32_t value) {
		return ((R (*)(RatioLine*, int32_t))(Il2CppBase() + 0x138B394))(this, value);
	}
	template <typename R = Il2CppString*> R get_Region() {
		return ((R (*)(RatioLine*))(Il2CppBase() + 0x138B39C))(this);
	}
	template <typename R = void> R set_Region(Il2CppString* value) {
		return ((R (*)(RatioLine*, Il2CppString*))(Il2CppBase() + 0x138B3A4))(this, value);
	}
	template <typename R = int32_t> R get_Ratio() {
		return ((R (*)(RatioLine*))(Il2CppBase() + 0x138B424))(this);
	}
	template <typename R = void> R set_Ratio(int32_t value) {
		return ((R (*)(RatioLine*, int32_t))(Il2CppBase() + 0x138B42C))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(RatioLine*, Il2CppObject*))(Il2CppBase() + 0x138B434))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::RatioLine* other) {
		return ((R (*)(RatioLine*, ProtoModels::RatioLine*))(Il2CppBase() + 0x138B4A4))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(RatioLine*))(Il2CppBase() + 0x138B57C))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(RatioLine*))(Il2CppBase() + 0x138B6C0))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(RatioLine*, uintptr_t))(Il2CppBase() + 0x138B724))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(RatioLine*))(Il2CppBase() + 0x138B8F4))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::RatioLine* other) {
		return ((R (*)(RatioLine*, ProtoModels::RatioLine*))(Il2CppBase() + 0x138BB70))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(RatioLine*, uintptr_t))(Il2CppBase() + 0x138BC28))(this, input);
	}

};

}
