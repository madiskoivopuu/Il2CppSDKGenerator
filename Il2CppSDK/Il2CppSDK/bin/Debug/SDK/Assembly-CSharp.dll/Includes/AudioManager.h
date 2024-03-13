#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AudioManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AudioManager"));
	}

	template <typename T = uintptr_t> T& mixer() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& _initialized() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& loggingEnabled() {
		return *(T*)((uintptr_t)this + 0x21);
	}
	template <typename T = uintptr_t> T& musicSource() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = AudioManager*> static T& _instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, AudioTheme*>*> T& themes() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppList<LoopSoundContainer*>*> T& loopSounds() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = AudioTheme*> T& currentTheme() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = AudioTrack*> T& currentTrack() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& soundSources() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppList<KeyValuePair2uintptr_t, float>*>*> T& fadingSoundSources() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& lastAudioSourceIndex() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = bool> T& musicFadingOut() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = bool> T& musicFadingIn() {
		return *(T*)((uintptr_t)this + 0x65);
	}
	template <typename T = Il2CppString*> T& currentMainTheme() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = bool> T& playingMainMusicTheme() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Parameters*> T& defaultParameters() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppString*> T& currentSnapshot() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& _listener() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& sounds() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uint32_t> T& keyCounter() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = Il2CppDictionary<uint32_t, int32_t>*> T& activeSounds() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = Il2CppList<LoopSoundContainer*>*> T& _loopsToPlay() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = Il2CppList<LoopSoundContainer*>*> T& _loopsToRemove() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = int32_t> static T& LoopsToPlay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = LoopSoundContainer*> T& MaxDistanceLoop() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = LoopSoundComparer*> T& _loopSoundComparer() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = bool> T& AllThemesPreloaded() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& audioMixerGroups() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& ambientSources() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, AmbientSource*>*> T& currentAmbientSources() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, AmbientSource*>*> T& fadingInAmbientSources() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, AmbientSource*>*> T& fadingOutAmbientSources() {
		return *(T*)((uintptr_t)this + 0x120);
	}

	template <typename T = Il2CppString*> T get_CurrentMainTheme() {
		return ((T (*)(AudioManager*))(Il2CppBase() + 0x1A5D14C))(this);
	}
	template <typename T = uintptr_t> T get_Listener() {
		return ((T (*)(AudioManager*))(Il2CppBase() + 0x1A5D154))(this);
	}
	template <typename T = AudioManager*> static T get_Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A5BA34))(0);
	}
	template <typename T = AudioManager*> static T get_FastInstance() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A5D248))(0);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(AudioManager*))(Il2CppBase() + 0x1A5D294))(this);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(AudioManager*))(Il2CppBase() + 0x1A5D7FC))(this);
	}
	template <typename T = void> T SetMainTheme(Il2CppString* themeId) {
		return ((T (*)(AudioManager*, Il2CppString*))(Il2CppBase() + 0x1A5E8D0))(this, themeId);
	}
	template <typename T = void> T PlayNextTrack() {
		return ((T (*)(AudioManager*))(Il2CppBase() + 0x1A5EA54))(this);
	}
	template <typename T = void> T UpdateMusic() {
		return ((T (*)(AudioManager*))(Il2CppBase() + 0x1A5D83C))(this);
	}
	template <typename T = void> T UpdateSound() {
		return ((T (*)(AudioManager*))(Il2CppBase() + 0x1A5DAC0))(this);
	}
	template <typename T = void> T UpdateFading() {
		return ((T (*)(AudioManager*))(Il2CppBase() + 0x1A5DE1C))(this);
	}
	template <typename T = void> T Init(float preloadTimeLimit) {
		return ((T (*)(AudioManager*, float))(Il2CppBase() + 0x1A5D53C))(this, preloadTimeLimit);
	}
	template <typename T = bool> T get_AllThemesPreloaded() {
		return ((T (*)(AudioManager*))(Il2CppBase() + 0x1A6017C))(this);
	}
	template <typename T = void> T set_AllThemesPreloaded(bool value) {
		return ((T (*)(AudioManager*, bool))(Il2CppBase() + 0x1A60184))(this, value);
	}
	template <typename T = uintptr_t> T PreloadThemes(float preloadTimeLimit) {
		return ((T (*)(AudioManager*, float))(Il2CppBase() + 0x1A5FD78))(this, preloadTimeLimit);
	}
	template <typename T = float> static T ToDecibel(float value) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x1A60190))(0, value);
	}
	template <typename T = void> T OnMusicSettingsChange(Il2CppObject* sender, float value) {
		return ((T (*)(AudioManager*, Il2CppObject*, float))(Il2CppBase() + 0x1A601B8))(this, sender, value);
	}
	template <typename T = void> T OnSoundSettingsChange(Il2CppObject* sender, float value) {
		return ((T (*)(AudioManager*, Il2CppObject*, float))(Il2CppBase() + 0x1A60240))(this, sender, value);
	}
	template <typename T = void> T CreateSoundPool() {
		return ((T (*)(AudioManager*))(Il2CppBase() + 0x1A5FE00))(this);
	}
	template <typename T = LoopSoundContainer*> T LoopSound(Il2CppString* sound, uintptr_t parentTransform, Il2CppString* tag) {
		return ((T (*)(AudioManager*, Il2CppString*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1A5C238))(this, sound, parentTransform, tag);
	}
	template <typename T = bool> T StopLoop(GameEntity* entity) {
		return ((T (*)(AudioManager*, GameEntity*))(Il2CppBase() + 0x1A5C6B8))(this, entity);
	}
	template <typename T = bool> T StopLoop_1(LoopSoundContainer* loopSound) {
		return ((T (*)(AudioManager*, LoopSoundContainer*))(Il2CppBase() + 0x1A5C344))(this, loopSound);
	}
	template <typename T = void> T StopAllSounds() {
		return ((T (*)(AudioManager*))(Il2CppBase() + 0x1A60318))(this);
	}
	template <typename T = void> T PauseAllSounds() {
		return ((T (*)(AudioManager*))(Il2CppBase() + 0x1A603DC))(this);
	}
	template <typename T = void> T ResumeAllSounds() {
		return ((T (*)(AudioManager*))(Il2CppBase() + 0x1A6047C))(this);
	}
	template <typename T = uintptr_t> T GetAudioMixerGroup(Il2CppString* name) {
		return ((T (*)(AudioManager*, Il2CppString*))(Il2CppBase() + 0x1A6051C))(this, name);
	}
	template <typename T = uintptr_t> T SetupAudioSource(uintptr_t audioSource, Il2CppString* sound, bool playOnAwake, bool renameGO) {
		return ((T (*)(AudioManager*, uintptr_t, Il2CppString*, bool, bool))(Il2CppBase() + 0x1A5EEC0))(this, audioSource, sound, playOnAwake, renameGO);
	}
	template <typename T = void> T PlaySound(Il2CppString* sound, Il2CppString* tag) {
		return ((T (*)(AudioManager*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1A5BB0C))(this, sound, tag);
	}
	template <typename T = float> T PlaySound_1(Il2CppString* sound, uintptr_t position, Il2CppString* tag) {
		return ((T (*)(AudioManager*, Il2CppString*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1A5C094))(this, sound, position, tag);
	}
	template <typename T = bool> T ExistInFadingSoundSources(uintptr_t audioSource) {
		return ((T (*)(AudioManager*, uintptr_t))(Il2CppBase() + 0x1A609B8))(this, audioSource);
	}
	template <typename T = float> T PlaySound_2(Il2CppString* sound, uintptr_t position, Il2CppString* tag, uintptr_t* id) {
		return ((T (*)(AudioManager*, Il2CppString*, uintptr_t, Il2CppString*, uintptr_t*))(Il2CppBase() + 0x1A608A8))(this, sound, position, tag, id);
	}
	template <typename T = float> T PlaySound_3(Il2CppString* sound, uintptr_t position, uintptr_t* id) {
		return ((T (*)(AudioManager*, Il2CppString*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x1A5F2C4))(this, sound, position, id);
	}
	template <typename T = void> T StopSound(uint32_t id) {
		return ((T (*)(AudioManager*, uint32_t))(Il2CppBase() + 0x1A5FA28))(this, id);
	}
	template <typename T = bool> T IsPlaying(uint32_t id) {
		return ((T (*)(AudioManager*, uint32_t))(Il2CppBase() + 0x1A5F1C0))(this, id);
	}
	template <typename T = void> T UpdateSoundPosition(uintptr_t position, uint32_t id) {
		return ((T (*)(AudioManager*, uintptr_t, uint32_t))(Il2CppBase() + 0x1A5F908))(this, position, id);
	}
	template <typename T = uintptr_t> T GetAudioClip(Il2CppString* trackName) {
		return ((T (*)(AudioManager*, Il2CppString*))(Il2CppBase() + 0x1A5ED68))(this, trackName);
	}
	template <typename T = uintptr_t> T GetAudioClipFromAssetBundles(Il2CppString* trackName) {
		return ((T (*)(AudioManager*, Il2CppString*))(Il2CppBase() + 0x1A60AB8))(this, trackName);
	}
	template <typename T = uintptr_t> T GetAudioClipFromStreamingAssets(Il2CppString* trackName) {
		return ((T (*)(AudioManager*, Il2CppString*))(Il2CppBase() + 0x1A60C24))(this, trackName);
	}
	template <typename T = void> T TransitionToSnapshots(Il2CppString* name) {
		return ((T (*)(AudioManager*, Il2CppString*))(Il2CppBase() + 0x1A60C2C))(this, name);
	}
	template <typename T = void> T TransitionToSnapshots_1(Il2CppString* name, float time) {
		return ((T (*)(AudioManager*, Il2CppString*, float))(Il2CppBase() + 0x1A60C34))(this, name, time);
	}
	template <typename T = void> T AddAmbientThemes(IEnumerable1Il2CppString*>* themeNames) {
		return ((T (*)(AudioManager*, IEnumerable1Il2CppString*>*))(Il2CppBase() + 0x1A60D90))(this, themeNames);
	}
	template <typename T = void> T RemoveAmbientThemes(IEnumerable1Il2CppString*>* themeNames) {
		return ((T (*)(AudioManager*, IEnumerable1Il2CppString*>*))(Il2CppBase() + 0x1A61420))(this, themeNames);
	}
	template <typename T = void> T UpdateAmbient() {
		return ((T (*)(AudioManager*))(Il2CppBase() + 0x1A5DF80))(this);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(AudioManager*))(Il2CppBase() + 0x1A618C0))(this);
	}

};

